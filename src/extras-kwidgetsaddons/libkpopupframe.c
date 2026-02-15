#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqframe.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkpopupframe.hpp"
#include "libkpopupframe.h"

KPopupFrame* k_popupframe_new(void* parent) {
    return KPopupFrame_new((QWidget*)parent);
}

KPopupFrame* k_popupframe_new2() {
    return KPopupFrame_new2();
}

const QMetaObject* k_popupframe_meta_object(void* self) {
    return KPopupFrame_MetaObject((KPopupFrame*)self);
}

void k_popupframe_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KPopupFrame_OnMetaObject((KPopupFrame*)self, (intptr_t)callback);
}

const QMetaObject* k_popupframe_qbase_meta_object(void* self) {
    return KPopupFrame_QBaseMetaObject((KPopupFrame*)self);
}

void* k_popupframe_metacast(void* self, const char* param1) {
    return KPopupFrame_Metacast((KPopupFrame*)self, param1);
}

void k_popupframe_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KPopupFrame_OnMetacast((KPopupFrame*)self, (intptr_t)callback);
}

void* k_popupframe_qbase_metacast(void* self, const char* param1) {
    return KPopupFrame_QBaseMetacast((KPopupFrame*)self, param1);
}

int32_t k_popupframe_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPopupFrame_Metacall((KPopupFrame*)self, param1, param2, param3);
}

void k_popupframe_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPopupFrame_OnMetacall((KPopupFrame*)self, (intptr_t)callback);
}

int32_t k_popupframe_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPopupFrame_QBaseMetacall((KPopupFrame*)self, param1, param2, param3);
}

const char* k_popupframe_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_popupframe_key_press_event(void* self, void* e) {
    KPopupFrame_KeyPressEvent((KPopupFrame*)self, (QKeyEvent*)e);
}

void k_popupframe_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnKeyPressEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_qbase_key_press_event(void* self, void* e) {
    KPopupFrame_QBaseKeyPressEvent((KPopupFrame*)self, (QKeyEvent*)e);
}

void k_popupframe_hide_event(void* self, void* e) {
    KPopupFrame_HideEvent((KPopupFrame*)self, (QHideEvent*)e);
}

void k_popupframe_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnHideEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_qbase_hide_event(void* self, void* e) {
    KPopupFrame_QBaseHideEvent((KPopupFrame*)self, (QHideEvent*)e);
}

void k_popupframe_close(void* self, int r) {
    KPopupFrame_Close((KPopupFrame*)self, r);
}

void k_popupframe_set_main_widget(void* self, void* m) {
    KPopupFrame_SetMainWidget((KPopupFrame*)self, (QWidget*)m);
}

void k_popupframe_resize_event(void* self, void* resize) {
    KPopupFrame_ResizeEvent((KPopupFrame*)self, (QResizeEvent*)resize);
}

void k_popupframe_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnResizeEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_qbase_resize_event(void* self, void* resize) {
    KPopupFrame_QBaseResizeEvent((KPopupFrame*)self, (QResizeEvent*)resize);
}

void k_popupframe_popup(void* self, void* pos) {
    KPopupFrame_Popup((KPopupFrame*)self, (QPoint*)pos);
}

int32_t k_popupframe_exec(void* self, void* p) {
    return KPopupFrame_Exec((KPopupFrame*)self, (QPoint*)p);
}

int32_t k_popupframe_exec2(void* self, int x, int y) {
    return KPopupFrame_Exec2((KPopupFrame*)self, x, y);
}

void k_popupframe_leave_modality(void* self) {
    KPopupFrame_LeaveModality((KPopupFrame*)self);
}

void k_popupframe_on_leave_modality(void* self, void (*callback)(void*)) {
    KPopupFrame_Connect_LeaveModality((KPopupFrame*)self, (intptr_t)callback);
}

