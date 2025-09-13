#include "libkplotaxis.hpp"
#include "libkplotobject.hpp"
#include "libkplotpoint.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqframe.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkplotwidget.hpp"
#include "libkplotwidget.h"

KPlotWidget* k_plotwidget_new(void* parent) {
    return KPlotWidget_new((QWidget*)parent);
}

KPlotWidget* k_plotwidget_new2() {
    return KPlotWidget_new2();
}

const QMetaObject* k_plotwidget_meta_object(void* self) {
    return KPlotWidget_MetaObject((KPlotWidget*)self);
}

void* k_plotwidget_metacast(void* self, const char* param1) {
    return KPlotWidget_Metacast((KPlotWidget*)self, param1);
}

int32_t k_plotwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPlotWidget_Metacall((KPlotWidget*)self, param1, param2, param3);
}

void k_plotwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPlotWidget_OnMetacall((KPlotWidget*)self, (intptr_t)callback);
}

int32_t k_plotwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPlotWidget_QBaseMetacall((KPlotWidget*)self, param1, param2, param3);
}

const char* k_plotwidget_tr(const char* s) {
    libqt_string _str = KPlotWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* k_plotwidget_minimum_size_hint(void* self) {
    return KPlotWidget_MinimumSizeHint((KPlotWidget*)self);
}

void k_plotwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KPlotWidget_OnMinimumSizeHint((KPlotWidget*)self, (intptr_t)callback);
}

QSize* k_plotwidget_qbase_minimum_size_hint(void* self) {
    return KPlotWidget_QBaseMinimumSizeHint((KPlotWidget*)self);
}

QSize* k_plotwidget_size_hint(void* self) {
    return KPlotWidget_SizeHint((KPlotWidget*)self);
}

void k_plotwidget_on_size_hint(void* self, QSize* (*callback)()) {
    KPlotWidget_OnSizeHint((KPlotWidget*)self, (intptr_t)callback);
}

QSize* k_plotwidget_qbase_size_hint(void* self) {
    return KPlotWidget_QBaseSizeHint((KPlotWidget*)self);
}

void k_plotwidget_set_limits(void* self, double x1, double x2, double y1, double y2) {
    KPlotWidget_SetLimits((KPlotWidget*)self, x1, x2, y1, y2);
}

void k_plotwidget_set_secondary_limits(void* self, double x1, double x2, double y1, double y2) {
    KPlotWidget_SetSecondaryLimits((KPlotWidget*)self, x1, x2, y1, y2);
}

void k_plotwidget_clear_secondary_limits(void* self) {
    KPlotWidget_ClearSecondaryLimits((KPlotWidget*)self);
}

QRectF* k_plotwidget_data_rect(void* self) {
    return KPlotWidget_DataRect((KPlotWidget*)self);
}

QRectF* k_plotwidget_secondary_data_rect(void* self) {
    return KPlotWidget_SecondaryDataRect((KPlotWidget*)self);
}

QRect* k_plotwidget_pix_rect(void* self) {
    return KPlotWidget_PixRect((KPlotWidget*)self);
}

void k_plotwidget_add_plot_object(void* self, void* object) {
    KPlotWidget_AddPlotObject((KPlotWidget*)self, (KPlotObject*)object);
}

void k_plotwidget_add_plot_objects(void* self, libqt_list objects) {
    KPlotWidget_AddPlotObjects((KPlotWidget*)self, objects);
}

libqt_list /* of KPlotObject* */ k_plotwidget_plot_objects(void* self) {
    libqt_list _arr = KPlotWidget_PlotObjects((KPlotWidget*)self);
    return _arr;
}

void k_plotwidget_set_auto_delete_plot_objects(void* self, bool autoDelete) {
    KPlotWidget_SetAutoDeletePlotObjects((KPlotWidget*)self, autoDelete);
}

void k_plotwidget_remove_all_plot_objects(void* self) {
    KPlotWidget_RemoveAllPlotObjects((KPlotWidget*)self);
}

void k_plotwidget_reset_plot_mask(void* self) {
    KPlotWidget_ResetPlotMask((KPlotWidget*)self);
}

void k_plotwidget_reset_plot(void* self) {
    KPlotWidget_ResetPlot((KPlotWidget*)self);
}

void k_plotwidget_replace_plot_object(void* self, int i, void* o) {
    KPlotWidget_ReplacePlotObject((KPlotWidget*)self, i, (KPlotObject*)o);
}

QColor* k_plotwidget_background_color(void* self) {
    return KPlotWidget_BackgroundColor((KPlotWidget*)self);
}

QColor* k_plotwidget_foreground_color(void* self) {
    return KPlotWidget_ForegroundColor((KPlotWidget*)self);
}

QColor* k_plotwidget_grid_color(void* self) {
    return KPlotWidget_GridColor((KPlotWidget*)self);
}

