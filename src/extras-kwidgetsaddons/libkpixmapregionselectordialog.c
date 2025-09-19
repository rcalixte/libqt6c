#include "libkpixmapregionselectorwidget.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdialog.hpp"
#include "../libqimage.hpp"
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
#include "libkpixmapregionselectordialog.hpp"
#include "libkpixmapregionselectordialog.h"

KPixmapRegionSelectorDialog* k_pixmapregionselectordialog_new(void* parent) {
    return KPixmapRegionSelectorDialog_new((QWidget*)parent);
}

KPixmapRegionSelectorDialog* k_pixmapregionselectordialog_new2() {
    return KPixmapRegionSelectorDialog_new2();
}

const QMetaObject* k_pixmapregionselectordialog_meta_object(void* self) {
    return KPixmapRegionSelectorDialog_MetaObject((KPixmapRegionSelectorDialog*)self);
}

void* k_pixmapregionselectordialog_metacast(void* self, const char* param1) {
    return KPixmapRegionSelectorDialog_Metacast((KPixmapRegionSelectorDialog*)self, param1);
}

int32_t k_pixmapregionselectordialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPixmapRegionSelectorDialog_Metacall((KPixmapRegionSelectorDialog*)self, param1, param2, param3);
}

void k_pixmapregionselectordialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPixmapRegionSelectorDialog_OnMetacall((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

int32_t k_pixmapregionselectordialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPixmapRegionSelectorDialog_QBaseMetacall((KPixmapRegionSelectorDialog*)self, param1, param2, param3);
}

const char* k_pixmapregionselectordialog_tr(const char* s) {
    libqt_string _str = KPixmapRegionSelectorDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KPixmapRegionSelectorWidget* k_pixmapregionselectordialog_pixmap_region_selector_widget(void* self) {
    return KPixmapRegionSelectorDialog_PixmapRegionSelectorWidget((KPixmapRegionSelectorDialog*)self);
}

QRect* k_pixmapregionselectordialog_get_selected_region(void* pixmap) {
    return KPixmapRegionSelectorDialog_GetSelectedRegion((QPixmap*)pixmap);
}

QRect* k_pixmapregionselectordialog_get_selected_region2(void* pixmap, int aspectRatioWidth, int aspectRatioHeight) {
    return KPixmapRegionSelectorDialog_GetSelectedRegion2((QPixmap*)pixmap, aspectRatioWidth, aspectRatioHeight);
}

QImage* k_pixmapregionselectordialog_get_selected_image(void* pixmap) {
    return KPixmapRegionSelectorDialog_GetSelectedImage((QPixmap*)pixmap);
}

QImage* k_pixmapregionselectordialog_get_selected_image2(void* pixmap, int aspectRatioWidth, int aspectRatioHeight) {
    return KPixmapRegionSelectorDialog_GetSelectedImage2((QPixmap*)pixmap, aspectRatioWidth, aspectRatioHeight);
}

void k_pixmapregionselectordialog_adjust_region_selector_widget_size_to_fit_screen(void* self) {
    KPixmapRegionSelectorDialog_AdjustRegionSelectorWidgetSizeToFitScreen((KPixmapRegionSelectorDialog*)self);
}

const char* k_pixmapregionselectordialog_tr2(const char* s, const char* c) {
    libqt_string _str = KPixmapRegionSelectorDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pixmapregionselectordialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KPixmapRegionSelectorDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRect* k_pixmapregionselectordialog_get_selected_region22(void* pixmap, void* parent) {
    return KPixmapRegionSelectorDialog_GetSelectedRegion22((QPixmap*)pixmap, (QWidget*)parent);
}

QRect* k_pixmapregionselectordialog_get_selected_region4(void* pixmap, int aspectRatioWidth, int aspectRatioHeight, void* parent) {
    return KPixmapRegionSelectorDialog_GetSelectedRegion4((QPixmap*)pixmap, aspectRatioWidth, aspectRatioHeight, (QWidget*)parent);
}

QImage* k_pixmapregionselectordialog_get_selected_image22(void* pixmap, void* parent) {
    return KPixmapRegionSelectorDialog_GetSelectedImage22((QPixmap*)pixmap, (QWidget*)parent);
}

QImage* k_pixmapregionselectordialog_get_selected_image4(void* pixmap, int aspectRatioWidth, int aspectRatioHeight, void* parent) {
    return KPixmapRegionSelectorDialog_GetSelectedImage4((QPixmap*)pixmap, aspectRatioWidth, aspectRatioHeight, (QWidget*)parent);
}

int32_t k_pixmapregionselectordialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_pixmapregionselectordialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_pixmapregionselectordialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_pixmapregionselectordialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_pixmapregionselectordialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_pixmapregionselectordialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_pixmapregionselectordialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_pixmapregionselectordialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_pixmapregionselectordialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_pixmapregionselectordialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_pixmapregionselectordialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_pixmapregionselectordialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_pixmapregionselectordialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_pixmapregionselectordialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_pixmapregionselectordialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_pixmapregionselectordialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_pixmapregionselectordialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_pixmapregionselectordialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_pixmapregionselectordialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_pixmapregionselectordialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_pixmapregionselectordialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_pixmapregionselectordialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_pixmapregionselectordialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_pixmapregionselectordialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_pixmapregionselectordialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_pixmapregionselectordialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_pixmapregionselectordialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_pixmapregionselectordialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_pixmapregionselectordialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_pixmapregionselectordialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_pixmapregionselectordialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_pixmapregionselectordialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_pixmapregionselectordialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_pixmapregionselectordialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_pixmapregionselectordialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_pixmapregionselectordialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_pixmapregionselectordialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_pixmapregionselectordialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_pixmapregionselectordialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_pixmapregionselectordialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_pixmapregionselectordialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_pixmapregionselectordialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_pixmapregionselectordialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_pixmapregionselectordialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_pixmapregionselectordialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_pixmapregionselectordialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_pixmapregionselectordialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_pixmapregionselectordialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_pixmapregionselectordialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_pixmapregionselectordialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_pixmapregionselectordialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_pixmapregionselectordialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_pixmapregionselectordialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_pixmapregionselectordialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_pixmapregionselectordialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_pixmapregionselectordialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_pixmapregionselectordialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_pixmapregionselectordialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_pixmapregionselectordialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_pixmapregionselectordialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_pixmapregionselectordialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_pixmapregionselectordialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_pixmapregionselectordialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pixmapregionselectordialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pixmapregionselectordialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pixmapregionselectordialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pixmapregionselectordialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pixmapregionselectordialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pixmapregionselectordialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pixmapregionselectordialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pixmapregionselectordialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_pixmapregionselectordialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_pixmapregionselectordialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_pixmapregionselectordialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_pixmapregionselectordialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_pixmapregionselectordialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_pixmapregionselectordialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_pixmapregionselectordialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_pixmapregionselectordialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_pixmapregionselectordialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_pixmapregionselectordialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_pixmapregionselectordialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_pixmapregionselectordialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_pixmapregionselectordialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_pixmapregionselectordialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_pixmapregionselectordialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_pixmapregionselectordialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_pixmapregionselectordialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_pixmapregionselectordialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_pixmapregionselectordialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_pixmapregionselectordialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_pixmapregionselectordialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_pixmapregionselectordialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_pixmapregionselectordialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_pixmapregionselectordialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_pixmapregionselectordialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_pixmapregionselectordialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_pixmapregionselectordialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_pixmapregionselectordialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_pixmapregionselectordialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_pixmapregionselectordialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_pixmapregionselectordialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_pixmapregionselectordialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_pixmapregionselectordialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_pixmapregionselectordialog_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_pixmapregionselectordialog_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_pixmapregionselectordialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_pixmapregionselectordialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_pixmapregionselectordialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pixmapregionselectordialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectordialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_pixmapregionselectordialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_pixmapregionselectordialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_pixmapregionselectordialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectordialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_pixmapregionselectordialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectordialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_pixmapregionselectordialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectordialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_pixmapregionselectordialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_pixmapregionselectordialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_pixmapregionselectordialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_pixmapregionselectordialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectordialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_pixmapregionselectordialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_pixmapregionselectordialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_pixmapregionselectordialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectordialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_pixmapregionselectordialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pixmapregionselectordialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectordialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_pixmapregionselectordialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectordialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_pixmapregionselectordialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_pixmapregionselectordialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_pixmapregionselectordialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_pixmapregionselectordialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_pixmapregionselectordialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_pixmapregionselectordialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_pixmapregionselectordialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_pixmapregionselectordialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_pixmapregionselectordialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_pixmapregionselectordialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_pixmapregionselectordialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_pixmapregionselectordialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_pixmapregionselectordialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_pixmapregionselectordialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_pixmapregionselectordialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_pixmapregionselectordialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_pixmapregionselectordialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_pixmapregionselectordialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_pixmapregionselectordialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_pixmapregionselectordialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_pixmapregionselectordialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_pixmapregionselectordialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_pixmapregionselectordialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_pixmapregionselectordialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_pixmapregionselectordialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_pixmapregionselectordialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_pixmapregionselectordialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_pixmapregionselectordialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_pixmapregionselectordialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_pixmapregionselectordialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_pixmapregionselectordialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_pixmapregionselectordialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_pixmapregionselectordialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_pixmapregionselectordialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_pixmapregionselectordialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_pixmapregionselectordialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_pixmapregionselectordialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_pixmapregionselectordialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_pixmapregionselectordialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_pixmapregionselectordialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_pixmapregionselectordialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_pixmapregionselectordialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_pixmapregionselectordialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_pixmapregionselectordialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_pixmapregionselectordialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_pixmapregionselectordialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_pixmapregionselectordialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_pixmapregionselectordialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_pixmapregionselectordialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_pixmapregionselectordialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_pixmapregionselectordialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_pixmapregionselectordialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_pixmapregionselectordialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_pixmapregionselectordialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_pixmapregionselectordialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_pixmapregionselectordialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_pixmapregionselectordialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_pixmapregionselectordialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_pixmapregionselectordialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_pixmapregionselectordialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_pixmapregionselectordialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_pixmapregionselectordialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_pixmapregionselectordialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_pixmapregionselectordialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_pixmapregionselectordialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_pixmapregionselectordialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_pixmapregionselectordialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_pixmapregionselectordialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_pixmapregionselectordialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_pixmapregionselectordialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_pixmapregionselectordialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_pixmapregionselectordialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_pixmapregionselectordialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_pixmapregionselectordialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_pixmapregionselectordialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_pixmapregionselectordialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_pixmapregionselectordialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_pixmapregionselectordialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_pixmapregionselectordialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_pixmapregionselectordialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_pixmapregionselectordialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_pixmapregionselectordialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_pixmapregionselectordialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_pixmapregionselectordialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_pixmapregionselectordialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_pixmapregionselectordialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_pixmapregionselectordialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_pixmapregionselectordialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_pixmapregionselectordialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_pixmapregionselectordialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_pixmapregionselectordialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_pixmapregionselectordialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_pixmapregionselectordialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_pixmapregionselectordialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_pixmapregionselectordialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_pixmapregionselectordialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_pixmapregionselectordialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_pixmapregionselectordialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_pixmapregionselectordialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_pixmapregionselectordialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_pixmapregionselectordialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_pixmapregionselectordialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_pixmapregionselectordialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_pixmapregionselectordialog_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_pixmapregionselectordialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_pixmapregionselectordialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_pixmapregionselectordialog_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_pixmapregionselectordialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_pixmapregionselectordialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_pixmapregionselectordialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_pixmapregionselectordialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_pixmapregionselectordialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_pixmapregionselectordialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_pixmapregionselectordialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_pixmapregionselectordialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_pixmapregionselectordialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_pixmapregionselectordialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_pixmapregionselectordialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_pixmapregionselectordialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_pixmapregionselectordialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_pixmapregionselectordialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_pixmapregionselectordialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_pixmapregionselectordialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_pixmapregionselectordialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_pixmapregionselectordialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_pixmapregionselectordialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_pixmapregionselectordialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_pixmapregionselectordialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_pixmapregionselectordialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_pixmapregionselectordialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_pixmapregionselectordialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_pixmapregionselectordialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_pixmapregionselectordialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_pixmapregionselectordialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_pixmapregionselectordialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_pixmapregionselectordialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_pixmapregionselectordialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_pixmapregionselectordialog_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_pixmapregionselectordialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_pixmapregionselectordialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_pixmapregionselectordialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_pixmapregionselectordialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_pixmapregionselectordialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_pixmapregionselectordialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_pixmapregionselectordialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_pixmapregionselectordialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pixmapregionselectordialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_pixmapregionselectordialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_pixmapregionselectordialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_pixmapregionselectordialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_pixmapregionselectordialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_pixmapregionselectordialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_pixmapregionselectordialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_pixmapregionselectordialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_pixmapregionselectordialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_pixmapregionselectordialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_pixmapregionselectordialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_pixmapregionselectordialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_pixmapregionselectordialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_pixmapregionselectordialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_pixmapregionselectordialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_pixmapregionselectordialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_pixmapregionselectordialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_pixmapregionselectordialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_pixmapregionselectordialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_pixmapregionselectordialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_pixmapregionselectordialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_pixmapregionselectordialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_pixmapregionselectordialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_pixmapregionselectordialog_dynamic_property_names");
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

QBindingStorage* k_pixmapregionselectordialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_pixmapregionselectordialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_pixmapregionselectordialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_pixmapregionselectordialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_pixmapregionselectordialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_pixmapregionselectordialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_pixmapregionselectordialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_pixmapregionselectordialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_pixmapregionselectordialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_pixmapregionselectordialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_pixmapregionselectordialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_pixmapregionselectordialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_pixmapregionselectordialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_pixmapregionselectordialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_pixmapregionselectordialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_pixmapregionselectordialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_pixmapregionselectordialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_pixmapregionselectordialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_pixmapregionselectordialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_pixmapregionselectordialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_pixmapregionselectordialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_pixmapregionselectordialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_pixmapregionselectordialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_pixmapregionselectordialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_pixmapregionselectordialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_pixmapregionselectordialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_pixmapregionselectordialog_set_visible(void* self, bool visible) {
    KPixmapRegionSelectorDialog_SetVisible((KPixmapRegionSelectorDialog*)self, visible);
}

void k_pixmapregionselectordialog_qbase_set_visible(void* self, bool visible) {
    KPixmapRegionSelectorDialog_QBaseSetVisible((KPixmapRegionSelectorDialog*)self, visible);
}

void k_pixmapregionselectordialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KPixmapRegionSelectorDialog_OnSetVisible((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

QSize* k_pixmapregionselectordialog_size_hint(void* self) {
    return KPixmapRegionSelectorDialog_SizeHint((KPixmapRegionSelectorDialog*)self);
}

QSize* k_pixmapregionselectordialog_qbase_size_hint(void* self) {
    return KPixmapRegionSelectorDialog_QBaseSizeHint((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_size_hint(void* self, QSize* (*callback)()) {
    KPixmapRegionSelectorDialog_OnSizeHint((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

QSize* k_pixmapregionselectordialog_minimum_size_hint(void* self) {
    return KPixmapRegionSelectorDialog_MinimumSizeHint((KPixmapRegionSelectorDialog*)self);
}

QSize* k_pixmapregionselectordialog_qbase_minimum_size_hint(void* self) {
    return KPixmapRegionSelectorDialog_QBaseMinimumSizeHint((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KPixmapRegionSelectorDialog_OnMinimumSizeHint((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_open(void* self) {
    KPixmapRegionSelectorDialog_Open((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_qbase_open(void* self) {
    KPixmapRegionSelectorDialog_QBaseOpen((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_open(void* self, void (*callback)()) {
    KPixmapRegionSelectorDialog_OnOpen((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

int32_t k_pixmapregionselectordialog_exec(void* self) {
    return KPixmapRegionSelectorDialog_Exec((KPixmapRegionSelectorDialog*)self);
}

int32_t k_pixmapregionselectordialog_qbase_exec(void* self) {
    return KPixmapRegionSelectorDialog_QBaseExec((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_exec(void* self, int32_t (*callback)()) {
    KPixmapRegionSelectorDialog_OnExec((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_done(void* self, int param1) {
    KPixmapRegionSelectorDialog_Done((KPixmapRegionSelectorDialog*)self, param1);
}

void k_pixmapregionselectordialog_qbase_done(void* self, int param1) {
    KPixmapRegionSelectorDialog_QBaseDone((KPixmapRegionSelectorDialog*)self, param1);
}

void k_pixmapregionselectordialog_on_done(void* self, void (*callback)(void*, int)) {
    KPixmapRegionSelectorDialog_OnDone((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_accept(void* self) {
    KPixmapRegionSelectorDialog_Accept((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_qbase_accept(void* self) {
    KPixmapRegionSelectorDialog_QBaseAccept((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_accept(void* self, void (*callback)()) {
    KPixmapRegionSelectorDialog_OnAccept((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_reject(void* self) {
    KPixmapRegionSelectorDialog_Reject((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_qbase_reject(void* self) {
    KPixmapRegionSelectorDialog_QBaseReject((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_reject(void* self, void (*callback)()) {
    KPixmapRegionSelectorDialog_OnReject((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_key_press_event(void* self, void* param1) {
    KPixmapRegionSelectorDialog_KeyPressEvent((KPixmapRegionSelectorDialog*)self, (QKeyEvent*)param1);
}

void k_pixmapregionselectordialog_qbase_key_press_event(void* self, void* param1) {
    KPixmapRegionSelectorDialog_QBaseKeyPressEvent((KPixmapRegionSelectorDialog*)self, (QKeyEvent*)param1);
}

void k_pixmapregionselectordialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnKeyPressEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_close_event(void* self, void* param1) {
    KPixmapRegionSelectorDialog_CloseEvent((KPixmapRegionSelectorDialog*)self, (QCloseEvent*)param1);
}

void k_pixmapregionselectordialog_qbase_close_event(void* self, void* param1) {
    KPixmapRegionSelectorDialog_QBaseCloseEvent((KPixmapRegionSelectorDialog*)self, (QCloseEvent*)param1);
}

void k_pixmapregionselectordialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnCloseEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_show_event(void* self, void* param1) {
    KPixmapRegionSelectorDialog_ShowEvent((KPixmapRegionSelectorDialog*)self, (QShowEvent*)param1);
}

void k_pixmapregionselectordialog_qbase_show_event(void* self, void* param1) {
    KPixmapRegionSelectorDialog_QBaseShowEvent((KPixmapRegionSelectorDialog*)self, (QShowEvent*)param1);
}

void k_pixmapregionselectordialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnShowEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_resize_event(void* self, void* param1) {
    KPixmapRegionSelectorDialog_ResizeEvent((KPixmapRegionSelectorDialog*)self, (QResizeEvent*)param1);
}

void k_pixmapregionselectordialog_qbase_resize_event(void* self, void* param1) {
    KPixmapRegionSelectorDialog_QBaseResizeEvent((KPixmapRegionSelectorDialog*)self, (QResizeEvent*)param1);
}

void k_pixmapregionselectordialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnResizeEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_context_menu_event(void* self, void* param1) {
    KPixmapRegionSelectorDialog_ContextMenuEvent((KPixmapRegionSelectorDialog*)self, (QContextMenuEvent*)param1);
}

void k_pixmapregionselectordialog_qbase_context_menu_event(void* self, void* param1) {
    KPixmapRegionSelectorDialog_QBaseContextMenuEvent((KPixmapRegionSelectorDialog*)self, (QContextMenuEvent*)param1);
}

void k_pixmapregionselectordialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnContextMenuEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

bool k_pixmapregionselectordialog_event_filter(void* self, void* param1, void* param2) {
    return KPixmapRegionSelectorDialog_EventFilter((KPixmapRegionSelectorDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_pixmapregionselectordialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KPixmapRegionSelectorDialog_QBaseEventFilter((KPixmapRegionSelectorDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_pixmapregionselectordialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPixmapRegionSelectorDialog_OnEventFilter((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

int32_t k_pixmapregionselectordialog_dev_type(void* self) {
    return KPixmapRegionSelectorDialog_DevType((KPixmapRegionSelectorDialog*)self);
}

int32_t k_pixmapregionselectordialog_qbase_dev_type(void* self) {
    return KPixmapRegionSelectorDialog_QBaseDevType((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_dev_type(void* self, int32_t (*callback)()) {
    KPixmapRegionSelectorDialog_OnDevType((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

int32_t k_pixmapregionselectordialog_height_for_width(void* self, int param1) {
    return KPixmapRegionSelectorDialog_HeightForWidth((KPixmapRegionSelectorDialog*)self, param1);
}

int32_t k_pixmapregionselectordialog_qbase_height_for_width(void* self, int param1) {
    return KPixmapRegionSelectorDialog_QBaseHeightForWidth((KPixmapRegionSelectorDialog*)self, param1);
}

void k_pixmapregionselectordialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KPixmapRegionSelectorDialog_OnHeightForWidth((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

bool k_pixmapregionselectordialog_has_height_for_width(void* self) {
    return KPixmapRegionSelectorDialog_HasHeightForWidth((KPixmapRegionSelectorDialog*)self);
}

bool k_pixmapregionselectordialog_qbase_has_height_for_width(void* self) {
    return KPixmapRegionSelectorDialog_QBaseHasHeightForWidth((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KPixmapRegionSelectorDialog_OnHasHeightForWidth((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_pixmapregionselectordialog_paint_engine(void* self) {
    return KPixmapRegionSelectorDialog_PaintEngine((KPixmapRegionSelectorDialog*)self);
}

QPaintEngine* k_pixmapregionselectordialog_qbase_paint_engine(void* self) {
    return KPixmapRegionSelectorDialog_QBasePaintEngine((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KPixmapRegionSelectorDialog_OnPaintEngine((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

bool k_pixmapregionselectordialog_event(void* self, void* event) {
    return KPixmapRegionSelectorDialog_Event((KPixmapRegionSelectorDialog*)self, (QEvent*)event);
}

bool k_pixmapregionselectordialog_qbase_event(void* self, void* event) {
    return KPixmapRegionSelectorDialog_QBaseEvent((KPixmapRegionSelectorDialog*)self, (QEvent*)event);
}

void k_pixmapregionselectordialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_mouse_press_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_MousePressEvent((KPixmapRegionSelectorDialog*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectordialog_qbase_mouse_press_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseMousePressEvent((KPixmapRegionSelectorDialog*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectordialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnMousePressEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_mouse_release_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_MouseReleaseEvent((KPixmapRegionSelectorDialog*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectordialog_qbase_mouse_release_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseMouseReleaseEvent((KPixmapRegionSelectorDialog*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectordialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnMouseReleaseEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_mouse_double_click_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_MouseDoubleClickEvent((KPixmapRegionSelectorDialog*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectordialog_qbase_mouse_double_click_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseMouseDoubleClickEvent((KPixmapRegionSelectorDialog*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectordialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnMouseDoubleClickEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_mouse_move_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_MouseMoveEvent((KPixmapRegionSelectorDialog*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectordialog_qbase_mouse_move_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseMouseMoveEvent((KPixmapRegionSelectorDialog*)self, (QMouseEvent*)event);
}

void k_pixmapregionselectordialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnMouseMoveEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_wheel_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_WheelEvent((KPixmapRegionSelectorDialog*)self, (QWheelEvent*)event);
}

void k_pixmapregionselectordialog_qbase_wheel_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseWheelEvent((KPixmapRegionSelectorDialog*)self, (QWheelEvent*)event);
}

void k_pixmapregionselectordialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnWheelEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_key_release_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_KeyReleaseEvent((KPixmapRegionSelectorDialog*)self, (QKeyEvent*)event);
}

void k_pixmapregionselectordialog_qbase_key_release_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseKeyReleaseEvent((KPixmapRegionSelectorDialog*)self, (QKeyEvent*)event);
}

void k_pixmapregionselectordialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnKeyReleaseEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_focus_in_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_FocusInEvent((KPixmapRegionSelectorDialog*)self, (QFocusEvent*)event);
}

void k_pixmapregionselectordialog_qbase_focus_in_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseFocusInEvent((KPixmapRegionSelectorDialog*)self, (QFocusEvent*)event);
}

void k_pixmapregionselectordialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnFocusInEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_focus_out_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_FocusOutEvent((KPixmapRegionSelectorDialog*)self, (QFocusEvent*)event);
}

void k_pixmapregionselectordialog_qbase_focus_out_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseFocusOutEvent((KPixmapRegionSelectorDialog*)self, (QFocusEvent*)event);
}

void k_pixmapregionselectordialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnFocusOutEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_enter_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_EnterEvent((KPixmapRegionSelectorDialog*)self, (QEnterEvent*)event);
}

void k_pixmapregionselectordialog_qbase_enter_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseEnterEvent((KPixmapRegionSelectorDialog*)self, (QEnterEvent*)event);
}

void k_pixmapregionselectordialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnEnterEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_leave_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_LeaveEvent((KPixmapRegionSelectorDialog*)self, (QEvent*)event);
}

void k_pixmapregionselectordialog_qbase_leave_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseLeaveEvent((KPixmapRegionSelectorDialog*)self, (QEvent*)event);
}

void k_pixmapregionselectordialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnLeaveEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_paint_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_PaintEvent((KPixmapRegionSelectorDialog*)self, (QPaintEvent*)event);
}

void k_pixmapregionselectordialog_qbase_paint_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBasePaintEvent((KPixmapRegionSelectorDialog*)self, (QPaintEvent*)event);
}

void k_pixmapregionselectordialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnPaintEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_move_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_MoveEvent((KPixmapRegionSelectorDialog*)self, (QMoveEvent*)event);
}

void k_pixmapregionselectordialog_qbase_move_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseMoveEvent((KPixmapRegionSelectorDialog*)self, (QMoveEvent*)event);
}

void k_pixmapregionselectordialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnMoveEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_tablet_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_TabletEvent((KPixmapRegionSelectorDialog*)self, (QTabletEvent*)event);
}

void k_pixmapregionselectordialog_qbase_tablet_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseTabletEvent((KPixmapRegionSelectorDialog*)self, (QTabletEvent*)event);
}

void k_pixmapregionselectordialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnTabletEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_action_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_ActionEvent((KPixmapRegionSelectorDialog*)self, (QActionEvent*)event);
}

void k_pixmapregionselectordialog_qbase_action_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseActionEvent((KPixmapRegionSelectorDialog*)self, (QActionEvent*)event);
}

void k_pixmapregionselectordialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnActionEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_drag_enter_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_DragEnterEvent((KPixmapRegionSelectorDialog*)self, (QDragEnterEvent*)event);
}

void k_pixmapregionselectordialog_qbase_drag_enter_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseDragEnterEvent((KPixmapRegionSelectorDialog*)self, (QDragEnterEvent*)event);
}

void k_pixmapregionselectordialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnDragEnterEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_drag_move_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_DragMoveEvent((KPixmapRegionSelectorDialog*)self, (QDragMoveEvent*)event);
}

void k_pixmapregionselectordialog_qbase_drag_move_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseDragMoveEvent((KPixmapRegionSelectorDialog*)self, (QDragMoveEvent*)event);
}

void k_pixmapregionselectordialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnDragMoveEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_drag_leave_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_DragLeaveEvent((KPixmapRegionSelectorDialog*)self, (QDragLeaveEvent*)event);
}

void k_pixmapregionselectordialog_qbase_drag_leave_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseDragLeaveEvent((KPixmapRegionSelectorDialog*)self, (QDragLeaveEvent*)event);
}

void k_pixmapregionselectordialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnDragLeaveEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_drop_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_DropEvent((KPixmapRegionSelectorDialog*)self, (QDropEvent*)event);
}

void k_pixmapregionselectordialog_qbase_drop_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseDropEvent((KPixmapRegionSelectorDialog*)self, (QDropEvent*)event);
}

void k_pixmapregionselectordialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnDropEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_hide_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_HideEvent((KPixmapRegionSelectorDialog*)self, (QHideEvent*)event);
}

void k_pixmapregionselectordialog_qbase_hide_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseHideEvent((KPixmapRegionSelectorDialog*)self, (QHideEvent*)event);
}

void k_pixmapregionselectordialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnHideEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

bool k_pixmapregionselectordialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPixmapRegionSelectorDialog_NativeEvent((KPixmapRegionSelectorDialog*)self, qstring(eventType), message, result);
}

bool k_pixmapregionselectordialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPixmapRegionSelectorDialog_QBaseNativeEvent((KPixmapRegionSelectorDialog*)self, qstring(eventType), message, result);
}

void k_pixmapregionselectordialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KPixmapRegionSelectorDialog_OnNativeEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_change_event(void* self, void* param1) {
    KPixmapRegionSelectorDialog_ChangeEvent((KPixmapRegionSelectorDialog*)self, (QEvent*)param1);
}

void k_pixmapregionselectordialog_qbase_change_event(void* self, void* param1) {
    KPixmapRegionSelectorDialog_QBaseChangeEvent((KPixmapRegionSelectorDialog*)self, (QEvent*)param1);
}

void k_pixmapregionselectordialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnChangeEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

int32_t k_pixmapregionselectordialog_metric(void* self, int32_t param1) {
    return KPixmapRegionSelectorDialog_Metric((KPixmapRegionSelectorDialog*)self, param1);
}

int32_t k_pixmapregionselectordialog_qbase_metric(void* self, int32_t param1) {
    return KPixmapRegionSelectorDialog_QBaseMetric((KPixmapRegionSelectorDialog*)self, param1);
}

void k_pixmapregionselectordialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KPixmapRegionSelectorDialog_OnMetric((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_init_painter(void* self, void* painter) {
    KPixmapRegionSelectorDialog_InitPainter((KPixmapRegionSelectorDialog*)self, (QPainter*)painter);
}

void k_pixmapregionselectordialog_qbase_init_painter(void* self, void* painter) {
    KPixmapRegionSelectorDialog_QBaseInitPainter((KPixmapRegionSelectorDialog*)self, (QPainter*)painter);
}

void k_pixmapregionselectordialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnInitPainter((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_pixmapregionselectordialog_redirected(void* self, void* offset) {
    return KPixmapRegionSelectorDialog_Redirected((KPixmapRegionSelectorDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_pixmapregionselectordialog_qbase_redirected(void* self, void* offset) {
    return KPixmapRegionSelectorDialog_QBaseRedirected((KPixmapRegionSelectorDialog*)self, (QPoint*)offset);
}

void k_pixmapregionselectordialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnRedirected((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

QPainter* k_pixmapregionselectordialog_shared_painter(void* self) {
    return KPixmapRegionSelectorDialog_SharedPainter((KPixmapRegionSelectorDialog*)self);
}

QPainter* k_pixmapregionselectordialog_qbase_shared_painter(void* self) {
    return KPixmapRegionSelectorDialog_QBaseSharedPainter((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KPixmapRegionSelectorDialog_OnSharedPainter((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_input_method_event(void* self, void* param1) {
    KPixmapRegionSelectorDialog_InputMethodEvent((KPixmapRegionSelectorDialog*)self, (QInputMethodEvent*)param1);
}

void k_pixmapregionselectordialog_qbase_input_method_event(void* self, void* param1) {
    KPixmapRegionSelectorDialog_QBaseInputMethodEvent((KPixmapRegionSelectorDialog*)self, (QInputMethodEvent*)param1);
}

void k_pixmapregionselectordialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnInputMethodEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

QVariant* k_pixmapregionselectordialog_input_method_query(void* self, int64_t param1) {
    return KPixmapRegionSelectorDialog_InputMethodQuery((KPixmapRegionSelectorDialog*)self, param1);
}

QVariant* k_pixmapregionselectordialog_qbase_input_method_query(void* self, int64_t param1) {
    return KPixmapRegionSelectorDialog_QBaseInputMethodQuery((KPixmapRegionSelectorDialog*)self, param1);
}

void k_pixmapregionselectordialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KPixmapRegionSelectorDialog_OnInputMethodQuery((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

bool k_pixmapregionselectordialog_focus_next_prev_child(void* self, bool next) {
    return KPixmapRegionSelectorDialog_FocusNextPrevChild((KPixmapRegionSelectorDialog*)self, next);
}

bool k_pixmapregionselectordialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KPixmapRegionSelectorDialog_QBaseFocusNextPrevChild((KPixmapRegionSelectorDialog*)self, next);
}

void k_pixmapregionselectordialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KPixmapRegionSelectorDialog_OnFocusNextPrevChild((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_timer_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_TimerEvent((KPixmapRegionSelectorDialog*)self, (QTimerEvent*)event);
}

void k_pixmapregionselectordialog_qbase_timer_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseTimerEvent((KPixmapRegionSelectorDialog*)self, (QTimerEvent*)event);
}

void k_pixmapregionselectordialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnTimerEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_child_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_ChildEvent((KPixmapRegionSelectorDialog*)self, (QChildEvent*)event);
}

void k_pixmapregionselectordialog_qbase_child_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseChildEvent((KPixmapRegionSelectorDialog*)self, (QChildEvent*)event);
}

void k_pixmapregionselectordialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnChildEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_custom_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_CustomEvent((KPixmapRegionSelectorDialog*)self, (QEvent*)event);
}

void k_pixmapregionselectordialog_qbase_custom_event(void* self, void* event) {
    KPixmapRegionSelectorDialog_QBaseCustomEvent((KPixmapRegionSelectorDialog*)self, (QEvent*)event);
}

void k_pixmapregionselectordialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnCustomEvent((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_connect_notify(void* self, void* signal) {
    KPixmapRegionSelectorDialog_ConnectNotify((KPixmapRegionSelectorDialog*)self, (QMetaMethod*)signal);
}

void k_pixmapregionselectordialog_qbase_connect_notify(void* self, void* signal) {
    KPixmapRegionSelectorDialog_QBaseConnectNotify((KPixmapRegionSelectorDialog*)self, (QMetaMethod*)signal);
}

void k_pixmapregionselectordialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnConnectNotify((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_disconnect_notify(void* self, void* signal) {
    KPixmapRegionSelectorDialog_DisconnectNotify((KPixmapRegionSelectorDialog*)self, (QMetaMethod*)signal);
}

void k_pixmapregionselectordialog_qbase_disconnect_notify(void* self, void* signal) {
    KPixmapRegionSelectorDialog_QBaseDisconnectNotify((KPixmapRegionSelectorDialog*)self, (QMetaMethod*)signal);
}

void k_pixmapregionselectordialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnDisconnectNotify((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_adjust_position(void* self, void* param1) {
    KPixmapRegionSelectorDialog_AdjustPosition((KPixmapRegionSelectorDialog*)self, (QWidget*)param1);
}

void k_pixmapregionselectordialog_qbase_adjust_position(void* self, void* param1) {
    KPixmapRegionSelectorDialog_QBaseAdjustPosition((KPixmapRegionSelectorDialog*)self, (QWidget*)param1);
}

void k_pixmapregionselectordialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnAdjustPosition((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_update_micro_focus(void* self) {
    KPixmapRegionSelectorDialog_UpdateMicroFocus((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_qbase_update_micro_focus(void* self) {
    KPixmapRegionSelectorDialog_QBaseUpdateMicroFocus((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_update_micro_focus(void* self, void (*callback)()) {
    KPixmapRegionSelectorDialog_OnUpdateMicroFocus((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_create(void* self) {
    KPixmapRegionSelectorDialog_Create((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_qbase_create(void* self) {
    KPixmapRegionSelectorDialog_QBaseCreate((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_create(void* self, void (*callback)()) {
    KPixmapRegionSelectorDialog_OnCreate((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_destroy(void* self) {
    KPixmapRegionSelectorDialog_Destroy((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_qbase_destroy(void* self) {
    KPixmapRegionSelectorDialog_QBaseDestroy((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_destroy(void* self, void (*callback)()) {
    KPixmapRegionSelectorDialog_OnDestroy((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

bool k_pixmapregionselectordialog_focus_next_child(void* self) {
    return KPixmapRegionSelectorDialog_FocusNextChild((KPixmapRegionSelectorDialog*)self);
}

bool k_pixmapregionselectordialog_qbase_focus_next_child(void* self) {
    return KPixmapRegionSelectorDialog_QBaseFocusNextChild((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_focus_next_child(void* self, bool (*callback)()) {
    KPixmapRegionSelectorDialog_OnFocusNextChild((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

bool k_pixmapregionselectordialog_focus_previous_child(void* self) {
    return KPixmapRegionSelectorDialog_FocusPreviousChild((KPixmapRegionSelectorDialog*)self);
}

bool k_pixmapregionselectordialog_qbase_focus_previous_child(void* self) {
    return KPixmapRegionSelectorDialog_QBaseFocusPreviousChild((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KPixmapRegionSelectorDialog_OnFocusPreviousChild((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

QObject* k_pixmapregionselectordialog_sender(void* self) {
    return KPixmapRegionSelectorDialog_Sender((KPixmapRegionSelectorDialog*)self);
}

QObject* k_pixmapregionselectordialog_qbase_sender(void* self) {
    return KPixmapRegionSelectorDialog_QBaseSender((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_sender(void* self, QObject* (*callback)()) {
    KPixmapRegionSelectorDialog_OnSender((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

int32_t k_pixmapregionselectordialog_sender_signal_index(void* self) {
    return KPixmapRegionSelectorDialog_SenderSignalIndex((KPixmapRegionSelectorDialog*)self);
}

int32_t k_pixmapregionselectordialog_qbase_sender_signal_index(void* self) {
    return KPixmapRegionSelectorDialog_QBaseSenderSignalIndex((KPixmapRegionSelectorDialog*)self);
}

void k_pixmapregionselectordialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPixmapRegionSelectorDialog_OnSenderSignalIndex((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

int32_t k_pixmapregionselectordialog_receivers(void* self, const char* signal) {
    return KPixmapRegionSelectorDialog_Receivers((KPixmapRegionSelectorDialog*)self, signal);
}

int32_t k_pixmapregionselectordialog_qbase_receivers(void* self, const char* signal) {
    return KPixmapRegionSelectorDialog_QBaseReceivers((KPixmapRegionSelectorDialog*)self, signal);
}

void k_pixmapregionselectordialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPixmapRegionSelectorDialog_OnReceivers((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

bool k_pixmapregionselectordialog_is_signal_connected(void* self, void* signal) {
    return KPixmapRegionSelectorDialog_IsSignalConnected((KPixmapRegionSelectorDialog*)self, (QMetaMethod*)signal);
}

bool k_pixmapregionselectordialog_qbase_is_signal_connected(void* self, void* signal) {
    return KPixmapRegionSelectorDialog_QBaseIsSignalConnected((KPixmapRegionSelectorDialog*)self, (QMetaMethod*)signal);
}

void k_pixmapregionselectordialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPixmapRegionSelectorDialog_OnIsSignalConnected((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

double k_pixmapregionselectordialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPixmapRegionSelectorDialog_GetDecodedMetricF((KPixmapRegionSelectorDialog*)self, metricA, metricB);
}

double k_pixmapregionselectordialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPixmapRegionSelectorDialog_QBaseGetDecodedMetricF((KPixmapRegionSelectorDialog*)self, metricA, metricB);
}

void k_pixmapregionselectordialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KPixmapRegionSelectorDialog_OnGetDecodedMetricF((KPixmapRegionSelectorDialog*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_pixmapregionselectordialog_delete(void* self) {
    KPixmapRegionSelectorDialog_Delete((KPixmapRegionSelectorDialog*)(self));
}