const char* k_popupframe_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_popupframe_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_popupframe_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_popupframe_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_popupframe_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_popupframe_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_popupframe_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_popupframe_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_popupframe_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_popupframe_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_popupframe_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_popupframe_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_popupframe_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_popupframe_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_popupframe_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_popupframe_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_popupframe_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_popupframe_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_popupframe_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_popupframe_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_popupframe_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_popupframe_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_popupframe_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_popupframe_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_popupframe_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_popupframe_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_popupframe_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_popupframe_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_popupframe_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_popupframe_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_popupframe_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_popupframe_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_popupframe_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_popupframe_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_popupframe_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_popupframe_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_popupframe_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_popupframe_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_popupframe_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_popupframe_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_popupframe_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_popupframe_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_popupframe_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_popupframe_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_popupframe_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_popupframe_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_popupframe_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_popupframe_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_popupframe_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_popupframe_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_popupframe_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_popupframe_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_popupframe_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_popupframe_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_popupframe_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_popupframe_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_popupframe_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_popupframe_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_popupframe_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_popupframe_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_popupframe_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_popupframe_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_popupframe_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_popupframe_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_popupframe_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_popupframe_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_popupframe_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_popupframe_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_popupframe_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_popupframe_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_popupframe_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_popupframe_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_popupframe_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_popupframe_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_popupframe_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_popupframe_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_popupframe_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_popupframe_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_popupframe_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_popupframe_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_popupframe_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_popupframe_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_popupframe_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_popupframe_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_popupframe_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_popupframe_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_popupframe_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_popupframe_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_popupframe_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_popupframe_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_popupframe_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_popupframe_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_popupframe_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_popupframe_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_popupframe_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_popupframe_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_popupframe_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_popupframe_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_popupframe_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_popupframe_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_popupframe_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_popupframe_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_popupframe_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_popupframe_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_popupframe_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_popupframe_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_popupframe_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_popupframe_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_popupframe_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_popupframe_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_popupframe_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_popupframe_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_popupframe_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_popupframe_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_popupframe_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_popupframe_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_popupframe_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_popupframe_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_popupframe_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_popupframe_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_popupframe_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_popupframe_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_popupframe_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_popupframe_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_popupframe_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_popupframe_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_popupframe_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_popupframe_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_popupframe_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_popupframe_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_popupframe_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_popupframe_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_popupframe_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_popupframe_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_popupframe_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_popupframe_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_popupframe_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_popupframe_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_popupframe_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_popupframe_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_popupframe_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_popupframe_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_popupframe_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_popupframe_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_popupframe_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_popupframe_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_popupframe_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_popupframe_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_popupframe_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_popupframe_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_popupframe_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_popupframe_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_popupframe_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_popupframe_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_popupframe_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_popupframe_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_popupframe_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_popupframe_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_popupframe_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_popupframe_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_popupframe_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_popupframe_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_popupframe_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_popupframe_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_popupframe_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_popupframe_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_popupframe_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_popupframe_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_popupframe_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_popupframe_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_popupframe_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_popupframe_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_popupframe_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_popupframe_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_popupframe_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_popupframe_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_popupframe_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_popupframe_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_popupframe_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_popupframe_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_popupframe_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_popupframe_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_popupframe_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_popupframe_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_popupframe_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_popupframe_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_popupframe_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_popupframe_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_popupframe_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

void k_popupframe_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_popupframe_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_popupframe_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_popupframe_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_popupframe_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_popupframe_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_popupframe_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_popupframe_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_popupframe_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_popupframe_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_popupframe_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_popupframe_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_popupframe_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_popupframe_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_popupframe_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_popupframe_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_popupframe_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_popupframe_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_popupframe_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_popupframe_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_popupframe_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_popupframe_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_popupframe_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_popupframe_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_popupframe_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_popupframe_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_popupframe_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_popupframe_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_popupframe_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_popupframe_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_popupframe_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_popupframe_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_popupframe_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_popupframe_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_popupframe_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_popupframe_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_popupframe_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_popupframe_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_popupframe_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_popupframe_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_popupframe_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_popupframe_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_popupframe_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_popupframe_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_popupframe_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_popupframe_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_popupframe_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_popupframe_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_popupframe_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_popupframe_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_popupframe_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_popupframe_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_popupframe_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_popupframe_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_popupframe_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_popupframe_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_popupframe_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_popupframe_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_popupframe_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_popupframe_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_popupframe_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_popupframe_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_popupframe_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_popupframe_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_popupframe_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_popupframe_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_popupframe_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_popupframe_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_popupframe_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_popupframe_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_popupframe_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_popupframe_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_popupframe_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_popupframe_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_popupframe_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_popupframe_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_popupframe_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_popupframe_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_popupframe_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_popupframe_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_popupframe_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_popupframe_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_popupframe_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_popupframe_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_popupframe_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_popupframe_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_popupframe_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_popupframe_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_popupframe_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_popupframe_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_popupframe_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_popupframe_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_popupframe_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_popupframe_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_popupframe_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_popupframe_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_popupframe_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_popupframe_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_popupframe_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_popupframe_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_popupframe_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_popupframe_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_popupframe_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_popupframe_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_popupframe_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_popupframe_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_popupframe_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_popupframe_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_popupframe_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_popupframe_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_popupframe_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_popupframe_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_popupframe_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_popupframe_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_popupframe_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_popupframe_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_popupframe_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_popupframe_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_popupframe_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_popupframe_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_popupframe_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_popupframe_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_popupframe_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_popupframe_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_popupframe_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_popupframe_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_popupframe_dynamic_property_names\n");
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