void k_plotwidget_set_background_color(void* self, void* bg) {
    KPlotWidget_SetBackgroundColor((KPlotWidget*)self, (QColor*)bg);
}

void k_plotwidget_set_foreground_color(void* self, void* fg) {
    KPlotWidget_SetForegroundColor((KPlotWidget*)self, (QColor*)fg);
}

void k_plotwidget_set_grid_color(void* self, void* gc) {
    KPlotWidget_SetGridColor((KPlotWidget*)self, (QColor*)gc);
}

bool k_plotwidget_is_grid_shown(void* self) {
    return KPlotWidget_IsGridShown((KPlotWidget*)self);
}

bool k_plotwidget_is_object_tool_tip_shown(void* self) {
    return KPlotWidget_IsObjectToolTipShown((KPlotWidget*)self);
}

bool k_plotwidget_antialiasing(void* self) {
    return KPlotWidget_Antialiasing((KPlotWidget*)self);
}

void k_plotwidget_set_antialiasing(void* self, bool b) {
    KPlotWidget_SetAntialiasing((KPlotWidget*)self, b);
}

int32_t k_plotwidget_left_padding(void* self) {
    return KPlotWidget_LeftPadding((KPlotWidget*)self);
}

int32_t k_plotwidget_right_padding(void* self) {
    return KPlotWidget_RightPadding((KPlotWidget*)self);
}

int32_t k_plotwidget_top_padding(void* self) {
    return KPlotWidget_TopPadding((KPlotWidget*)self);
}

int32_t k_plotwidget_bottom_padding(void* self) {
    return KPlotWidget_BottomPadding((KPlotWidget*)self);
}

void k_plotwidget_set_left_padding(void* self, int padding) {
    KPlotWidget_SetLeftPadding((KPlotWidget*)self, padding);
}

void k_plotwidget_set_right_padding(void* self, int padding) {
    KPlotWidget_SetRightPadding((KPlotWidget*)self, padding);
}

void k_plotwidget_set_top_padding(void* self, int padding) {
    KPlotWidget_SetTopPadding((KPlotWidget*)self, padding);
}

void k_plotwidget_set_bottom_padding(void* self, int padding) {
    KPlotWidget_SetBottomPadding((KPlotWidget*)self, padding);
}

void k_plotwidget_set_default_paddings(void* self) {
    KPlotWidget_SetDefaultPaddings((KPlotWidget*)self);
}

QPointF* k_plotwidget_map_to_widget(void* self, void* p) {
    return KPlotWidget_MapToWidget((KPlotWidget*)self, (QPointF*)p);
}

void k_plotwidget_mask_rect(void* self, void* r) {
    KPlotWidget_MaskRect((KPlotWidget*)self, (QRectF*)r);
}

void k_plotwidget_mask_along_line(void* self, void* p1, void* p2) {
    KPlotWidget_MaskAlongLine((KPlotWidget*)self, (QPointF*)p1, (QPointF*)p2);
}

void k_plotwidget_place_label(void* self, void* painter, void* pp) {
    KPlotWidget_PlaceLabel((KPlotWidget*)self, (QPainter*)painter, (KPlotPoint*)pp);
}

KPlotAxis* k_plotwidget_axis(void* self, int32_t typeVal) {
    return KPlotWidget_Axis((KPlotWidget*)self, typeVal);
}

const KPlotAxis* k_plotwidget_axis2(void* self, int32_t typeVal) {
    return KPlotWidget_Axis2((KPlotWidget*)self, typeVal);
}

void k_plotwidget_set_show_grid(void* self, bool show) {
    KPlotWidget_SetShowGrid((KPlotWidget*)self, show);
}

void k_plotwidget_set_object_tool_tip_shown(void* self, bool show) {
    KPlotWidget_SetObjectToolTipShown((KPlotWidget*)self, show);
}

bool k_plotwidget_event(void* self, void* param1) {
    return KPlotWidget_Event((KPlotWidget*)self, (QEvent*)param1);
}

void k_plotwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    KPlotWidget_OnEvent((KPlotWidget*)self, (intptr_t)callback);
}

bool k_plotwidget_qbase_event(void* self, void* param1) {
    return KPlotWidget_QBaseEvent((KPlotWidget*)self, (QEvent*)param1);
}

void k_plotwidget_paint_event(void* self, void* param1) {
    KPlotWidget_PaintEvent((KPlotWidget*)self, (QPaintEvent*)param1);
}

void k_plotwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnPaintEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_qbase_paint_event(void* self, void* param1) {
    KPlotWidget_QBasePaintEvent((KPlotWidget*)self, (QPaintEvent*)param1);
}

