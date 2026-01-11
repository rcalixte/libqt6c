#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "libqprinter.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libqprintpreviewwidget.hpp"
#include "libqprintpreviewwidget.h"

QPrintPreviewWidget* q_printpreviewwidget_new(void* parent) {
    return QPrintPreviewWidget_new((QWidget*)parent);
}

QPrintPreviewWidget* q_printpreviewwidget_new2(void* printer) {
    return QPrintPreviewWidget_new2((QPrinter*)printer);
}

QPrintPreviewWidget* q_printpreviewwidget_new3() {
    return QPrintPreviewWidget_new3();
}

QPrintPreviewWidget* q_printpreviewwidget_new4(void* printer, void* parent) {
    return QPrintPreviewWidget_new4((QPrinter*)printer, (QWidget*)parent);
}

QPrintPreviewWidget* q_printpreviewwidget_new5(void* printer, void* parent, int64_t flags) {
    return QPrintPreviewWidget_new5((QPrinter*)printer, (QWidget*)parent, flags);
}

QPrintPreviewWidget* q_printpreviewwidget_new6(void* parent, int64_t flags) {
    return QPrintPreviewWidget_new6((QWidget*)parent, flags);
}

const QMetaObject* q_printpreviewwidget_meta_object(void* self) {
    return QPrintPreviewWidget_MetaObject((QPrintPreviewWidget*)self);
}

void* q_printpreviewwidget_metacast(void* self, const char* param1) {
    return QPrintPreviewWidget_Metacast((QPrintPreviewWidget*)self, param1);
}

int32_t q_printpreviewwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPrintPreviewWidget_Metacall((QPrintPreviewWidget*)self, param1, param2, param3);
}

void q_printpreviewwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPrintPreviewWidget_OnMetacall((QPrintPreviewWidget*)self, (intptr_t)callback);
}

int32_t q_printpreviewwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPrintPreviewWidget_QBaseMetacall((QPrintPreviewWidget*)self, param1, param2, param3);
}

const char* q_printpreviewwidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double q_printpreviewwidget_zoom_factor(void* self) {
    return QPrintPreviewWidget_ZoomFactor((QPrintPreviewWidget*)self);
}

int32_t q_printpreviewwidget_orientation(void* self) {
    return QPrintPreviewWidget_Orientation((QPrintPreviewWidget*)self);
}

int32_t q_printpreviewwidget_view_mode(void* self) {
    return QPrintPreviewWidget_ViewMode((QPrintPreviewWidget*)self);
}

int32_t q_printpreviewwidget_zoom_mode(void* self) {
    return QPrintPreviewWidget_ZoomMode((QPrintPreviewWidget*)self);
}

int32_t q_printpreviewwidget_current_page(void* self) {
    return QPrintPreviewWidget_CurrentPage((QPrintPreviewWidget*)self);
}