QBindingStorage* k_popupframe_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_popupframe_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_popupframe_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_popupframe_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_popupframe_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_popupframe_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_popupframe_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_popupframe_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_popupframe_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_popupframe_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_popupframe_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_popupframe_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_popupframe_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_popupframe_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_popupframe_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_popupframe_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_popupframe_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_popupframe_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_popupframe_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_popupframe_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_popupframe_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_popupframe_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_popupframe_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_popupframe_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_popupframe_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_popupframe_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_popupframe_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_popupframe_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_popupframe_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_popupframe_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_popupframe_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* k_popupframe_size_hint(void* self) {
    return KPopupFrame_SizeHint((KPopupFrame*)self);
}

QSize* k_popupframe_qbase_size_hint(void* self) {
    return KPopupFrame_QBaseSizeHint((KPopupFrame*)self);
}

void k_popupframe_on_size_hint(void* self, QSize* (*callback)()) {
    KPopupFrame_OnSizeHint((KPopupFrame*)self, (intptr_t)callback);
}

bool k_popupframe_event(void* self, void* e) {
    return KPopupFrame_Event((KPopupFrame*)self, (QEvent*)e);
}

bool k_popupframe_qbase_event(void* self, void* e) {
    return KPopupFrame_QBaseEvent((KPopupFrame*)self, (QEvent*)e);
}

void k_popupframe_on_event(void* self, bool (*callback)(void*, void*)) {
    KPopupFrame_OnEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_paint_event(void* self, void* param1) {
    KPopupFrame_PaintEvent((KPopupFrame*)self, (QPaintEvent*)param1);
}

void k_popupframe_qbase_paint_event(void* self, void* param1) {
    KPopupFrame_QBasePaintEvent((KPopupFrame*)self, (QPaintEvent*)param1);
}

void k_popupframe_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnPaintEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_change_event(void* self, void* param1) {
    KPopupFrame_ChangeEvent((KPopupFrame*)self, (QEvent*)param1);
}

void k_popupframe_qbase_change_event(void* self, void* param1) {
    KPopupFrame_QBaseChangeEvent((KPopupFrame*)self, (QEvent*)param1);
}

void k_popupframe_on_change_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnChangeEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_init_style_option(void* self, void* option) {
    KPopupFrame_InitStyleOption((KPopupFrame*)self, (QStyleOptionFrame*)option);
}

void k_popupframe_qbase_init_style_option(void* self, void* option) {
    KPopupFrame_QBaseInitStyleOption((KPopupFrame*)self, (QStyleOptionFrame*)option);
}

void k_popupframe_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnInitStyleOption((KPopupFrame*)self, (intptr_t)callback);
}

int32_t k_popupframe_dev_type(void* self) {
    return KPopupFrame_DevType((KPopupFrame*)self);
}

int32_t k_popupframe_qbase_dev_type(void* self) {
    return KPopupFrame_QBaseDevType((KPopupFrame*)self);
}