void k_plotwidget_resize_event(void* self, void* param1) {
    KPlotWidget_ResizeEvent((KPlotWidget*)self, (QResizeEvent*)param1);
}

void k_plotwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnResizeEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_qbase_resize_event(void* self, void* param1) {
    KPlotWidget_QBaseResizeEvent((KPlotWidget*)self, (QResizeEvent*)param1);
}

void k_plotwidget_draw_axes(void* self, void* p) {
    KPlotWidget_DrawAxes((KPlotWidget*)self, (QPainter*)p);
}

void k_plotwidget_on_draw_axes(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnDrawAxes((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_qbase_draw_axes(void* self, void* p) {
    KPlotWidget_QBaseDrawAxes((KPlotWidget*)self, (QPainter*)p);
}

void k_plotwidget_set_pix_rect(void* self) {
    KPlotWidget_SetPixRect((KPlotWidget*)self);
}

void k_plotwidget_on_set_pix_rect(void* self, void (*callback)()) {
    KPlotWidget_OnSetPixRect((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_qbase_set_pix_rect(void* self) {
    KPlotWidget_QBaseSetPixRect((KPlotWidget*)self);
}

libqt_list /* of KPlotPoint* */ k_plotwidget_points_under_point(void* self, void* p) {
    libqt_list _arr = KPlotWidget_PointsUnderPoint((KPlotWidget*)self, (QPoint*)p);
    return _arr;
}

void k_plotwidget_on_points_under_point(void* self, KPlotPoint** (*callback)(void*, void*)) {
    KPlotWidget_OnPointsUnderPoint((KPlotWidget*)self, (intptr_t)callback);
}

libqt_list /* of KPlotPoint* */ k_plotwidget_qbase_points_under_point(void* self, void* p) {
    libqt_list _arr = KPlotWidget_QBasePointsUnderPoint((KPlotWidget*)self, (QPoint*)p);
    return _arr;
}

const char* k_plotwidget_tr2(const char* s, const char* c) {
    libqt_string _str = KPlotWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_plotwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KPlotWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_plotwidget_mask_rect2(void* self, void* r, float value) {
    KPlotWidget_MaskRect2((KPlotWidget*)self, (QRectF*)r, value);
}

void k_plotwidget_mask_along_line3(void* self, void* p1, void* p2, float value) {
    KPlotWidget_MaskAlongLine3((KPlotWidget*)self, (QPointF*)p1, (QPointF*)p2, value);
}

int32_t k_plotwidget_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_plotwidget_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_plotwidget_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_plotwidget_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_plotwidget_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_plotwidget_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_plotwidget_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_plotwidget_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_plotwidget_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_plotwidget_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_plotwidget_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_plotwidget_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_plotwidget_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_plotwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_plotwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_plotwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_plotwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_plotwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_plotwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_plotwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_plotwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_plotwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_plotwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_plotwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_plotwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_plotwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_plotwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_plotwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_plotwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_plotwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_plotwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_plotwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_plotwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_plotwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_plotwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_plotwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_plotwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_plotwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_plotwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_plotwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_plotwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_plotwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_plotwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_plotwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_plotwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_plotwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_plotwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_plotwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_plotwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_plotwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_plotwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_plotwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_plotwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_plotwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_plotwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_plotwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_plotwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_plotwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_plotwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_plotwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_plotwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_plotwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_plotwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_plotwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_plotwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_plotwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_plotwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_plotwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_plotwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_plotwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_plotwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_plotwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_plotwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_plotwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_plotwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_plotwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_plotwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_plotwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_plotwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_plotwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_plotwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_plotwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_plotwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_plotwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_plotwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_plotwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_plotwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_plotwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_plotwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_plotwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_plotwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_plotwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_plotwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_plotwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_plotwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_plotwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_plotwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_plotwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_plotwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_plotwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_plotwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_plotwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_plotwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_plotwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_plotwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_plotwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_plotwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_plotwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_plotwidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_plotwidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_plotwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_plotwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_plotwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_plotwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_plotwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_plotwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_plotwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_plotwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_plotwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_plotwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_plotwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_plotwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_plotwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_plotwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_plotwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_plotwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_plotwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_plotwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_plotwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_plotwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_plotwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_plotwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_plotwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_plotwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_plotwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_plotwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_plotwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_plotwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_plotwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_plotwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_plotwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_plotwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_plotwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_plotwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_plotwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_plotwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_plotwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_plotwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_plotwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_plotwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_plotwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_plotwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_plotwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_plotwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_plotwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_plotwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_plotwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_plotwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_plotwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_plotwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_plotwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_plotwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_plotwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_plotwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_plotwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_plotwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_plotwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_plotwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_plotwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_plotwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_plotwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_plotwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_plotwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_plotwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_plotwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_plotwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_plotwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_plotwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_plotwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_plotwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_plotwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_plotwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_plotwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_plotwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_plotwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_plotwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_plotwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_plotwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_plotwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_plotwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_plotwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_plotwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_plotwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_plotwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_plotwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_plotwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_plotwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_plotwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_plotwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_plotwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_plotwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_plotwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_plotwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_plotwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_plotwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_plotwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_plotwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_plotwidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_plotwidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_plotwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_plotwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_plotwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_plotwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_plotwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_plotwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_plotwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_plotwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_plotwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_plotwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_plotwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_plotwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_plotwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_plotwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_plotwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_plotwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_plotwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_plotwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_plotwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_plotwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_plotwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_plotwidget_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_plotwidget_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_plotwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_plotwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_plotwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_plotwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_plotwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_plotwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_plotwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_plotwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_plotwidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_plotwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_plotwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_plotwidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_plotwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_plotwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_plotwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_plotwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_plotwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_plotwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_plotwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_plotwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_plotwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_plotwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_plotwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_plotwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_plotwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_plotwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_plotwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_plotwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_plotwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_plotwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_plotwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_plotwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_plotwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_plotwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_plotwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_plotwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_plotwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_plotwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_plotwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_plotwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_plotwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_plotwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_plotwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_plotwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_plotwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_plotwidget_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_plotwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_plotwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_plotwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_plotwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_plotwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_plotwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_plotwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_plotwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_plotwidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_plotwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_plotwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_plotwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_plotwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_plotwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_plotwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_plotwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_plotwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_plotwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_plotwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_plotwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_plotwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_plotwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_plotwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_plotwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_plotwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_plotwidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_plotwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_plotwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_plotwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_plotwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_plotwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_plotwidget_dynamic_property_names");
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

QBindingStorage* k_plotwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_plotwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_plotwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_plotwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_plotwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_plotwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_plotwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_plotwidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_plotwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_plotwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_plotwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_plotwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_plotwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_plotwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_plotwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_plotwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_plotwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_plotwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_plotwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_plotwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_plotwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_plotwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_plotwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_plotwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_plotwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_plotwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_plotwidget_change_event(void* self, void* param1) {
    KPlotWidget_ChangeEvent((KPlotWidget*)self, (QEvent*)param1);
}

void k_plotwidget_qbase_change_event(void* self, void* param1) {
    KPlotWidget_QBaseChangeEvent((KPlotWidget*)self, (QEvent*)param1);
}

void k_plotwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnChangeEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_init_style_option(void* self, void* option) {
    KPlotWidget_InitStyleOption((KPlotWidget*)self, (QStyleOptionFrame*)option);
}

void k_plotwidget_qbase_init_style_option(void* self, void* option) {
    KPlotWidget_QBaseInitStyleOption((KPlotWidget*)self, (QStyleOptionFrame*)option);
}

void k_plotwidget_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnInitStyleOption((KPlotWidget*)self, (intptr_t)callback);
}

int32_t k_plotwidget_dev_type(void* self) {
    return KPlotWidget_DevType((KPlotWidget*)self);
}

int32_t k_plotwidget_qbase_dev_type(void* self) {
    return KPlotWidget_QBaseDevType((KPlotWidget*)self);
}

void k_plotwidget_on_dev_type(void* self, int32_t (*callback)()) {
    KPlotWidget_OnDevType((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_set_visible(void* self, bool visible) {
    KPlotWidget_SetVisible((KPlotWidget*)self, visible);
}

void k_plotwidget_qbase_set_visible(void* self, bool visible) {
    KPlotWidget_QBaseSetVisible((KPlotWidget*)self, visible);
}

void k_plotwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KPlotWidget_OnSetVisible((KPlotWidget*)self, (intptr_t)callback);
}

int32_t k_plotwidget_height_for_width(void* self, int param1) {
    return KPlotWidget_HeightForWidth((KPlotWidget*)self, param1);
}

int32_t k_plotwidget_qbase_height_for_width(void* self, int param1) {
    return KPlotWidget_QBaseHeightForWidth((KPlotWidget*)self, param1);
}

void k_plotwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KPlotWidget_OnHeightForWidth((KPlotWidget*)self, (intptr_t)callback);
}

bool k_plotwidget_has_height_for_width(void* self) {
    return KPlotWidget_HasHeightForWidth((KPlotWidget*)self);
}

bool k_plotwidget_qbase_has_height_for_width(void* self) {
    return KPlotWidget_QBaseHasHeightForWidth((KPlotWidget*)self);
}

void k_plotwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    KPlotWidget_OnHasHeightForWidth((KPlotWidget*)self, (intptr_t)callback);
}

QPaintEngine* k_plotwidget_paint_engine(void* self) {
    return KPlotWidget_PaintEngine((KPlotWidget*)self);
}

QPaintEngine* k_plotwidget_qbase_paint_engine(void* self) {
    return KPlotWidget_QBasePaintEngine((KPlotWidget*)self);
}

void k_plotwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KPlotWidget_OnPaintEngine((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_mouse_press_event(void* self, void* event) {
    KPlotWidget_MousePressEvent((KPlotWidget*)self, (QMouseEvent*)event);
}

void k_plotwidget_qbase_mouse_press_event(void* self, void* event) {
    KPlotWidget_QBaseMousePressEvent((KPlotWidget*)self, (QMouseEvent*)event);
}

void k_plotwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnMousePressEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_mouse_release_event(void* self, void* event) {
    KPlotWidget_MouseReleaseEvent((KPlotWidget*)self, (QMouseEvent*)event);
}

void k_plotwidget_qbase_mouse_release_event(void* self, void* event) {
    KPlotWidget_QBaseMouseReleaseEvent((KPlotWidget*)self, (QMouseEvent*)event);
}

void k_plotwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnMouseReleaseEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_mouse_double_click_event(void* self, void* event) {
    KPlotWidget_MouseDoubleClickEvent((KPlotWidget*)self, (QMouseEvent*)event);
}

void k_plotwidget_qbase_mouse_double_click_event(void* self, void* event) {
    KPlotWidget_QBaseMouseDoubleClickEvent((KPlotWidget*)self, (QMouseEvent*)event);
}

void k_plotwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnMouseDoubleClickEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_mouse_move_event(void* self, void* event) {
    KPlotWidget_MouseMoveEvent((KPlotWidget*)self, (QMouseEvent*)event);
}

void k_plotwidget_qbase_mouse_move_event(void* self, void* event) {
    KPlotWidget_QBaseMouseMoveEvent((KPlotWidget*)self, (QMouseEvent*)event);
}

void k_plotwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnMouseMoveEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_wheel_event(void* self, void* event) {
    KPlotWidget_WheelEvent((KPlotWidget*)self, (QWheelEvent*)event);
}

void k_plotwidget_qbase_wheel_event(void* self, void* event) {
    KPlotWidget_QBaseWheelEvent((KPlotWidget*)self, (QWheelEvent*)event);
}

void k_plotwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnWheelEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_key_press_event(void* self, void* event) {
    KPlotWidget_KeyPressEvent((KPlotWidget*)self, (QKeyEvent*)event);
}

void k_plotwidget_qbase_key_press_event(void* self, void* event) {
    KPlotWidget_QBaseKeyPressEvent((KPlotWidget*)self, (QKeyEvent*)event);
}

void k_plotwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnKeyPressEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_key_release_event(void* self, void* event) {
    KPlotWidget_KeyReleaseEvent((KPlotWidget*)self, (QKeyEvent*)event);
}

void k_plotwidget_qbase_key_release_event(void* self, void* event) {
    KPlotWidget_QBaseKeyReleaseEvent((KPlotWidget*)self, (QKeyEvent*)event);
}

void k_plotwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnKeyReleaseEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_focus_in_event(void* self, void* event) {
    KPlotWidget_FocusInEvent((KPlotWidget*)self, (QFocusEvent*)event);
}

void k_plotwidget_qbase_focus_in_event(void* self, void* event) {
    KPlotWidget_QBaseFocusInEvent((KPlotWidget*)self, (QFocusEvent*)event);
}

void k_plotwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnFocusInEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_focus_out_event(void* self, void* event) {
    KPlotWidget_FocusOutEvent((KPlotWidget*)self, (QFocusEvent*)event);
}

void k_plotwidget_qbase_focus_out_event(void* self, void* event) {
    KPlotWidget_QBaseFocusOutEvent((KPlotWidget*)self, (QFocusEvent*)event);
}

void k_plotwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnFocusOutEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_enter_event(void* self, void* event) {
    KPlotWidget_EnterEvent((KPlotWidget*)self, (QEnterEvent*)event);
}

void k_plotwidget_qbase_enter_event(void* self, void* event) {
    KPlotWidget_QBaseEnterEvent((KPlotWidget*)self, (QEnterEvent*)event);
}

void k_plotwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnEnterEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_leave_event(void* self, void* event) {
    KPlotWidget_LeaveEvent((KPlotWidget*)self, (QEvent*)event);
}

void k_plotwidget_qbase_leave_event(void* self, void* event) {
    KPlotWidget_QBaseLeaveEvent((KPlotWidget*)self, (QEvent*)event);
}

void k_plotwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnLeaveEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_move_event(void* self, void* event) {
    KPlotWidget_MoveEvent((KPlotWidget*)self, (QMoveEvent*)event);
}

void k_plotwidget_qbase_move_event(void* self, void* event) {
    KPlotWidget_QBaseMoveEvent((KPlotWidget*)self, (QMoveEvent*)event);
}

void k_plotwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnMoveEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_close_event(void* self, void* event) {
    KPlotWidget_CloseEvent((KPlotWidget*)self, (QCloseEvent*)event);
}

void k_plotwidget_qbase_close_event(void* self, void* event) {
    KPlotWidget_QBaseCloseEvent((KPlotWidget*)self, (QCloseEvent*)event);
}

void k_plotwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnCloseEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_context_menu_event(void* self, void* event) {
    KPlotWidget_ContextMenuEvent((KPlotWidget*)self, (QContextMenuEvent*)event);
}

void k_plotwidget_qbase_context_menu_event(void* self, void* event) {
    KPlotWidget_QBaseContextMenuEvent((KPlotWidget*)self, (QContextMenuEvent*)event);
}

void k_plotwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnContextMenuEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_tablet_event(void* self, void* event) {
    KPlotWidget_TabletEvent((KPlotWidget*)self, (QTabletEvent*)event);
}

void k_plotwidget_qbase_tablet_event(void* self, void* event) {
    KPlotWidget_QBaseTabletEvent((KPlotWidget*)self, (QTabletEvent*)event);
}

void k_plotwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnTabletEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_action_event(void* self, void* event) {
    KPlotWidget_ActionEvent((KPlotWidget*)self, (QActionEvent*)event);
}

void k_plotwidget_qbase_action_event(void* self, void* event) {
    KPlotWidget_QBaseActionEvent((KPlotWidget*)self, (QActionEvent*)event);
}

void k_plotwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnActionEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_drag_enter_event(void* self, void* event) {
    KPlotWidget_DragEnterEvent((KPlotWidget*)self, (QDragEnterEvent*)event);
}

void k_plotwidget_qbase_drag_enter_event(void* self, void* event) {
    KPlotWidget_QBaseDragEnterEvent((KPlotWidget*)self, (QDragEnterEvent*)event);
}

void k_plotwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnDragEnterEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_drag_move_event(void* self, void* event) {
    KPlotWidget_DragMoveEvent((KPlotWidget*)self, (QDragMoveEvent*)event);
}

void k_plotwidget_qbase_drag_move_event(void* self, void* event) {
    KPlotWidget_QBaseDragMoveEvent((KPlotWidget*)self, (QDragMoveEvent*)event);
}

void k_plotwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnDragMoveEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_drag_leave_event(void* self, void* event) {
    KPlotWidget_DragLeaveEvent((KPlotWidget*)self, (QDragLeaveEvent*)event);
}

void k_plotwidget_qbase_drag_leave_event(void* self, void* event) {
    KPlotWidget_QBaseDragLeaveEvent((KPlotWidget*)self, (QDragLeaveEvent*)event);
}

void k_plotwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnDragLeaveEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_drop_event(void* self, void* event) {
    KPlotWidget_DropEvent((KPlotWidget*)self, (QDropEvent*)event);
}

void k_plotwidget_qbase_drop_event(void* self, void* event) {
    KPlotWidget_QBaseDropEvent((KPlotWidget*)self, (QDropEvent*)event);
}

void k_plotwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnDropEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_show_event(void* self, void* event) {
    KPlotWidget_ShowEvent((KPlotWidget*)self, (QShowEvent*)event);
}

void k_plotwidget_qbase_show_event(void* self, void* event) {
    KPlotWidget_QBaseShowEvent((KPlotWidget*)self, (QShowEvent*)event);
}

void k_plotwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnShowEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_hide_event(void* self, void* event) {
    KPlotWidget_HideEvent((KPlotWidget*)self, (QHideEvent*)event);
}

void k_plotwidget_qbase_hide_event(void* self, void* event) {
    KPlotWidget_QBaseHideEvent((KPlotWidget*)self, (QHideEvent*)event);
}

void k_plotwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnHideEvent((KPlotWidget*)self, (intptr_t)callback);
}

bool k_plotwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPlotWidget_NativeEvent((KPlotWidget*)self, qstring(eventType), message, result);
}

bool k_plotwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPlotWidget_QBaseNativeEvent((KPlotWidget*)self, qstring(eventType), message, result);
}

void k_plotwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KPlotWidget_OnNativeEvent((KPlotWidget*)self, (intptr_t)callback);
}

int32_t k_plotwidget_metric(void* self, int32_t param1) {
    return KPlotWidget_Metric((KPlotWidget*)self, param1);
}

int32_t k_plotwidget_qbase_metric(void* self, int32_t param1) {
    return KPlotWidget_QBaseMetric((KPlotWidget*)self, param1);
}

void k_plotwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KPlotWidget_OnMetric((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_init_painter(void* self, void* painter) {
    KPlotWidget_InitPainter((KPlotWidget*)self, (QPainter*)painter);
}

void k_plotwidget_qbase_init_painter(void* self, void* painter) {
    KPlotWidget_QBaseInitPainter((KPlotWidget*)self, (QPainter*)painter);
}

void k_plotwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnInitPainter((KPlotWidget*)self, (intptr_t)callback);
}

QPaintDevice* k_plotwidget_redirected(void* self, void* offset) {
    return KPlotWidget_Redirected((KPlotWidget*)self, (QPoint*)offset);
}

QPaintDevice* k_plotwidget_qbase_redirected(void* self, void* offset) {
    return KPlotWidget_QBaseRedirected((KPlotWidget*)self, (QPoint*)offset);
}

void k_plotwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KPlotWidget_OnRedirected((KPlotWidget*)self, (intptr_t)callback);
}

QPainter* k_plotwidget_shared_painter(void* self) {
    return KPlotWidget_SharedPainter((KPlotWidget*)self);
}

QPainter* k_plotwidget_qbase_shared_painter(void* self) {
    return KPlotWidget_QBaseSharedPainter((KPlotWidget*)self);
}

void k_plotwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    KPlotWidget_OnSharedPainter((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_input_method_event(void* self, void* param1) {
    KPlotWidget_InputMethodEvent((KPlotWidget*)self, (QInputMethodEvent*)param1);
}

void k_plotwidget_qbase_input_method_event(void* self, void* param1) {
    KPlotWidget_QBaseInputMethodEvent((KPlotWidget*)self, (QInputMethodEvent*)param1);
}

void k_plotwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnInputMethodEvent((KPlotWidget*)self, (intptr_t)callback);
}

QVariant* k_plotwidget_input_method_query(void* self, int64_t param1) {
    return KPlotWidget_InputMethodQuery((KPlotWidget*)self, param1);
}

QVariant* k_plotwidget_qbase_input_method_query(void* self, int64_t param1) {
    return KPlotWidget_QBaseInputMethodQuery((KPlotWidget*)self, param1);
}

void k_plotwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KPlotWidget_OnInputMethodQuery((KPlotWidget*)self, (intptr_t)callback);
}

bool k_plotwidget_focus_next_prev_child(void* self, bool next) {
    return KPlotWidget_FocusNextPrevChild((KPlotWidget*)self, next);
}

bool k_plotwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return KPlotWidget_QBaseFocusNextPrevChild((KPlotWidget*)self, next);
}

void k_plotwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KPlotWidget_OnFocusNextPrevChild((KPlotWidget*)self, (intptr_t)callback);
}

bool k_plotwidget_event_filter(void* self, void* watched, void* event) {
    return KPlotWidget_EventFilter((KPlotWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool k_plotwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return KPlotWidget_QBaseEventFilter((KPlotWidget*)self, (QObject*)watched, (QEvent*)event);
}

void k_plotwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPlotWidget_OnEventFilter((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_timer_event(void* self, void* event) {
    KPlotWidget_TimerEvent((KPlotWidget*)self, (QTimerEvent*)event);
}

void k_plotwidget_qbase_timer_event(void* self, void* event) {
    KPlotWidget_QBaseTimerEvent((KPlotWidget*)self, (QTimerEvent*)event);
}

void k_plotwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnTimerEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_child_event(void* self, void* event) {
    KPlotWidget_ChildEvent((KPlotWidget*)self, (QChildEvent*)event);
}

void k_plotwidget_qbase_child_event(void* self, void* event) {
    KPlotWidget_QBaseChildEvent((KPlotWidget*)self, (QChildEvent*)event);
}

void k_plotwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnChildEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_custom_event(void* self, void* event) {
    KPlotWidget_CustomEvent((KPlotWidget*)self, (QEvent*)event);
}

void k_plotwidget_qbase_custom_event(void* self, void* event) {
    KPlotWidget_QBaseCustomEvent((KPlotWidget*)self, (QEvent*)event);
}

void k_plotwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnCustomEvent((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_connect_notify(void* self, void* signal) {
    KPlotWidget_ConnectNotify((KPlotWidget*)self, (QMetaMethod*)signal);
}

void k_plotwidget_qbase_connect_notify(void* self, void* signal) {
    KPlotWidget_QBaseConnectNotify((KPlotWidget*)self, (QMetaMethod*)signal);
}

void k_plotwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnConnectNotify((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_disconnect_notify(void* self, void* signal) {
    KPlotWidget_DisconnectNotify((KPlotWidget*)self, (QMetaMethod*)signal);
}

void k_plotwidget_qbase_disconnect_notify(void* self, void* signal) {
    KPlotWidget_QBaseDisconnectNotify((KPlotWidget*)self, (QMetaMethod*)signal);
}

void k_plotwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnDisconnectNotify((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_draw_frame(void* self, void* param1) {
    KPlotWidget_DrawFrame((KPlotWidget*)self, (QPainter*)param1);
}

void k_plotwidget_qbase_draw_frame(void* self, void* param1) {
    KPlotWidget_QBaseDrawFrame((KPlotWidget*)self, (QPainter*)param1);
}

void k_plotwidget_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    KPlotWidget_OnDrawFrame((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_update_micro_focus(void* self) {
    KPlotWidget_UpdateMicroFocus((KPlotWidget*)self);
}

void k_plotwidget_qbase_update_micro_focus(void* self) {
    KPlotWidget_QBaseUpdateMicroFocus((KPlotWidget*)self);
}

void k_plotwidget_on_update_micro_focus(void* self, void (*callback)()) {
    KPlotWidget_OnUpdateMicroFocus((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_create(void* self) {
    KPlotWidget_Create((KPlotWidget*)self);
}

void k_plotwidget_qbase_create(void* self) {
    KPlotWidget_QBaseCreate((KPlotWidget*)self);
}

void k_plotwidget_on_create(void* self, void (*callback)()) {
    KPlotWidget_OnCreate((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_destroy(void* self) {
    KPlotWidget_Destroy((KPlotWidget*)self);
}

void k_plotwidget_qbase_destroy(void* self) {
    KPlotWidget_QBaseDestroy((KPlotWidget*)self);
}

void k_plotwidget_on_destroy(void* self, void (*callback)()) {
    KPlotWidget_OnDestroy((KPlotWidget*)self, (intptr_t)callback);
}

bool k_plotwidget_focus_next_child(void* self) {
    return KPlotWidget_FocusNextChild((KPlotWidget*)self);
}

bool k_plotwidget_qbase_focus_next_child(void* self) {
    return KPlotWidget_QBaseFocusNextChild((KPlotWidget*)self);
}

void k_plotwidget_on_focus_next_child(void* self, bool (*callback)()) {
    KPlotWidget_OnFocusNextChild((KPlotWidget*)self, (intptr_t)callback);
}

bool k_plotwidget_focus_previous_child(void* self) {
    return KPlotWidget_FocusPreviousChild((KPlotWidget*)self);
}

bool k_plotwidget_qbase_focus_previous_child(void* self) {
    return KPlotWidget_QBaseFocusPreviousChild((KPlotWidget*)self);
}

void k_plotwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    KPlotWidget_OnFocusPreviousChild((KPlotWidget*)self, (intptr_t)callback);
}

QObject* k_plotwidget_sender(void* self) {
    return KPlotWidget_Sender((KPlotWidget*)self);
}

QObject* k_plotwidget_qbase_sender(void* self) {
    return KPlotWidget_QBaseSender((KPlotWidget*)self);
}

void k_plotwidget_on_sender(void* self, QObject* (*callback)()) {
    KPlotWidget_OnSender((KPlotWidget*)self, (intptr_t)callback);
}

int32_t k_plotwidget_sender_signal_index(void* self) {
    return KPlotWidget_SenderSignalIndex((KPlotWidget*)self);
}

int32_t k_plotwidget_qbase_sender_signal_index(void* self) {
    return KPlotWidget_QBaseSenderSignalIndex((KPlotWidget*)self);
}

void k_plotwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPlotWidget_OnSenderSignalIndex((KPlotWidget*)self, (intptr_t)callback);
}

int32_t k_plotwidget_receivers(void* self, const char* signal) {
    return KPlotWidget_Receivers((KPlotWidget*)self, signal);
}

int32_t k_plotwidget_qbase_receivers(void* self, const char* signal) {
    return KPlotWidget_QBaseReceivers((KPlotWidget*)self, signal);
}

void k_plotwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPlotWidget_OnReceivers((KPlotWidget*)self, (intptr_t)callback);
}

bool k_plotwidget_is_signal_connected(void* self, void* signal) {
    return KPlotWidget_IsSignalConnected((KPlotWidget*)self, (QMetaMethod*)signal);
}

bool k_plotwidget_qbase_is_signal_connected(void* self, void* signal) {
    return KPlotWidget_QBaseIsSignalConnected((KPlotWidget*)self, (QMetaMethod*)signal);
}

void k_plotwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPlotWidget_OnIsSignalConnected((KPlotWidget*)self, (intptr_t)callback);
}

double k_plotwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPlotWidget_GetDecodedMetricF((KPlotWidget*)self, metricA, metricB);
}

double k_plotwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPlotWidget_QBaseGetDecodedMetricF((KPlotWidget*)self, metricA, metricB);
}

void k_plotwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KPlotWidget_OnGetDecodedMetricF((KPlotWidget*)self, (intptr_t)callback);
}

void k_plotwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_plotwidget_delete(void* self) {
    KPlotWidget_Delete((KPlotWidget*)(self));
}
