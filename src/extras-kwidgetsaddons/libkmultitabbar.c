#include "../libqabstractbutton.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqfont.hpp"
#include "../libqicon.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqpushbutton.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkmultitabbar.hpp"
#include "libkmultitabbar.h"

KMultiTabBar* k_multitabbar_new(void* parent) {
    return KMultiTabBar_new((QWidget*)parent);
}

KMultiTabBar* k_multitabbar_new2() {
    return KMultiTabBar_new2();
}

KMultiTabBar* k_multitabbar_new3(int32_t pos) {
    return KMultiTabBar_new3(pos);
}

KMultiTabBar* k_multitabbar_new4(int32_t pos, void* parent) {
    return KMultiTabBar_new4(pos, (QWidget*)parent);
}

const QMetaObject* k_multitabbar_meta_object(void* self) {
    return KMultiTabBar_MetaObject((KMultiTabBar*)self);
}

void* k_multitabbar_metacast(void* self, const char* param1) {
    return KMultiTabBar_Metacast((KMultiTabBar*)self, param1);
}

int32_t k_multitabbar_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KMultiTabBar_Metacall((KMultiTabBar*)self, param1, param2, param3);
}

void k_multitabbar_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KMultiTabBar_OnMetacall((KMultiTabBar*)self, (intptr_t)callback);
}

int32_t k_multitabbar_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KMultiTabBar_QBaseMetacall((KMultiTabBar*)self, param1, param2, param3);
}

const char* k_multitabbar_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_multitabbar_append_button(void* self, void* icon) {
    return KMultiTabBar_AppendButton((KMultiTabBar*)self, (QIcon*)icon);
}

void k_multitabbar_remove_button(void* self, int id) {
    KMultiTabBar_RemoveButton((KMultiTabBar*)self, id);
}

int32_t k_multitabbar_append_tab(void* self, void* icon) {
    return KMultiTabBar_AppendTab((KMultiTabBar*)self, (QIcon*)icon);
}

void k_multitabbar_remove_tab(void* self, int id) {
    KMultiTabBar_RemoveTab((KMultiTabBar*)self, id);
}

void k_multitabbar_set_tab(void* self, int id, bool state) {
    KMultiTabBar_SetTab((KMultiTabBar*)self, id, state);
}

bool k_multitabbar_is_tab_raised(void* self, int id) {
    return KMultiTabBar_IsTabRaised((KMultiTabBar*)self, id);
}

KMultiTabBarButton* k_multitabbar_button(void* self, int id) {
    return KMultiTabBar_Button((KMultiTabBar*)self, id);
}

KMultiTabBarTab* k_multitabbar_tab(void* self, int id) {
    return KMultiTabBar_Tab((KMultiTabBar*)self, id);
}

void k_multitabbar_set_position(void* self, int32_t pos) {
    KMultiTabBar_SetPosition((KMultiTabBar*)self, pos);
}

int32_t k_multitabbar_position(void* self) {
    return KMultiTabBar_Position((KMultiTabBar*)self);
}

void k_multitabbar_set_style(void* self, int32_t style) {
    KMultiTabBar_SetStyle((KMultiTabBar*)self, style);
}

int32_t k_multitabbar_tab_style(void* self) {
    return KMultiTabBar_TabStyle((KMultiTabBar*)self);
}

void k_multitabbar_font_change(void* self, void* param1) {
    KMultiTabBar_FontChange((KMultiTabBar*)self, (QFont*)param1);
}