void k_popupframe_on_dev_type(void* self, int32_t (*callback)()) {
    KPopupFrame_OnDevType((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_set_visible(void* self, bool visible) {
    KPopupFrame_SetVisible((KPopupFrame*)self, visible);
}

void k_popupframe_qbase_set_visible(void* self, bool visible) {
    KPopupFrame_QBaseSetVisible((KPopupFrame*)self, visible);
}

void k_popupframe_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KPopupFrame_OnSetVisible((KPopupFrame*)self, (intptr_t)callback);
}

QSize* k_popupframe_minimum_size_hint(void* self) {
    return KPopupFrame_MinimumSizeHint((KPopupFrame*)self);
}

QSize* k_popupframe_qbase_minimum_size_hint(void* self) {
    return KPopupFrame_QBaseMinimumSizeHint((KPopupFrame*)self);
}

void k_popupframe_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KPopupFrame_OnMinimumSizeHint((KPopupFrame*)self, (intptr_t)callback);
}

int32_t k_popupframe_height_for_width(void* self, int param1) {
    return KPopupFrame_HeightForWidth((KPopupFrame*)self, param1);
}

int32_t k_popupframe_qbase_height_for_width(void* self, int param1) {
    return KPopupFrame_QBaseHeightForWidth((KPopupFrame*)self, param1);
}

void k_popupframe_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KPopupFrame_OnHeightForWidth((KPopupFrame*)self, (intptr_t)callback);
}

bool k_popupframe_has_height_for_width(void* self) {
    return KPopupFrame_HasHeightForWidth((KPopupFrame*)self);
}

bool k_popupframe_qbase_has_height_for_width(void* self) {
    return KPopupFrame_QBaseHasHeightForWidth((KPopupFrame*)self);
}

void k_popupframe_on_has_height_for_width(void* self, bool (*callback)()) {
    KPopupFrame_OnHasHeightForWidth((KPopupFrame*)self, (intptr_t)callback);
}

QPaintEngine* k_popupframe_paint_engine(void* self) {
    return KPopupFrame_PaintEngine((KPopupFrame*)self);
}

QPaintEngine* k_popupframe_qbase_paint_engine(void* self) {
    return KPopupFrame_QBasePaintEngine((KPopupFrame*)self);
}

