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
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkcollapsiblegroupbox.hpp"
#include "libkcollapsiblegroupbox.h"

KCollapsibleGroupBox* k_collapsiblegroupbox_new(void* parent) {
    return KCollapsibleGroupBox_new((QWidget*)parent);
}

KCollapsibleGroupBox* k_collapsiblegroupbox_new2() {
    return KCollapsibleGroupBox_new2();
}

const QMetaObject* k_collapsiblegroupbox_meta_object(void* self) {
    return KCollapsibleGroupBox_MetaObject((KCollapsibleGroupBox*)self);
}

void* k_collapsiblegroupbox_metacast(void* self, const char* param1) {
    return KCollapsibleGroupBox_Metacast((KCollapsibleGroupBox*)self, param1);
}

int32_t k_collapsiblegroupbox_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCollapsibleGroupBox_Metacall((KCollapsibleGroupBox*)self, param1, param2, param3);
}

void k_collapsiblegroupbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCollapsibleGroupBox_OnMetacall((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

int32_t k_collapsiblegroupbox_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCollapsibleGroupBox_QBaseMetacall((KCollapsibleGroupBox*)self, param1, param2, param3);
}

const char* k_collapsiblegroupbox_tr(const char* s) {
    libqt_string _str = KCollapsibleGroupBox_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_collapsiblegroupbox_set_title(void* self, const char* title) {
    KCollapsibleGroupBox_SetTitle((KCollapsibleGroupBox*)self, qstring(title));
}

const char* k_collapsiblegroupbox_title(void* self) {
    libqt_string _str = KCollapsibleGroupBox_Title((KCollapsibleGroupBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_collapsiblegroupbox_set_expanded(void* self, bool expanded) {
    KCollapsibleGroupBox_SetExpanded((KCollapsibleGroupBox*)self, expanded);
}

bool k_collapsiblegroupbox_is_expanded(void* self) {
    return KCollapsibleGroupBox_IsExpanded((KCollapsibleGroupBox*)self);
}

QSize* k_collapsiblegroupbox_size_hint(void* self) {
    return KCollapsibleGroupBox_SizeHint((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_size_hint(void* self, QSize* (*callback)()) {
    KCollapsibleGroupBox_OnSizeHint((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

QSize* k_collapsiblegroupbox_qbase_size_hint(void* self) {
    return KCollapsibleGroupBox_QBaseSizeHint((KCollapsibleGroupBox*)self);
}

QSize* k_collapsiblegroupbox_minimum_size_hint(void* self) {
    return KCollapsibleGroupBox_MinimumSizeHint((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KCollapsibleGroupBox_OnMinimumSizeHint((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

QSize* k_collapsiblegroupbox_qbase_minimum_size_hint(void* self) {
    return KCollapsibleGroupBox_QBaseMinimumSizeHint((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_toggle(void* self) {
    KCollapsibleGroupBox_Toggle((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_expand(void* self) {
    KCollapsibleGroupBox_Expand((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_collapse(void* self) {
    KCollapsibleGroupBox_Collapse((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_title_changed(void* self) {
    KCollapsibleGroupBox_TitleChanged((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_title_changed(void* self, void (*callback)(void*)) {
    KCollapsibleGroupBox_Connect_TitleChanged((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_expanded_changed(void* self) {
    KCollapsibleGroupBox_ExpandedChanged((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_expanded_changed(void* self, void (*callback)(void*)) {
    KCollapsibleGroupBox_Connect_ExpandedChanged((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_paint_event(void* self, void* param1) {
    KCollapsibleGroupBox_PaintEvent((KCollapsibleGroupBox*)self, (QPaintEvent*)param1);
}

void k_collapsiblegroupbox_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnPaintEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_qbase_paint_event(void* self, void* param1) {
    KCollapsibleGroupBox_QBasePaintEvent((KCollapsibleGroupBox*)self, (QPaintEvent*)param1);
}

bool k_collapsiblegroupbox_event(void* self, void* param1) {
    return KCollapsibleGroupBox_Event((KCollapsibleGroupBox*)self, (QEvent*)param1);
}

void k_collapsiblegroupbox_on_event(void* self, bool (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

bool k_collapsiblegroupbox_qbase_event(void* self, void* param1) {
    return KCollapsibleGroupBox_QBaseEvent((KCollapsibleGroupBox*)self, (QEvent*)param1);
}

void k_collapsiblegroupbox_mouse_press_event(void* self, void* param1) {
    KCollapsibleGroupBox_MousePressEvent((KCollapsibleGroupBox*)self, (QMouseEvent*)param1);
}

void k_collapsiblegroupbox_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnMousePressEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_qbase_mouse_press_event(void* self, void* param1) {
    KCollapsibleGroupBox_QBaseMousePressEvent((KCollapsibleGroupBox*)self, (QMouseEvent*)param1);
}

void k_collapsiblegroupbox_mouse_move_event(void* self, void* param1) {
    KCollapsibleGroupBox_MouseMoveEvent((KCollapsibleGroupBox*)self, (QMouseEvent*)param1);
}

void k_collapsiblegroupbox_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnMouseMoveEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_qbase_mouse_move_event(void* self, void* param1) {
    KCollapsibleGroupBox_QBaseMouseMoveEvent((KCollapsibleGroupBox*)self, (QMouseEvent*)param1);
}

void k_collapsiblegroupbox_leave_event(void* self, void* param1) {
    KCollapsibleGroupBox_LeaveEvent((KCollapsibleGroupBox*)self, (QEvent*)param1);
}

void k_collapsiblegroupbox_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnLeaveEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_qbase_leave_event(void* self, void* param1) {
    KCollapsibleGroupBox_QBaseLeaveEvent((KCollapsibleGroupBox*)self, (QEvent*)param1);
}

void k_collapsiblegroupbox_key_press_event(void* self, void* param1) {
    KCollapsibleGroupBox_KeyPressEvent((KCollapsibleGroupBox*)self, (QKeyEvent*)param1);
}

void k_collapsiblegroupbox_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnKeyPressEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_qbase_key_press_event(void* self, void* param1) {
    KCollapsibleGroupBox_QBaseKeyPressEvent((KCollapsibleGroupBox*)self, (QKeyEvent*)param1);
}

void k_collapsiblegroupbox_resize_event(void* self, void* param1) {
    KCollapsibleGroupBox_ResizeEvent((KCollapsibleGroupBox*)self, (QResizeEvent*)param1);
}

void k_collapsiblegroupbox_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnResizeEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_qbase_resize_event(void* self, void* param1) {
    KCollapsibleGroupBox_QBaseResizeEvent((KCollapsibleGroupBox*)self, (QResizeEvent*)param1);
}

const char* k_collapsiblegroupbox_tr2(const char* s, const char* c) {
    libqt_string _str = KCollapsibleGroupBox_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_collapsiblegroupbox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KCollapsibleGroupBox_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_collapsiblegroupbox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_collapsiblegroupbox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_collapsiblegroupbox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_collapsiblegroupbox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_collapsiblegroupbox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_collapsiblegroupbox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_collapsiblegroupbox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_collapsiblegroupbox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_collapsiblegroupbox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_collapsiblegroupbox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_collapsiblegroupbox_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_collapsiblegroupbox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_collapsiblegroupbox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_collapsiblegroupbox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_collapsiblegroupbox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_collapsiblegroupbox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_collapsiblegroupbox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_collapsiblegroupbox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_collapsiblegroupbox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_collapsiblegroupbox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_collapsiblegroupbox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_collapsiblegroupbox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_collapsiblegroupbox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_collapsiblegroupbox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_collapsiblegroupbox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_collapsiblegroupbox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_collapsiblegroupbox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_collapsiblegroupbox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_collapsiblegroupbox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_collapsiblegroupbox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_collapsiblegroupbox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_collapsiblegroupbox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_collapsiblegroupbox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_collapsiblegroupbox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_collapsiblegroupbox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_collapsiblegroupbox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_collapsiblegroupbox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_collapsiblegroupbox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_collapsiblegroupbox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_collapsiblegroupbox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_collapsiblegroupbox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_collapsiblegroupbox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_collapsiblegroupbox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_collapsiblegroupbox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_collapsiblegroupbox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_collapsiblegroupbox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_collapsiblegroupbox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_collapsiblegroupbox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_collapsiblegroupbox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_collapsiblegroupbox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_collapsiblegroupbox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_collapsiblegroupbox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_collapsiblegroupbox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_collapsiblegroupbox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_collapsiblegroupbox_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_collapsiblegroupbox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_collapsiblegroupbox_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_collapsiblegroupbox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_collapsiblegroupbox_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_collapsiblegroupbox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_collapsiblegroupbox_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_collapsiblegroupbox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_collapsiblegroupbox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_collapsiblegroupbox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_collapsiblegroupbox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_collapsiblegroupbox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_collapsiblegroupbox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_collapsiblegroupbox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_collapsiblegroupbox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_collapsiblegroupbox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_collapsiblegroupbox_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_collapsiblegroupbox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_collapsiblegroupbox_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_collapsiblegroupbox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_collapsiblegroupbox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_collapsiblegroupbox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_collapsiblegroupbox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_collapsiblegroupbox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_collapsiblegroupbox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_collapsiblegroupbox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_collapsiblegroupbox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_collapsiblegroupbox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_collapsiblegroupbox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_collapsiblegroupbox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_collapsiblegroupbox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_collapsiblegroupbox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_collapsiblegroupbox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_collapsiblegroupbox_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_collapsiblegroupbox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_collapsiblegroupbox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_collapsiblegroupbox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_collapsiblegroupbox_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_collapsiblegroupbox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_collapsiblegroupbox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_collapsiblegroupbox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_collapsiblegroupbox_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_collapsiblegroupbox_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_collapsiblegroupbox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_collapsiblegroupbox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_collapsiblegroupbox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_collapsiblegroupbox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_collapsiblegroupbox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_collapsiblegroupbox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_collapsiblegroupbox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_collapsiblegroupbox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_collapsiblegroupbox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_collapsiblegroupbox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_collapsiblegroupbox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_collapsiblegroupbox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_collapsiblegroupbox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_collapsiblegroupbox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_collapsiblegroupbox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_collapsiblegroupbox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_collapsiblegroupbox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_collapsiblegroupbox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_collapsiblegroupbox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_collapsiblegroupbox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_collapsiblegroupbox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_collapsiblegroupbox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_collapsiblegroupbox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_collapsiblegroupbox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_collapsiblegroupbox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_collapsiblegroupbox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_collapsiblegroupbox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_collapsiblegroupbox_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_collapsiblegroupbox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_collapsiblegroupbox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_collapsiblegroupbox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_collapsiblegroupbox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_collapsiblegroupbox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_collapsiblegroupbox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_collapsiblegroupbox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_collapsiblegroupbox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_collapsiblegroupbox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_collapsiblegroupbox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_collapsiblegroupbox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_collapsiblegroupbox_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_collapsiblegroupbox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_collapsiblegroupbox_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_collapsiblegroupbox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_collapsiblegroupbox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_collapsiblegroupbox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_collapsiblegroupbox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_collapsiblegroupbox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_collapsiblegroupbox_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_collapsiblegroupbox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_collapsiblegroupbox_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_collapsiblegroupbox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_collapsiblegroupbox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_collapsiblegroupbox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_collapsiblegroupbox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_collapsiblegroupbox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_collapsiblegroupbox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_collapsiblegroupbox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_collapsiblegroupbox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_collapsiblegroupbox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_collapsiblegroupbox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_collapsiblegroupbox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_collapsiblegroupbox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_collapsiblegroupbox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_collapsiblegroupbox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_collapsiblegroupbox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_collapsiblegroupbox_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_collapsiblegroupbox_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_collapsiblegroupbox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_collapsiblegroupbox_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_collapsiblegroupbox_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_collapsiblegroupbox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_collapsiblegroupbox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_collapsiblegroupbox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_collapsiblegroupbox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_collapsiblegroupbox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_collapsiblegroupbox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_collapsiblegroupbox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_collapsiblegroupbox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_collapsiblegroupbox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_collapsiblegroupbox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_collapsiblegroupbox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_collapsiblegroupbox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_collapsiblegroupbox_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_collapsiblegroupbox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_collapsiblegroupbox_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_collapsiblegroupbox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_collapsiblegroupbox_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_collapsiblegroupbox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_collapsiblegroupbox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_collapsiblegroupbox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_collapsiblegroupbox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_collapsiblegroupbox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_collapsiblegroupbox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_collapsiblegroupbox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_collapsiblegroupbox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_collapsiblegroupbox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t k_collapsiblegroupbox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_collapsiblegroupbox_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_collapsiblegroupbox_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_collapsiblegroupbox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_collapsiblegroupbox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_collapsiblegroupbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_collapsiblegroupbox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_collapsiblegroupbox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_collapsiblegroupbox_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_collapsiblegroupbox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_collapsiblegroupbox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_collapsiblegroupbox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_collapsiblegroupbox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_collapsiblegroupbox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_collapsiblegroupbox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_collapsiblegroupbox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_collapsiblegroupbox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_collapsiblegroupbox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_collapsiblegroupbox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_collapsiblegroupbox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_collapsiblegroupbox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_collapsiblegroupbox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_collapsiblegroupbox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_collapsiblegroupbox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_collapsiblegroupbox_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_collapsiblegroupbox_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_collapsiblegroupbox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_collapsiblegroupbox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_collapsiblegroupbox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_collapsiblegroupbox_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_collapsiblegroupbox_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_collapsiblegroupbox_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_collapsiblegroupbox_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_collapsiblegroupbox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_collapsiblegroupbox_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_collapsiblegroupbox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_collapsiblegroupbox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_collapsiblegroupbox_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_collapsiblegroupbox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_collapsiblegroupbox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_collapsiblegroupbox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_collapsiblegroupbox_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_collapsiblegroupbox_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_collapsiblegroupbox_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_collapsiblegroupbox_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_collapsiblegroupbox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_collapsiblegroupbox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_collapsiblegroupbox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_collapsiblegroupbox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_collapsiblegroupbox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_collapsiblegroupbox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_collapsiblegroupbox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_collapsiblegroupbox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_collapsiblegroupbox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_collapsiblegroupbox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_collapsiblegroupbox_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_collapsiblegroupbox_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_collapsiblegroupbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_collapsiblegroupbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_collapsiblegroupbox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_collapsiblegroupbox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_collapsiblegroupbox_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_collapsiblegroupbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_collapsiblegroupbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_collapsiblegroupbox_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_collapsiblegroupbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_collapsiblegroupbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_collapsiblegroupbox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_collapsiblegroupbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_collapsiblegroupbox_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_collapsiblegroupbox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_collapsiblegroupbox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_collapsiblegroupbox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_collapsiblegroupbox_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_collapsiblegroupbox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_collapsiblegroupbox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_collapsiblegroupbox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_collapsiblegroupbox_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_collapsiblegroupbox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_collapsiblegroupbox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_collapsiblegroupbox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_collapsiblegroupbox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_collapsiblegroupbox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_collapsiblegroupbox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_collapsiblegroupbox_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_collapsiblegroupbox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_collapsiblegroupbox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_collapsiblegroupbox_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_collapsiblegroupbox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_collapsiblegroupbox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_collapsiblegroupbox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_collapsiblegroupbox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_collapsiblegroupbox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_collapsiblegroupbox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_collapsiblegroupbox_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_collapsiblegroupbox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_collapsiblegroupbox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_collapsiblegroupbox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_collapsiblegroupbox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_collapsiblegroupbox_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_collapsiblegroupbox_dynamic_property_names");
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

QBindingStorage* k_collapsiblegroupbox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_collapsiblegroupbox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_collapsiblegroupbox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_collapsiblegroupbox_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_collapsiblegroupbox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_collapsiblegroupbox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_collapsiblegroupbox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_collapsiblegroupbox_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_collapsiblegroupbox_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_collapsiblegroupbox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_collapsiblegroupbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_collapsiblegroupbox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_collapsiblegroupbox_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_collapsiblegroupbox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_collapsiblegroupbox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_collapsiblegroupbox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_collapsiblegroupbox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_collapsiblegroupbox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_collapsiblegroupbox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_collapsiblegroupbox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_collapsiblegroupbox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_collapsiblegroupbox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_collapsiblegroupbox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_collapsiblegroupbox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_collapsiblegroupbox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_collapsiblegroupbox_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_collapsiblegroupbox_dev_type(void* self) {
    return KCollapsibleGroupBox_DevType((KCollapsibleGroupBox*)self);
}

int32_t k_collapsiblegroupbox_qbase_dev_type(void* self) {
    return KCollapsibleGroupBox_QBaseDevType((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_dev_type(void* self, int32_t (*callback)()) {
    KCollapsibleGroupBox_OnDevType((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_set_visible(void* self, bool visible) {
    KCollapsibleGroupBox_SetVisible((KCollapsibleGroupBox*)self, visible);
}

void k_collapsiblegroupbox_qbase_set_visible(void* self, bool visible) {
    KCollapsibleGroupBox_QBaseSetVisible((KCollapsibleGroupBox*)self, visible);
}

void k_collapsiblegroupbox_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KCollapsibleGroupBox_OnSetVisible((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

int32_t k_collapsiblegroupbox_height_for_width(void* self, int param1) {
    return KCollapsibleGroupBox_HeightForWidth((KCollapsibleGroupBox*)self, param1);
}

int32_t k_collapsiblegroupbox_qbase_height_for_width(void* self, int param1) {
    return KCollapsibleGroupBox_QBaseHeightForWidth((KCollapsibleGroupBox*)self, param1);
}

void k_collapsiblegroupbox_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KCollapsibleGroupBox_OnHeightForWidth((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

bool k_collapsiblegroupbox_has_height_for_width(void* self) {
    return KCollapsibleGroupBox_HasHeightForWidth((KCollapsibleGroupBox*)self);
}

bool k_collapsiblegroupbox_qbase_has_height_for_width(void* self) {
    return KCollapsibleGroupBox_QBaseHasHeightForWidth((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_has_height_for_width(void* self, bool (*callback)()) {
    KCollapsibleGroupBox_OnHasHeightForWidth((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

QPaintEngine* k_collapsiblegroupbox_paint_engine(void* self) {
    return KCollapsibleGroupBox_PaintEngine((KCollapsibleGroupBox*)self);
}

QPaintEngine* k_collapsiblegroupbox_qbase_paint_engine(void* self) {
    return KCollapsibleGroupBox_QBasePaintEngine((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KCollapsibleGroupBox_OnPaintEngine((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_mouse_release_event(void* self, void* event) {
    KCollapsibleGroupBox_MouseReleaseEvent((KCollapsibleGroupBox*)self, (QMouseEvent*)event);
}

void k_collapsiblegroupbox_qbase_mouse_release_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseMouseReleaseEvent((KCollapsibleGroupBox*)self, (QMouseEvent*)event);
}

void k_collapsiblegroupbox_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnMouseReleaseEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_mouse_double_click_event(void* self, void* event) {
    KCollapsibleGroupBox_MouseDoubleClickEvent((KCollapsibleGroupBox*)self, (QMouseEvent*)event);
}

void k_collapsiblegroupbox_qbase_mouse_double_click_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseMouseDoubleClickEvent((KCollapsibleGroupBox*)self, (QMouseEvent*)event);
}

void k_collapsiblegroupbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnMouseDoubleClickEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_wheel_event(void* self, void* event) {
    KCollapsibleGroupBox_WheelEvent((KCollapsibleGroupBox*)self, (QWheelEvent*)event);
}

void k_collapsiblegroupbox_qbase_wheel_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseWheelEvent((KCollapsibleGroupBox*)self, (QWheelEvent*)event);
}

void k_collapsiblegroupbox_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnWheelEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_key_release_event(void* self, void* event) {
    KCollapsibleGroupBox_KeyReleaseEvent((KCollapsibleGroupBox*)self, (QKeyEvent*)event);
}

void k_collapsiblegroupbox_qbase_key_release_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseKeyReleaseEvent((KCollapsibleGroupBox*)self, (QKeyEvent*)event);
}

void k_collapsiblegroupbox_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnKeyReleaseEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_focus_in_event(void* self, void* event) {
    KCollapsibleGroupBox_FocusInEvent((KCollapsibleGroupBox*)self, (QFocusEvent*)event);
}

void k_collapsiblegroupbox_qbase_focus_in_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseFocusInEvent((KCollapsibleGroupBox*)self, (QFocusEvent*)event);
}

void k_collapsiblegroupbox_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnFocusInEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_focus_out_event(void* self, void* event) {
    KCollapsibleGroupBox_FocusOutEvent((KCollapsibleGroupBox*)self, (QFocusEvent*)event);
}

void k_collapsiblegroupbox_qbase_focus_out_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseFocusOutEvent((KCollapsibleGroupBox*)self, (QFocusEvent*)event);
}

void k_collapsiblegroupbox_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnFocusOutEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_enter_event(void* self, void* event) {
    KCollapsibleGroupBox_EnterEvent((KCollapsibleGroupBox*)self, (QEnterEvent*)event);
}

void k_collapsiblegroupbox_qbase_enter_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseEnterEvent((KCollapsibleGroupBox*)self, (QEnterEvent*)event);
}

void k_collapsiblegroupbox_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnEnterEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_move_event(void* self, void* event) {
    KCollapsibleGroupBox_MoveEvent((KCollapsibleGroupBox*)self, (QMoveEvent*)event);
}

void k_collapsiblegroupbox_qbase_move_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseMoveEvent((KCollapsibleGroupBox*)self, (QMoveEvent*)event);
}

void k_collapsiblegroupbox_on_move_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnMoveEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_close_event(void* self, void* event) {
    KCollapsibleGroupBox_CloseEvent((KCollapsibleGroupBox*)self, (QCloseEvent*)event);
}

void k_collapsiblegroupbox_qbase_close_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseCloseEvent((KCollapsibleGroupBox*)self, (QCloseEvent*)event);
}

void k_collapsiblegroupbox_on_close_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnCloseEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_context_menu_event(void* self, void* event) {
    KCollapsibleGroupBox_ContextMenuEvent((KCollapsibleGroupBox*)self, (QContextMenuEvent*)event);
}

void k_collapsiblegroupbox_qbase_context_menu_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseContextMenuEvent((KCollapsibleGroupBox*)self, (QContextMenuEvent*)event);
}

void k_collapsiblegroupbox_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnContextMenuEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_tablet_event(void* self, void* event) {
    KCollapsibleGroupBox_TabletEvent((KCollapsibleGroupBox*)self, (QTabletEvent*)event);
}

void k_collapsiblegroupbox_qbase_tablet_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseTabletEvent((KCollapsibleGroupBox*)self, (QTabletEvent*)event);
}

void k_collapsiblegroupbox_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnTabletEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_action_event(void* self, void* event) {
    KCollapsibleGroupBox_ActionEvent((KCollapsibleGroupBox*)self, (QActionEvent*)event);
}

void k_collapsiblegroupbox_qbase_action_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseActionEvent((KCollapsibleGroupBox*)self, (QActionEvent*)event);
}

void k_collapsiblegroupbox_on_action_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnActionEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_drag_enter_event(void* self, void* event) {
    KCollapsibleGroupBox_DragEnterEvent((KCollapsibleGroupBox*)self, (QDragEnterEvent*)event);
}

void k_collapsiblegroupbox_qbase_drag_enter_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseDragEnterEvent((KCollapsibleGroupBox*)self, (QDragEnterEvent*)event);
}

void k_collapsiblegroupbox_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnDragEnterEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_drag_move_event(void* self, void* event) {
    KCollapsibleGroupBox_DragMoveEvent((KCollapsibleGroupBox*)self, (QDragMoveEvent*)event);
}

void k_collapsiblegroupbox_qbase_drag_move_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseDragMoveEvent((KCollapsibleGroupBox*)self, (QDragMoveEvent*)event);
}

void k_collapsiblegroupbox_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnDragMoveEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_drag_leave_event(void* self, void* event) {
    KCollapsibleGroupBox_DragLeaveEvent((KCollapsibleGroupBox*)self, (QDragLeaveEvent*)event);
}

void k_collapsiblegroupbox_qbase_drag_leave_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseDragLeaveEvent((KCollapsibleGroupBox*)self, (QDragLeaveEvent*)event);
}

void k_collapsiblegroupbox_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnDragLeaveEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_drop_event(void* self, void* event) {
    KCollapsibleGroupBox_DropEvent((KCollapsibleGroupBox*)self, (QDropEvent*)event);
}

void k_collapsiblegroupbox_qbase_drop_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseDropEvent((KCollapsibleGroupBox*)self, (QDropEvent*)event);
}

void k_collapsiblegroupbox_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnDropEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_show_event(void* self, void* event) {
    KCollapsibleGroupBox_ShowEvent((KCollapsibleGroupBox*)self, (QShowEvent*)event);
}

void k_collapsiblegroupbox_qbase_show_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseShowEvent((KCollapsibleGroupBox*)self, (QShowEvent*)event);
}

void k_collapsiblegroupbox_on_show_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnShowEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_hide_event(void* self, void* event) {
    KCollapsibleGroupBox_HideEvent((KCollapsibleGroupBox*)self, (QHideEvent*)event);
}

void k_collapsiblegroupbox_qbase_hide_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseHideEvent((KCollapsibleGroupBox*)self, (QHideEvent*)event);
}

void k_collapsiblegroupbox_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnHideEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

bool k_collapsiblegroupbox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KCollapsibleGroupBox_NativeEvent((KCollapsibleGroupBox*)self, qstring(eventType), message, result);
}

bool k_collapsiblegroupbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KCollapsibleGroupBox_QBaseNativeEvent((KCollapsibleGroupBox*)self, qstring(eventType), message, result);
}

void k_collapsiblegroupbox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KCollapsibleGroupBox_OnNativeEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_change_event(void* self, void* param1) {
    KCollapsibleGroupBox_ChangeEvent((KCollapsibleGroupBox*)self, (QEvent*)param1);
}

void k_collapsiblegroupbox_qbase_change_event(void* self, void* param1) {
    KCollapsibleGroupBox_QBaseChangeEvent((KCollapsibleGroupBox*)self, (QEvent*)param1);
}

void k_collapsiblegroupbox_on_change_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnChangeEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

int32_t k_collapsiblegroupbox_metric(void* self, int32_t param1) {
    return KCollapsibleGroupBox_Metric((KCollapsibleGroupBox*)self, param1);
}

int32_t k_collapsiblegroupbox_qbase_metric(void* self, int32_t param1) {
    return KCollapsibleGroupBox_QBaseMetric((KCollapsibleGroupBox*)self, param1);
}

void k_collapsiblegroupbox_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KCollapsibleGroupBox_OnMetric((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_init_painter(void* self, void* painter) {
    KCollapsibleGroupBox_InitPainter((KCollapsibleGroupBox*)self, (QPainter*)painter);
}

void k_collapsiblegroupbox_qbase_init_painter(void* self, void* painter) {
    KCollapsibleGroupBox_QBaseInitPainter((KCollapsibleGroupBox*)self, (QPainter*)painter);
}

void k_collapsiblegroupbox_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnInitPainter((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

QPaintDevice* k_collapsiblegroupbox_redirected(void* self, void* offset) {
    return KCollapsibleGroupBox_Redirected((KCollapsibleGroupBox*)self, (QPoint*)offset);
}

QPaintDevice* k_collapsiblegroupbox_qbase_redirected(void* self, void* offset) {
    return KCollapsibleGroupBox_QBaseRedirected((KCollapsibleGroupBox*)self, (QPoint*)offset);
}

void k_collapsiblegroupbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnRedirected((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

QPainter* k_collapsiblegroupbox_shared_painter(void* self) {
    return KCollapsibleGroupBox_SharedPainter((KCollapsibleGroupBox*)self);
}

QPainter* k_collapsiblegroupbox_qbase_shared_painter(void* self) {
    return KCollapsibleGroupBox_QBaseSharedPainter((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_shared_painter(void* self, QPainter* (*callback)()) {
    KCollapsibleGroupBox_OnSharedPainter((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_input_method_event(void* self, void* param1) {
    KCollapsibleGroupBox_InputMethodEvent((KCollapsibleGroupBox*)self, (QInputMethodEvent*)param1);
}

void k_collapsiblegroupbox_qbase_input_method_event(void* self, void* param1) {
    KCollapsibleGroupBox_QBaseInputMethodEvent((KCollapsibleGroupBox*)self, (QInputMethodEvent*)param1);
}

void k_collapsiblegroupbox_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnInputMethodEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

QVariant* k_collapsiblegroupbox_input_method_query(void* self, int64_t param1) {
    return KCollapsibleGroupBox_InputMethodQuery((KCollapsibleGroupBox*)self, param1);
}

QVariant* k_collapsiblegroupbox_qbase_input_method_query(void* self, int64_t param1) {
    return KCollapsibleGroupBox_QBaseInputMethodQuery((KCollapsibleGroupBox*)self, param1);
}

void k_collapsiblegroupbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KCollapsibleGroupBox_OnInputMethodQuery((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

bool k_collapsiblegroupbox_focus_next_prev_child(void* self, bool next) {
    return KCollapsibleGroupBox_FocusNextPrevChild((KCollapsibleGroupBox*)self, next);
}

bool k_collapsiblegroupbox_qbase_focus_next_prev_child(void* self, bool next) {
    return KCollapsibleGroupBox_QBaseFocusNextPrevChild((KCollapsibleGroupBox*)self, next);
}

void k_collapsiblegroupbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KCollapsibleGroupBox_OnFocusNextPrevChild((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

bool k_collapsiblegroupbox_event_filter(void* self, void* watched, void* event) {
    return KCollapsibleGroupBox_EventFilter((KCollapsibleGroupBox*)self, (QObject*)watched, (QEvent*)event);
}

bool k_collapsiblegroupbox_qbase_event_filter(void* self, void* watched, void* event) {
    return KCollapsibleGroupBox_QBaseEventFilter((KCollapsibleGroupBox*)self, (QObject*)watched, (QEvent*)event);
}

void k_collapsiblegroupbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCollapsibleGroupBox_OnEventFilter((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_timer_event(void* self, void* event) {
    KCollapsibleGroupBox_TimerEvent((KCollapsibleGroupBox*)self, (QTimerEvent*)event);
}

void k_collapsiblegroupbox_qbase_timer_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseTimerEvent((KCollapsibleGroupBox*)self, (QTimerEvent*)event);
}

void k_collapsiblegroupbox_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnTimerEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_child_event(void* self, void* event) {
    KCollapsibleGroupBox_ChildEvent((KCollapsibleGroupBox*)self, (QChildEvent*)event);
}

void k_collapsiblegroupbox_qbase_child_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseChildEvent((KCollapsibleGroupBox*)self, (QChildEvent*)event);
}

void k_collapsiblegroupbox_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnChildEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_custom_event(void* self, void* event) {
    KCollapsibleGroupBox_CustomEvent((KCollapsibleGroupBox*)self, (QEvent*)event);
}

void k_collapsiblegroupbox_qbase_custom_event(void* self, void* event) {
    KCollapsibleGroupBox_QBaseCustomEvent((KCollapsibleGroupBox*)self, (QEvent*)event);
}

void k_collapsiblegroupbox_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnCustomEvent((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_connect_notify(void* self, void* signal) {
    KCollapsibleGroupBox_ConnectNotify((KCollapsibleGroupBox*)self, (QMetaMethod*)signal);
}

void k_collapsiblegroupbox_qbase_connect_notify(void* self, void* signal) {
    KCollapsibleGroupBox_QBaseConnectNotify((KCollapsibleGroupBox*)self, (QMetaMethod*)signal);
}

void k_collapsiblegroupbox_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnConnectNotify((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_disconnect_notify(void* self, void* signal) {
    KCollapsibleGroupBox_DisconnectNotify((KCollapsibleGroupBox*)self, (QMetaMethod*)signal);
}

void k_collapsiblegroupbox_qbase_disconnect_notify(void* self, void* signal) {
    KCollapsibleGroupBox_QBaseDisconnectNotify((KCollapsibleGroupBox*)self, (QMetaMethod*)signal);
}

void k_collapsiblegroupbox_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnDisconnectNotify((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_update_micro_focus(void* self) {
    KCollapsibleGroupBox_UpdateMicroFocus((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_qbase_update_micro_focus(void* self) {
    KCollapsibleGroupBox_QBaseUpdateMicroFocus((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_update_micro_focus(void* self, void (*callback)()) {
    KCollapsibleGroupBox_OnUpdateMicroFocus((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_create(void* self) {
    KCollapsibleGroupBox_Create((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_qbase_create(void* self) {
    KCollapsibleGroupBox_QBaseCreate((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_create(void* self, void (*callback)()) {
    KCollapsibleGroupBox_OnCreate((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_destroy(void* self) {
    KCollapsibleGroupBox_Destroy((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_qbase_destroy(void* self) {
    KCollapsibleGroupBox_QBaseDestroy((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_destroy(void* self, void (*callback)()) {
    KCollapsibleGroupBox_OnDestroy((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

bool k_collapsiblegroupbox_focus_next_child(void* self) {
    return KCollapsibleGroupBox_FocusNextChild((KCollapsibleGroupBox*)self);
}

bool k_collapsiblegroupbox_qbase_focus_next_child(void* self) {
    return KCollapsibleGroupBox_QBaseFocusNextChild((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_focus_next_child(void* self, bool (*callback)()) {
    KCollapsibleGroupBox_OnFocusNextChild((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

bool k_collapsiblegroupbox_focus_previous_child(void* self) {
    return KCollapsibleGroupBox_FocusPreviousChild((KCollapsibleGroupBox*)self);
}

bool k_collapsiblegroupbox_qbase_focus_previous_child(void* self) {
    return KCollapsibleGroupBox_QBaseFocusPreviousChild((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_focus_previous_child(void* self, bool (*callback)()) {
    KCollapsibleGroupBox_OnFocusPreviousChild((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

QObject* k_collapsiblegroupbox_sender(void* self) {
    return KCollapsibleGroupBox_Sender((KCollapsibleGroupBox*)self);
}

QObject* k_collapsiblegroupbox_qbase_sender(void* self) {
    return KCollapsibleGroupBox_QBaseSender((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_sender(void* self, QObject* (*callback)()) {
    KCollapsibleGroupBox_OnSender((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

int32_t k_collapsiblegroupbox_sender_signal_index(void* self) {
    return KCollapsibleGroupBox_SenderSignalIndex((KCollapsibleGroupBox*)self);
}

int32_t k_collapsiblegroupbox_qbase_sender_signal_index(void* self) {
    return KCollapsibleGroupBox_QBaseSenderSignalIndex((KCollapsibleGroupBox*)self);
}

void k_collapsiblegroupbox_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KCollapsibleGroupBox_OnSenderSignalIndex((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

int32_t k_collapsiblegroupbox_receivers(void* self, const char* signal) {
    return KCollapsibleGroupBox_Receivers((KCollapsibleGroupBox*)self, signal);
}

int32_t k_collapsiblegroupbox_qbase_receivers(void* self, const char* signal) {
    return KCollapsibleGroupBox_QBaseReceivers((KCollapsibleGroupBox*)self, signal);
}

void k_collapsiblegroupbox_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KCollapsibleGroupBox_OnReceivers((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

bool k_collapsiblegroupbox_is_signal_connected(void* self, void* signal) {
    return KCollapsibleGroupBox_IsSignalConnected((KCollapsibleGroupBox*)self, (QMetaMethod*)signal);
}

bool k_collapsiblegroupbox_qbase_is_signal_connected(void* self, void* signal) {
    return KCollapsibleGroupBox_QBaseIsSignalConnected((KCollapsibleGroupBox*)self, (QMetaMethod*)signal);
}

void k_collapsiblegroupbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KCollapsibleGroupBox_OnIsSignalConnected((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

double k_collapsiblegroupbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KCollapsibleGroupBox_GetDecodedMetricF((KCollapsibleGroupBox*)self, metricA, metricB);
}

double k_collapsiblegroupbox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KCollapsibleGroupBox_QBaseGetDecodedMetricF((KCollapsibleGroupBox*)self, metricA, metricB);
}

void k_collapsiblegroupbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KCollapsibleGroupBox_OnGetDecodedMetricF((KCollapsibleGroupBox*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_collapsiblegroupbox_delete(void* self) {
    KCollapsibleGroupBox_Delete((KCollapsibleGroupBox*)(self));
}