void k_multitabbar_on_font_change(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnFontChange((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_qbase_font_change(void* self, void* param1) {
    KMultiTabBar_QBaseFontChange((KMultiTabBar*)self, (QFont*)param1);
}

void k_multitabbar_paint_event(void* self, void* param1) {
    KMultiTabBar_PaintEvent((KMultiTabBar*)self, (QPaintEvent*)param1);
}

void k_multitabbar_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnPaintEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_qbase_paint_event(void* self, void* param1) {
    KMultiTabBar_QBasePaintEvent((KMultiTabBar*)self, (QPaintEvent*)param1);
}

void k_multitabbar_update_separator(void* self) {
    KMultiTabBar_UpdateSeparator((KMultiTabBar*)self);
}

void k_multitabbar_on_update_separator(void* self, void (*callback)()) {
    KMultiTabBar_OnUpdateSeparator((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_qbase_update_separator(void* self) {
    KMultiTabBar_QBaseUpdateSeparator((KMultiTabBar*)self);
}

const char* k_multitabbar_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_multitabbar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_multitabbar_append_button2(void* self, void* icon, int id) {
    return KMultiTabBar_AppendButton2((KMultiTabBar*)self, (QIcon*)icon, id);
}

int32_t k_multitabbar_append_button3(void* self, void* icon, int id, void* popup) {
    return KMultiTabBar_AppendButton3((KMultiTabBar*)self, (QIcon*)icon, id, (QMenu*)popup);
}

int32_t k_multitabbar_append_button4(void* self, void* icon, int id, void* popup, const char* not_used_yet) {
    return KMultiTabBar_AppendButton4((KMultiTabBar*)self, (QIcon*)icon, id, (QMenu*)popup, qstring(not_used_yet));
}

int32_t k_multitabbar_append_tab2(void* self, void* icon, int id) {
    return KMultiTabBar_AppendTab2((KMultiTabBar*)self, (QIcon*)icon, id);
}

int32_t k_multitabbar_append_tab3(void* self, void* icon, int id, const char* text) {
    return KMultiTabBar_AppendTab3((KMultiTabBar*)self, (QIcon*)icon, id, qstring(text));
}

uintptr_t k_multitabbar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_multitabbar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_multitabbar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_multitabbar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_multitabbar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

bool k_multitabbar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_multitabbar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_multitabbar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_multitabbar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_multitabbar_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_multitabbar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_multitabbar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_multitabbar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_multitabbar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_multitabbar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_multitabbar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_multitabbar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_multitabbar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_multitabbar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_multitabbar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_multitabbar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_multitabbar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_multitabbar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_multitabbar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_multitabbar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_multitabbar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_multitabbar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_multitabbar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_multitabbar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_multitabbar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_multitabbar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_multitabbar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_multitabbar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_multitabbar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_multitabbar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_multitabbar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_multitabbar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_multitabbar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_multitabbar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_multitabbar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_multitabbar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_multitabbar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_multitabbar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_multitabbar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_multitabbar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_multitabbar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_multitabbar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_multitabbar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_multitabbar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_multitabbar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_multitabbar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_multitabbar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_multitabbar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_multitabbar_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_multitabbar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_multitabbar_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_multitabbar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_multitabbar_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_multitabbar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_multitabbar_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_multitabbar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_multitabbar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_multitabbar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_multitabbar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_multitabbar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_multitabbar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_multitabbar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_multitabbar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_multitabbar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_multitabbar_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_multitabbar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_multitabbar_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_multitabbar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_multitabbar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_multitabbar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_multitabbar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_multitabbar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_multitabbar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_multitabbar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_multitabbar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_multitabbar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_multitabbar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_multitabbar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_multitabbar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_multitabbar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_multitabbar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_multitabbar_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_multitabbar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_multitabbar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_multitabbar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_multitabbar_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_multitabbar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_multitabbar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_multitabbar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_multitabbar_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_multitabbar_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_multitabbar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_multitabbar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_multitabbar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_multitabbar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_multitabbar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_multitabbar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_multitabbar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_multitabbar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_multitabbar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_multitabbar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_multitabbar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_multitabbar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_multitabbar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_multitabbar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_multitabbar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_multitabbar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_multitabbar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_multitabbar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_multitabbar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_multitabbar_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_multitabbar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_multitabbar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_multitabbar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_multitabbar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_multitabbar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_multitabbar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_multitabbar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_multitabbar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_multitabbar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_multitabbar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_multitabbar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_multitabbar_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_multitabbar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_multitabbar_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_multitabbar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_multitabbar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_multitabbar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_multitabbar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_multitabbar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_multitabbar_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_multitabbar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_multitabbar_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_multitabbar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_multitabbar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_multitabbar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_multitabbar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_multitabbar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_multitabbar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_multitabbar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_multitabbar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_multitabbar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_multitabbar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_multitabbar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_multitabbar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_multitabbar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_multitabbar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_multitabbar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_multitabbar_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_multitabbar_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_multitabbar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_multitabbar_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_multitabbar_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_multitabbar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_multitabbar_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_multitabbar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_multitabbar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_multitabbar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_multitabbar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_multitabbar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_multitabbar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_multitabbar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_multitabbar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_multitabbar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_multitabbar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_multitabbar_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_multitabbar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_multitabbar_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_multitabbar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_multitabbar_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_multitabbar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_multitabbar_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_multitabbar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_multitabbar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_multitabbar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_multitabbar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_multitabbar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_multitabbar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_multitabbar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_multitabbar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_multitabbar_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_multitabbar_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_multitabbar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_multitabbar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_multitabbar_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_multitabbar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_multitabbar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_multitabbar_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_multitabbar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_multitabbar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_multitabbar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_multitabbar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_multitabbar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_multitabbar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_multitabbar_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_multitabbar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_multitabbar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_multitabbar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_multitabbar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_multitabbar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_multitabbar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_multitabbar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_multitabbar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_multitabbar_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_multitabbar_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_multitabbar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_multitabbar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_multitabbar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_multitabbar_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_multitabbar_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_multitabbar_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_multitabbar_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_multitabbar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_multitabbar_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_multitabbar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_multitabbar_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_multitabbar_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_multitabbar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_multitabbar_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_multitabbar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_multitabbar_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_multitabbar_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_multitabbar_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_multitabbar_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_multitabbar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_multitabbar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_multitabbar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_multitabbar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_multitabbar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_multitabbar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_multitabbar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_multitabbar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_multitabbar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_multitabbar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_multitabbar_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_multitabbar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_multitabbar_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_multitabbar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_multitabbar_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_multitabbar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_multitabbar_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_multitabbar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_multitabbar_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_multitabbar_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_multitabbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_multitabbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_multitabbar_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_multitabbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_multitabbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_multitabbar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_multitabbar_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_multitabbar_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_multitabbar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_multitabbar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_multitabbar_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_multitabbar_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_multitabbar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_multitabbar_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_multitabbar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbar_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_multitabbar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_multitabbar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_multitabbar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_multitabbar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_multitabbar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_multitabbar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_multitabbar_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_multitabbar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_multitabbar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_multitabbar_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_multitabbar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_multitabbar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_multitabbar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_multitabbar_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_multitabbar_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_multitabbar_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_multitabbar_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_multitabbar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_multitabbar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_multitabbar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_multitabbar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_multitabbar_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_multitabbar_dynamic_property_names\n");
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

QBindingStorage* k_multitabbar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_multitabbar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_multitabbar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_multitabbar_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_multitabbar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_multitabbar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_multitabbar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_multitabbar_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_multitabbar_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_multitabbar_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_multitabbar_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_multitabbar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_multitabbar_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_multitabbar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_multitabbar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_multitabbar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_multitabbar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_multitabbar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_multitabbar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_multitabbar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_multitabbar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_multitabbar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_multitabbar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_multitabbar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_multitabbar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_multitabbar_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_multitabbar_dev_type(void* self) {
    return KMultiTabBar_DevType((KMultiTabBar*)self);
}

int32_t k_multitabbar_qbase_dev_type(void* self) {
    return KMultiTabBar_QBaseDevType((KMultiTabBar*)self);
}

void k_multitabbar_on_dev_type(void* self, int32_t (*callback)()) {
    KMultiTabBar_OnDevType((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_set_visible(void* self, bool visible) {
    KMultiTabBar_SetVisible((KMultiTabBar*)self, visible);
}

void k_multitabbar_qbase_set_visible(void* self, bool visible) {
    KMultiTabBar_QBaseSetVisible((KMultiTabBar*)self, visible);
}

void k_multitabbar_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KMultiTabBar_OnSetVisible((KMultiTabBar*)self, (intptr_t)callback);
}

QSize* k_multitabbar_size_hint(void* self) {
    return KMultiTabBar_SizeHint((KMultiTabBar*)self);
}

QSize* k_multitabbar_qbase_size_hint(void* self) {
    return KMultiTabBar_QBaseSizeHint((KMultiTabBar*)self);
}

void k_multitabbar_on_size_hint(void* self, QSize* (*callback)()) {
    KMultiTabBar_OnSizeHint((KMultiTabBar*)self, (intptr_t)callback);
}

QSize* k_multitabbar_minimum_size_hint(void* self) {
    return KMultiTabBar_MinimumSizeHint((KMultiTabBar*)self);
}

QSize* k_multitabbar_qbase_minimum_size_hint(void* self) {
    return KMultiTabBar_QBaseMinimumSizeHint((KMultiTabBar*)self);
}

void k_multitabbar_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KMultiTabBar_OnMinimumSizeHint((KMultiTabBar*)self, (intptr_t)callback);
}

int32_t k_multitabbar_height_for_width(void* self, int param1) {
    return KMultiTabBar_HeightForWidth((KMultiTabBar*)self, param1);
}

int32_t k_multitabbar_qbase_height_for_width(void* self, int param1) {
    return KMultiTabBar_QBaseHeightForWidth((KMultiTabBar*)self, param1);
}

void k_multitabbar_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KMultiTabBar_OnHeightForWidth((KMultiTabBar*)self, (intptr_t)callback);
}

bool k_multitabbar_has_height_for_width(void* self) {
    return KMultiTabBar_HasHeightForWidth((KMultiTabBar*)self);
}

bool k_multitabbar_qbase_has_height_for_width(void* self) {
    return KMultiTabBar_QBaseHasHeightForWidth((KMultiTabBar*)self);
}

void k_multitabbar_on_has_height_for_width(void* self, bool (*callback)()) {
    KMultiTabBar_OnHasHeightForWidth((KMultiTabBar*)self, (intptr_t)callback);
}

QPaintEngine* k_multitabbar_paint_engine(void* self) {
    return KMultiTabBar_PaintEngine((KMultiTabBar*)self);
}

QPaintEngine* k_multitabbar_qbase_paint_engine(void* self) {
    return KMultiTabBar_QBasePaintEngine((KMultiTabBar*)self);
}

void k_multitabbar_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KMultiTabBar_OnPaintEngine((KMultiTabBar*)self, (intptr_t)callback);
}

bool k_multitabbar_event(void* self, void* event) {
    return KMultiTabBar_Event((KMultiTabBar*)self, (QEvent*)event);
}

bool k_multitabbar_qbase_event(void* self, void* event) {
    return KMultiTabBar_QBaseEvent((KMultiTabBar*)self, (QEvent*)event);
}

void k_multitabbar_on_event(void* self, bool (*callback)(void*, void*)) {
    KMultiTabBar_OnEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_mouse_press_event(void* self, void* event) {
    KMultiTabBar_MousePressEvent((KMultiTabBar*)self, (QMouseEvent*)event);
}

void k_multitabbar_qbase_mouse_press_event(void* self, void* event) {
    KMultiTabBar_QBaseMousePressEvent((KMultiTabBar*)self, (QMouseEvent*)event);
}

void k_multitabbar_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnMousePressEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_mouse_release_event(void* self, void* event) {
    KMultiTabBar_MouseReleaseEvent((KMultiTabBar*)self, (QMouseEvent*)event);
}

void k_multitabbar_qbase_mouse_release_event(void* self, void* event) {
    KMultiTabBar_QBaseMouseReleaseEvent((KMultiTabBar*)self, (QMouseEvent*)event);
}

void k_multitabbar_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnMouseReleaseEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_mouse_double_click_event(void* self, void* event) {
    KMultiTabBar_MouseDoubleClickEvent((KMultiTabBar*)self, (QMouseEvent*)event);
}

void k_multitabbar_qbase_mouse_double_click_event(void* self, void* event) {
    KMultiTabBar_QBaseMouseDoubleClickEvent((KMultiTabBar*)self, (QMouseEvent*)event);
}

void k_multitabbar_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnMouseDoubleClickEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_mouse_move_event(void* self, void* event) {
    KMultiTabBar_MouseMoveEvent((KMultiTabBar*)self, (QMouseEvent*)event);
}

void k_multitabbar_qbase_mouse_move_event(void* self, void* event) {
    KMultiTabBar_QBaseMouseMoveEvent((KMultiTabBar*)self, (QMouseEvent*)event);
}

void k_multitabbar_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnMouseMoveEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_wheel_event(void* self, void* event) {
    KMultiTabBar_WheelEvent((KMultiTabBar*)self, (QWheelEvent*)event);
}

void k_multitabbar_qbase_wheel_event(void* self, void* event) {
    KMultiTabBar_QBaseWheelEvent((KMultiTabBar*)self, (QWheelEvent*)event);
}

void k_multitabbar_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnWheelEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_key_press_event(void* self, void* event) {
    KMultiTabBar_KeyPressEvent((KMultiTabBar*)self, (QKeyEvent*)event);
}

void k_multitabbar_qbase_key_press_event(void* self, void* event) {
    KMultiTabBar_QBaseKeyPressEvent((KMultiTabBar*)self, (QKeyEvent*)event);
}

void k_multitabbar_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnKeyPressEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_key_release_event(void* self, void* event) {
    KMultiTabBar_KeyReleaseEvent((KMultiTabBar*)self, (QKeyEvent*)event);
}

void k_multitabbar_qbase_key_release_event(void* self, void* event) {
    KMultiTabBar_QBaseKeyReleaseEvent((KMultiTabBar*)self, (QKeyEvent*)event);
}

void k_multitabbar_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnKeyReleaseEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_focus_in_event(void* self, void* event) {
    KMultiTabBar_FocusInEvent((KMultiTabBar*)self, (QFocusEvent*)event);
}

void k_multitabbar_qbase_focus_in_event(void* self, void* event) {
    KMultiTabBar_QBaseFocusInEvent((KMultiTabBar*)self, (QFocusEvent*)event);
}

void k_multitabbar_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnFocusInEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_focus_out_event(void* self, void* event) {
    KMultiTabBar_FocusOutEvent((KMultiTabBar*)self, (QFocusEvent*)event);
}

void k_multitabbar_qbase_focus_out_event(void* self, void* event) {
    KMultiTabBar_QBaseFocusOutEvent((KMultiTabBar*)self, (QFocusEvent*)event);
}

void k_multitabbar_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnFocusOutEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_enter_event(void* self, void* event) {
    KMultiTabBar_EnterEvent((KMultiTabBar*)self, (QEnterEvent*)event);
}

void k_multitabbar_qbase_enter_event(void* self, void* event) {
    KMultiTabBar_QBaseEnterEvent((KMultiTabBar*)self, (QEnterEvent*)event);
}

void k_multitabbar_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnEnterEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_leave_event(void* self, void* event) {
    KMultiTabBar_LeaveEvent((KMultiTabBar*)self, (QEvent*)event);
}

void k_multitabbar_qbase_leave_event(void* self, void* event) {
    KMultiTabBar_QBaseLeaveEvent((KMultiTabBar*)self, (QEvent*)event);
}

void k_multitabbar_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnLeaveEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_move_event(void* self, void* event) {
    KMultiTabBar_MoveEvent((KMultiTabBar*)self, (QMoveEvent*)event);
}

void k_multitabbar_qbase_move_event(void* self, void* event) {
    KMultiTabBar_QBaseMoveEvent((KMultiTabBar*)self, (QMoveEvent*)event);
}

void k_multitabbar_on_move_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnMoveEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_resize_event(void* self, void* event) {
    KMultiTabBar_ResizeEvent((KMultiTabBar*)self, (QResizeEvent*)event);
}

void k_multitabbar_qbase_resize_event(void* self, void* event) {
    KMultiTabBar_QBaseResizeEvent((KMultiTabBar*)self, (QResizeEvent*)event);
}

void k_multitabbar_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnResizeEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_close_event(void* self, void* event) {
    KMultiTabBar_CloseEvent((KMultiTabBar*)self, (QCloseEvent*)event);
}

void k_multitabbar_qbase_close_event(void* self, void* event) {
    KMultiTabBar_QBaseCloseEvent((KMultiTabBar*)self, (QCloseEvent*)event);
}

void k_multitabbar_on_close_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnCloseEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_context_menu_event(void* self, void* event) {
    KMultiTabBar_ContextMenuEvent((KMultiTabBar*)self, (QContextMenuEvent*)event);
}

void k_multitabbar_qbase_context_menu_event(void* self, void* event) {
    KMultiTabBar_QBaseContextMenuEvent((KMultiTabBar*)self, (QContextMenuEvent*)event);
}

void k_multitabbar_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnContextMenuEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_tablet_event(void* self, void* event) {
    KMultiTabBar_TabletEvent((KMultiTabBar*)self, (QTabletEvent*)event);
}

void k_multitabbar_qbase_tablet_event(void* self, void* event) {
    KMultiTabBar_QBaseTabletEvent((KMultiTabBar*)self, (QTabletEvent*)event);
}

void k_multitabbar_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnTabletEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_action_event(void* self, void* event) {
    KMultiTabBar_ActionEvent((KMultiTabBar*)self, (QActionEvent*)event);
}

void k_multitabbar_qbase_action_event(void* self, void* event) {
    KMultiTabBar_QBaseActionEvent((KMultiTabBar*)self, (QActionEvent*)event);
}

void k_multitabbar_on_action_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnActionEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_drag_enter_event(void* self, void* event) {
    KMultiTabBar_DragEnterEvent((KMultiTabBar*)self, (QDragEnterEvent*)event);
}

void k_multitabbar_qbase_drag_enter_event(void* self, void* event) {
    KMultiTabBar_QBaseDragEnterEvent((KMultiTabBar*)self, (QDragEnterEvent*)event);
}

void k_multitabbar_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnDragEnterEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_drag_move_event(void* self, void* event) {
    KMultiTabBar_DragMoveEvent((KMultiTabBar*)self, (QDragMoveEvent*)event);
}

void k_multitabbar_qbase_drag_move_event(void* self, void* event) {
    KMultiTabBar_QBaseDragMoveEvent((KMultiTabBar*)self, (QDragMoveEvent*)event);
}

void k_multitabbar_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnDragMoveEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_drag_leave_event(void* self, void* event) {
    KMultiTabBar_DragLeaveEvent((KMultiTabBar*)self, (QDragLeaveEvent*)event);
}

void k_multitabbar_qbase_drag_leave_event(void* self, void* event) {
    KMultiTabBar_QBaseDragLeaveEvent((KMultiTabBar*)self, (QDragLeaveEvent*)event);
}

void k_multitabbar_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnDragLeaveEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_drop_event(void* self, void* event) {
    KMultiTabBar_DropEvent((KMultiTabBar*)self, (QDropEvent*)event);
}

void k_multitabbar_qbase_drop_event(void* self, void* event) {
    KMultiTabBar_QBaseDropEvent((KMultiTabBar*)self, (QDropEvent*)event);
}

void k_multitabbar_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnDropEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_show_event(void* self, void* event) {
    KMultiTabBar_ShowEvent((KMultiTabBar*)self, (QShowEvent*)event);
}

void k_multitabbar_qbase_show_event(void* self, void* event) {
    KMultiTabBar_QBaseShowEvent((KMultiTabBar*)self, (QShowEvent*)event);
}

void k_multitabbar_on_show_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnShowEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_hide_event(void* self, void* event) {
    KMultiTabBar_HideEvent((KMultiTabBar*)self, (QHideEvent*)event);
}

void k_multitabbar_qbase_hide_event(void* self, void* event) {
    KMultiTabBar_QBaseHideEvent((KMultiTabBar*)self, (QHideEvent*)event);
}

void k_multitabbar_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnHideEvent((KMultiTabBar*)self, (intptr_t)callback);
}

bool k_multitabbar_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KMultiTabBar_NativeEvent((KMultiTabBar*)self, qstring(eventType), message, result);
}

bool k_multitabbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KMultiTabBar_QBaseNativeEvent((KMultiTabBar*)self, qstring(eventType), message, result);
}

void k_multitabbar_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KMultiTabBar_OnNativeEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_change_event(void* self, void* param1) {
    KMultiTabBar_ChangeEvent((KMultiTabBar*)self, (QEvent*)param1);
}

void k_multitabbar_qbase_change_event(void* self, void* param1) {
    KMultiTabBar_QBaseChangeEvent((KMultiTabBar*)self, (QEvent*)param1);
}

void k_multitabbar_on_change_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnChangeEvent((KMultiTabBar*)self, (intptr_t)callback);
}

int32_t k_multitabbar_metric(void* self, int32_t param1) {
    return KMultiTabBar_Metric((KMultiTabBar*)self, param1);
}

int32_t k_multitabbar_qbase_metric(void* self, int32_t param1) {
    return KMultiTabBar_QBaseMetric((KMultiTabBar*)self, param1);
}

void k_multitabbar_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KMultiTabBar_OnMetric((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_init_painter(void* self, void* painter) {
    KMultiTabBar_InitPainter((KMultiTabBar*)self, (QPainter*)painter);
}

void k_multitabbar_qbase_init_painter(void* self, void* painter) {
    KMultiTabBar_QBaseInitPainter((KMultiTabBar*)self, (QPainter*)painter);
}

void k_multitabbar_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnInitPainter((KMultiTabBar*)self, (intptr_t)callback);
}

QPaintDevice* k_multitabbar_redirected(void* self, void* offset) {
    return KMultiTabBar_Redirected((KMultiTabBar*)self, (QPoint*)offset);
}

QPaintDevice* k_multitabbar_qbase_redirected(void* self, void* offset) {
    return KMultiTabBar_QBaseRedirected((KMultiTabBar*)self, (QPoint*)offset);
}

void k_multitabbar_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KMultiTabBar_OnRedirected((KMultiTabBar*)self, (intptr_t)callback);
}

QPainter* k_multitabbar_shared_painter(void* self) {
    return KMultiTabBar_SharedPainter((KMultiTabBar*)self);
}

QPainter* k_multitabbar_qbase_shared_painter(void* self) {
    return KMultiTabBar_QBaseSharedPainter((KMultiTabBar*)self);
}

void k_multitabbar_on_shared_painter(void* self, QPainter* (*callback)()) {
    KMultiTabBar_OnSharedPainter((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_input_method_event(void* self, void* param1) {
    KMultiTabBar_InputMethodEvent((KMultiTabBar*)self, (QInputMethodEvent*)param1);
}

void k_multitabbar_qbase_input_method_event(void* self, void* param1) {
    KMultiTabBar_QBaseInputMethodEvent((KMultiTabBar*)self, (QInputMethodEvent*)param1);
}

void k_multitabbar_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnInputMethodEvent((KMultiTabBar*)self, (intptr_t)callback);
}

QVariant* k_multitabbar_input_method_query(void* self, int32_t param1) {
    return KMultiTabBar_InputMethodQuery((KMultiTabBar*)self, param1);
}

QVariant* k_multitabbar_qbase_input_method_query(void* self, int32_t param1) {
    return KMultiTabBar_QBaseInputMethodQuery((KMultiTabBar*)self, param1);
}

void k_multitabbar_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KMultiTabBar_OnInputMethodQuery((KMultiTabBar*)self, (intptr_t)callback);
}

bool k_multitabbar_focus_next_prev_child(void* self, bool next) {
    return KMultiTabBar_FocusNextPrevChild((KMultiTabBar*)self, next);
}

bool k_multitabbar_qbase_focus_next_prev_child(void* self, bool next) {
    return KMultiTabBar_QBaseFocusNextPrevChild((KMultiTabBar*)self, next);
}

void k_multitabbar_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KMultiTabBar_OnFocusNextPrevChild((KMultiTabBar*)self, (intptr_t)callback);
}

bool k_multitabbar_event_filter(void* self, void* watched, void* event) {
    return KMultiTabBar_EventFilter((KMultiTabBar*)self, (QObject*)watched, (QEvent*)event);
}

bool k_multitabbar_qbase_event_filter(void* self, void* watched, void* event) {
    return KMultiTabBar_QBaseEventFilter((KMultiTabBar*)self, (QObject*)watched, (QEvent*)event);
}

void k_multitabbar_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KMultiTabBar_OnEventFilter((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_timer_event(void* self, void* event) {
    KMultiTabBar_TimerEvent((KMultiTabBar*)self, (QTimerEvent*)event);
}

void k_multitabbar_qbase_timer_event(void* self, void* event) {
    KMultiTabBar_QBaseTimerEvent((KMultiTabBar*)self, (QTimerEvent*)event);
}

void k_multitabbar_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnTimerEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_child_event(void* self, void* event) {
    KMultiTabBar_ChildEvent((KMultiTabBar*)self, (QChildEvent*)event);
}

void k_multitabbar_qbase_child_event(void* self, void* event) {
    KMultiTabBar_QBaseChildEvent((KMultiTabBar*)self, (QChildEvent*)event);
}

void k_multitabbar_on_child_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnChildEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_custom_event(void* self, void* event) {
    KMultiTabBar_CustomEvent((KMultiTabBar*)self, (QEvent*)event);
}

void k_multitabbar_qbase_custom_event(void* self, void* event) {
    KMultiTabBar_QBaseCustomEvent((KMultiTabBar*)self, (QEvent*)event);
}

void k_multitabbar_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnCustomEvent((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_connect_notify(void* self, void* signal) {
    KMultiTabBar_ConnectNotify((KMultiTabBar*)self, (QMetaMethod*)signal);
}

void k_multitabbar_qbase_connect_notify(void* self, void* signal) {
    KMultiTabBar_QBaseConnectNotify((KMultiTabBar*)self, (QMetaMethod*)signal);
}

void k_multitabbar_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnConnectNotify((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_disconnect_notify(void* self, void* signal) {
    KMultiTabBar_DisconnectNotify((KMultiTabBar*)self, (QMetaMethod*)signal);
}

void k_multitabbar_qbase_disconnect_notify(void* self, void* signal) {
    KMultiTabBar_QBaseDisconnectNotify((KMultiTabBar*)self, (QMetaMethod*)signal);
}

void k_multitabbar_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KMultiTabBar_OnDisconnectNotify((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_update_micro_focus(void* self) {
    KMultiTabBar_UpdateMicroFocus((KMultiTabBar*)self);
}

void k_multitabbar_qbase_update_micro_focus(void* self) {
    KMultiTabBar_QBaseUpdateMicroFocus((KMultiTabBar*)self);
}

void k_multitabbar_on_update_micro_focus(void* self, void (*callback)()) {
    KMultiTabBar_OnUpdateMicroFocus((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_create(void* self) {
    KMultiTabBar_Create((KMultiTabBar*)self);
}

void k_multitabbar_qbase_create(void* self) {
    KMultiTabBar_QBaseCreate((KMultiTabBar*)self);
}

void k_multitabbar_on_create(void* self, void (*callback)()) {
    KMultiTabBar_OnCreate((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_destroy(void* self) {
    KMultiTabBar_Destroy((KMultiTabBar*)self);
}

void k_multitabbar_qbase_destroy(void* self) {
    KMultiTabBar_QBaseDestroy((KMultiTabBar*)self);
}

void k_multitabbar_on_destroy(void* self, void (*callback)()) {
    KMultiTabBar_OnDestroy((KMultiTabBar*)self, (intptr_t)callback);
}

bool k_multitabbar_focus_next_child(void* self) {
    return KMultiTabBar_FocusNextChild((KMultiTabBar*)self);
}

bool k_multitabbar_qbase_focus_next_child(void* self) {
    return KMultiTabBar_QBaseFocusNextChild((KMultiTabBar*)self);
}

void k_multitabbar_on_focus_next_child(void* self, bool (*callback)()) {
    KMultiTabBar_OnFocusNextChild((KMultiTabBar*)self, (intptr_t)callback);
}

bool k_multitabbar_focus_previous_child(void* self) {
    return KMultiTabBar_FocusPreviousChild((KMultiTabBar*)self);
}

bool k_multitabbar_qbase_focus_previous_child(void* self) {
    return KMultiTabBar_QBaseFocusPreviousChild((KMultiTabBar*)self);
}

void k_multitabbar_on_focus_previous_child(void* self, bool (*callback)()) {
    KMultiTabBar_OnFocusPreviousChild((KMultiTabBar*)self, (intptr_t)callback);
}

QObject* k_multitabbar_sender(void* self) {
    return KMultiTabBar_Sender((KMultiTabBar*)self);
}

QObject* k_multitabbar_qbase_sender(void* self) {
    return KMultiTabBar_QBaseSender((KMultiTabBar*)self);
}

void k_multitabbar_on_sender(void* self, QObject* (*callback)()) {
    KMultiTabBar_OnSender((KMultiTabBar*)self, (intptr_t)callback);
}

int32_t k_multitabbar_sender_signal_index(void* self) {
    return KMultiTabBar_SenderSignalIndex((KMultiTabBar*)self);
}

int32_t k_multitabbar_qbase_sender_signal_index(void* self) {
    return KMultiTabBar_QBaseSenderSignalIndex((KMultiTabBar*)self);
}

void k_multitabbar_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KMultiTabBar_OnSenderSignalIndex((KMultiTabBar*)self, (intptr_t)callback);
}

int32_t k_multitabbar_receivers(void* self, const char* signal) {
    return KMultiTabBar_Receivers((KMultiTabBar*)self, signal);
}

int32_t k_multitabbar_qbase_receivers(void* self, const char* signal) {
    return KMultiTabBar_QBaseReceivers((KMultiTabBar*)self, signal);
}

void k_multitabbar_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KMultiTabBar_OnReceivers((KMultiTabBar*)self, (intptr_t)callback);
}

bool k_multitabbar_is_signal_connected(void* self, void* signal) {
    return KMultiTabBar_IsSignalConnected((KMultiTabBar*)self, (QMetaMethod*)signal);
}

bool k_multitabbar_qbase_is_signal_connected(void* self, void* signal) {
    return KMultiTabBar_QBaseIsSignalConnected((KMultiTabBar*)self, (QMetaMethod*)signal);
}

void k_multitabbar_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KMultiTabBar_OnIsSignalConnected((KMultiTabBar*)self, (intptr_t)callback);
}

double k_multitabbar_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KMultiTabBar_GetDecodedMetricF((KMultiTabBar*)self, metricA, metricB);
}

double k_multitabbar_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KMultiTabBar_QBaseGetDecodedMetricF((KMultiTabBar*)self, metricA, metricB);
}

void k_multitabbar_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KMultiTabBar_OnGetDecodedMetricF((KMultiTabBar*)self, (intptr_t)callback);
}

void k_multitabbar_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_multitabbar_delete(void* self) {
    KMultiTabBar_Delete((KMultiTabBar*)(self));
}

const QMetaObject* k_multitabbarbutton_meta_object(void* self) {
    return KMultiTabBarButton_MetaObject((KMultiTabBarButton*)self);
}

void* k_multitabbarbutton_metacast(void* self, const char* param1) {
    return KMultiTabBarButton_Metacast((KMultiTabBarButton*)self, param1);
}

int32_t k_multitabbarbutton_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KMultiTabBarButton_Metacall((KMultiTabBarButton*)self, param1, param2, param3);
}

const char* k_multitabbarbutton_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_multitabbarbutton_id(void* self) {
    return KMultiTabBarButton_Id((KMultiTabBarButton*)self);
}

void k_multitabbarbutton_set_text(void* self, const char* text) {
    KMultiTabBarButton_SetText((KMultiTabBarButton*)self, qstring(text));
}

void k_multitabbarbutton_clicked(void* self, int id) {
    KMultiTabBarButton_Clicked((KMultiTabBarButton*)self, id);
}

void k_multitabbarbutton_on_clicked(void* self, void (*callback)(void*, int)) {
    KMultiTabBarButton_Connect_Clicked((KMultiTabBarButton*)self, (intptr_t)callback);
}

const char* k_multitabbarbutton_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_multitabbarbutton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* k_multitabbarbutton_size_hint(void* self) {
    return QPushButton_SizeHint((QPushButton*)self);
}

QSize* k_multitabbarbutton_minimum_size_hint(void* self) {
    return QPushButton_MinimumSizeHint((QPushButton*)self);
}

bool k_multitabbarbutton_auto_default(void* self) {
    return QPushButton_AutoDefault((QPushButton*)self);
}

void k_multitabbarbutton_set_auto_default(void* self, bool autoDefault) {
    QPushButton_SetAutoDefault((QPushButton*)self, autoDefault);
}

bool k_multitabbarbutton_is_default(void* self) {
    return QPushButton_IsDefault((QPushButton*)self);
}

void k_multitabbarbutton_set_default(void* self, bool defaultVal) {
    QPushButton_SetDefault((QPushButton*)self, defaultVal);
}

void k_multitabbarbutton_set_menu(void* self, void* menu) {
    QPushButton_SetMenu((QPushButton*)self, (QMenu*)menu);
}

QMenu* k_multitabbarbutton_menu(void* self) {
    return QPushButton_Menu((QPushButton*)self);
}

void k_multitabbarbutton_set_flat(void* self, bool flat) {
    QPushButton_SetFlat((QPushButton*)self, flat);
}

bool k_multitabbarbutton_is_flat(void* self) {
    return QPushButton_IsFlat((QPushButton*)self);
}

void k_multitabbarbutton_show_menu(void* self) {
    QPushButton_ShowMenu((QPushButton*)self);
}

const char* k_multitabbarbutton_text(void* self) {
    libqt_string _str = QAbstractButton_Text((QAbstractButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbarbutton_set_icon(void* self, void* icon) {
    QAbstractButton_SetIcon((QAbstractButton*)self, (QIcon*)icon);
}

QIcon* k_multitabbarbutton_icon(void* self) {
    return QAbstractButton_Icon((QAbstractButton*)self);
}

QSize* k_multitabbarbutton_icon_size(void* self) {
    return QAbstractButton_IconSize((QAbstractButton*)self);
}

void k_multitabbarbutton_set_shortcut(void* self, void* key) {
    QAbstractButton_SetShortcut((QAbstractButton*)self, (QKeySequence*)key);
}

QKeySequence* k_multitabbarbutton_shortcut(void* self) {
    return QAbstractButton_Shortcut((QAbstractButton*)self);
}

void k_multitabbarbutton_set_checkable(void* self, bool checkable) {
    QAbstractButton_SetCheckable((QAbstractButton*)self, checkable);
}

bool k_multitabbarbutton_is_checkable(void* self) {
    return QAbstractButton_IsCheckable((QAbstractButton*)self);
}

bool k_multitabbarbutton_is_checked(void* self) {
    return QAbstractButton_IsChecked((QAbstractButton*)self);
}

void k_multitabbarbutton_set_down(void* self, bool down) {
    QAbstractButton_SetDown((QAbstractButton*)self, down);
}

bool k_multitabbarbutton_is_down(void* self) {
    return QAbstractButton_IsDown((QAbstractButton*)self);
}

void k_multitabbarbutton_set_auto_repeat(void* self, bool autoRepeat) {
    QAbstractButton_SetAutoRepeat((QAbstractButton*)self, autoRepeat);
}

bool k_multitabbarbutton_auto_repeat(void* self) {
    return QAbstractButton_AutoRepeat((QAbstractButton*)self);
}

void k_multitabbarbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay) {
    QAbstractButton_SetAutoRepeatDelay((QAbstractButton*)self, autoRepeatDelay);
}

int32_t k_multitabbarbutton_auto_repeat_delay(void* self) {
    return QAbstractButton_AutoRepeatDelay((QAbstractButton*)self);
}

void k_multitabbarbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval) {
    QAbstractButton_SetAutoRepeatInterval((QAbstractButton*)self, autoRepeatInterval);
}

int32_t k_multitabbarbutton_auto_repeat_interval(void* self) {
    return QAbstractButton_AutoRepeatInterval((QAbstractButton*)self);
}

void k_multitabbarbutton_set_auto_exclusive(void* self, bool autoExclusive) {
    QAbstractButton_SetAutoExclusive((QAbstractButton*)self, autoExclusive);
}

bool k_multitabbarbutton_auto_exclusive(void* self) {
    return QAbstractButton_AutoExclusive((QAbstractButton*)self);
}

QButtonGroup* k_multitabbarbutton_group(void* self) {
    return QAbstractButton_Group((QAbstractButton*)self);
}

void k_multitabbarbutton_set_icon_size(void* self, void* size) {
    QAbstractButton_SetIconSize((QAbstractButton*)self, (QSize*)size);
}

void k_multitabbarbutton_animate_click(void* self) {
    QAbstractButton_AnimateClick((QAbstractButton*)self);
}

void k_multitabbarbutton_click(void* self) {
    QAbstractButton_Click((QAbstractButton*)self);
}

void k_multitabbarbutton_toggle(void* self) {
    QAbstractButton_Toggle((QAbstractButton*)self);
}

void k_multitabbarbutton_set_checked(void* self, bool checked) {
    QAbstractButton_SetChecked((QAbstractButton*)self, checked);
}

void k_multitabbarbutton_pressed(void* self) {
    QAbstractButton_Pressed((QAbstractButton*)self);
}

void k_multitabbarbutton_on_pressed(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Pressed((QAbstractButton*)self, (intptr_t)callback);
}

void k_multitabbarbutton_released(void* self) {
    QAbstractButton_Released((QAbstractButton*)self);
}

void k_multitabbarbutton_on_released(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Released((QAbstractButton*)self, (intptr_t)callback);
}

void k_multitabbarbutton_toggled(void* self, bool checked) {
    QAbstractButton_Toggled((QAbstractButton*)self, checked);
}

void k_multitabbarbutton_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Toggled((QAbstractButton*)self, (intptr_t)callback);
}

void k_multitabbarbutton_clicked1(void* self, bool checked) {
    QAbstractButton_Clicked1((QAbstractButton*)self, checked);
}

void k_multitabbarbutton_on_clicked1(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Clicked1((QAbstractButton*)self, (intptr_t)callback);
}

int32_t k_multitabbarbutton_dev_type(void* self) {
    return QWidget_DevType((QWidget*)self);
}

uintptr_t k_multitabbarbutton_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_multitabbarbutton_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_multitabbarbutton_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_multitabbarbutton_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_multitabbarbutton_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_multitabbarbutton_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_multitabbarbutton_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_multitabbarbutton_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_multitabbarbutton_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_multitabbarbutton_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_multitabbarbutton_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_multitabbarbutton_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_multitabbarbutton_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_multitabbarbutton_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_multitabbarbutton_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_multitabbarbutton_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_multitabbarbutton_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_multitabbarbutton_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_multitabbarbutton_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_multitabbarbutton_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_multitabbarbutton_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_multitabbarbutton_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_multitabbarbutton_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_multitabbarbutton_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_multitabbarbutton_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_multitabbarbutton_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_multitabbarbutton_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_multitabbarbutton_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_multitabbarbutton_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_multitabbarbutton_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_multitabbarbutton_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_multitabbarbutton_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_multitabbarbutton_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_multitabbarbutton_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_multitabbarbutton_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_multitabbarbutton_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_multitabbarbutton_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_multitabbarbutton_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_multitabbarbutton_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_multitabbarbutton_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_multitabbarbutton_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_multitabbarbutton_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_multitabbarbutton_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_multitabbarbutton_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_multitabbarbutton_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_multitabbarbutton_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_multitabbarbutton_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_multitabbarbutton_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_multitabbarbutton_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_multitabbarbutton_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_multitabbarbutton_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_multitabbarbutton_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_multitabbarbutton_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_multitabbarbutton_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_multitabbarbutton_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_multitabbarbutton_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_multitabbarbutton_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_multitabbarbutton_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_multitabbarbutton_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_multitabbarbutton_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_multitabbarbutton_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_multitabbarbutton_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_multitabbarbutton_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_multitabbarbutton_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_multitabbarbutton_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_multitabbarbutton_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_multitabbarbutton_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_multitabbarbutton_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_multitabbarbutton_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_multitabbarbutton_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_multitabbarbutton_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_multitabbarbutton_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_multitabbarbutton_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_multitabbarbutton_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_multitabbarbutton_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_multitabbarbutton_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_multitabbarbutton_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_multitabbarbutton_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_multitabbarbutton_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_multitabbarbutton_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_multitabbarbutton_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_multitabbarbutton_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_multitabbarbutton_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_multitabbarbutton_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_multitabbarbutton_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_multitabbarbutton_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_multitabbarbutton_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_multitabbarbutton_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_multitabbarbutton_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_multitabbarbutton_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_multitabbarbutton_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_multitabbarbutton_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_multitabbarbutton_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_multitabbarbutton_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_multitabbarbutton_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_multitabbarbutton_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_multitabbarbutton_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_multitabbarbutton_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_multitabbarbutton_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_multitabbarbutton_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_multitabbarbutton_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbarbutton_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_multitabbarbutton_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_multitabbarbutton_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_multitabbarbutton_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbarbutton_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_multitabbarbutton_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbarbutton_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_multitabbarbutton_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbarbutton_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_multitabbarbutton_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_multitabbarbutton_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_multitabbarbutton_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_multitabbarbutton_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbarbutton_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_multitabbarbutton_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_multitabbarbutton_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_multitabbarbutton_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbarbutton_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_multitabbarbutton_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_multitabbarbutton_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbarbutton_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_multitabbarbutton_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbarbutton_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_multitabbarbutton_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_multitabbarbutton_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_multitabbarbutton_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_multitabbarbutton_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_multitabbarbutton_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_multitabbarbutton_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_multitabbarbutton_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_multitabbarbutton_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_multitabbarbutton_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_multitabbarbutton_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_multitabbarbutton_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_multitabbarbutton_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_multitabbarbutton_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_multitabbarbutton_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_multitabbarbutton_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_multitabbarbutton_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_multitabbarbutton_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_multitabbarbutton_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_multitabbarbutton_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_multitabbarbutton_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_multitabbarbutton_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_multitabbarbutton_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_multitabbarbutton_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_multitabbarbutton_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_multitabbarbutton_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_multitabbarbutton_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_multitabbarbutton_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_multitabbarbutton_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_multitabbarbutton_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_multitabbarbutton_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_multitabbarbutton_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_multitabbarbutton_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_multitabbarbutton_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_multitabbarbutton_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_multitabbarbutton_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_multitabbarbutton_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_multitabbarbutton_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_multitabbarbutton_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_multitabbarbutton_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_multitabbarbutton_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_multitabbarbutton_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_multitabbarbutton_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_multitabbarbutton_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_multitabbarbutton_set_visible(void* self, bool visible) {
    QWidget_SetVisible((QWidget*)self, visible);
}

void k_multitabbarbutton_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_multitabbarbutton_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_multitabbarbutton_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_multitabbarbutton_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_multitabbarbutton_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_multitabbarbutton_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_multitabbarbutton_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_multitabbarbutton_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_multitabbarbutton_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_multitabbarbutton_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_multitabbarbutton_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_multitabbarbutton_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_multitabbarbutton_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_multitabbarbutton_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_multitabbarbutton_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_multitabbarbutton_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_multitabbarbutton_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_multitabbarbutton_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_multitabbarbutton_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_multitabbarbutton_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_multitabbarbutton_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_multitabbarbutton_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_multitabbarbutton_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_multitabbarbutton_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_multitabbarbutton_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_multitabbarbutton_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_multitabbarbutton_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_multitabbarbutton_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_multitabbarbutton_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_multitabbarbutton_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_multitabbarbutton_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_multitabbarbutton_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

int32_t k_multitabbarbutton_height_for_width(void* self, int param1) {
    return QWidget_HeightForWidth((QWidget*)self, param1);
}

bool k_multitabbarbutton_has_height_for_width(void* self) {
    return QWidget_HasHeightForWidth((QWidget*)self);
}

QRegion* k_multitabbarbutton_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_multitabbarbutton_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_multitabbarbutton_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_multitabbarbutton_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_multitabbarbutton_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_multitabbarbutton_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_multitabbarbutton_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_multitabbarbutton_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_multitabbarbutton_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_multitabbarbutton_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_multitabbarbutton_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_multitabbarbutton_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_multitabbarbutton_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_multitabbarbutton_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_multitabbarbutton_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_multitabbarbutton_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_multitabbarbutton_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_multitabbarbutton_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_multitabbarbutton_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_multitabbarbutton_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_multitabbarbutton_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_multitabbarbutton_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_multitabbarbutton_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_multitabbarbutton_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_multitabbarbutton_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_multitabbarbutton_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_multitabbarbutton_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_multitabbarbutton_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_multitabbarbutton_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_multitabbarbutton_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_multitabbarbutton_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_multitabbarbutton_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_multitabbarbutton_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_multitabbarbutton_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_multitabbarbutton_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_multitabbarbutton_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_multitabbarbutton_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_multitabbarbutton_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_multitabbarbutton_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

QPaintEngine* k_multitabbarbutton_paint_engine(void* self) {
    return QWidget_PaintEngine((QWidget*)self);
}

void k_multitabbarbutton_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_multitabbarbutton_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_multitabbarbutton_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_multitabbarbutton_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_multitabbarbutton_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_multitabbarbutton_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_multitabbarbutton_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_multitabbarbutton_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_multitabbarbutton_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_multitabbarbutton_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_multitabbarbutton_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_multitabbarbutton_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_multitabbarbutton_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_multitabbarbutton_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_multitabbarbutton_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_multitabbarbutton_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_multitabbarbutton_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

QVariant* k_multitabbarbutton_input_method_query(void* self, int32_t param1) {
    return QWidget_InputMethodQuery((QWidget*)self, param1);
}

int32_t k_multitabbarbutton_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_multitabbarbutton_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_multitabbarbutton_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_multitabbarbutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_multitabbarbutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_multitabbarbutton_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_multitabbarbutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_multitabbarbutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_multitabbarbutton_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_multitabbarbutton_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_multitabbarbutton_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_multitabbarbutton_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_multitabbarbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_multitabbarbutton_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_multitabbarbutton_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_multitabbarbutton_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_multitabbarbutton_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

bool k_multitabbarbutton_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_multitabbarbutton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbarbutton_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_multitabbarbutton_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_multitabbarbutton_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_multitabbarbutton_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_multitabbarbutton_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_multitabbarbutton_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_multitabbarbutton_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_multitabbarbutton_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_multitabbarbutton_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_multitabbarbutton_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_multitabbarbutton_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_multitabbarbutton_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_multitabbarbutton_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_multitabbarbutton_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_multitabbarbutton_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_multitabbarbutton_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_multitabbarbutton_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_multitabbarbutton_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_multitabbarbutton_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_multitabbarbutton_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_multitabbarbutton_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_multitabbarbutton_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_multitabbarbutton_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_multitabbarbutton_dynamic_property_names\n");
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

QBindingStorage* k_multitabbarbutton_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_multitabbarbutton_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_multitabbarbutton_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_multitabbarbutton_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_multitabbarbutton_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_multitabbarbutton_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_multitabbarbutton_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_multitabbarbutton_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_multitabbarbutton_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_multitabbarbutton_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_multitabbarbutton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_multitabbarbutton_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_multitabbarbutton_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_multitabbarbutton_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_multitabbarbutton_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_multitabbarbutton_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_multitabbarbutton_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_multitabbarbutton_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_multitabbarbutton_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_multitabbarbutton_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_multitabbarbutton_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_multitabbarbutton_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_multitabbarbutton_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_multitabbarbutton_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_multitabbarbutton_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_multitabbarbutton_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_multitabbarbutton_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_multitabbarbutton_delete(void* self) {
    KMultiTabBarButton_Delete((KMultiTabBarButton*)(self));
}

const QMetaObject* k_multitabbartab_meta_object(void* self) {
    return KMultiTabBarTab_MetaObject((KMultiTabBarTab*)self);
}

void* k_multitabbartab_metacast(void* self, const char* param1) {
    return KMultiTabBarTab_Metacast((KMultiTabBarTab*)self, param1);
}

int32_t k_multitabbartab_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KMultiTabBarTab_Metacall((KMultiTabBarTab*)self, param1, param2, param3);
}

const char* k_multitabbartab_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* k_multitabbartab_size_hint(void* self) {
    return KMultiTabBarTab_SizeHint((KMultiTabBarTab*)self);
}

QSize* k_multitabbartab_minimum_size_hint(void* self) {
    return KMultiTabBarTab_MinimumSizeHint((KMultiTabBarTab*)self);
}

void k_multitabbartab_set_position(void* self, int32_t position) {
    KMultiTabBarTab_SetPosition((KMultiTabBarTab*)self, position);
}

void k_multitabbartab_set_style(void* self, int32_t style) {
    KMultiTabBarTab_SetStyle((KMultiTabBarTab*)self, style);
}

void k_multitabbartab_set_state(void* self, bool state) {
    KMultiTabBarTab_SetState((KMultiTabBarTab*)self, state);
}

const char* k_multitabbartab_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_multitabbartab_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_multitabbartab_id(void* self) {
    return KMultiTabBarButton_Id((KMultiTabBarButton*)self);
}

void k_multitabbartab_set_text(void* self, const char* text) {
    KMultiTabBarButton_SetText((KMultiTabBarButton*)self, qstring(text));
}

void k_multitabbartab_clicked(void* self, int id) {
    KMultiTabBarButton_Clicked((KMultiTabBarButton*)self, id);
}

void k_multitabbartab_on_clicked(void* self, void (*callback)(void*, int)) {
    KMultiTabBarButton_Connect_Clicked((KMultiTabBarButton*)self, (intptr_t)callback);
}

bool k_multitabbartab_auto_default(void* self) {
    return QPushButton_AutoDefault((QPushButton*)self);
}

void k_multitabbartab_set_auto_default(void* self, bool autoDefault) {
    QPushButton_SetAutoDefault((QPushButton*)self, autoDefault);
}

bool k_multitabbartab_is_default(void* self) {
    return QPushButton_IsDefault((QPushButton*)self);
}

void k_multitabbartab_set_default(void* self, bool defaultVal) {
    QPushButton_SetDefault((QPushButton*)self, defaultVal);
}

void k_multitabbartab_set_menu(void* self, void* menu) {
    QPushButton_SetMenu((QPushButton*)self, (QMenu*)menu);
}

QMenu* k_multitabbartab_menu(void* self) {
    return QPushButton_Menu((QPushButton*)self);
}

void k_multitabbartab_set_flat(void* self, bool flat) {
    QPushButton_SetFlat((QPushButton*)self, flat);
}

bool k_multitabbartab_is_flat(void* self) {
    return QPushButton_IsFlat((QPushButton*)self);
}

void k_multitabbartab_show_menu(void* self) {
    QPushButton_ShowMenu((QPushButton*)self);
}

const char* k_multitabbartab_text(void* self) {
    libqt_string _str = QAbstractButton_Text((QAbstractButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbartab_set_icon(void* self, void* icon) {
    QAbstractButton_SetIcon((QAbstractButton*)self, (QIcon*)icon);
}

QIcon* k_multitabbartab_icon(void* self) {
    return QAbstractButton_Icon((QAbstractButton*)self);
}

QSize* k_multitabbartab_icon_size(void* self) {
    return QAbstractButton_IconSize((QAbstractButton*)self);
}

void k_multitabbartab_set_shortcut(void* self, void* key) {
    QAbstractButton_SetShortcut((QAbstractButton*)self, (QKeySequence*)key);
}

QKeySequence* k_multitabbartab_shortcut(void* self) {
    return QAbstractButton_Shortcut((QAbstractButton*)self);
}

void k_multitabbartab_set_checkable(void* self, bool checkable) {
    QAbstractButton_SetCheckable((QAbstractButton*)self, checkable);
}

bool k_multitabbartab_is_checkable(void* self) {
    return QAbstractButton_IsCheckable((QAbstractButton*)self);
}

bool k_multitabbartab_is_checked(void* self) {
    return QAbstractButton_IsChecked((QAbstractButton*)self);
}

void k_multitabbartab_set_down(void* self, bool down) {
    QAbstractButton_SetDown((QAbstractButton*)self, down);
}

bool k_multitabbartab_is_down(void* self) {
    return QAbstractButton_IsDown((QAbstractButton*)self);
}

void k_multitabbartab_set_auto_repeat(void* self, bool autoRepeat) {
    QAbstractButton_SetAutoRepeat((QAbstractButton*)self, autoRepeat);
}

bool k_multitabbartab_auto_repeat(void* self) {
    return QAbstractButton_AutoRepeat((QAbstractButton*)self);
}

void k_multitabbartab_set_auto_repeat_delay(void* self, int autoRepeatDelay) {
    QAbstractButton_SetAutoRepeatDelay((QAbstractButton*)self, autoRepeatDelay);
}

int32_t k_multitabbartab_auto_repeat_delay(void* self) {
    return QAbstractButton_AutoRepeatDelay((QAbstractButton*)self);
}

void k_multitabbartab_set_auto_repeat_interval(void* self, int autoRepeatInterval) {
    QAbstractButton_SetAutoRepeatInterval((QAbstractButton*)self, autoRepeatInterval);
}

int32_t k_multitabbartab_auto_repeat_interval(void* self) {
    return QAbstractButton_AutoRepeatInterval((QAbstractButton*)self);
}

void k_multitabbartab_set_auto_exclusive(void* self, bool autoExclusive) {
    QAbstractButton_SetAutoExclusive((QAbstractButton*)self, autoExclusive);
}

bool k_multitabbartab_auto_exclusive(void* self) {
    return QAbstractButton_AutoExclusive((QAbstractButton*)self);
}

QButtonGroup* k_multitabbartab_group(void* self) {
    return QAbstractButton_Group((QAbstractButton*)self);
}

void k_multitabbartab_set_icon_size(void* self, void* size) {
    QAbstractButton_SetIconSize((QAbstractButton*)self, (QSize*)size);
}

void k_multitabbartab_animate_click(void* self) {
    QAbstractButton_AnimateClick((QAbstractButton*)self);
}

void k_multitabbartab_click(void* self) {
    QAbstractButton_Click((QAbstractButton*)self);
}

void k_multitabbartab_toggle(void* self) {
    QAbstractButton_Toggle((QAbstractButton*)self);
}

void k_multitabbartab_set_checked(void* self, bool checked) {
    QAbstractButton_SetChecked((QAbstractButton*)self, checked);
}

void k_multitabbartab_pressed(void* self) {
    QAbstractButton_Pressed((QAbstractButton*)self);
}

void k_multitabbartab_on_pressed(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Pressed((QAbstractButton*)self, (intptr_t)callback);
}

void k_multitabbartab_released(void* self) {
    QAbstractButton_Released((QAbstractButton*)self);
}

void k_multitabbartab_on_released(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Released((QAbstractButton*)self, (intptr_t)callback);
}

void k_multitabbartab_toggled(void* self, bool checked) {
    QAbstractButton_Toggled((QAbstractButton*)self, checked);
}

void k_multitabbartab_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Toggled((QAbstractButton*)self, (intptr_t)callback);
}

void k_multitabbartab_clicked1(void* self, bool checked) {
    QAbstractButton_Clicked1((QAbstractButton*)self, checked);
}

void k_multitabbartab_on_clicked1(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Clicked1((QAbstractButton*)self, (intptr_t)callback);
}

int32_t k_multitabbartab_dev_type(void* self) {
    return QWidget_DevType((QWidget*)self);
}

uintptr_t k_multitabbartab_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_multitabbartab_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_multitabbartab_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_multitabbartab_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_multitabbartab_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

bool k_multitabbartab_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_multitabbartab_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_multitabbartab_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_multitabbartab_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_multitabbartab_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_multitabbartab_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_multitabbartab_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_multitabbartab_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_multitabbartab_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_multitabbartab_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_multitabbartab_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_multitabbartab_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_multitabbartab_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_multitabbartab_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_multitabbartab_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_multitabbartab_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_multitabbartab_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_multitabbartab_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_multitabbartab_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_multitabbartab_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_multitabbartab_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_multitabbartab_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_multitabbartab_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_multitabbartab_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_multitabbartab_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_multitabbartab_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_multitabbartab_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_multitabbartab_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_multitabbartab_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_multitabbartab_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_multitabbartab_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_multitabbartab_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_multitabbartab_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_multitabbartab_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_multitabbartab_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_multitabbartab_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_multitabbartab_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_multitabbartab_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_multitabbartab_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_multitabbartab_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_multitabbartab_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_multitabbartab_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_multitabbartab_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_multitabbartab_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_multitabbartab_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_multitabbartab_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_multitabbartab_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_multitabbartab_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_multitabbartab_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_multitabbartab_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_multitabbartab_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_multitabbartab_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_multitabbartab_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_multitabbartab_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_multitabbartab_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_multitabbartab_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_multitabbartab_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_multitabbartab_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_multitabbartab_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_multitabbartab_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_multitabbartab_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_multitabbartab_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_multitabbartab_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_multitabbartab_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_multitabbartab_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_multitabbartab_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_multitabbartab_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_multitabbartab_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_multitabbartab_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_multitabbartab_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_multitabbartab_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_multitabbartab_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_multitabbartab_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_multitabbartab_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_multitabbartab_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_multitabbartab_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_multitabbartab_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_multitabbartab_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_multitabbartab_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_multitabbartab_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_multitabbartab_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_multitabbartab_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_multitabbartab_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_multitabbartab_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_multitabbartab_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_multitabbartab_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_multitabbartab_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_multitabbartab_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_multitabbartab_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_multitabbartab_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_multitabbartab_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_multitabbartab_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_multitabbartab_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_multitabbartab_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_multitabbartab_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbartab_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_multitabbartab_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_multitabbartab_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_multitabbartab_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbartab_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_multitabbartab_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbartab_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_multitabbartab_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbartab_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_multitabbartab_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_multitabbartab_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_multitabbartab_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_multitabbartab_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbartab_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_multitabbartab_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_multitabbartab_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_multitabbartab_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbartab_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_multitabbartab_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_multitabbartab_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbartab_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_multitabbartab_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbartab_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_multitabbartab_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_multitabbartab_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_multitabbartab_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_multitabbartab_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_multitabbartab_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_multitabbartab_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_multitabbartab_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_multitabbartab_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_multitabbartab_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_multitabbartab_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_multitabbartab_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_multitabbartab_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_multitabbartab_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_multitabbartab_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_multitabbartab_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_multitabbartab_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_multitabbartab_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_multitabbartab_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_multitabbartab_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_multitabbartab_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_multitabbartab_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_multitabbartab_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_multitabbartab_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_multitabbartab_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_multitabbartab_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_multitabbartab_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_multitabbartab_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_multitabbartab_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_multitabbartab_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_multitabbartab_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_multitabbartab_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_multitabbartab_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_multitabbartab_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_multitabbartab_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_multitabbartab_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_multitabbartab_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_multitabbartab_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_multitabbartab_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_multitabbartab_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_multitabbartab_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_multitabbartab_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_multitabbartab_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_multitabbartab_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_multitabbartab_set_visible(void* self, bool visible) {
    QWidget_SetVisible((QWidget*)self, visible);
}

void k_multitabbartab_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_multitabbartab_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_multitabbartab_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_multitabbartab_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_multitabbartab_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_multitabbartab_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_multitabbartab_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_multitabbartab_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_multitabbartab_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_multitabbartab_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_multitabbartab_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_multitabbartab_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_multitabbartab_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_multitabbartab_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_multitabbartab_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_multitabbartab_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_multitabbartab_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_multitabbartab_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_multitabbartab_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_multitabbartab_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_multitabbartab_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_multitabbartab_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_multitabbartab_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_multitabbartab_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_multitabbartab_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_multitabbartab_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_multitabbartab_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_multitabbartab_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_multitabbartab_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_multitabbartab_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_multitabbartab_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_multitabbartab_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

int32_t k_multitabbartab_height_for_width(void* self, int param1) {
    return QWidget_HeightForWidth((QWidget*)self, param1);
}

bool k_multitabbartab_has_height_for_width(void* self) {
    return QWidget_HasHeightForWidth((QWidget*)self);
}

QRegion* k_multitabbartab_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_multitabbartab_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_multitabbartab_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_multitabbartab_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_multitabbartab_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_multitabbartab_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_multitabbartab_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_multitabbartab_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_multitabbartab_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_multitabbartab_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_multitabbartab_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_multitabbartab_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_multitabbartab_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_multitabbartab_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_multitabbartab_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_multitabbartab_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_multitabbartab_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_multitabbartab_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_multitabbartab_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_multitabbartab_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_multitabbartab_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_multitabbartab_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_multitabbartab_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_multitabbartab_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_multitabbartab_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_multitabbartab_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_multitabbartab_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_multitabbartab_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_multitabbartab_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_multitabbartab_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_multitabbartab_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_multitabbartab_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_multitabbartab_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_multitabbartab_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_multitabbartab_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_multitabbartab_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_multitabbartab_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_multitabbartab_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_multitabbartab_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

QPaintEngine* k_multitabbartab_paint_engine(void* self) {
    return QWidget_PaintEngine((QWidget*)self);
}

void k_multitabbartab_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_multitabbartab_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_multitabbartab_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_multitabbartab_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_multitabbartab_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_multitabbartab_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_multitabbartab_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_multitabbartab_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_multitabbartab_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_multitabbartab_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_multitabbartab_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_multitabbartab_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_multitabbartab_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_multitabbartab_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_multitabbartab_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_multitabbartab_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_multitabbartab_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

QVariant* k_multitabbartab_input_method_query(void* self, int32_t param1) {
    return QWidget_InputMethodQuery((QWidget*)self, param1);
}

int32_t k_multitabbartab_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_multitabbartab_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_multitabbartab_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_multitabbartab_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_multitabbartab_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_multitabbartab_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_multitabbartab_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_multitabbartab_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_multitabbartab_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_multitabbartab_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_multitabbartab_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_multitabbartab_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_multitabbartab_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_multitabbartab_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_multitabbartab_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_multitabbartab_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_multitabbartab_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

bool k_multitabbartab_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_multitabbartab_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_multitabbartab_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_multitabbartab_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_multitabbartab_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_multitabbartab_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_multitabbartab_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_multitabbartab_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_multitabbartab_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_multitabbartab_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_multitabbartab_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_multitabbartab_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_multitabbartab_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_multitabbartab_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_multitabbartab_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_multitabbartab_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_multitabbartab_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_multitabbartab_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_multitabbartab_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_multitabbartab_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_multitabbartab_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_multitabbartab_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_multitabbartab_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_multitabbartab_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_multitabbartab_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_multitabbartab_dynamic_property_names\n");
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

QBindingStorage* k_multitabbartab_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_multitabbartab_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_multitabbartab_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_multitabbartab_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_multitabbartab_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_multitabbartab_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_multitabbartab_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_multitabbartab_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_multitabbartab_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_multitabbartab_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_multitabbartab_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_multitabbartab_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_multitabbartab_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_multitabbartab_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_multitabbartab_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_multitabbartab_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_multitabbartab_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_multitabbartab_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_multitabbartab_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_multitabbartab_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_multitabbartab_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_multitabbartab_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_multitabbartab_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_multitabbartab_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_multitabbartab_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_multitabbartab_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_multitabbartab_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_multitabbartab_delete(void* self) {
    KMultiTabBarTab_Delete((KMultiTabBarTab*)(self));
}