void k_popupframe_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KPopupFrame_OnPaintEngine((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_mouse_press_event(void* self, void* event) {
    KPopupFrame_MousePressEvent((KPopupFrame*)self, (QMouseEvent*)event);
}

void k_popupframe_qbase_mouse_press_event(void* self, void* event) {
    KPopupFrame_QBaseMousePressEvent((KPopupFrame*)self, (QMouseEvent*)event);
}

void k_popupframe_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnMousePressEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_mouse_release_event(void* self, void* event) {
    KPopupFrame_MouseReleaseEvent((KPopupFrame*)self, (QMouseEvent*)event);
}

void k_popupframe_qbase_mouse_release_event(void* self, void* event) {
    KPopupFrame_QBaseMouseReleaseEvent((KPopupFrame*)self, (QMouseEvent*)event);
}

void k_popupframe_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnMouseReleaseEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_mouse_double_click_event(void* self, void* event) {
    KPopupFrame_MouseDoubleClickEvent((KPopupFrame*)self, (QMouseEvent*)event);
}

void k_popupframe_qbase_mouse_double_click_event(void* self, void* event) {
    KPopupFrame_QBaseMouseDoubleClickEvent((KPopupFrame*)self, (QMouseEvent*)event);
}

void k_popupframe_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnMouseDoubleClickEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_mouse_move_event(void* self, void* event) {
    KPopupFrame_MouseMoveEvent((KPopupFrame*)self, (QMouseEvent*)event);
}

void k_popupframe_qbase_mouse_move_event(void* self, void* event) {
    KPopupFrame_QBaseMouseMoveEvent((KPopupFrame*)self, (QMouseEvent*)event);
}

void k_popupframe_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnMouseMoveEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_wheel_event(void* self, void* event) {
    KPopupFrame_WheelEvent((KPopupFrame*)self, (QWheelEvent*)event);
}

void k_popupframe_qbase_wheel_event(void* self, void* event) {
    KPopupFrame_QBaseWheelEvent((KPopupFrame*)self, (QWheelEvent*)event);
}

void k_popupframe_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnWheelEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_key_release_event(void* self, void* event) {
    KPopupFrame_KeyReleaseEvent((KPopupFrame*)self, (QKeyEvent*)event);
}

void k_popupframe_qbase_key_release_event(void* self, void* event) {
    KPopupFrame_QBaseKeyReleaseEvent((KPopupFrame*)self, (QKeyEvent*)event);
}

void k_popupframe_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnKeyReleaseEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_focus_in_event(void* self, void* event) {
    KPopupFrame_FocusInEvent((KPopupFrame*)self, (QFocusEvent*)event);
}

void k_popupframe_qbase_focus_in_event(void* self, void* event) {
    KPopupFrame_QBaseFocusInEvent((KPopupFrame*)self, (QFocusEvent*)event);
}

void k_popupframe_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnFocusInEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_focus_out_event(void* self, void* event) {
    KPopupFrame_FocusOutEvent((KPopupFrame*)self, (QFocusEvent*)event);
}

void k_popupframe_qbase_focus_out_event(void* self, void* event) {
    KPopupFrame_QBaseFocusOutEvent((KPopupFrame*)self, (QFocusEvent*)event);
}

void k_popupframe_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnFocusOutEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_enter_event(void* self, void* event) {
    KPopupFrame_EnterEvent((KPopupFrame*)self, (QEnterEvent*)event);
}

void k_popupframe_qbase_enter_event(void* self, void* event) {
    KPopupFrame_QBaseEnterEvent((KPopupFrame*)self, (QEnterEvent*)event);
}

void k_popupframe_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnEnterEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_leave_event(void* self, void* event) {
    KPopupFrame_LeaveEvent((KPopupFrame*)self, (QEvent*)event);
}

void k_popupframe_qbase_leave_event(void* self, void* event) {
    KPopupFrame_QBaseLeaveEvent((KPopupFrame*)self, (QEvent*)event);
}

void k_popupframe_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnLeaveEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_move_event(void* self, void* event) {
    KPopupFrame_MoveEvent((KPopupFrame*)self, (QMoveEvent*)event);
}

void k_popupframe_qbase_move_event(void* self, void* event) {
    KPopupFrame_QBaseMoveEvent((KPopupFrame*)self, (QMoveEvent*)event);
}

void k_popupframe_on_move_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnMoveEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_close_event(void* self, void* event) {
    KPopupFrame_CloseEvent((KPopupFrame*)self, (QCloseEvent*)event);
}

void k_popupframe_qbase_close_event(void* self, void* event) {
    KPopupFrame_QBaseCloseEvent((KPopupFrame*)self, (QCloseEvent*)event);
}

void k_popupframe_on_close_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnCloseEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_context_menu_event(void* self, void* event) {
    KPopupFrame_ContextMenuEvent((KPopupFrame*)self, (QContextMenuEvent*)event);
}

void k_popupframe_qbase_context_menu_event(void* self, void* event) {
    KPopupFrame_QBaseContextMenuEvent((KPopupFrame*)self, (QContextMenuEvent*)event);
}

void k_popupframe_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnContextMenuEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_tablet_event(void* self, void* event) {
    KPopupFrame_TabletEvent((KPopupFrame*)self, (QTabletEvent*)event);
}

void k_popupframe_qbase_tablet_event(void* self, void* event) {
    KPopupFrame_QBaseTabletEvent((KPopupFrame*)self, (QTabletEvent*)event);
}

void k_popupframe_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnTabletEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_action_event(void* self, void* event) {
    KPopupFrame_ActionEvent((KPopupFrame*)self, (QActionEvent*)event);
}

void k_popupframe_qbase_action_event(void* self, void* event) {
    KPopupFrame_QBaseActionEvent((KPopupFrame*)self, (QActionEvent*)event);
}

void k_popupframe_on_action_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnActionEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_drag_enter_event(void* self, void* event) {
    KPopupFrame_DragEnterEvent((KPopupFrame*)self, (QDragEnterEvent*)event);
}

void k_popupframe_qbase_drag_enter_event(void* self, void* event) {
    KPopupFrame_QBaseDragEnterEvent((KPopupFrame*)self, (QDragEnterEvent*)event);
}

void k_popupframe_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnDragEnterEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_drag_move_event(void* self, void* event) {
    KPopupFrame_DragMoveEvent((KPopupFrame*)self, (QDragMoveEvent*)event);
}

void k_popupframe_qbase_drag_move_event(void* self, void* event) {
    KPopupFrame_QBaseDragMoveEvent((KPopupFrame*)self, (QDragMoveEvent*)event);
}

void k_popupframe_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnDragMoveEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_drag_leave_event(void* self, void* event) {
    KPopupFrame_DragLeaveEvent((KPopupFrame*)self, (QDragLeaveEvent*)event);
}

void k_popupframe_qbase_drag_leave_event(void* self, void* event) {
    KPopupFrame_QBaseDragLeaveEvent((KPopupFrame*)self, (QDragLeaveEvent*)event);
}

void k_popupframe_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnDragLeaveEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_drop_event(void* self, void* event) {
    KPopupFrame_DropEvent((KPopupFrame*)self, (QDropEvent*)event);
}

void k_popupframe_qbase_drop_event(void* self, void* event) {
    KPopupFrame_QBaseDropEvent((KPopupFrame*)self, (QDropEvent*)event);
}

void k_popupframe_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnDropEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_show_event(void* self, void* event) {
    KPopupFrame_ShowEvent((KPopupFrame*)self, (QShowEvent*)event);
}

void k_popupframe_qbase_show_event(void* self, void* event) {
    KPopupFrame_QBaseShowEvent((KPopupFrame*)self, (QShowEvent*)event);
}

void k_popupframe_on_show_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnShowEvent((KPopupFrame*)self, (intptr_t)callback);
}

bool k_popupframe_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KPopupFrame_NativeEvent((KPopupFrame*)self, qstring(eventType), message, result);
}

