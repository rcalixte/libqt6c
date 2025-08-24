#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqimage.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpixmap.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkpixmapregionselectorwidget.hpp"
#include "libkpixmapregionselectorwidget.h"

KPixmapRegionSelectorWidget* k_pixmapregionselectorwidget_new(void* parent) {
    return KPixmapRegionSelectorWidget_new((QWidget*)parent);
}

KPixmapRegionSelectorWidget* k_pixmapregionselectorwidget_new2() {
    return KPixmapRegionSelectorWidget_new2();
}

const QMetaObject* k_pixmapregionselectorwidget_meta_object(void* self) {
    return KPixmapRegionSelectorWidget_MetaObject((KPixmapRegionSelectorWidget*)self);
}

void* k_pixmapregionselectorwidget_metacast(void* self, const char* param1) {
    return KPixmapRegionSelectorWidget_Metacast((KPixmapRegionSelectorWidget*)self, param1);
}

int32_t k_pixmapregionselectorwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPixmapRegionSelectorWidget_Metacall((KPixmapRegionSelectorWidget*)self, param1, param2, param3);
}

void k_pixmapregionselectorwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPixmapRegionSelectorWidget_OnMetacall((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

int32_t k_pixmapregionselectorwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPixmapRegionSelectorWidget_QBaseMetacall((KPixmapRegionSelectorWidget*)self, param1, param2, param3);
}

const char* k_pixmapregionselectorwidget_tr(const char* s) {
    libqt_string _str = KPixmapRegionSelectorWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectorwidget_set_pixmap(void* self, void* pixmap) {
    KPixmapRegionSelectorWidget_SetPixmap((KPixmapRegionSelectorWidget*)self, (QPixmap*)pixmap);
}

QPixmap* k_pixmapregionselectorwidget_pixmap(void* self) {
    return KPixmapRegionSelectorWidget_Pixmap((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_set_selected_region(void* self, void* rect) {
    KPixmapRegionSelectorWidget_SetSelectedRegion((KPixmapRegionSelectorWidget*)self, (QRect*)rect);
}

QRect* k_pixmapregionselectorwidget_selected_region(void* self) {
    return KPixmapRegionSelectorWidget_SelectedRegion((KPixmapRegionSelectorWidget*)self);
}

QRect* k_pixmapregionselectorwidget_unzoomed_selected_region(void* self) {
    return KPixmapRegionSelectorWidget_UnzoomedSelectedRegion((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_reset_selection(void* self) {
    KPixmapRegionSelectorWidget_ResetSelection((KPixmapRegionSelectorWidget*)self);
}

QImage* k_pixmapregionselectorwidget_selected_image(void* self) {
    return KPixmapRegionSelectorWidget_SelectedImage((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_set_selection_aspect_ratio(void* self, int width, int height) {
    KPixmapRegionSelectorWidget_SetSelectionAspectRatio((KPixmapRegionSelectorWidget*)self, width, height);
}

void k_pixmapregionselectorwidget_set_free_selection_aspect_ratio(void* self) {
    KPixmapRegionSelectorWidget_SetFreeSelectionAspectRatio((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_set_maximum_widget_size(void* self, int width, int height) {
    KPixmapRegionSelectorWidget_SetMaximumWidgetSize((KPixmapRegionSelectorWidget*)self, width, height);
}

void k_pixmapregionselectorwidget_rotate(void* self, int32_t direction) {
    KPixmapRegionSelectorWidget_Rotate((KPixmapRegionSelectorWidget*)self, direction);
}

void k_pixmapregionselectorwidget_rotate_clockwise(void* self) {
    KPixmapRegionSelectorWidget_RotateClockwise((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_rotate_counterclockwise(void* self) {
    KPixmapRegionSelectorWidget_RotateCounterclockwise((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_pixmap_rotated(void* self) {
    KPixmapRegionSelectorWidget_PixmapRotated((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_pixmap_rotated(void* self, void (*callback)(void*)) {
    KPixmapRegionSelectorWidget_Connect_PixmapRotated((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

QMenu* k_pixmapregionselectorwidget_create_popup_menu(void* self) {
    return KPixmapRegionSelectorWidget_CreatePopupMenu((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_create_popup_menu(void* self, QMenu* (*callback)()) {
    KPixmapRegionSelectorWidget_OnCreatePopupMenu((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

QMenu* k_pixmapregionselectorwidget_qbase_create_popup_menu(void* self) {
    return KPixmapRegionSelectorWidget_QBaseCreatePopupMenu((KPixmapRegionSelectorWidget*)self);
}

bool k_pixmapregionselectorwidget_event_filter(void* self, void* obj, void* ev) {
    return KPixmapRegionSelectorWidget_EventFilter((KPixmapRegionSelectorWidget*)self, (QObject*)obj, (QEvent*)ev);
}

void k_pixmapregionselectorwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPixmapRegionSelectorWidget_OnEventFilter((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

bool k_pixmapregionselectorwidget_qbase_event_filter(void* self, void* obj, void* ev) {
    return KPixmapRegionSelectorWidget_QBaseEventFilter((KPixmapRegionSelectorWidget*)self, (QObject*)obj, (QEvent*)ev);
}

const char* k_pixmapregionselectorwidget_tr2(const char* s, const char* c) {
    libqt_string _str = KPixmapRegionSelectorWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pixmapregionselectorwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KPixmapRegionSelectorWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_pixmapregionselectorwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_pixmapregionselectorwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_pixmapregionselectorwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_pixmapregionselectorwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_pixmapregionselectorwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_pixmapregionselectorwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_pixmapregionselectorwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_pixmapregionselectorwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_pixmapregionselectorwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_pixmapregionselectorwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_pixmapregionselectorwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_pixmapregionselectorwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_pixmapregionselectorwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_pixmapregionselectorwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_pixmapregionselectorwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_pixmapregionselectorwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_pixmapregionselectorwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_pixmapregionselectorwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_pixmapregionselectorwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_pixmapregionselectorwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_pixmapregionselectorwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_pixmapregionselectorwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_pixmapregionselectorwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_pixmapregionselectorwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_pixmapregionselectorwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_pixmapregionselectorwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_pixmapregionselectorwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_pixmapregionselectorwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_pixmapregionselectorwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_pixmapregionselectorwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_pixmapregionselectorwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_pixmapregionselectorwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_pixmapregionselectorwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_pixmapregionselectorwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_pixmapregionselectorwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_pixmapregionselectorwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_pixmapregionselectorwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_pixmapregionselectorwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_pixmapregionselectorwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_pixmapregionselectorwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_pixmapregionselectorwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_pixmapregionselectorwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_pixmapregionselectorwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_pixmapregionselectorwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_pixmapregionselectorwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_pixmapregionselectorwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_pixmapregionselectorwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_pixmapregionselectorwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_pixmapregionselectorwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pixmapregionselectorwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pixmapregionselectorwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pixmapregionselectorwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pixmapregionselectorwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pixmapregionselectorwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pixmapregionselectorwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pixmapregionselectorwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pixmapregionselectorwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_pixmapregionselectorwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_pixmapregionselectorwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_pixmapregionselectorwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_pixmapregionselectorwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_pixmapregionselectorwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_pixmapregionselectorwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_pixmapregionselectorwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_pixmapregionselectorwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_pixmapregionselectorwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_pixmapregionselectorwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_pixmapregionselectorwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_pixmapregionselectorwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_pixmapregionselectorwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_pixmapregionselectorwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_pixmapregionselectorwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_pixmapregionselectorwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_pixmapregionselectorwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_pixmapregionselectorwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_pixmapregionselectorwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_pixmapregionselectorwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_pixmapregionselectorwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_pixmapregionselectorwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_pixmapregionselectorwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_pixmapregionselectorwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_pixmapregionselectorwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_pixmapregionselectorwidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_pixmapregionselectorwidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_pixmapregionselectorwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_pixmapregionselectorwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_pixmapregionselectorwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pixmapregionselectorwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectorwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_pixmapregionselectorwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_pixmapregionselectorwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectorwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_pixmapregionselectorwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectorwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_pixmapregionselectorwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectorwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_pixmapregionselectorwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_pixmapregionselectorwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_pixmapregionselectorwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectorwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_pixmapregionselectorwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_pixmapregionselectorwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectorwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_pixmapregionselectorwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pixmapregionselectorwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectorwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_pixmapregionselectorwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectorwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_pixmapregionselectorwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_pixmapregionselectorwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_pixmapregionselectorwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_pixmapregionselectorwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_pixmapregionselectorwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_pixmapregionselectorwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_pixmapregionselectorwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_pixmapregionselectorwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_pixmapregionselectorwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_pixmapregionselectorwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_pixmapregionselectorwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_pixmapregionselectorwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_pixmapregionselectorwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_pixmapregionselectorwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_pixmapregionselectorwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_pixmapregionselectorwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_pixmapregionselectorwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_pixmapregionselectorwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_pixmapregionselectorwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_pixmapregionselectorwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_pixmapregionselectorwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_pixmapregionselectorwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_pixmapregionselectorwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_pixmapregionselectorwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_pixmapregionselectorwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_pixmapregionselectorwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_pixmapregionselectorwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_pixmapregionselectorwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_pixmapregionselectorwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_pixmapregionselectorwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_pixmapregionselectorwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_pixmapregionselectorwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_pixmapregionselectorwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_pixmapregionselectorwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_pixmapregionselectorwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_pixmapregionselectorwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_pixmapregionselectorwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_pixmapregionselectorwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_pixmapregionselectorwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_pixmapregionselectorwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_pixmapregionselectorwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_pixmapregionselectorwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_pixmapregionselectorwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_pixmapregionselectorwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_pixmapregionselectorwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_pixmapregionselectorwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_pixmapregionselectorwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_pixmapregionselectorwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_pixmapregionselectorwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_pixmapregionselectorwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_pixmapregionselectorwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_pixmapregionselectorwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_pixmapregionselectorwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_pixmapregionselectorwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_pixmapregionselectorwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_pixmapregionselectorwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_pixmapregionselectorwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_pixmapregionselectorwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_pixmapregionselectorwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_pixmapregionselectorwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_pixmapregionselectorwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_pixmapregionselectorwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t k_pixmapregionselectorwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_pixmapregionselectorwidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_pixmapregionselectorwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_pixmapregionselectorwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_pixmapregionselectorwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_pixmapregionselectorwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_pixmapregionselectorwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_pixmapregionselectorwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_pixmapregionselectorwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_pixmapregionselectorwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_pixmapregionselectorwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_pixmapregionselectorwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_pixmapregionselectorwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_pixmapregionselectorwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_pixmapregionselectorwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_pixmapregionselectorwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_pixmapregionselectorwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_pixmapregionselectorwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_pixmapregionselectorwidget_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_pixmapregionselectorwidget_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_pixmapregionselectorwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_pixmapregionselectorwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_pixmapregionselectorwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_pixmapregionselectorwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_pixmapregionselectorwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_pixmapregionselectorwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_pixmapregionselectorwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_pixmapregionselectorwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_pixmapregionselectorwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_pixmapregionselectorwidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_pixmapregionselectorwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_pixmapregionselectorwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_pixmapregionselectorwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_pixmapregionselectorwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_pixmapregionselectorwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_pixmapregionselectorwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_pixmapregionselectorwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_pixmapregionselectorwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_pixmapregionselectorwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_pixmapregionselectorwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_pixmapregionselectorwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_pixmapregionselectorwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_pixmapregionselectorwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_pixmapregionselectorwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_pixmapregionselectorwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_pixmapregionselectorwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_pixmapregionselectorwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_pixmapregionselectorwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_pixmapregionselectorwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_pixmapregionselectorwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_pixmapregionselectorwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_pixmapregionselectorwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_pixmapregionselectorwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_pixmapregionselectorwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_pixmapregionselectorwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_pixmapregionselectorwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_pixmapregionselectorwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_pixmapregionselectorwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_pixmapregionselectorwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_pixmapregionselectorwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_pixmapregionselectorwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_pixmapregionselectorwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_pixmapregionselectorwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_pixmapregionselectorwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_pixmapregionselectorwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_pixmapregionselectorwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_pixmapregionselectorwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectorwidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_pixmapregionselectorwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_pixmapregionselectorwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_pixmapregionselectorwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_pixmapregionselectorwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_pixmapregionselectorwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_pixmapregionselectorwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_pixmapregionselectorwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_pixmapregionselectorwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_pixmapregionselectorwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_pixmapregionselectorwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_pixmapregionselectorwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_pixmapregionselectorwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_pixmapregionselectorwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_pixmapregionselectorwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_pixmapregionselectorwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_pixmapregionselectorwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_pixmapregionselectorwidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_pixmapregionselectorwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_pixmapregionselectorwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_pixmapregionselectorwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_pixmapregionselectorwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_pixmapregionselectorwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_pixmapregionselectorwidget_dynamic_property_names");
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

QBindingStorage* k_pixmapregionselectorwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_pixmapregionselectorwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_pixmapregionselectorwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_pixmapregionselectorwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_pixmapregionselectorwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_pixmapregionselectorwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_pixmapregionselectorwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_pixmapregionselectorwidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_pixmapregionselectorwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_pixmapregionselectorwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_pixmapregionselectorwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_pixmapregionselectorwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_pixmapregionselectorwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_pixmapregionselectorwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_pixmapregionselectorwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_pixmapregionselectorwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_pixmapregionselectorwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_pixmapregionselectorwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_pixmapregionselectorwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_pixmapregionselectorwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_pixmapregionselectorwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_pixmapregionselectorwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_pixmapregionselectorwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_pixmapregionselectorwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_pixmapregionselectorwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_pixmapregionselectorwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_pixmapregionselectorwidget_dev_type(void* self) {
    return KPixmapRegionSelectorWidget_DevType((KPixmapRegionSelectorWidget*)self);
}

int32_t k_pixmapregionselectorwidget_qbase_dev_type(void* self) {
    return KPixmapRegionSelectorWidget_QBaseDevType((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_dev_type(void* self, int32_t (*callback)()) {
    KPixmapRegionSelectorWidget_OnDevType((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_set_visible(void* self, bool visible) {
    KPixmapRegionSelectorWidget_SetVisible((KPixmapRegionSelectorWidget*)self, visible);
}

void k_pixmapregionselectorwidget_qbase_set_visible(void* self, bool visible) {
    KPixmapRegionSelectorWidget_QBaseSetVisible((KPixmapRegionSelectorWidget*)self, visible);
}

void k_pixmapregionselectorwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KPixmapRegionSelectorWidget_OnSetVisible((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

QSize* k_pixmapregionselectorwidget_size_hint(void* self) {
    return KPixmapRegionSelectorWidget_SizeHint((KPixmapRegionSelectorWidget*)self);
}

QSize* k_pixmapregionselectorwidget_qbase_size_hint(void* self) {
    return KPixmapRegionSelectorWidget_QBaseSizeHint((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_size_hint(void* self, QSize* (*callback)()) {
    KPixmapRegionSelectorWidget_OnSizeHint((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

QSize* k_pixmapregionselectorwidget_minimum_size_hint(void* self) {
    return KPixmapRegionSelectorWidget_MinimumSizeHint((KPixmapRegionSelectorWidget*)self);
}

QSize* k_pixmapregionselectorwidget_qbase_minimum_size_hint(void* self) {
    return KPixmapRegionSelectorWidget_QBaseMinimumSizeHint((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KPixmapRegionSelectorWidget_OnMinimumSizeHint((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

int32_t k_pixmapregionselectorwidget_height_for_width(void* self, int param1) {
    return KPixmapRegionSelectorWidget_HeightForWidth((KPixmapRegionSelectorWidget*)self, param1);
}

int32_t k_pixmapregionselectorwidget_qbase_height_for_width(void* self, int param1) {
    return KPixmapRegionSelectorWidget_QBaseHeightForWidth((KPixmapRegionSelectorWidget*)self, param1);
}

void k_pixmapregionselectorwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KPixmapRegionSelectorWidget_OnHeightForWidth((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

bool k_pixmapregionselectorwidget_has_height_for_width(void* self) {
    return KPixmapRegionSelectorWidget_HasHeightForWidth((KPixmapRegionSelectorWidget*)self);
}

bool k_pixmapregionselectorwidget_qbase_has_height_for_width(void* self) {
    return KPixmapRegionSelectorWidget_QBaseHasHeightForWidth((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    KPixmapRegionSelectorWidget_OnHasHeightForWidth((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

QPaintEngine* k_pixmapregionselectorwidget_paint_engine(void* self) {
    return KPixmapRegionSelectorWidget_PaintEngine((KPixmapRegionSelectorWidget*)self);
}

QPaintEngine* k_pixmapregionselectorwidget_qbase_paint_engine(void* self) {
    return KPixmapRegionSelectorWidget_QBasePaintEngine((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KPixmapRegionSelectorWidget_OnPaintEngine((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

bool k_pixmapregionselectorwidget_event(void* self, void* event) {
    return KPixmapRegionSelectorWidget_Event((KPixmapRegionSelectorWidget*)self, (QEvent*)event);
}

bool k_pixmapregionselectorwidget_qbase_event(void* self, void* event) {
    return KPixmapRegionSelectorWidget_QBaseEvent((KPixmapRegionSelectorWidget*)self, (QEvent*)event);
}

void k_pixmapregionselectorwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_mouse_press_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_MousePressEvent((KPixmapRegionSelectorWidget*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_mouse_press_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseMousePressEvent((KPixmapRegionSelectorWidget*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectorwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnMousePressEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_mouse_release_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_MouseReleaseEvent((KPixmapRegionSelectorWidget*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_mouse_release_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseMouseReleaseEvent((KPixmapRegionSelectorWidget*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectorwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnMouseReleaseEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_mouse_double_click_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_MouseDoubleClickEvent((KPixmapRegionSelectorWidget*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_mouse_double_click_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseMouseDoubleClickEvent((KPixmapRegionSelectorWidget*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectorwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnMouseDoubleClickEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_mouse_move_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_MouseMoveEvent((KPixmapRegionSelectorWidget*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_mouse_move_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseMouseMoveEvent((KPixmapRegionSelectorWidget*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectorwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnMouseMoveEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_wheel_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_WheelEvent((KPixmapRegionSelectorWidget*)self, (QWheelEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_wheel_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseWheelEvent((KPixmapRegionSelectorWidget*)self, (QWheelEvent*)event);
}

void k_pixmapregionselectorwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnWheelEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_key_press_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_KeyPressEvent((KPixmapRegionSelectorWidget*)self, (QKeyEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_key_press_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseKeyPressEvent((KPixmapRegionSelectorWidget*)self, (QKeyEvent*)event);
}

void k_pixmapregionselectorwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnKeyPressEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_key_release_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_KeyReleaseEvent((KPixmapRegionSelectorWidget*)self, (QKeyEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_key_release_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseKeyReleaseEvent((KPixmapRegionSelectorWidget*)self, (QKeyEvent*)event);
}

void k_pixmapregionselectorwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnKeyReleaseEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_focus_in_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_FocusInEvent((KPixmapRegionSelectorWidget*)self, (QFocusEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_focus_in_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseFocusInEvent((KPixmapRegionSelectorWidget*)self, (QFocusEvent*)event);
}

void k_pixmapregionselectorwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnFocusInEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_focus_out_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_FocusOutEvent((KPixmapRegionSelectorWidget*)self, (QFocusEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_focus_out_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseFocusOutEvent((KPixmapRegionSelectorWidget*)self, (QFocusEvent*)event);
}

void k_pixmapregionselectorwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnFocusOutEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_enter_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_EnterEvent((KPixmapRegionSelectorWidget*)self, (QEnterEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_enter_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseEnterEvent((KPixmapRegionSelectorWidget*)self, (QEnterEvent*)event);
}

void k_pixmapregionselectorwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnEnterEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_leave_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_LeaveEvent((KPixmapRegionSelectorWidget*)self, (QEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_leave_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseLeaveEvent((KPixmapRegionSelectorWidget*)self, (QEvent*)event);
}

void k_pixmapregionselectorwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnLeaveEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_paint_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_PaintEvent((KPixmapRegionSelectorWidget*)self, (QPaintEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_paint_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBasePaintEvent((KPixmapRegionSelectorWidget*)self, (QPaintEvent*)event);
}

void k_pixmapregionselectorwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnPaintEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_move_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_MoveEvent((KPixmapRegionSelectorWidget*)self, (QMoveEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_move_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseMoveEvent((KPixmapRegionSelectorWidget*)self, (QMoveEvent*)event);
}

void k_pixmapregionselectorwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnMoveEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_resize_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_ResizeEvent((KPixmapRegionSelectorWidget*)self, (QResizeEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_resize_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseResizeEvent((KPixmapRegionSelectorWidget*)self, (QResizeEvent*)event);
}

void k_pixmapregionselectorwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnResizeEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_close_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_CloseEvent((KPixmapRegionSelectorWidget*)self, (QCloseEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_close_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseCloseEvent((KPixmapRegionSelectorWidget*)self, (QCloseEvent*)event);
}

void k_pixmapregionselectorwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnCloseEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_context_menu_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_ContextMenuEvent((KPixmapRegionSelectorWidget*)self, (QContextMenuEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_context_menu_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseContextMenuEvent((KPixmapRegionSelectorWidget*)self, (QContextMenuEvent*)event);
}

void k_pixmapregionselectorwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnContextMenuEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_tablet_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_TabletEvent((KPixmapRegionSelectorWidget*)self, (QTabletEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_tablet_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseTabletEvent((KPixmapRegionSelectorWidget*)self, (QTabletEvent*)event);
}

void k_pixmapregionselectorwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnTabletEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_action_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_ActionEvent((KPixmapRegionSelectorWidget*)self, (QActionEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_action_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseActionEvent((KPixmapRegionSelectorWidget*)self, (QActionEvent*)event);
}

void k_pixmapregionselectorwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnActionEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_drag_enter_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_DragEnterEvent((KPixmapRegionSelectorWidget*)self, (QDragEnterEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_drag_enter_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseDragEnterEvent((KPixmapRegionSelectorWidget*)self, (QDragEnterEvent*)event);
}

void k_pixmapregionselectorwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnDragEnterEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_drag_move_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_DragMoveEvent((KPixmapRegionSelectorWidget*)self, (QDragMoveEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_drag_move_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseDragMoveEvent((KPixmapRegionSelectorWidget*)self, (QDragMoveEvent*)event);
}

void k_pixmapregionselectorwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnDragMoveEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_drag_leave_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_DragLeaveEvent((KPixmapRegionSelectorWidget*)self, (QDragLeaveEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_drag_leave_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseDragLeaveEvent((KPixmapRegionSelectorWidget*)self, (QDragLeaveEvent*)event);
}

void k_pixmapregionselectorwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnDragLeaveEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_drop_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_DropEvent((KPixmapRegionSelectorWidget*)self, (QDropEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_drop_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseDropEvent((KPixmapRegionSelectorWidget*)self, (QDropEvent*)event);
}

void k_pixmapregionselectorwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnDropEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_show_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_ShowEvent((KPixmapRegionSelectorWidget*)self, (QShowEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_show_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseShowEvent((KPixmapRegionSelectorWidget*)self, (QShowEvent*)event);
}

void k_pixmapregionselectorwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnShowEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_hide_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_HideEvent((KPixmapRegionSelectorWidget*)self, (QHideEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_hide_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseHideEvent((KPixmapRegionSelectorWidget*)self, (QHideEvent*)event);
}

void k_pixmapregionselectorwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnHideEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

bool k_pixmapregionselectorwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPixmapRegionSelectorWidget_NativeEvent((KPixmapRegionSelectorWidget*)self, qstring(eventType), message, result);
}

bool k_pixmapregionselectorwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPixmapRegionSelectorWidget_QBaseNativeEvent((KPixmapRegionSelectorWidget*)self, qstring(eventType), message, result);
}

void k_pixmapregionselectorwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KPixmapRegionSelectorWidget_OnNativeEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_change_event(void* self, void* param1) {
    KPixmapRegionSelectorWidget_ChangeEvent((KPixmapRegionSelectorWidget*)self, (QEvent*)param1);
}

void k_pixmapregionselectorwidget_qbase_change_event(void* self, void* param1) {
    KPixmapRegionSelectorWidget_QBaseChangeEvent((KPixmapRegionSelectorWidget*)self, (QEvent*)param1);
}

void k_pixmapregionselectorwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnChangeEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

int32_t k_pixmapregionselectorwidget_metric(void* self, int32_t param1) {
    return KPixmapRegionSelectorWidget_Metric((KPixmapRegionSelectorWidget*)self, param1);
}

int32_t k_pixmapregionselectorwidget_qbase_metric(void* self, int32_t param1) {
    return KPixmapRegionSelectorWidget_QBaseMetric((KPixmapRegionSelectorWidget*)self, param1);
}

void k_pixmapregionselectorwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KPixmapRegionSelectorWidget_OnMetric((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_init_painter(void* self, void* painter) {
    KPixmapRegionSelectorWidget_InitPainter((KPixmapRegionSelectorWidget*)self, (QPainter*)painter);
}

void k_pixmapregionselectorwidget_qbase_init_painter(void* self, void* painter) {
    KPixmapRegionSelectorWidget_QBaseInitPainter((KPixmapRegionSelectorWidget*)self, (QPainter*)painter);
}

void k_pixmapregionselectorwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnInitPainter((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

QPaintDevice* k_pixmapregionselectorwidget_redirected(void* self, void* offset) {
    return KPixmapRegionSelectorWidget_Redirected((KPixmapRegionSelectorWidget*)self, (QPoint*)offset);
}

QPaintDevice* k_pixmapregionselectorwidget_qbase_redirected(void* self, void* offset) {
    return KPixmapRegionSelectorWidget_QBaseRedirected((KPixmapRegionSelectorWidget*)self, (QPoint*)offset);
}

void k_pixmapregionselectorwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnRedirected((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

QPainter* k_pixmapregionselectorwidget_shared_painter(void* self) {
    return KPixmapRegionSelectorWidget_SharedPainter((KPixmapRegionSelectorWidget*)self);
}

QPainter* k_pixmapregionselectorwidget_qbase_shared_painter(void* self) {
    return KPixmapRegionSelectorWidget_QBaseSharedPainter((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    KPixmapRegionSelectorWidget_OnSharedPainter((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_input_method_event(void* self, void* param1) {
    KPixmapRegionSelectorWidget_InputMethodEvent((KPixmapRegionSelectorWidget*)self, (QInputMethodEvent*)param1);
}

void k_pixmapregionselectorwidget_qbase_input_method_event(void* self, void* param1) {
    KPixmapRegionSelectorWidget_QBaseInputMethodEvent((KPixmapRegionSelectorWidget*)self, (QInputMethodEvent*)param1);
}

void k_pixmapregionselectorwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnInputMethodEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

QVariant* k_pixmapregionselectorwidget_input_method_query(void* self, int64_t param1) {
    return KPixmapRegionSelectorWidget_InputMethodQuery((KPixmapRegionSelectorWidget*)self, param1);
}

QVariant* k_pixmapregionselectorwidget_qbase_input_method_query(void* self, int64_t param1) {
    return KPixmapRegionSelectorWidget_QBaseInputMethodQuery((KPixmapRegionSelectorWidget*)self, param1);
}

void k_pixmapregionselectorwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KPixmapRegionSelectorWidget_OnInputMethodQuery((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

bool k_pixmapregionselectorwidget_focus_next_prev_child(void* self, bool next) {
    return KPixmapRegionSelectorWidget_FocusNextPrevChild((KPixmapRegionSelectorWidget*)self, next);
}

bool k_pixmapregionselectorwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return KPixmapRegionSelectorWidget_QBaseFocusNextPrevChild((KPixmapRegionSelectorWidget*)self, next);
}

void k_pixmapregionselectorwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KPixmapRegionSelectorWidget_OnFocusNextPrevChild((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_timer_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_TimerEvent((KPixmapRegionSelectorWidget*)self, (QTimerEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_timer_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseTimerEvent((KPixmapRegionSelectorWidget*)self, (QTimerEvent*)event);
}

void k_pixmapregionselectorwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnTimerEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_child_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_ChildEvent((KPixmapRegionSelectorWidget*)self, (QChildEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_child_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseChildEvent((KPixmapRegionSelectorWidget*)self, (QChildEvent*)event);
}

void k_pixmapregionselectorwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnChildEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_custom_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_CustomEvent((KPixmapRegionSelectorWidget*)self, (QEvent*)event);
}

void k_pixmapregionselectorwidget_qbase_custom_event(void* self, void* event) {
    KPixmapRegionSelectorWidget_QBaseCustomEvent((KPixmapRegionSelectorWidget*)self, (QEvent*)event);
}

void k_pixmapregionselectorwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnCustomEvent((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_connect_notify(void* self, void* signal) {
    KPixmapRegionSelectorWidget_ConnectNotify((KPixmapRegionSelectorWidget*)self, (QMetaMethod*)signal);
}

void k_pixmapregionselectorwidget_qbase_connect_notify(void* self, void* signal) {
    KPixmapRegionSelectorWidget_QBaseConnectNotify((KPixmapRegionSelectorWidget*)self, (QMetaMethod*)signal);
}

void k_pixmapregionselectorwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnConnectNotify((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_disconnect_notify(void* self, void* signal) {
    KPixmapRegionSelectorWidget_DisconnectNotify((KPixmapRegionSelectorWidget*)self, (QMetaMethod*)signal);
}

void k_pixmapregionselectorwidget_qbase_disconnect_notify(void* self, void* signal) {
    KPixmapRegionSelectorWidget_QBaseDisconnectNotify((KPixmapRegionSelectorWidget*)self, (QMetaMethod*)signal);
}

void k_pixmapregionselectorwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnDisconnectNotify((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_update_micro_focus(void* self) {
    KPixmapRegionSelectorWidget_UpdateMicroFocus((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_qbase_update_micro_focus(void* self) {
    KPixmapRegionSelectorWidget_QBaseUpdateMicroFocus((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_update_micro_focus(void* self, void (*callback)()) {
    KPixmapRegionSelectorWidget_OnUpdateMicroFocus((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_create(void* self) {
    KPixmapRegionSelectorWidget_Create((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_qbase_create(void* self) {
    KPixmapRegionSelectorWidget_QBaseCreate((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_create(void* self, void (*callback)()) {
    KPixmapRegionSelectorWidget_OnCreate((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_destroy(void* self) {
    KPixmapRegionSelectorWidget_Destroy((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_qbase_destroy(void* self) {
    KPixmapRegionSelectorWidget_QBaseDestroy((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_destroy(void* self, void (*callback)()) {
    KPixmapRegionSelectorWidget_OnDestroy((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

bool k_pixmapregionselectorwidget_focus_next_child(void* self) {
    return KPixmapRegionSelectorWidget_FocusNextChild((KPixmapRegionSelectorWidget*)self);
}

bool k_pixmapregionselectorwidget_qbase_focus_next_child(void* self) {
    return KPixmapRegionSelectorWidget_QBaseFocusNextChild((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_focus_next_child(void* self, bool (*callback)()) {
    KPixmapRegionSelectorWidget_OnFocusNextChild((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

bool k_pixmapregionselectorwidget_focus_previous_child(void* self) {
    return KPixmapRegionSelectorWidget_FocusPreviousChild((KPixmapRegionSelectorWidget*)self);
}

bool k_pixmapregionselectorwidget_qbase_focus_previous_child(void* self) {
    return KPixmapRegionSelectorWidget_QBaseFocusPreviousChild((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    KPixmapRegionSelectorWidget_OnFocusPreviousChild((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

QObject* k_pixmapregionselectorwidget_sender(void* self) {
    return KPixmapRegionSelectorWidget_Sender((KPixmapRegionSelectorWidget*)self);
}

QObject* k_pixmapregionselectorwidget_qbase_sender(void* self) {
    return KPixmapRegionSelectorWidget_QBaseSender((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_sender(void* self, QObject* (*callback)()) {
    KPixmapRegionSelectorWidget_OnSender((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

int32_t k_pixmapregionselectorwidget_sender_signal_index(void* self) {
    return KPixmapRegionSelectorWidget_SenderSignalIndex((KPixmapRegionSelectorWidget*)self);
}

int32_t k_pixmapregionselectorwidget_qbase_sender_signal_index(void* self) {
    return KPixmapRegionSelectorWidget_QBaseSenderSignalIndex((KPixmapRegionSelectorWidget*)self);
}

void k_pixmapregionselectorwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPixmapRegionSelectorWidget_OnSenderSignalIndex((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

int32_t k_pixmapregionselectorwidget_receivers(void* self, const char* signal) {
    return KPixmapRegionSelectorWidget_Receivers((KPixmapRegionSelectorWidget*)self, signal);
}

int32_t k_pixmapregionselectorwidget_qbase_receivers(void* self, const char* signal) {
    return KPixmapRegionSelectorWidget_QBaseReceivers((KPixmapRegionSelectorWidget*)self, signal);
}

void k_pixmapregionselectorwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPixmapRegionSelectorWidget_OnReceivers((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

bool k_pixmapregionselectorwidget_is_signal_connected(void* self, void* signal) {
    return KPixmapRegionSelectorWidget_IsSignalConnected((KPixmapRegionSelectorWidget*)self, (QMetaMethod*)signal);
}

bool k_pixmapregionselectorwidget_qbase_is_signal_connected(void* self, void* signal) {
    return KPixmapRegionSelectorWidget_QBaseIsSignalConnected((KPixmapRegionSelectorWidget*)self, (QMetaMethod*)signal);
}

void k_pixmapregionselectorwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPixmapRegionSelectorWidget_OnIsSignalConnected((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

double k_pixmapregionselectorwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPixmapRegionSelectorWidget_GetDecodedMetricF((KPixmapRegionSelectorWidget*)self, metricA, metricB);
}

double k_pixmapregionselectorwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPixmapRegionSelectorWidget_QBaseGetDecodedMetricF((KPixmapRegionSelectorWidget*)self, metricA, metricB);
}

void k_pixmapregionselectorwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KPixmapRegionSelectorWidget_OnGetDecodedMetricF((KPixmapRegionSelectorWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_pixmapregionselectorwidget_delete(void* self) {
    KPixmapRegionSelectorWidget_Delete((KPixmapRegionSelectorWidget*)(self));
}