int32_t q_printpreviewwidget_page_count(void* self) {
    return QPrintPreviewWidget_PageCount((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_set_visible(void* self, bool visible) {
    QPrintPreviewWidget_SetVisible((QPrintPreviewWidget*)self, visible);
}

void q_printpreviewwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QPrintPreviewWidget_OnSetVisible((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_qbase_set_visible(void* self, bool visible) {
    QPrintPreviewWidget_QBaseSetVisible((QPrintPreviewWidget*)self, visible);
}

void q_printpreviewwidget_print(void* self) {
    QPrintPreviewWidget_Print((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_zoom_in(void* self) {
    QPrintPreviewWidget_ZoomIn((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_zoom_out(void* self) {
    QPrintPreviewWidget_ZoomOut((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_set_zoom_factor(void* self, double zoomFactor) {
    QPrintPreviewWidget_SetZoomFactor((QPrintPreviewWidget*)self, zoomFactor);
}

void q_printpreviewwidget_set_orientation(void* self, int32_t orientation) {
    QPrintPreviewWidget_SetOrientation((QPrintPreviewWidget*)self, orientation);
}

void q_printpreviewwidget_set_view_mode(void* self, int32_t viewMode) {
    QPrintPreviewWidget_SetViewMode((QPrintPreviewWidget*)self, viewMode);
}

void q_printpreviewwidget_set_zoom_mode(void* self, int32_t zoomMode) {
    QPrintPreviewWidget_SetZoomMode((QPrintPreviewWidget*)self, zoomMode);
}

void q_printpreviewwidget_set_current_page(void* self, int pageNumber) {
    QPrintPreviewWidget_SetCurrentPage((QPrintPreviewWidget*)self, pageNumber);
}

void q_printpreviewwidget_fit_to_width(void* self) {
    QPrintPreviewWidget_FitToWidth((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_fit_in_view(void* self) {
    QPrintPreviewWidget_FitInView((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_set_landscape_orientation(void* self) {
    QPrintPreviewWidget_SetLandscapeOrientation((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_set_portrait_orientation(void* self) {
    QPrintPreviewWidget_SetPortraitOrientation((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_set_single_page_view_mode(void* self) {
    QPrintPreviewWidget_SetSinglePageViewMode((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_set_facing_pages_view_mode(void* self) {
    QPrintPreviewWidget_SetFacingPagesViewMode((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_set_all_pages_view_mode(void* self) {
    QPrintPreviewWidget_SetAllPagesViewMode((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_update_preview(void* self) {
    QPrintPreviewWidget_UpdatePreview((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_paint_requested(void* self, void* printer) {
    QPrintPreviewWidget_PaintRequested((QPrintPreviewWidget*)self, (QPrinter*)printer);
}

void q_printpreviewwidget_on_paint_requested(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_Connect_PaintRequested((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_preview_changed(void* self) {
    QPrintPreviewWidget_PreviewChanged((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_on_preview_changed(void* self, void (*callback)(void*)) {
    QPrintPreviewWidget_Connect_PreviewChanged((QPrintPreviewWidget*)self, (intptr_t)callback);
}

const char* q_printpreviewwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_printpreviewwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewwidget_zoom_in1(void* self, double zoom) {
    QPrintPreviewWidget_ZoomIn1((QPrintPreviewWidget*)self, zoom);
}

void q_printpreviewwidget_zoom_out1(void* self, double zoom) {
    QPrintPreviewWidget_ZoomOut1((QPrintPreviewWidget*)self, zoom);
}

uintptr_t q_printpreviewwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_printpreviewwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_printpreviewwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_printpreviewwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_printpreviewwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_printpreviewwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_printpreviewwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_printpreviewwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_printpreviewwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_printpreviewwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_printpreviewwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_printpreviewwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_printpreviewwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_printpreviewwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_printpreviewwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_printpreviewwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_printpreviewwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_printpreviewwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_printpreviewwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_printpreviewwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_printpreviewwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_printpreviewwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_printpreviewwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_printpreviewwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_printpreviewwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_printpreviewwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_printpreviewwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_printpreviewwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_printpreviewwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_printpreviewwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_printpreviewwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_printpreviewwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_printpreviewwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_printpreviewwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_printpreviewwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_printpreviewwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_printpreviewwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_printpreviewwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_printpreviewwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_printpreviewwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_printpreviewwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_printpreviewwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_printpreviewwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_printpreviewwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_printpreviewwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_printpreviewwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_printpreviewwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_printpreviewwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_printpreviewwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_printpreviewwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_printpreviewwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_printpreviewwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_printpreviewwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_printpreviewwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_printpreviewwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_printpreviewwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_printpreviewwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_printpreviewwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_printpreviewwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_printpreviewwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_printpreviewwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_printpreviewwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_printpreviewwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_printpreviewwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_printpreviewwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_printpreviewwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_printpreviewwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_printpreviewwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_printpreviewwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_printpreviewwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_printpreviewwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_printpreviewwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_printpreviewwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_printpreviewwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_printpreviewwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_printpreviewwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_printpreviewwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_printpreviewwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_printpreviewwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_printpreviewwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_printpreviewwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_printpreviewwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_printpreviewwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_printpreviewwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_printpreviewwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_printpreviewwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_printpreviewwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_printpreviewwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_printpreviewwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_printpreviewwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_printpreviewwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_printpreviewwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_printpreviewwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_printpreviewwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_printpreviewwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_printpreviewwidget_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_printpreviewwidget_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_printpreviewwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_printpreviewwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_printpreviewwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_printpreviewwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_printpreviewwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_printpreviewwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_printpreviewwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_printpreviewwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_printpreviewwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_printpreviewwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_printpreviewwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_printpreviewwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_printpreviewwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_printpreviewwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_printpreviewwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_printpreviewwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_printpreviewwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_printpreviewwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_printpreviewwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_printpreviewwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_printpreviewwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_printpreviewwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_printpreviewwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_printpreviewwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_printpreviewwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_printpreviewwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_printpreviewwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_printpreviewwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_printpreviewwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_printpreviewwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_printpreviewwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_printpreviewwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_printpreviewwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_printpreviewwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_printpreviewwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_printpreviewwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_printpreviewwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_printpreviewwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_printpreviewwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_printpreviewwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_printpreviewwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_printpreviewwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_printpreviewwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_printpreviewwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_printpreviewwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_printpreviewwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_printpreviewwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_printpreviewwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_printpreviewwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_printpreviewwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_printpreviewwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_printpreviewwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_printpreviewwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_printpreviewwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_printpreviewwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_printpreviewwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_printpreviewwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_printpreviewwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_printpreviewwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_printpreviewwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_printpreviewwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_printpreviewwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_printpreviewwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_printpreviewwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_printpreviewwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_printpreviewwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_printpreviewwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_printpreviewwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_printpreviewwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_printpreviewwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_printpreviewwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_printpreviewwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_printpreviewwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_printpreviewwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_printpreviewwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_printpreviewwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_printpreviewwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_printpreviewwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_printpreviewwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_printpreviewwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_printpreviewwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_printpreviewwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_printpreviewwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_printpreviewwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_printpreviewwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_printpreviewwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_printpreviewwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_printpreviewwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_printpreviewwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_printpreviewwidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_printpreviewwidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_printpreviewwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_printpreviewwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_printpreviewwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_printpreviewwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_printpreviewwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_printpreviewwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_printpreviewwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_printpreviewwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_printpreviewwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_printpreviewwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_printpreviewwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_printpreviewwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_printpreviewwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_printpreviewwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_printpreviewwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_printpreviewwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_printpreviewwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_printpreviewwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_printpreviewwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_printpreviewwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_printpreviewwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_printpreviewwidget_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_printpreviewwidget_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_printpreviewwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_printpreviewwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_printpreviewwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_printpreviewwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_printpreviewwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_printpreviewwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_printpreviewwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_printpreviewwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_printpreviewwidget_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t q_printpreviewwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_printpreviewwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_printpreviewwidget_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t q_printpreviewwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_printpreviewwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_printpreviewwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_printpreviewwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_printpreviewwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_printpreviewwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_printpreviewwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_printpreviewwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_printpreviewwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_printpreviewwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_printpreviewwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_printpreviewwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_printpreviewwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_printpreviewwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_printpreviewwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_printpreviewwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_printpreviewwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_printpreviewwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_printpreviewwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_printpreviewwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_printpreviewwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_printpreviewwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_printpreviewwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_printpreviewwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_printpreviewwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_printpreviewwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_printpreviewwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_printpreviewwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_printpreviewwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_printpreviewwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_printpreviewwidget_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_printpreviewwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_printpreviewwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_printpreviewwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_printpreviewwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_printpreviewwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_printpreviewwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_printpreviewwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_printpreviewwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewwidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_printpreviewwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_printpreviewwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_printpreviewwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_printpreviewwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_printpreviewwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_printpreviewwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_printpreviewwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_printpreviewwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_printpreviewwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_printpreviewwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_printpreviewwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_printpreviewwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_printpreviewwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_printpreviewwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_printpreviewwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_printpreviewwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_printpreviewwidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_printpreviewwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_printpreviewwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_printpreviewwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_printpreviewwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_printpreviewwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_printpreviewwidget_dynamic_property_names");
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

QBindingStorage* q_printpreviewwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_printpreviewwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_printpreviewwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_printpreviewwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_printpreviewwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_printpreviewwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_printpreviewwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_printpreviewwidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_printpreviewwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_printpreviewwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_printpreviewwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_printpreviewwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_printpreviewwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_printpreviewwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_printpreviewwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_printpreviewwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_printpreviewwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_printpreviewwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_printpreviewwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_printpreviewwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_printpreviewwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_printpreviewwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_printpreviewwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_printpreviewwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_printpreviewwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_printpreviewwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_printpreviewwidget_dev_type(void* self) {
    return QPrintPreviewWidget_DevType((QPrintPreviewWidget*)self);
}

int32_t q_printpreviewwidget_qbase_dev_type(void* self) {
    return QPrintPreviewWidget_QBaseDevType((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_on_dev_type(void* self, int32_t (*callback)()) {
    QPrintPreviewWidget_OnDevType((QPrintPreviewWidget*)self, (intptr_t)callback);
}

QSize* q_printpreviewwidget_size_hint(void* self) {
    return QPrintPreviewWidget_SizeHint((QPrintPreviewWidget*)self);
}

QSize* q_printpreviewwidget_qbase_size_hint(void* self) {
    return QPrintPreviewWidget_QBaseSizeHint((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_on_size_hint(void* self, QSize* (*callback)()) {
    QPrintPreviewWidget_OnSizeHint((QPrintPreviewWidget*)self, (intptr_t)callback);
}

QSize* q_printpreviewwidget_minimum_size_hint(void* self) {
    return QPrintPreviewWidget_MinimumSizeHint((QPrintPreviewWidget*)self);
}

QSize* q_printpreviewwidget_qbase_minimum_size_hint(void* self) {
    return QPrintPreviewWidget_QBaseMinimumSizeHint((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QPrintPreviewWidget_OnMinimumSizeHint((QPrintPreviewWidget*)self, (intptr_t)callback);
}

int32_t q_printpreviewwidget_height_for_width(void* self, int param1) {
    return QPrintPreviewWidget_HeightForWidth((QPrintPreviewWidget*)self, param1);
}

int32_t q_printpreviewwidget_qbase_height_for_width(void* self, int param1) {
    return QPrintPreviewWidget_QBaseHeightForWidth((QPrintPreviewWidget*)self, param1);
}

void q_printpreviewwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QPrintPreviewWidget_OnHeightForWidth((QPrintPreviewWidget*)self, (intptr_t)callback);
}

bool q_printpreviewwidget_has_height_for_width(void* self) {
    return QPrintPreviewWidget_HasHeightForWidth((QPrintPreviewWidget*)self);
}

bool q_printpreviewwidget_qbase_has_height_for_width(void* self) {
    return QPrintPreviewWidget_QBaseHasHeightForWidth((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    QPrintPreviewWidget_OnHasHeightForWidth((QPrintPreviewWidget*)self, (intptr_t)callback);
}

QPaintEngine* q_printpreviewwidget_paint_engine(void* self) {
    return QPrintPreviewWidget_PaintEngine((QPrintPreviewWidget*)self);
}

QPaintEngine* q_printpreviewwidget_qbase_paint_engine(void* self) {
    return QPrintPreviewWidget_QBasePaintEngine((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QPrintPreviewWidget_OnPaintEngine((QPrintPreviewWidget*)self, (intptr_t)callback);
}

bool q_printpreviewwidget_event(void* self, void* event) {
    return QPrintPreviewWidget_Event((QPrintPreviewWidget*)self, (QEvent*)event);
}

bool q_printpreviewwidget_qbase_event(void* self, void* event) {
    return QPrintPreviewWidget_QBaseEvent((QPrintPreviewWidget*)self, (QEvent*)event);
}

void q_printpreviewwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_mouse_press_event(void* self, void* event) {
    QPrintPreviewWidget_MousePressEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

void q_printpreviewwidget_qbase_mouse_press_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseMousePressEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

void q_printpreviewwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnMousePressEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_mouse_release_event(void* self, void* event) {
    QPrintPreviewWidget_MouseReleaseEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

void q_printpreviewwidget_qbase_mouse_release_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseMouseReleaseEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

void q_printpreviewwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnMouseReleaseEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_mouse_double_click_event(void* self, void* event) {
    QPrintPreviewWidget_MouseDoubleClickEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

void q_printpreviewwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseMouseDoubleClickEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

void q_printpreviewwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnMouseDoubleClickEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_mouse_move_event(void* self, void* event) {
    QPrintPreviewWidget_MouseMoveEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

void q_printpreviewwidget_qbase_mouse_move_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseMouseMoveEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

void q_printpreviewwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnMouseMoveEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_wheel_event(void* self, void* event) {
    QPrintPreviewWidget_WheelEvent((QPrintPreviewWidget*)self, (QWheelEvent*)event);
}

void q_printpreviewwidget_qbase_wheel_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseWheelEvent((QPrintPreviewWidget*)self, (QWheelEvent*)event);
}

void q_printpreviewwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnWheelEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_key_press_event(void* self, void* event) {
    QPrintPreviewWidget_KeyPressEvent((QPrintPreviewWidget*)self, (QKeyEvent*)event);
}

void q_printpreviewwidget_qbase_key_press_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseKeyPressEvent((QPrintPreviewWidget*)self, (QKeyEvent*)event);
}

void q_printpreviewwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnKeyPressEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_key_release_event(void* self, void* event) {
    QPrintPreviewWidget_KeyReleaseEvent((QPrintPreviewWidget*)self, (QKeyEvent*)event);
}

void q_printpreviewwidget_qbase_key_release_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseKeyReleaseEvent((QPrintPreviewWidget*)self, (QKeyEvent*)event);
}

void q_printpreviewwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnKeyReleaseEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_focus_in_event(void* self, void* event) {
    QPrintPreviewWidget_FocusInEvent((QPrintPreviewWidget*)self, (QFocusEvent*)event);
}

void q_printpreviewwidget_qbase_focus_in_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseFocusInEvent((QPrintPreviewWidget*)self, (QFocusEvent*)event);
}

void q_printpreviewwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnFocusInEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_focus_out_event(void* self, void* event) {
    QPrintPreviewWidget_FocusOutEvent((QPrintPreviewWidget*)self, (QFocusEvent*)event);
}

void q_printpreviewwidget_qbase_focus_out_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseFocusOutEvent((QPrintPreviewWidget*)self, (QFocusEvent*)event);
}

void q_printpreviewwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnFocusOutEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_enter_event(void* self, void* event) {
    QPrintPreviewWidget_EnterEvent((QPrintPreviewWidget*)self, (QEnterEvent*)event);
}

void q_printpreviewwidget_qbase_enter_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseEnterEvent((QPrintPreviewWidget*)self, (QEnterEvent*)event);
}

void q_printpreviewwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnEnterEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_leave_event(void* self, void* event) {
    QPrintPreviewWidget_LeaveEvent((QPrintPreviewWidget*)self, (QEvent*)event);
}

void q_printpreviewwidget_qbase_leave_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseLeaveEvent((QPrintPreviewWidget*)self, (QEvent*)event);
}

void q_printpreviewwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnLeaveEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_paint_event(void* self, void* event) {
    QPrintPreviewWidget_PaintEvent((QPrintPreviewWidget*)self, (QPaintEvent*)event);
}

void q_printpreviewwidget_qbase_paint_event(void* self, void* event) {
    QPrintPreviewWidget_QBasePaintEvent((QPrintPreviewWidget*)self, (QPaintEvent*)event);
}

void q_printpreviewwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnPaintEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_move_event(void* self, void* event) {
    QPrintPreviewWidget_MoveEvent((QPrintPreviewWidget*)self, (QMoveEvent*)event);
}

void q_printpreviewwidget_qbase_move_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseMoveEvent((QPrintPreviewWidget*)self, (QMoveEvent*)event);
}

void q_printpreviewwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnMoveEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_resize_event(void* self, void* event) {
    QPrintPreviewWidget_ResizeEvent((QPrintPreviewWidget*)self, (QResizeEvent*)event);
}

void q_printpreviewwidget_qbase_resize_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseResizeEvent((QPrintPreviewWidget*)self, (QResizeEvent*)event);
}

void q_printpreviewwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnResizeEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_close_event(void* self, void* event) {
    QPrintPreviewWidget_CloseEvent((QPrintPreviewWidget*)self, (QCloseEvent*)event);
}

void q_printpreviewwidget_qbase_close_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseCloseEvent((QPrintPreviewWidget*)self, (QCloseEvent*)event);
}

void q_printpreviewwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnCloseEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_context_menu_event(void* self, void* event) {
    QPrintPreviewWidget_ContextMenuEvent((QPrintPreviewWidget*)self, (QContextMenuEvent*)event);
}

void q_printpreviewwidget_qbase_context_menu_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseContextMenuEvent((QPrintPreviewWidget*)self, (QContextMenuEvent*)event);
}

void q_printpreviewwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnContextMenuEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_tablet_event(void* self, void* event) {
    QPrintPreviewWidget_TabletEvent((QPrintPreviewWidget*)self, (QTabletEvent*)event);
}

void q_printpreviewwidget_qbase_tablet_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseTabletEvent((QPrintPreviewWidget*)self, (QTabletEvent*)event);
}

void q_printpreviewwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnTabletEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_action_event(void* self, void* event) {
    QPrintPreviewWidget_ActionEvent((QPrintPreviewWidget*)self, (QActionEvent*)event);
}

void q_printpreviewwidget_qbase_action_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseActionEvent((QPrintPreviewWidget*)self, (QActionEvent*)event);
}

void q_printpreviewwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnActionEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_drag_enter_event(void* self, void* event) {
    QPrintPreviewWidget_DragEnterEvent((QPrintPreviewWidget*)self, (QDragEnterEvent*)event);
}

void q_printpreviewwidget_qbase_drag_enter_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseDragEnterEvent((QPrintPreviewWidget*)self, (QDragEnterEvent*)event);
}

void q_printpreviewwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnDragEnterEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_drag_move_event(void* self, void* event) {
    QPrintPreviewWidget_DragMoveEvent((QPrintPreviewWidget*)self, (QDragMoveEvent*)event);
}

void q_printpreviewwidget_qbase_drag_move_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseDragMoveEvent((QPrintPreviewWidget*)self, (QDragMoveEvent*)event);
}

void q_printpreviewwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnDragMoveEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_drag_leave_event(void* self, void* event) {
    QPrintPreviewWidget_DragLeaveEvent((QPrintPreviewWidget*)self, (QDragLeaveEvent*)event);
}

void q_printpreviewwidget_qbase_drag_leave_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseDragLeaveEvent((QPrintPreviewWidget*)self, (QDragLeaveEvent*)event);
}

void q_printpreviewwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnDragLeaveEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_drop_event(void* self, void* event) {
    QPrintPreviewWidget_DropEvent((QPrintPreviewWidget*)self, (QDropEvent*)event);
}

void q_printpreviewwidget_qbase_drop_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseDropEvent((QPrintPreviewWidget*)self, (QDropEvent*)event);
}

void q_printpreviewwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnDropEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_show_event(void* self, void* event) {
    QPrintPreviewWidget_ShowEvent((QPrintPreviewWidget*)self, (QShowEvent*)event);
}

void q_printpreviewwidget_qbase_show_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseShowEvent((QPrintPreviewWidget*)self, (QShowEvent*)event);
}

void q_printpreviewwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnShowEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_hide_event(void* self, void* event) {
    QPrintPreviewWidget_HideEvent((QPrintPreviewWidget*)self, (QHideEvent*)event);
}

void q_printpreviewwidget_qbase_hide_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseHideEvent((QPrintPreviewWidget*)self, (QHideEvent*)event);
}

void q_printpreviewwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnHideEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

bool q_printpreviewwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPrintPreviewWidget_NativeEvent((QPrintPreviewWidget*)self, qstring(eventType), message, result);
}

bool q_printpreviewwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPrintPreviewWidget_QBaseNativeEvent((QPrintPreviewWidget*)self, qstring(eventType), message, result);
}

void q_printpreviewwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QPrintPreviewWidget_OnNativeEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_change_event(void* self, void* param1) {
    QPrintPreviewWidget_ChangeEvent((QPrintPreviewWidget*)self, (QEvent*)param1);
}

void q_printpreviewwidget_qbase_change_event(void* self, void* param1) {
    QPrintPreviewWidget_QBaseChangeEvent((QPrintPreviewWidget*)self, (QEvent*)param1);
}

void q_printpreviewwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnChangeEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

int32_t q_printpreviewwidget_metric(void* self, int32_t param1) {
    return QPrintPreviewWidget_Metric((QPrintPreviewWidget*)self, param1);
}

int32_t q_printpreviewwidget_qbase_metric(void* self, int32_t param1) {
    return QPrintPreviewWidget_QBaseMetric((QPrintPreviewWidget*)self, param1);
}

void q_printpreviewwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QPrintPreviewWidget_OnMetric((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_init_painter(void* self, void* painter) {
    QPrintPreviewWidget_InitPainter((QPrintPreviewWidget*)self, (QPainter*)painter);
}

void q_printpreviewwidget_qbase_init_painter(void* self, void* painter) {
    QPrintPreviewWidget_QBaseInitPainter((QPrintPreviewWidget*)self, (QPainter*)painter);
}

void q_printpreviewwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnInitPainter((QPrintPreviewWidget*)self, (intptr_t)callback);
}

QPaintDevice* q_printpreviewwidget_redirected(void* self, void* offset) {
    return QPrintPreviewWidget_Redirected((QPrintPreviewWidget*)self, (QPoint*)offset);
}

QPaintDevice* q_printpreviewwidget_qbase_redirected(void* self, void* offset) {
    return QPrintPreviewWidget_QBaseRedirected((QPrintPreviewWidget*)self, (QPoint*)offset);
}

void q_printpreviewwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnRedirected((QPrintPreviewWidget*)self, (intptr_t)callback);
}

QPainter* q_printpreviewwidget_shared_painter(void* self) {
    return QPrintPreviewWidget_SharedPainter((QPrintPreviewWidget*)self);
}

QPainter* q_printpreviewwidget_qbase_shared_painter(void* self) {
    return QPrintPreviewWidget_QBaseSharedPainter((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    QPrintPreviewWidget_OnSharedPainter((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_input_method_event(void* self, void* param1) {
    QPrintPreviewWidget_InputMethodEvent((QPrintPreviewWidget*)self, (QInputMethodEvent*)param1);
}

void q_printpreviewwidget_qbase_input_method_event(void* self, void* param1) {
    QPrintPreviewWidget_QBaseInputMethodEvent((QPrintPreviewWidget*)self, (QInputMethodEvent*)param1);
}

void q_printpreviewwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnInputMethodEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

QVariant* q_printpreviewwidget_input_method_query(void* self, int64_t param1) {
    return QPrintPreviewWidget_InputMethodQuery((QPrintPreviewWidget*)self, param1);
}

QVariant* q_printpreviewwidget_qbase_input_method_query(void* self, int64_t param1) {
    return QPrintPreviewWidget_QBaseInputMethodQuery((QPrintPreviewWidget*)self, param1);
}

void q_printpreviewwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QPrintPreviewWidget_OnInputMethodQuery((QPrintPreviewWidget*)self, (intptr_t)callback);
}

bool q_printpreviewwidget_focus_next_prev_child(void* self, bool next) {
    return QPrintPreviewWidget_FocusNextPrevChild((QPrintPreviewWidget*)self, next);
}

bool q_printpreviewwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QPrintPreviewWidget_QBaseFocusNextPrevChild((QPrintPreviewWidget*)self, next);
}

void q_printpreviewwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QPrintPreviewWidget_OnFocusNextPrevChild((QPrintPreviewWidget*)self, (intptr_t)callback);
}

bool q_printpreviewwidget_event_filter(void* self, void* watched, void* event) {
    return QPrintPreviewWidget_EventFilter((QPrintPreviewWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool q_printpreviewwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QPrintPreviewWidget_QBaseEventFilter((QPrintPreviewWidget*)self, (QObject*)watched, (QEvent*)event);
}

void q_printpreviewwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPrintPreviewWidget_OnEventFilter((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_timer_event(void* self, void* event) {
    QPrintPreviewWidget_TimerEvent((QPrintPreviewWidget*)self, (QTimerEvent*)event);
}

void q_printpreviewwidget_qbase_timer_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseTimerEvent((QPrintPreviewWidget*)self, (QTimerEvent*)event);
}

void q_printpreviewwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnTimerEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_child_event(void* self, void* event) {
    QPrintPreviewWidget_ChildEvent((QPrintPreviewWidget*)self, (QChildEvent*)event);
}

void q_printpreviewwidget_qbase_child_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseChildEvent((QPrintPreviewWidget*)self, (QChildEvent*)event);
}

void q_printpreviewwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnChildEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_custom_event(void* self, void* event) {
    QPrintPreviewWidget_CustomEvent((QPrintPreviewWidget*)self, (QEvent*)event);
}

void q_printpreviewwidget_qbase_custom_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseCustomEvent((QPrintPreviewWidget*)self, (QEvent*)event);
}

void q_printpreviewwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnCustomEvent((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_connect_notify(void* self, void* signal) {
    QPrintPreviewWidget_ConnectNotify((QPrintPreviewWidget*)self, (QMetaMethod*)signal);
}

void q_printpreviewwidget_qbase_connect_notify(void* self, void* signal) {
    QPrintPreviewWidget_QBaseConnectNotify((QPrintPreviewWidget*)self, (QMetaMethod*)signal);
}

void q_printpreviewwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnConnectNotify((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_disconnect_notify(void* self, void* signal) {
    QPrintPreviewWidget_DisconnectNotify((QPrintPreviewWidget*)self, (QMetaMethod*)signal);
}

void q_printpreviewwidget_qbase_disconnect_notify(void* self, void* signal) {
    QPrintPreviewWidget_QBaseDisconnectNotify((QPrintPreviewWidget*)self, (QMetaMethod*)signal);
}

void q_printpreviewwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnDisconnectNotify((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_update_micro_focus(void* self) {
    QPrintPreviewWidget_UpdateMicroFocus((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_qbase_update_micro_focus(void* self) {
    QPrintPreviewWidget_QBaseUpdateMicroFocus((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_on_update_micro_focus(void* self, void (*callback)()) {
    QPrintPreviewWidget_OnUpdateMicroFocus((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_create(void* self) {
    QPrintPreviewWidget_Create((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_qbase_create(void* self) {
    QPrintPreviewWidget_QBaseCreate((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_on_create(void* self, void (*callback)()) {
    QPrintPreviewWidget_OnCreate((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_destroy(void* self) {
    QPrintPreviewWidget_Destroy((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_qbase_destroy(void* self) {
    QPrintPreviewWidget_QBaseDestroy((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_on_destroy(void* self, void (*callback)()) {
    QPrintPreviewWidget_OnDestroy((QPrintPreviewWidget*)self, (intptr_t)callback);
}

bool q_printpreviewwidget_focus_next_child(void* self) {
    return QPrintPreviewWidget_FocusNextChild((QPrintPreviewWidget*)self);
}

bool q_printpreviewwidget_qbase_focus_next_child(void* self) {
    return QPrintPreviewWidget_QBaseFocusNextChild((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_on_focus_next_child(void* self, bool (*callback)()) {
    QPrintPreviewWidget_OnFocusNextChild((QPrintPreviewWidget*)self, (intptr_t)callback);
}

bool q_printpreviewwidget_focus_previous_child(void* self) {
    return QPrintPreviewWidget_FocusPreviousChild((QPrintPreviewWidget*)self);
}

bool q_printpreviewwidget_qbase_focus_previous_child(void* self) {
    return QPrintPreviewWidget_QBaseFocusPreviousChild((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    QPrintPreviewWidget_OnFocusPreviousChild((QPrintPreviewWidget*)self, (intptr_t)callback);
}

QObject* q_printpreviewwidget_sender(void* self) {
    return QPrintPreviewWidget_Sender((QPrintPreviewWidget*)self);
}

QObject* q_printpreviewwidget_qbase_sender(void* self) {
    return QPrintPreviewWidget_QBaseSender((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_on_sender(void* self, QObject* (*callback)()) {
    QPrintPreviewWidget_OnSender((QPrintPreviewWidget*)self, (intptr_t)callback);
}

int32_t q_printpreviewwidget_sender_signal_index(void* self) {
    return QPrintPreviewWidget_SenderSignalIndex((QPrintPreviewWidget*)self);
}

int32_t q_printpreviewwidget_qbase_sender_signal_index(void* self) {
    return QPrintPreviewWidget_QBaseSenderSignalIndex((QPrintPreviewWidget*)self);
}

void q_printpreviewwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPrintPreviewWidget_OnSenderSignalIndex((QPrintPreviewWidget*)self, (intptr_t)callback);
}

int32_t q_printpreviewwidget_receivers(void* self, const char* signal) {
    return QPrintPreviewWidget_Receivers((QPrintPreviewWidget*)self, signal);
}

int32_t q_printpreviewwidget_qbase_receivers(void* self, const char* signal) {
    return QPrintPreviewWidget_QBaseReceivers((QPrintPreviewWidget*)self, signal);
}

void q_printpreviewwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPrintPreviewWidget_OnReceivers((QPrintPreviewWidget*)self, (intptr_t)callback);
}

bool q_printpreviewwidget_is_signal_connected(void* self, void* signal) {
    return QPrintPreviewWidget_IsSignalConnected((QPrintPreviewWidget*)self, (QMetaMethod*)signal);
}

bool q_printpreviewwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QPrintPreviewWidget_QBaseIsSignalConnected((QPrintPreviewWidget*)self, (QMetaMethod*)signal);
}

void q_printpreviewwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPrintPreviewWidget_OnIsSignalConnected((QPrintPreviewWidget*)self, (intptr_t)callback);
}

double q_printpreviewwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPrintPreviewWidget_GetDecodedMetricF((QPrintPreviewWidget*)self, metricA, metricB);
}

double q_printpreviewwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPrintPreviewWidget_QBaseGetDecodedMetricF((QPrintPreviewWidget*)self, metricA, metricB);
}

void q_printpreviewwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QPrintPreviewWidget_OnGetDecodedMetricF((QPrintPreviewWidget*)self, (intptr_t)callback);
}

void q_printpreviewwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_printpreviewwidget_delete(void* self) {
    QPrintPreviewWidget_Delete((QPrintPreviewWidget*)(self));
}
