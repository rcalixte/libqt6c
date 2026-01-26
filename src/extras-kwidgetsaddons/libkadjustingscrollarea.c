#include "../libqabstractscrollarea.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqframe.hpp"
#include "../libqmargins.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqscrollarea.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkadjustingscrollarea.hpp"
#include "libkadjustingscrollarea.h"

KAdjustingScrollArea* k_adjustingscrollarea_new(void* parent) {
    return KAdjustingScrollArea_new((QWidget*)parent);
}

KAdjustingScrollArea* k_adjustingscrollarea_new2() {
    return KAdjustingScrollArea_new2();
}

const QMetaObject* k_adjustingscrollarea_meta_object(void* self) {
    return KAdjustingScrollArea_MetaObject((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KAdjustingScrollArea_OnMetaObject((KAdjustingScrollArea*)self, (intptr_t)callback);
}

const QMetaObject* k_adjustingscrollarea_qbase_meta_object(void* self) {
    return KAdjustingScrollArea_QBaseMetaObject((KAdjustingScrollArea*)self);
}

void* k_adjustingscrollarea_metacast(void* self, const char* param1) {
    return KAdjustingScrollArea_Metacast((KAdjustingScrollArea*)self, param1);
}

void k_adjustingscrollarea_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KAdjustingScrollArea_OnMetacast((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void* k_adjustingscrollarea_qbase_metacast(void* self, const char* param1) {
    return KAdjustingScrollArea_QBaseMetacast((KAdjustingScrollArea*)self, param1);
}

int32_t k_adjustingscrollarea_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KAdjustingScrollArea_Metacall((KAdjustingScrollArea*)self, param1, param2, param3);
}

void k_adjustingscrollarea_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KAdjustingScrollArea_OnMetacall((KAdjustingScrollArea*)self, (intptr_t)callback);
}

int32_t k_adjustingscrollarea_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KAdjustingScrollArea_QBaseMetacall((KAdjustingScrollArea*)self, param1, param2, param3);
}

const char* k_adjustingscrollarea_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* k_adjustingscrollarea_minimum_size_hint(void* self) {
    return KAdjustingScrollArea_MinimumSizeHint((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KAdjustingScrollArea_OnMinimumSizeHint((KAdjustingScrollArea*)self, (intptr_t)callback);
}

QSize* k_adjustingscrollarea_qbase_minimum_size_hint(void* self) {
    return KAdjustingScrollArea_QBaseMinimumSizeHint((KAdjustingScrollArea*)self);
}

QSize* k_adjustingscrollarea_size_hint(void* self) {
    return KAdjustingScrollArea_SizeHint((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_size_hint(void* self, QSize* (*callback)()) {
    KAdjustingScrollArea_OnSizeHint((KAdjustingScrollArea*)self, (intptr_t)callback);
}

QSize* k_adjustingscrollarea_qbase_size_hint(void* self) {
    return KAdjustingScrollArea_QBaseSizeHint((KAdjustingScrollArea*)self);
}

bool k_adjustingscrollarea_event(void* self, void* event) {
    return KAdjustingScrollArea_Event((KAdjustingScrollArea*)self, (QEvent*)event);
}

void k_adjustingscrollarea_on_event(void* self, bool (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

bool k_adjustingscrollarea_qbase_event(void* self, void* event) {
    return KAdjustingScrollArea_QBaseEvent((KAdjustingScrollArea*)self, (QEvent*)event);
}

const char* k_adjustingscrollarea_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_adjustingscrollarea_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWidget* k_adjustingscrollarea_widget(void* self) {
    return QScrollArea_Widget((QScrollArea*)self);
}

void k_adjustingscrollarea_set_widget(void* self, void* widget) {
    QScrollArea_SetWidget((QScrollArea*)self, (QWidget*)widget);
}

QWidget* k_adjustingscrollarea_take_widget(void* self) {
    return QScrollArea_TakeWidget((QScrollArea*)self);
}

bool k_adjustingscrollarea_widget_resizable(void* self) {
    return QScrollArea_WidgetResizable((QScrollArea*)self);
}

void k_adjustingscrollarea_set_widget_resizable(void* self, bool resizable) {
    QScrollArea_SetWidgetResizable((QScrollArea*)self, resizable);
}

int32_t k_adjustingscrollarea_alignment(void* self) {
    return QScrollArea_Alignment((QScrollArea*)self);
}

void k_adjustingscrollarea_set_alignment(void* self, int32_t alignment) {
    QScrollArea_SetAlignment((QScrollArea*)self, alignment);
}

void k_adjustingscrollarea_ensure_visible(void* self, int x, int y) {
    QScrollArea_EnsureVisible((QScrollArea*)self, x, y);
}

void k_adjustingscrollarea_ensure_widget_visible(void* self, void* childWidget) {
    QScrollArea_EnsureWidgetVisible((QScrollArea*)self, (QWidget*)childWidget);
}

void k_adjustingscrollarea_ensure_visible3(void* self, int x, int y, int xmargin) {
    QScrollArea_EnsureVisible3((QScrollArea*)self, x, y, xmargin);
}

void k_adjustingscrollarea_ensure_visible4(void* self, int x, int y, int xmargin, int ymargin) {
    QScrollArea_EnsureVisible4((QScrollArea*)self, x, y, xmargin, ymargin);
}

void k_adjustingscrollarea_ensure_widget_visible2(void* self, void* childWidget, int xmargin) {
    QScrollArea_EnsureWidgetVisible2((QScrollArea*)self, (QWidget*)childWidget, xmargin);
}

void k_adjustingscrollarea_ensure_widget_visible3(void* self, void* childWidget, int xmargin, int ymargin) {
    QScrollArea_EnsureWidgetVisible3((QScrollArea*)self, (QWidget*)childWidget, xmargin, ymargin);
}

int32_t k_adjustingscrollarea_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_adjustingscrollarea_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* k_adjustingscrollarea_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void k_adjustingscrollarea_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t k_adjustingscrollarea_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_adjustingscrollarea_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* k_adjustingscrollarea_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void k_adjustingscrollarea_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* k_adjustingscrollarea_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void k_adjustingscrollarea_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void k_adjustingscrollarea_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ k_adjustingscrollarea_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* k_adjustingscrollarea_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void k_adjustingscrollarea_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* k_adjustingscrollarea_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t k_adjustingscrollarea_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void k_adjustingscrollarea_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t k_adjustingscrollarea_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_adjustingscrollarea_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_adjustingscrollarea_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_adjustingscrollarea_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_adjustingscrollarea_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_adjustingscrollarea_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_adjustingscrollarea_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_adjustingscrollarea_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_adjustingscrollarea_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_adjustingscrollarea_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_adjustingscrollarea_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_adjustingscrollarea_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_adjustingscrollarea_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_adjustingscrollarea_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_adjustingscrollarea_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_adjustingscrollarea_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_adjustingscrollarea_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_adjustingscrollarea_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_adjustingscrollarea_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_adjustingscrollarea_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_adjustingscrollarea_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_adjustingscrollarea_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_adjustingscrollarea_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_adjustingscrollarea_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_adjustingscrollarea_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_adjustingscrollarea_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_adjustingscrollarea_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_adjustingscrollarea_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_adjustingscrollarea_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_adjustingscrollarea_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_adjustingscrollarea_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_adjustingscrollarea_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_adjustingscrollarea_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_adjustingscrollarea_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_adjustingscrollarea_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_adjustingscrollarea_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_adjustingscrollarea_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_adjustingscrollarea_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_adjustingscrollarea_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_adjustingscrollarea_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_adjustingscrollarea_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_adjustingscrollarea_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_adjustingscrollarea_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_adjustingscrollarea_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_adjustingscrollarea_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_adjustingscrollarea_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_adjustingscrollarea_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_adjustingscrollarea_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_adjustingscrollarea_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_adjustingscrollarea_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_adjustingscrollarea_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_adjustingscrollarea_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_adjustingscrollarea_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_adjustingscrollarea_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_adjustingscrollarea_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_adjustingscrollarea_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_adjustingscrollarea_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_adjustingscrollarea_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_adjustingscrollarea_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_adjustingscrollarea_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_adjustingscrollarea_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_adjustingscrollarea_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_adjustingscrollarea_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_adjustingscrollarea_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_adjustingscrollarea_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_adjustingscrollarea_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_adjustingscrollarea_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_adjustingscrollarea_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_adjustingscrollarea_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_adjustingscrollarea_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_adjustingscrollarea_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_adjustingscrollarea_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_adjustingscrollarea_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_adjustingscrollarea_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_adjustingscrollarea_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_adjustingscrollarea_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_adjustingscrollarea_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_adjustingscrollarea_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_adjustingscrollarea_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_adjustingscrollarea_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_adjustingscrollarea_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_adjustingscrollarea_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_adjustingscrollarea_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_adjustingscrollarea_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_adjustingscrollarea_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_adjustingscrollarea_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_adjustingscrollarea_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_adjustingscrollarea_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_adjustingscrollarea_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_adjustingscrollarea_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_adjustingscrollarea_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_adjustingscrollarea_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_adjustingscrollarea_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_adjustingscrollarea_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_adjustingscrollarea_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_adjustingscrollarea_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_adjustingscrollarea_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_adjustingscrollarea_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_adjustingscrollarea_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_adjustingscrollarea_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_adjustingscrollarea_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_adjustingscrollarea_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_adjustingscrollarea_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_adjustingscrollarea_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_adjustingscrollarea_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_adjustingscrollarea_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_adjustingscrollarea_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_adjustingscrollarea_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_adjustingscrollarea_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_adjustingscrollarea_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_adjustingscrollarea_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_adjustingscrollarea_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_adjustingscrollarea_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_adjustingscrollarea_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_adjustingscrollarea_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_adjustingscrollarea_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_adjustingscrollarea_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_adjustingscrollarea_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_adjustingscrollarea_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_adjustingscrollarea_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_adjustingscrollarea_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_adjustingscrollarea_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_adjustingscrollarea_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_adjustingscrollarea_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_adjustingscrollarea_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_adjustingscrollarea_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_adjustingscrollarea_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_adjustingscrollarea_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_adjustingscrollarea_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_adjustingscrollarea_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_adjustingscrollarea_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_adjustingscrollarea_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_adjustingscrollarea_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_adjustingscrollarea_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_adjustingscrollarea_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_adjustingscrollarea_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_adjustingscrollarea_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_adjustingscrollarea_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_adjustingscrollarea_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_adjustingscrollarea_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_adjustingscrollarea_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_adjustingscrollarea_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_adjustingscrollarea_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_adjustingscrollarea_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_adjustingscrollarea_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_adjustingscrollarea_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_adjustingscrollarea_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_adjustingscrollarea_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_adjustingscrollarea_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_adjustingscrollarea_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_adjustingscrollarea_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_adjustingscrollarea_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_adjustingscrollarea_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_adjustingscrollarea_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_adjustingscrollarea_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_adjustingscrollarea_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_adjustingscrollarea_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_adjustingscrollarea_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_adjustingscrollarea_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_adjustingscrollarea_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_adjustingscrollarea_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_adjustingscrollarea_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_adjustingscrollarea_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_adjustingscrollarea_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_adjustingscrollarea_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_adjustingscrollarea_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_adjustingscrollarea_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_adjustingscrollarea_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_adjustingscrollarea_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_adjustingscrollarea_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_adjustingscrollarea_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_adjustingscrollarea_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_adjustingscrollarea_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_adjustingscrollarea_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_adjustingscrollarea_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_adjustingscrollarea_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_adjustingscrollarea_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_adjustingscrollarea_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_adjustingscrollarea_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_adjustingscrollarea_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_adjustingscrollarea_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_adjustingscrollarea_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_adjustingscrollarea_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_adjustingscrollarea_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_adjustingscrollarea_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_adjustingscrollarea_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_adjustingscrollarea_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_adjustingscrollarea_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_adjustingscrollarea_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_adjustingscrollarea_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_adjustingscrollarea_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_adjustingscrollarea_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_adjustingscrollarea_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_adjustingscrollarea_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_adjustingscrollarea_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_adjustingscrollarea_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_adjustingscrollarea_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_adjustingscrollarea_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_adjustingscrollarea_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_adjustingscrollarea_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_adjustingscrollarea_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_adjustingscrollarea_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_adjustingscrollarea_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_adjustingscrollarea_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_adjustingscrollarea_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_adjustingscrollarea_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_adjustingscrollarea_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_adjustingscrollarea_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_adjustingscrollarea_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_adjustingscrollarea_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_adjustingscrollarea_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_adjustingscrollarea_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_adjustingscrollarea_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_adjustingscrollarea_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_adjustingscrollarea_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_adjustingscrollarea_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_adjustingscrollarea_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_adjustingscrollarea_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_adjustingscrollarea_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_adjustingscrollarea_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_adjustingscrollarea_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_adjustingscrollarea_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_adjustingscrollarea_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_adjustingscrollarea_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_adjustingscrollarea_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_adjustingscrollarea_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_adjustingscrollarea_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_adjustingscrollarea_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_adjustingscrollarea_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_adjustingscrollarea_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_adjustingscrollarea_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_adjustingscrollarea_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_adjustingscrollarea_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_adjustingscrollarea_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_adjustingscrollarea_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_adjustingscrollarea_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_adjustingscrollarea_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_adjustingscrollarea_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_adjustingscrollarea_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_adjustingscrollarea_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_adjustingscrollarea_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_adjustingscrollarea_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_adjustingscrollarea_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_adjustingscrollarea_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_adjustingscrollarea_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_adjustingscrollarea_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_adjustingscrollarea_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_adjustingscrollarea_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_adjustingscrollarea_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_adjustingscrollarea_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_adjustingscrollarea_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_adjustingscrollarea_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_adjustingscrollarea_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_adjustingscrollarea_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_adjustingscrollarea_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_adjustingscrollarea_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_adjustingscrollarea_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_adjustingscrollarea_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_adjustingscrollarea_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_adjustingscrollarea_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_adjustingscrollarea_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_adjustingscrollarea_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_adjustingscrollarea_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_adjustingscrollarea_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_adjustingscrollarea_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_adjustingscrollarea_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_adjustingscrollarea_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_adjustingscrollarea_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_adjustingscrollarea_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_adjustingscrollarea_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_adjustingscrollarea_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_adjustingscrollarea_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_adjustingscrollarea_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_adjustingscrollarea_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_adjustingscrollarea_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_adjustingscrollarea_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_adjustingscrollarea_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_adjustingscrollarea_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_adjustingscrollarea_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_adjustingscrollarea_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_adjustingscrollarea_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_adjustingscrollarea_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_adjustingscrollarea_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_adjustingscrollarea_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_adjustingscrollarea_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_adjustingscrollarea_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_adjustingscrollarea_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_adjustingscrollarea_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_adjustingscrollarea_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_adjustingscrollarea_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_adjustingscrollarea_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_adjustingscrollarea_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_adjustingscrollarea_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_adjustingscrollarea_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_adjustingscrollarea_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_adjustingscrollarea_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_adjustingscrollarea_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_adjustingscrollarea_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_adjustingscrollarea_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_adjustingscrollarea_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_adjustingscrollarea_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_adjustingscrollarea_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_adjustingscrollarea_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_adjustingscrollarea_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_adjustingscrollarea_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_adjustingscrollarea_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_adjustingscrollarea_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_adjustingscrollarea_dynamic_property_names\n");
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

QBindingStorage* k_adjustingscrollarea_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_adjustingscrollarea_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_adjustingscrollarea_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_adjustingscrollarea_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_adjustingscrollarea_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_adjustingscrollarea_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_adjustingscrollarea_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_adjustingscrollarea_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_adjustingscrollarea_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_adjustingscrollarea_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_adjustingscrollarea_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_adjustingscrollarea_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_adjustingscrollarea_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_adjustingscrollarea_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_adjustingscrollarea_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_adjustingscrollarea_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_adjustingscrollarea_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_adjustingscrollarea_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_adjustingscrollarea_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_adjustingscrollarea_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_adjustingscrollarea_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_adjustingscrollarea_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_adjustingscrollarea_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_adjustingscrollarea_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_adjustingscrollarea_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_adjustingscrollarea_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_adjustingscrollarea_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

bool k_adjustingscrollarea_focus_next_prev_child(void* self, bool next) {
    return KAdjustingScrollArea_FocusNextPrevChild((KAdjustingScrollArea*)self, next);
}

bool k_adjustingscrollarea_qbase_focus_next_prev_child(void* self, bool next) {
    return KAdjustingScrollArea_QBaseFocusNextPrevChild((KAdjustingScrollArea*)self, next);
}

void k_adjustingscrollarea_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KAdjustingScrollArea_OnFocusNextPrevChild((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_resize_event(void* self, void* param1) {
    KAdjustingScrollArea_ResizeEvent((KAdjustingScrollArea*)self, (QResizeEvent*)param1);
}

void k_adjustingscrollarea_qbase_resize_event(void* self, void* param1) {
    KAdjustingScrollArea_QBaseResizeEvent((KAdjustingScrollArea*)self, (QResizeEvent*)param1);
}

void k_adjustingscrollarea_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnResizeEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_scroll_contents_by(void* self, int dx, int dy) {
    KAdjustingScrollArea_ScrollContentsBy((KAdjustingScrollArea*)self, dx, dy);
}

void k_adjustingscrollarea_qbase_scroll_contents_by(void* self, int dx, int dy) {
    KAdjustingScrollArea_QBaseScrollContentsBy((KAdjustingScrollArea*)self, dx, dy);
}

void k_adjustingscrollarea_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    KAdjustingScrollArea_OnScrollContentsBy((KAdjustingScrollArea*)self, (intptr_t)callback);
}

QSize* k_adjustingscrollarea_viewport_size_hint(void* self) {
    return KAdjustingScrollArea_ViewportSizeHint((KAdjustingScrollArea*)self);
}

QSize* k_adjustingscrollarea_qbase_viewport_size_hint(void* self) {
    return KAdjustingScrollArea_QBaseViewportSizeHint((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    KAdjustingScrollArea_OnViewportSizeHint((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_setup_viewport(void* self, void* viewport) {
    KAdjustingScrollArea_SetupViewport((KAdjustingScrollArea*)self, (QWidget*)viewport);
}

void k_adjustingscrollarea_qbase_setup_viewport(void* self, void* viewport) {
    KAdjustingScrollArea_QBaseSetupViewport((KAdjustingScrollArea*)self, (QWidget*)viewport);
}

void k_adjustingscrollarea_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnSetupViewport((KAdjustingScrollArea*)self, (intptr_t)callback);
}

bool k_adjustingscrollarea_viewport_event(void* self, void* param1) {
    return KAdjustingScrollArea_ViewportEvent((KAdjustingScrollArea*)self, (QEvent*)param1);
}

bool k_adjustingscrollarea_qbase_viewport_event(void* self, void* param1) {
    return KAdjustingScrollArea_QBaseViewportEvent((KAdjustingScrollArea*)self, (QEvent*)param1);
}

void k_adjustingscrollarea_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnViewportEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_paint_event(void* self, void* param1) {
    KAdjustingScrollArea_PaintEvent((KAdjustingScrollArea*)self, (QPaintEvent*)param1);
}

void k_adjustingscrollarea_qbase_paint_event(void* self, void* param1) {
    KAdjustingScrollArea_QBasePaintEvent((KAdjustingScrollArea*)self, (QPaintEvent*)param1);
}

void k_adjustingscrollarea_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnPaintEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_mouse_press_event(void* self, void* param1) {
    KAdjustingScrollArea_MousePressEvent((KAdjustingScrollArea*)self, (QMouseEvent*)param1);
}

void k_adjustingscrollarea_qbase_mouse_press_event(void* self, void* param1) {
    KAdjustingScrollArea_QBaseMousePressEvent((KAdjustingScrollArea*)self, (QMouseEvent*)param1);
}

void k_adjustingscrollarea_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnMousePressEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_mouse_release_event(void* self, void* param1) {
    KAdjustingScrollArea_MouseReleaseEvent((KAdjustingScrollArea*)self, (QMouseEvent*)param1);
}

void k_adjustingscrollarea_qbase_mouse_release_event(void* self, void* param1) {
    KAdjustingScrollArea_QBaseMouseReleaseEvent((KAdjustingScrollArea*)self, (QMouseEvent*)param1);
}

void k_adjustingscrollarea_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnMouseReleaseEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_mouse_double_click_event(void* self, void* param1) {
    KAdjustingScrollArea_MouseDoubleClickEvent((KAdjustingScrollArea*)self, (QMouseEvent*)param1);
}

void k_adjustingscrollarea_qbase_mouse_double_click_event(void* self, void* param1) {
    KAdjustingScrollArea_QBaseMouseDoubleClickEvent((KAdjustingScrollArea*)self, (QMouseEvent*)param1);
}

void k_adjustingscrollarea_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnMouseDoubleClickEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_mouse_move_event(void* self, void* param1) {
    KAdjustingScrollArea_MouseMoveEvent((KAdjustingScrollArea*)self, (QMouseEvent*)param1);
}

void k_adjustingscrollarea_qbase_mouse_move_event(void* self, void* param1) {
    KAdjustingScrollArea_QBaseMouseMoveEvent((KAdjustingScrollArea*)self, (QMouseEvent*)param1);
}

void k_adjustingscrollarea_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnMouseMoveEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_wheel_event(void* self, void* param1) {
    KAdjustingScrollArea_WheelEvent((KAdjustingScrollArea*)self, (QWheelEvent*)param1);
}

void k_adjustingscrollarea_qbase_wheel_event(void* self, void* param1) {
    KAdjustingScrollArea_QBaseWheelEvent((KAdjustingScrollArea*)self, (QWheelEvent*)param1);
}

void k_adjustingscrollarea_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnWheelEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_context_menu_event(void* self, void* param1) {
    KAdjustingScrollArea_ContextMenuEvent((KAdjustingScrollArea*)self, (QContextMenuEvent*)param1);
}

void k_adjustingscrollarea_qbase_context_menu_event(void* self, void* param1) {
    KAdjustingScrollArea_QBaseContextMenuEvent((KAdjustingScrollArea*)self, (QContextMenuEvent*)param1);
}

void k_adjustingscrollarea_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnContextMenuEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_drag_enter_event(void* self, void* param1) {
    KAdjustingScrollArea_DragEnterEvent((KAdjustingScrollArea*)self, (QDragEnterEvent*)param1);
}

void k_adjustingscrollarea_qbase_drag_enter_event(void* self, void* param1) {
    KAdjustingScrollArea_QBaseDragEnterEvent((KAdjustingScrollArea*)self, (QDragEnterEvent*)param1);
}

void k_adjustingscrollarea_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnDragEnterEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_drag_move_event(void* self, void* param1) {
    KAdjustingScrollArea_DragMoveEvent((KAdjustingScrollArea*)self, (QDragMoveEvent*)param1);
}

void k_adjustingscrollarea_qbase_drag_move_event(void* self, void* param1) {
    KAdjustingScrollArea_QBaseDragMoveEvent((KAdjustingScrollArea*)self, (QDragMoveEvent*)param1);
}

void k_adjustingscrollarea_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnDragMoveEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_drag_leave_event(void* self, void* param1) {
    KAdjustingScrollArea_DragLeaveEvent((KAdjustingScrollArea*)self, (QDragLeaveEvent*)param1);
}

void k_adjustingscrollarea_qbase_drag_leave_event(void* self, void* param1) {
    KAdjustingScrollArea_QBaseDragLeaveEvent((KAdjustingScrollArea*)self, (QDragLeaveEvent*)param1);
}

void k_adjustingscrollarea_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnDragLeaveEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_drop_event(void* self, void* param1) {
    KAdjustingScrollArea_DropEvent((KAdjustingScrollArea*)self, (QDropEvent*)param1);
}

void k_adjustingscrollarea_qbase_drop_event(void* self, void* param1) {
    KAdjustingScrollArea_QBaseDropEvent((KAdjustingScrollArea*)self, (QDropEvent*)param1);
}

void k_adjustingscrollarea_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnDropEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_key_press_event(void* self, void* param1) {
    KAdjustingScrollArea_KeyPressEvent((KAdjustingScrollArea*)self, (QKeyEvent*)param1);
}

void k_adjustingscrollarea_qbase_key_press_event(void* self, void* param1) {
    KAdjustingScrollArea_QBaseKeyPressEvent((KAdjustingScrollArea*)self, (QKeyEvent*)param1);
}

void k_adjustingscrollarea_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnKeyPressEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_change_event(void* self, void* param1) {
    KAdjustingScrollArea_ChangeEvent((KAdjustingScrollArea*)self, (QEvent*)param1);
}

void k_adjustingscrollarea_qbase_change_event(void* self, void* param1) {
    KAdjustingScrollArea_QBaseChangeEvent((KAdjustingScrollArea*)self, (QEvent*)param1);
}

void k_adjustingscrollarea_on_change_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnChangeEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_init_style_option(void* self, void* option) {
    KAdjustingScrollArea_InitStyleOption((KAdjustingScrollArea*)self, (QStyleOptionFrame*)option);
}

void k_adjustingscrollarea_qbase_init_style_option(void* self, void* option) {
    KAdjustingScrollArea_QBaseInitStyleOption((KAdjustingScrollArea*)self, (QStyleOptionFrame*)option);
}

void k_adjustingscrollarea_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnInitStyleOption((KAdjustingScrollArea*)self, (intptr_t)callback);
}

int32_t k_adjustingscrollarea_dev_type(void* self) {
    return KAdjustingScrollArea_DevType((KAdjustingScrollArea*)self);
}

int32_t k_adjustingscrollarea_qbase_dev_type(void* self) {
    return KAdjustingScrollArea_QBaseDevType((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_dev_type(void* self, int32_t (*callback)()) {
    KAdjustingScrollArea_OnDevType((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_set_visible(void* self, bool visible) {
    KAdjustingScrollArea_SetVisible((KAdjustingScrollArea*)self, visible);
}

void k_adjustingscrollarea_qbase_set_visible(void* self, bool visible) {
    KAdjustingScrollArea_QBaseSetVisible((KAdjustingScrollArea*)self, visible);
}

void k_adjustingscrollarea_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KAdjustingScrollArea_OnSetVisible((KAdjustingScrollArea*)self, (intptr_t)callback);
}

int32_t k_adjustingscrollarea_height_for_width(void* self, int param1) {
    return KAdjustingScrollArea_HeightForWidth((KAdjustingScrollArea*)self, param1);
}

int32_t k_adjustingscrollarea_qbase_height_for_width(void* self, int param1) {
    return KAdjustingScrollArea_QBaseHeightForWidth((KAdjustingScrollArea*)self, param1);
}

void k_adjustingscrollarea_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KAdjustingScrollArea_OnHeightForWidth((KAdjustingScrollArea*)self, (intptr_t)callback);
}

bool k_adjustingscrollarea_has_height_for_width(void* self) {
    return KAdjustingScrollArea_HasHeightForWidth((KAdjustingScrollArea*)self);
}

bool k_adjustingscrollarea_qbase_has_height_for_width(void* self) {
    return KAdjustingScrollArea_QBaseHasHeightForWidth((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_has_height_for_width(void* self, bool (*callback)()) {
    KAdjustingScrollArea_OnHasHeightForWidth((KAdjustingScrollArea*)self, (intptr_t)callback);
}

QPaintEngine* k_adjustingscrollarea_paint_engine(void* self) {
    return KAdjustingScrollArea_PaintEngine((KAdjustingScrollArea*)self);
}

QPaintEngine* k_adjustingscrollarea_qbase_paint_engine(void* self) {
    return KAdjustingScrollArea_QBasePaintEngine((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KAdjustingScrollArea_OnPaintEngine((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_key_release_event(void* self, void* event) {
    KAdjustingScrollArea_KeyReleaseEvent((KAdjustingScrollArea*)self, (QKeyEvent*)event);
}

void k_adjustingscrollarea_qbase_key_release_event(void* self, void* event) {
    KAdjustingScrollArea_QBaseKeyReleaseEvent((KAdjustingScrollArea*)self, (QKeyEvent*)event);
}

void k_adjustingscrollarea_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnKeyReleaseEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_focus_in_event(void* self, void* event) {
    KAdjustingScrollArea_FocusInEvent((KAdjustingScrollArea*)self, (QFocusEvent*)event);
}

void k_adjustingscrollarea_qbase_focus_in_event(void* self, void* event) {
    KAdjustingScrollArea_QBaseFocusInEvent((KAdjustingScrollArea*)self, (QFocusEvent*)event);
}

void k_adjustingscrollarea_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnFocusInEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_focus_out_event(void* self, void* event) {
    KAdjustingScrollArea_FocusOutEvent((KAdjustingScrollArea*)self, (QFocusEvent*)event);
}

void k_adjustingscrollarea_qbase_focus_out_event(void* self, void* event) {
    KAdjustingScrollArea_QBaseFocusOutEvent((KAdjustingScrollArea*)self, (QFocusEvent*)event);
}

void k_adjustingscrollarea_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnFocusOutEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_enter_event(void* self, void* event) {
    KAdjustingScrollArea_EnterEvent((KAdjustingScrollArea*)self, (QEnterEvent*)event);
}

void k_adjustingscrollarea_qbase_enter_event(void* self, void* event) {
    KAdjustingScrollArea_QBaseEnterEvent((KAdjustingScrollArea*)self, (QEnterEvent*)event);
}

void k_adjustingscrollarea_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnEnterEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_leave_event(void* self, void* event) {
    KAdjustingScrollArea_LeaveEvent((KAdjustingScrollArea*)self, (QEvent*)event);
}

void k_adjustingscrollarea_qbase_leave_event(void* self, void* event) {
    KAdjustingScrollArea_QBaseLeaveEvent((KAdjustingScrollArea*)self, (QEvent*)event);
}

void k_adjustingscrollarea_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnLeaveEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_move_event(void* self, void* event) {
    KAdjustingScrollArea_MoveEvent((KAdjustingScrollArea*)self, (QMoveEvent*)event);
}

void k_adjustingscrollarea_qbase_move_event(void* self, void* event) {
    KAdjustingScrollArea_QBaseMoveEvent((KAdjustingScrollArea*)self, (QMoveEvent*)event);
}

void k_adjustingscrollarea_on_move_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnMoveEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_close_event(void* self, void* event) {
    KAdjustingScrollArea_CloseEvent((KAdjustingScrollArea*)self, (QCloseEvent*)event);
}

void k_adjustingscrollarea_qbase_close_event(void* self, void* event) {
    KAdjustingScrollArea_QBaseCloseEvent((KAdjustingScrollArea*)self, (QCloseEvent*)event);
}

void k_adjustingscrollarea_on_close_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnCloseEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_tablet_event(void* self, void* event) {
    KAdjustingScrollArea_TabletEvent((KAdjustingScrollArea*)self, (QTabletEvent*)event);
}

void k_adjustingscrollarea_qbase_tablet_event(void* self, void* event) {
    KAdjustingScrollArea_QBaseTabletEvent((KAdjustingScrollArea*)self, (QTabletEvent*)event);
}

void k_adjustingscrollarea_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnTabletEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_action_event(void* self, void* event) {
    KAdjustingScrollArea_ActionEvent((KAdjustingScrollArea*)self, (QActionEvent*)event);
}

void k_adjustingscrollarea_qbase_action_event(void* self, void* event) {
    KAdjustingScrollArea_QBaseActionEvent((KAdjustingScrollArea*)self, (QActionEvent*)event);
}

void k_adjustingscrollarea_on_action_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnActionEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_show_event(void* self, void* event) {
    KAdjustingScrollArea_ShowEvent((KAdjustingScrollArea*)self, (QShowEvent*)event);
}

void k_adjustingscrollarea_qbase_show_event(void* self, void* event) {
    KAdjustingScrollArea_QBaseShowEvent((KAdjustingScrollArea*)self, (QShowEvent*)event);
}

void k_adjustingscrollarea_on_show_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnShowEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_hide_event(void* self, void* event) {
    KAdjustingScrollArea_HideEvent((KAdjustingScrollArea*)self, (QHideEvent*)event);
}

void k_adjustingscrollarea_qbase_hide_event(void* self, void* event) {
    KAdjustingScrollArea_QBaseHideEvent((KAdjustingScrollArea*)self, (QHideEvent*)event);
}

void k_adjustingscrollarea_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnHideEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

bool k_adjustingscrollarea_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KAdjustingScrollArea_NativeEvent((KAdjustingScrollArea*)self, qstring(eventType), message, result);
}

bool k_adjustingscrollarea_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KAdjustingScrollArea_QBaseNativeEvent((KAdjustingScrollArea*)self, qstring(eventType), message, result);
}

void k_adjustingscrollarea_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KAdjustingScrollArea_OnNativeEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

int32_t k_adjustingscrollarea_metric(void* self, int32_t param1) {
    return KAdjustingScrollArea_Metric((KAdjustingScrollArea*)self, param1);
}

int32_t k_adjustingscrollarea_qbase_metric(void* self, int32_t param1) {
    return KAdjustingScrollArea_QBaseMetric((KAdjustingScrollArea*)self, param1);
}

void k_adjustingscrollarea_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KAdjustingScrollArea_OnMetric((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_init_painter(void* self, void* painter) {
    KAdjustingScrollArea_InitPainter((KAdjustingScrollArea*)self, (QPainter*)painter);
}

void k_adjustingscrollarea_qbase_init_painter(void* self, void* painter) {
    KAdjustingScrollArea_QBaseInitPainter((KAdjustingScrollArea*)self, (QPainter*)painter);
}

void k_adjustingscrollarea_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnInitPainter((KAdjustingScrollArea*)self, (intptr_t)callback);
}

QPaintDevice* k_adjustingscrollarea_redirected(void* self, void* offset) {
    return KAdjustingScrollArea_Redirected((KAdjustingScrollArea*)self, (QPoint*)offset);
}

QPaintDevice* k_adjustingscrollarea_qbase_redirected(void* self, void* offset) {
    return KAdjustingScrollArea_QBaseRedirected((KAdjustingScrollArea*)self, (QPoint*)offset);
}

void k_adjustingscrollarea_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnRedirected((KAdjustingScrollArea*)self, (intptr_t)callback);
}

QPainter* k_adjustingscrollarea_shared_painter(void* self) {
    return KAdjustingScrollArea_SharedPainter((KAdjustingScrollArea*)self);
}

QPainter* k_adjustingscrollarea_qbase_shared_painter(void* self) {
    return KAdjustingScrollArea_QBaseSharedPainter((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_shared_painter(void* self, QPainter* (*callback)()) {
    KAdjustingScrollArea_OnSharedPainter((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_input_method_event(void* self, void* param1) {
    KAdjustingScrollArea_InputMethodEvent((KAdjustingScrollArea*)self, (QInputMethodEvent*)param1);
}

void k_adjustingscrollarea_qbase_input_method_event(void* self, void* param1) {
    KAdjustingScrollArea_QBaseInputMethodEvent((KAdjustingScrollArea*)self, (QInputMethodEvent*)param1);
}

void k_adjustingscrollarea_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnInputMethodEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

QVariant* k_adjustingscrollarea_input_method_query(void* self, int32_t param1) {
    return KAdjustingScrollArea_InputMethodQuery((KAdjustingScrollArea*)self, param1);
}

QVariant* k_adjustingscrollarea_qbase_input_method_query(void* self, int32_t param1) {
    return KAdjustingScrollArea_QBaseInputMethodQuery((KAdjustingScrollArea*)self, param1);
}

void k_adjustingscrollarea_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KAdjustingScrollArea_OnInputMethodQuery((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_timer_event(void* self, void* event) {
    KAdjustingScrollArea_TimerEvent((KAdjustingScrollArea*)self, (QTimerEvent*)event);
}

void k_adjustingscrollarea_qbase_timer_event(void* self, void* event) {
    KAdjustingScrollArea_QBaseTimerEvent((KAdjustingScrollArea*)self, (QTimerEvent*)event);
}

void k_adjustingscrollarea_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnTimerEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_child_event(void* self, void* event) {
    KAdjustingScrollArea_ChildEvent((KAdjustingScrollArea*)self, (QChildEvent*)event);
}

void k_adjustingscrollarea_qbase_child_event(void* self, void* event) {
    KAdjustingScrollArea_QBaseChildEvent((KAdjustingScrollArea*)self, (QChildEvent*)event);
}

void k_adjustingscrollarea_on_child_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnChildEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_custom_event(void* self, void* event) {
    KAdjustingScrollArea_CustomEvent((KAdjustingScrollArea*)self, (QEvent*)event);
}

void k_adjustingscrollarea_qbase_custom_event(void* self, void* event) {
    KAdjustingScrollArea_QBaseCustomEvent((KAdjustingScrollArea*)self, (QEvent*)event);
}

void k_adjustingscrollarea_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnCustomEvent((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_connect_notify(void* self, void* signal) {
    KAdjustingScrollArea_ConnectNotify((KAdjustingScrollArea*)self, (QMetaMethod*)signal);
}

void k_adjustingscrollarea_qbase_connect_notify(void* self, void* signal) {
    KAdjustingScrollArea_QBaseConnectNotify((KAdjustingScrollArea*)self, (QMetaMethod*)signal);
}

void k_adjustingscrollarea_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnConnectNotify((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_disconnect_notify(void* self, void* signal) {
    KAdjustingScrollArea_DisconnectNotify((KAdjustingScrollArea*)self, (QMetaMethod*)signal);
}

void k_adjustingscrollarea_qbase_disconnect_notify(void* self, void* signal) {
    KAdjustingScrollArea_QBaseDisconnectNotify((KAdjustingScrollArea*)self, (QMetaMethod*)signal);
}

void k_adjustingscrollarea_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnDisconnectNotify((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    KAdjustingScrollArea_SetViewportMargins((KAdjustingScrollArea*)self, left, top, right, bottom);
}

void k_adjustingscrollarea_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    KAdjustingScrollArea_QBaseSetViewportMargins((KAdjustingScrollArea*)self, left, top, right, bottom);
}

void k_adjustingscrollarea_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    KAdjustingScrollArea_OnSetViewportMargins((KAdjustingScrollArea*)self, (intptr_t)callback);
}

QMargins* k_adjustingscrollarea_viewport_margins(void* self) {
    return KAdjustingScrollArea_ViewportMargins((KAdjustingScrollArea*)self);
}

QMargins* k_adjustingscrollarea_qbase_viewport_margins(void* self) {
    return KAdjustingScrollArea_QBaseViewportMargins((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_viewport_margins(void* self, QMargins* (*callback)()) {
    KAdjustingScrollArea_OnViewportMargins((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_draw_frame(void* self, void* param1) {
    KAdjustingScrollArea_DrawFrame((KAdjustingScrollArea*)self, (QPainter*)param1);
}

void k_adjustingscrollarea_qbase_draw_frame(void* self, void* param1) {
    KAdjustingScrollArea_QBaseDrawFrame((KAdjustingScrollArea*)self, (QPainter*)param1);
}

void k_adjustingscrollarea_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnDrawFrame((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_update_micro_focus(void* self) {
    KAdjustingScrollArea_UpdateMicroFocus((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_qbase_update_micro_focus(void* self) {
    KAdjustingScrollArea_QBaseUpdateMicroFocus((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_update_micro_focus(void* self, void (*callback)()) {
    KAdjustingScrollArea_OnUpdateMicroFocus((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_create(void* self) {
    KAdjustingScrollArea_Create((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_qbase_create(void* self) {
    KAdjustingScrollArea_QBaseCreate((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_create(void* self, void (*callback)()) {
    KAdjustingScrollArea_OnCreate((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_destroy(void* self) {
    KAdjustingScrollArea_Destroy((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_qbase_destroy(void* self) {
    KAdjustingScrollArea_QBaseDestroy((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_destroy(void* self, void (*callback)()) {
    KAdjustingScrollArea_OnDestroy((KAdjustingScrollArea*)self, (intptr_t)callback);
}

bool k_adjustingscrollarea_focus_next_child(void* self) {
    return KAdjustingScrollArea_FocusNextChild((KAdjustingScrollArea*)self);
}

bool k_adjustingscrollarea_qbase_focus_next_child(void* self) {
    return KAdjustingScrollArea_QBaseFocusNextChild((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_focus_next_child(void* self, bool (*callback)()) {
    KAdjustingScrollArea_OnFocusNextChild((KAdjustingScrollArea*)self, (intptr_t)callback);
}

bool k_adjustingscrollarea_focus_previous_child(void* self) {
    return KAdjustingScrollArea_FocusPreviousChild((KAdjustingScrollArea*)self);
}

bool k_adjustingscrollarea_qbase_focus_previous_child(void* self) {
    return KAdjustingScrollArea_QBaseFocusPreviousChild((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_focus_previous_child(void* self, bool (*callback)()) {
    KAdjustingScrollArea_OnFocusPreviousChild((KAdjustingScrollArea*)self, (intptr_t)callback);
}

QObject* k_adjustingscrollarea_sender(void* self) {
    return KAdjustingScrollArea_Sender((KAdjustingScrollArea*)self);
}

QObject* k_adjustingscrollarea_qbase_sender(void* self) {
    return KAdjustingScrollArea_QBaseSender((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_sender(void* self, QObject* (*callback)()) {
    KAdjustingScrollArea_OnSender((KAdjustingScrollArea*)self, (intptr_t)callback);
}

int32_t k_adjustingscrollarea_sender_signal_index(void* self) {
    return KAdjustingScrollArea_SenderSignalIndex((KAdjustingScrollArea*)self);
}

int32_t k_adjustingscrollarea_qbase_sender_signal_index(void* self) {
    return KAdjustingScrollArea_QBaseSenderSignalIndex((KAdjustingScrollArea*)self);
}

void k_adjustingscrollarea_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KAdjustingScrollArea_OnSenderSignalIndex((KAdjustingScrollArea*)self, (intptr_t)callback);
}

int32_t k_adjustingscrollarea_receivers(void* self, const char* signal) {
    return KAdjustingScrollArea_Receivers((KAdjustingScrollArea*)self, signal);
}

int32_t k_adjustingscrollarea_qbase_receivers(void* self, const char* signal) {
    return KAdjustingScrollArea_QBaseReceivers((KAdjustingScrollArea*)self, signal);
}

void k_adjustingscrollarea_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KAdjustingScrollArea_OnReceivers((KAdjustingScrollArea*)self, (intptr_t)callback);
}

bool k_adjustingscrollarea_is_signal_connected(void* self, void* signal) {
    return KAdjustingScrollArea_IsSignalConnected((KAdjustingScrollArea*)self, (QMetaMethod*)signal);
}

bool k_adjustingscrollarea_qbase_is_signal_connected(void* self, void* signal) {
    return KAdjustingScrollArea_QBaseIsSignalConnected((KAdjustingScrollArea*)self, (QMetaMethod*)signal);
}

void k_adjustingscrollarea_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KAdjustingScrollArea_OnIsSignalConnected((KAdjustingScrollArea*)self, (intptr_t)callback);
}

double k_adjustingscrollarea_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KAdjustingScrollArea_GetDecodedMetricF((KAdjustingScrollArea*)self, metricA, metricB);
}

double k_adjustingscrollarea_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KAdjustingScrollArea_QBaseGetDecodedMetricF((KAdjustingScrollArea*)self, metricA, metricB);
}

void k_adjustingscrollarea_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KAdjustingScrollArea_OnGetDecodedMetricF((KAdjustingScrollArea*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_adjustingscrollarea_delete(void* self) {
    KAdjustingScrollArea_Delete((KAdjustingScrollArea*)(self));
}