bool k_popupframe_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KPopupFrame_QBaseNativeEvent((KPopupFrame*)self, qstring(eventType), message, result);
}

void k_popupframe_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    KPopupFrame_OnNativeEvent((KPopupFrame*)self, (intptr_t)callback);
}

int32_t k_popupframe_metric(void* self, int32_t param1) {
    return KPopupFrame_Metric((KPopupFrame*)self, param1);
}

int32_t k_popupframe_qbase_metric(void* self, int32_t param1) {
    return KPopupFrame_QBaseMetric((KPopupFrame*)self, param1);
}

void k_popupframe_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KPopupFrame_OnMetric((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_init_painter(void* self, void* painter) {
    KPopupFrame_InitPainter((KPopupFrame*)self, (QPainter*)painter);
}

void k_popupframe_qbase_init_painter(void* self, void* painter) {
    KPopupFrame_QBaseInitPainter((KPopupFrame*)self, (QPainter*)painter);
}

void k_popupframe_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnInitPainter((KPopupFrame*)self, (intptr_t)callback);
}

QPaintDevice* k_popupframe_redirected(void* self, void* offset) {
    return KPopupFrame_Redirected((KPopupFrame*)self, (QPoint*)offset);
}

QPaintDevice* k_popupframe_qbase_redirected(void* self, void* offset) {
    return KPopupFrame_QBaseRedirected((KPopupFrame*)self, (QPoint*)offset);
}

void k_popupframe_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KPopupFrame_OnRedirected((KPopupFrame*)self, (intptr_t)callback);
}

QPainter* k_popupframe_shared_painter(void* self) {
    return KPopupFrame_SharedPainter((KPopupFrame*)self);
}

QPainter* k_popupframe_qbase_shared_painter(void* self) {
    return KPopupFrame_QBaseSharedPainter((KPopupFrame*)self);
}

void k_popupframe_on_shared_painter(void* self, QPainter* (*callback)()) {
    KPopupFrame_OnSharedPainter((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_input_method_event(void* self, void* param1) {
    KPopupFrame_InputMethodEvent((KPopupFrame*)self, (QInputMethodEvent*)param1);
}

void k_popupframe_qbase_input_method_event(void* self, void* param1) {
    KPopupFrame_QBaseInputMethodEvent((KPopupFrame*)self, (QInputMethodEvent*)param1);
}

void k_popupframe_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnInputMethodEvent((KPopupFrame*)self, (intptr_t)callback);
}

QVariant* k_popupframe_input_method_query(void* self, int32_t param1) {
    return KPopupFrame_InputMethodQuery((KPopupFrame*)self, param1);
}

QVariant* k_popupframe_qbase_input_method_query(void* self, int32_t param1) {
    return KPopupFrame_QBaseInputMethodQuery((KPopupFrame*)self, param1);
}

void k_popupframe_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KPopupFrame_OnInputMethodQuery((KPopupFrame*)self, (intptr_t)callback);
}

bool k_popupframe_focus_next_prev_child(void* self, bool next) {
    return KPopupFrame_FocusNextPrevChild((KPopupFrame*)self, next);
}

bool k_popupframe_qbase_focus_next_prev_child(void* self, bool next) {
    return KPopupFrame_QBaseFocusNextPrevChild((KPopupFrame*)self, next);
}

void k_popupframe_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KPopupFrame_OnFocusNextPrevChild((KPopupFrame*)self, (intptr_t)callback);
}

bool k_popupframe_event_filter(void* self, void* watched, void* event) {
    return KPopupFrame_EventFilter((KPopupFrame*)self, (QObject*)watched, (QEvent*)event);
}

bool k_popupframe_qbase_event_filter(void* self, void* watched, void* event) {
    return KPopupFrame_QBaseEventFilter((KPopupFrame*)self, (QObject*)watched, (QEvent*)event);
}

void k_popupframe_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPopupFrame_OnEventFilter((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_timer_event(void* self, void* event) {
    KPopupFrame_TimerEvent((KPopupFrame*)self, (QTimerEvent*)event);
}

void k_popupframe_qbase_timer_event(void* self, void* event) {
    KPopupFrame_QBaseTimerEvent((KPopupFrame*)self, (QTimerEvent*)event);
}

void k_popupframe_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnTimerEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_child_event(void* self, void* event) {
    KPopupFrame_ChildEvent((KPopupFrame*)self, (QChildEvent*)event);
}

void k_popupframe_qbase_child_event(void* self, void* event) {
    KPopupFrame_QBaseChildEvent((KPopupFrame*)self, (QChildEvent*)event);
}

void k_popupframe_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnChildEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_custom_event(void* self, void* event) {
    KPopupFrame_CustomEvent((KPopupFrame*)self, (QEvent*)event);
}

void k_popupframe_qbase_custom_event(void* self, void* event) {
    KPopupFrame_QBaseCustomEvent((KPopupFrame*)self, (QEvent*)event);
}

void k_popupframe_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnCustomEvent((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_connect_notify(void* self, void* signal) {
    KPopupFrame_ConnectNotify((KPopupFrame*)self, (QMetaMethod*)signal);
}

void k_popupframe_qbase_connect_notify(void* self, void* signal) {
    KPopupFrame_QBaseConnectNotify((KPopupFrame*)self, (QMetaMethod*)signal);
}

void k_popupframe_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnConnectNotify((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_disconnect_notify(void* self, void* signal) {
    KPopupFrame_DisconnectNotify((KPopupFrame*)self, (QMetaMethod*)signal);
}

void k_popupframe_qbase_disconnect_notify(void* self, void* signal) {
    KPopupFrame_QBaseDisconnectNotify((KPopupFrame*)self, (QMetaMethod*)signal);
}

void k_popupframe_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnDisconnectNotify((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_draw_frame(void* self, void* param1) {
    KPopupFrame_DrawFrame((KPopupFrame*)self, (QPainter*)param1);
}

void k_popupframe_qbase_draw_frame(void* self, void* param1) {
    KPopupFrame_QBaseDrawFrame((KPopupFrame*)self, (QPainter*)param1);
}

void k_popupframe_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    KPopupFrame_OnDrawFrame((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_update_micro_focus(void* self) {
    KPopupFrame_UpdateMicroFocus((KPopupFrame*)self);
}

void k_popupframe_qbase_update_micro_focus(void* self) {
    KPopupFrame_QBaseUpdateMicroFocus((KPopupFrame*)self);
}

void k_popupframe_on_update_micro_focus(void* self, void (*callback)()) {
    KPopupFrame_OnUpdateMicroFocus((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_create(void* self) {
    KPopupFrame_Create((KPopupFrame*)self);
}

void k_popupframe_qbase_create(void* self) {
    KPopupFrame_QBaseCreate((KPopupFrame*)self);
}

void k_popupframe_on_create(void* self, void (*callback)()) {
    KPopupFrame_OnCreate((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_destroy(void* self) {
    KPopupFrame_Destroy((KPopupFrame*)self);
}

void k_popupframe_qbase_destroy(void* self) {
    KPopupFrame_QBaseDestroy((KPopupFrame*)self);
}

void k_popupframe_on_destroy(void* self, void (*callback)()) {
    KPopupFrame_OnDestroy((KPopupFrame*)self, (intptr_t)callback);
}

bool k_popupframe_focus_next_child(void* self) {
    return KPopupFrame_FocusNextChild((KPopupFrame*)self);
}

bool k_popupframe_qbase_focus_next_child(void* self) {
    return KPopupFrame_QBaseFocusNextChild((KPopupFrame*)self);
}

void k_popupframe_on_focus_next_child(void* self, bool (*callback)()) {
    KPopupFrame_OnFocusNextChild((KPopupFrame*)self, (intptr_t)callback);
}

bool k_popupframe_focus_previous_child(void* self) {
    return KPopupFrame_FocusPreviousChild((KPopupFrame*)self);
}

bool k_popupframe_qbase_focus_previous_child(void* self) {
    return KPopupFrame_QBaseFocusPreviousChild((KPopupFrame*)self);
}

void k_popupframe_on_focus_previous_child(void* self, bool (*callback)()) {
    KPopupFrame_OnFocusPreviousChild((KPopupFrame*)self, (intptr_t)callback);
}

QObject* k_popupframe_sender(void* self) {
    return KPopupFrame_Sender((KPopupFrame*)self);
}

QObject* k_popupframe_qbase_sender(void* self) {
    return KPopupFrame_QBaseSender((KPopupFrame*)self);
}

void k_popupframe_on_sender(void* self, QObject* (*callback)()) {
    KPopupFrame_OnSender((KPopupFrame*)self, (intptr_t)callback);
}

int32_t k_popupframe_sender_signal_index(void* self) {
    return KPopupFrame_SenderSignalIndex((KPopupFrame*)self);
}

int32_t k_popupframe_qbase_sender_signal_index(void* self) {
    return KPopupFrame_QBaseSenderSignalIndex((KPopupFrame*)self);
}

void k_popupframe_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPopupFrame_OnSenderSignalIndex((KPopupFrame*)self, (intptr_t)callback);
}

int32_t k_popupframe_receivers(void* self, const char* signal) {
    return KPopupFrame_Receivers((KPopupFrame*)self, signal);
}

int32_t k_popupframe_qbase_receivers(void* self, const char* signal) {
    return KPopupFrame_QBaseReceivers((KPopupFrame*)self, signal);
}

void k_popupframe_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPopupFrame_OnReceivers((KPopupFrame*)self, (intptr_t)callback);
}

bool k_popupframe_is_signal_connected(void* self, void* signal) {
    return KPopupFrame_IsSignalConnected((KPopupFrame*)self, (QMetaMethod*)signal);
}

bool k_popupframe_qbase_is_signal_connected(void* self, void* signal) {
    return KPopupFrame_QBaseIsSignalConnected((KPopupFrame*)self, (QMetaMethod*)signal);
}

void k_popupframe_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPopupFrame_OnIsSignalConnected((KPopupFrame*)self, (intptr_t)callback);
}

double k_popupframe_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPopupFrame_GetDecodedMetricF((KPopupFrame*)self, metricA, metricB);
}

double k_popupframe_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPopupFrame_QBaseGetDecodedMetricF((KPopupFrame*)self, metricA, metricB);
}

void k_popupframe_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KPopupFrame_OnGetDecodedMetricF((KPopupFrame*)self, (intptr_t)callback);
}

void k_popupframe_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_popupframe_delete(void* self) {
    KPopupFrame_Delete((KPopupFrame*)(self));
}
