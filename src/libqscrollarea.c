#include "libqabstractscrollarea.hpp"
#include "libqevent.hpp"
#include "libqframe.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqscrollarea.hpp"
#include "libqscrollarea.h"

QScrollArea* q_scrollarea_new(void* parent) {
    return QScrollArea_new((QWidget*)parent);
}

QScrollArea* q_scrollarea_new2() {
    return QScrollArea_new2();
}

const QMetaObject* q_scrollarea_meta_object(void* self) {
    return QScrollArea_MetaObject((QScrollArea*)self);
}

void* q_scrollarea_metacast(void* self, const char* param1) {
    return QScrollArea_Metacast((QScrollArea*)self, param1);
}

int32_t q_scrollarea_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QScrollArea_Metacall((QScrollArea*)self, param1, param2, param3);
}

void q_scrollarea_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QScrollArea_OnMetacall((QScrollArea*)self, (intptr_t)slot);
}

int32_t q_scrollarea_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QScrollArea_QBaseMetacall((QScrollArea*)self, param1, param2, param3);
}

const char* q_scrollarea_tr(const char* s) {
    libqt_string _str = QScrollArea_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWidget* q_scrollarea_widget(void* self) {
    return QScrollArea_Widget((QScrollArea*)self);
}

void q_scrollarea_set_widget(void* self, void* widget) {
    QScrollArea_SetWidget((QScrollArea*)self, (QWidget*)widget);
}

QWidget* q_scrollarea_take_widget(void* self) {
    return QScrollArea_TakeWidget((QScrollArea*)self);
}

bool q_scrollarea_widget_resizable(void* self) {
    return QScrollArea_WidgetResizable((QScrollArea*)self);
}

void q_scrollarea_set_widget_resizable(void* self, bool resizable) {
    QScrollArea_SetWidgetResizable((QScrollArea*)self, resizable);
}

QSize* q_scrollarea_size_hint(void* self) {
    return QScrollArea_SizeHint((QScrollArea*)self);
}

void q_scrollarea_on_size_hint(void* self, QSize* (*slot)()) {
    QScrollArea_OnSizeHint((QScrollArea*)self, (intptr_t)slot);
}

QSize* q_scrollarea_qbase_size_hint(void* self) {
    return QScrollArea_QBaseSizeHint((QScrollArea*)self);
}

bool q_scrollarea_focus_next_prev_child(void* self, bool next) {
    return QScrollArea_FocusNextPrevChild((QScrollArea*)self, next);
}

void q_scrollarea_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QScrollArea_OnFocusNextPrevChild((QScrollArea*)self, (intptr_t)slot);
}

bool q_scrollarea_qbase_focus_next_prev_child(void* self, bool next) {
    return QScrollArea_QBaseFocusNextPrevChild((QScrollArea*)self, next);
}

int64_t q_scrollarea_alignment(void* self) {
    return QScrollArea_Alignment((QScrollArea*)self);
}

void q_scrollarea_set_alignment(void* self, int64_t alignment) {
    QScrollArea_SetAlignment((QScrollArea*)self, alignment);
}

void q_scrollarea_ensure_visible(void* self, int x, int y) {
    QScrollArea_EnsureVisible((QScrollArea*)self, x, y);
}

void q_scrollarea_ensure_widget_visible(void* self, void* childWidget) {
    QScrollArea_EnsureWidgetVisible((QScrollArea*)self, (QWidget*)childWidget);
}

bool q_scrollarea_event(void* self, void* param1) {
    return QScrollArea_Event((QScrollArea*)self, (QEvent*)param1);
}

void q_scrollarea_on_event(void* self, bool (*slot)(void*, void*)) {
    QScrollArea_OnEvent((QScrollArea*)self, (intptr_t)slot);
}

bool q_scrollarea_qbase_event(void* self, void* param1) {
    return QScrollArea_QBaseEvent((QScrollArea*)self, (QEvent*)param1);
}

bool q_scrollarea_event_filter(void* self, void* param1, void* param2) {
    return QScrollArea_EventFilter((QScrollArea*)self, (QObject*)param1, (QEvent*)param2);
}

void q_scrollarea_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QScrollArea_OnEventFilter((QScrollArea*)self, (intptr_t)slot);
}

bool q_scrollarea_qbase_event_filter(void* self, void* param1, void* param2) {
    return QScrollArea_QBaseEventFilter((QScrollArea*)self, (QObject*)param1, (QEvent*)param2);
}

void q_scrollarea_resize_event(void* self, void* param1) {
    QScrollArea_ResizeEvent((QScrollArea*)self, (QResizeEvent*)param1);
}

void q_scrollarea_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnResizeEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_qbase_resize_event(void* self, void* param1) {
    QScrollArea_QBaseResizeEvent((QScrollArea*)self, (QResizeEvent*)param1);
}

void q_scrollarea_scroll_contents_by(void* self, int dx, int dy) {
    QScrollArea_ScrollContentsBy((QScrollArea*)self, dx, dy);
}

void q_scrollarea_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QScrollArea_OnScrollContentsBy((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QScrollArea_QBaseScrollContentsBy((QScrollArea*)self, dx, dy);
}

QSize* q_scrollarea_viewport_size_hint(void* self) {
    return QScrollArea_ViewportSizeHint((QScrollArea*)self);
}

void q_scrollarea_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QScrollArea_OnViewportSizeHint((QScrollArea*)self, (intptr_t)slot);
}

QSize* q_scrollarea_qbase_viewport_size_hint(void* self) {
    return QScrollArea_QBaseViewportSizeHint((QScrollArea*)self);
}

const char* q_scrollarea_tr2(const char* s, const char* c) {
    libqt_string _str = QScrollArea_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scrollarea_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QScrollArea_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollarea_ensure_visible3(void* self, int x, int y, int xmargin) {
    QScrollArea_EnsureVisible3((QScrollArea*)self, x, y, xmargin);
}

void q_scrollarea_ensure_visible4(void* self, int x, int y, int xmargin, int ymargin) {
    QScrollArea_EnsureVisible4((QScrollArea*)self, x, y, xmargin, ymargin);
}

void q_scrollarea_ensure_widget_visible2(void* self, void* childWidget, int xmargin) {
    QScrollArea_EnsureWidgetVisible2((QScrollArea*)self, (QWidget*)childWidget, xmargin);
}

void q_scrollarea_ensure_widget_visible3(void* self, void* childWidget, int xmargin, int ymargin) {
    QScrollArea_EnsureWidgetVisible3((QScrollArea*)self, (QWidget*)childWidget, xmargin, ymargin);
}

int64_t q_scrollarea_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_scrollarea_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_scrollarea_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_scrollarea_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int64_t q_scrollarea_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_scrollarea_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_scrollarea_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_scrollarea_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_scrollarea_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_scrollarea_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_scrollarea_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_scrollarea_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_scrollarea_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_scrollarea_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_scrollarea_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int64_t q_scrollarea_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_scrollarea_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_scrollarea_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_scrollarea_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_scrollarea_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int64_t q_scrollarea_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_scrollarea_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int64_t q_scrollarea_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_scrollarea_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_scrollarea_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_scrollarea_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_scrollarea_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_scrollarea_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_scrollarea_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_scrollarea_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_scrollarea_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_scrollarea_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_scrollarea_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_scrollarea_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_scrollarea_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_scrollarea_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_scrollarea_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_scrollarea_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_scrollarea_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_scrollarea_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_scrollarea_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_scrollarea_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_scrollarea_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_scrollarea_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_scrollarea_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_scrollarea_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_scrollarea_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_scrollarea_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_scrollarea_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_scrollarea_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_scrollarea_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_scrollarea_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_scrollarea_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_scrollarea_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_scrollarea_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_scrollarea_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_scrollarea_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_scrollarea_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_scrollarea_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_scrollarea_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_scrollarea_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_scrollarea_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_scrollarea_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_scrollarea_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_scrollarea_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_scrollarea_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_scrollarea_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_scrollarea_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_scrollarea_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_scrollarea_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_scrollarea_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_scrollarea_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_scrollarea_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_scrollarea_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_scrollarea_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_scrollarea_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_scrollarea_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_scrollarea_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_scrollarea_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_scrollarea_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_scrollarea_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_scrollarea_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_scrollarea_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_scrollarea_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_scrollarea_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_scrollarea_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_scrollarea_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_scrollarea_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_scrollarea_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_scrollarea_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_scrollarea_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_scrollarea_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_scrollarea_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_scrollarea_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_scrollarea_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_scrollarea_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_scrollarea_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_scrollarea_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_scrollarea_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_scrollarea_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_scrollarea_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_scrollarea_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_scrollarea_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_scrollarea_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_scrollarea_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_scrollarea_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_scrollarea_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_scrollarea_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_scrollarea_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_scrollarea_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_scrollarea_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_scrollarea_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_scrollarea_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_scrollarea_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_scrollarea_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_scrollarea_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_scrollarea_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_scrollarea_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_scrollarea_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_scrollarea_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_scrollarea_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_scrollarea_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_scrollarea_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_scrollarea_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_scrollarea_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_scrollarea_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_scrollarea_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_scrollarea_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_scrollarea_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_scrollarea_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scrollarea_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollarea_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_scrollarea_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_scrollarea_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_scrollarea_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollarea_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_scrollarea_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollarea_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_scrollarea_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollarea_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_scrollarea_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_scrollarea_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_scrollarea_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_scrollarea_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollarea_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_scrollarea_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_scrollarea_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_scrollarea_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollarea_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_scrollarea_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scrollarea_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollarea_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_scrollarea_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollarea_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_scrollarea_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_scrollarea_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_scrollarea_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_scrollarea_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_scrollarea_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_scrollarea_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_scrollarea_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_scrollarea_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_scrollarea_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_scrollarea_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_scrollarea_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_scrollarea_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_scrollarea_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_scrollarea_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_scrollarea_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_scrollarea_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_scrollarea_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_scrollarea_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_scrollarea_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_scrollarea_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_scrollarea_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_scrollarea_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_scrollarea_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_scrollarea_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_scrollarea_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_scrollarea_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_scrollarea_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_scrollarea_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_scrollarea_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_scrollarea_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_scrollarea_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_scrollarea_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_scrollarea_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_scrollarea_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_scrollarea_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_scrollarea_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_scrollarea_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_scrollarea_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_scrollarea_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_scrollarea_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_scrollarea_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_scrollarea_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_scrollarea_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_scrollarea_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_scrollarea_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_scrollarea_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_scrollarea_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_scrollarea_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_scrollarea_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_scrollarea_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_scrollarea_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_scrollarea_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_scrollarea_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_scrollarea_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_scrollarea_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_scrollarea_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_scrollarea_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_scrollarea_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_scrollarea_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_scrollarea_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_scrollarea_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_scrollarea_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_scrollarea_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_scrollarea_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_scrollarea_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_scrollarea_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_scrollarea_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_scrollarea_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_scrollarea_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_scrollarea_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_scrollarea_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_scrollarea_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_scrollarea_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_scrollarea_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_scrollarea_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_scrollarea_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_scrollarea_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_scrollarea_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_scrollarea_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_scrollarea_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_scrollarea_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_scrollarea_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_scrollarea_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_scrollarea_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_scrollarea_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_scrollarea_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_scrollarea_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_scrollarea_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_scrollarea_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_scrollarea_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_scrollarea_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_scrollarea_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_scrollarea_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_scrollarea_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_scrollarea_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_scrollarea_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_scrollarea_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_scrollarea_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_scrollarea_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_scrollarea_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_scrollarea_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_scrollarea_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_scrollarea_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_scrollarea_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_scrollarea_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_scrollarea_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_scrollarea_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_scrollarea_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_scrollarea_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_scrollarea_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_scrollarea_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_scrollarea_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_scrollarea_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_scrollarea_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_scrollarea_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_scrollarea_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_scrollarea_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_scrollarea_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_scrollarea_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_scrollarea_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_scrollarea_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_scrollarea_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_scrollarea_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_scrollarea_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_scrollarea_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_scrollarea_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_scrollarea_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_scrollarea_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_scrollarea_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_scrollarea_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_scrollarea_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_scrollarea_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_scrollarea_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_scrollarea_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_scrollarea_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_scrollarea_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_scrollarea_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_scrollarea_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_scrollarea_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_scrollarea_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_scrollarea_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_scrollarea_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_scrollarea_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_scrollarea_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_scrollarea_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_scrollarea_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_scrollarea_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_scrollarea_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_scrollarea_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollarea_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scrollarea_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scrollarea_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scrollarea_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scrollarea_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scrollarea_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scrollarea_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scrollarea_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scrollarea_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scrollarea_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scrollarea_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scrollarea_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scrollarea_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scrollarea_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scrollarea_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scrollarea_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scrollarea_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scrollarea_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scrollarea_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scrollarea_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scrollarea_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scrollarea_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scrollarea_dynamic_property_names(void* self) {
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
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scrollarea_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scrollarea_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scrollarea_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scrollarea_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scrollarea_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scrollarea_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scrollarea_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scrollarea_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scrollarea_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scrollarea_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scrollarea_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scrollarea_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scrollarea_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_scrollarea_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_scrollarea_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_scrollarea_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_scrollarea_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_scrollarea_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_scrollarea_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_scrollarea_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_scrollarea_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_scrollarea_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_scrollarea_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_scrollarea_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_scrollarea_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_scrollarea_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* q_scrollarea_minimum_size_hint(void* self) {
    return QScrollArea_MinimumSizeHint((QScrollArea*)self);
}

QSize* q_scrollarea_qbase_minimum_size_hint(void* self) {
    return QScrollArea_QBaseMinimumSizeHint((QScrollArea*)self);
}

void q_scrollarea_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QScrollArea_OnMinimumSizeHint((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_setup_viewport(void* self, void* viewport) {
    QScrollArea_SetupViewport((QScrollArea*)self, (QWidget*)viewport);
}

void q_scrollarea_qbase_setup_viewport(void* self, void* viewport) {
    QScrollArea_QBaseSetupViewport((QScrollArea*)self, (QWidget*)viewport);
}

void q_scrollarea_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnSetupViewport((QScrollArea*)self, (intptr_t)slot);
}

bool q_scrollarea_viewport_event(void* self, void* param1) {
    return QScrollArea_ViewportEvent((QScrollArea*)self, (QEvent*)param1);
}

bool q_scrollarea_qbase_viewport_event(void* self, void* param1) {
    return QScrollArea_QBaseViewportEvent((QScrollArea*)self, (QEvent*)param1);
}

void q_scrollarea_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QScrollArea_OnViewportEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_paint_event(void* self, void* param1) {
    QScrollArea_PaintEvent((QScrollArea*)self, (QPaintEvent*)param1);
}

void q_scrollarea_qbase_paint_event(void* self, void* param1) {
    QScrollArea_QBasePaintEvent((QScrollArea*)self, (QPaintEvent*)param1);
}

void q_scrollarea_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnPaintEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_mouse_press_event(void* self, void* param1) {
    QScrollArea_MousePressEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

void q_scrollarea_qbase_mouse_press_event(void* self, void* param1) {
    QScrollArea_QBaseMousePressEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

void q_scrollarea_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnMousePressEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_mouse_release_event(void* self, void* param1) {
    QScrollArea_MouseReleaseEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

void q_scrollarea_qbase_mouse_release_event(void* self, void* param1) {
    QScrollArea_QBaseMouseReleaseEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

void q_scrollarea_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnMouseReleaseEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_mouse_double_click_event(void* self, void* param1) {
    QScrollArea_MouseDoubleClickEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

void q_scrollarea_qbase_mouse_double_click_event(void* self, void* param1) {
    QScrollArea_QBaseMouseDoubleClickEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

void q_scrollarea_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnMouseDoubleClickEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_mouse_move_event(void* self, void* param1) {
    QScrollArea_MouseMoveEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

void q_scrollarea_qbase_mouse_move_event(void* self, void* param1) {
    QScrollArea_QBaseMouseMoveEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

void q_scrollarea_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnMouseMoveEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_wheel_event(void* self, void* param1) {
    QScrollArea_WheelEvent((QScrollArea*)self, (QWheelEvent*)param1);
}

void q_scrollarea_qbase_wheel_event(void* self, void* param1) {
    QScrollArea_QBaseWheelEvent((QScrollArea*)self, (QWheelEvent*)param1);
}

void q_scrollarea_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnWheelEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_context_menu_event(void* self, void* param1) {
    QScrollArea_ContextMenuEvent((QScrollArea*)self, (QContextMenuEvent*)param1);
}

void q_scrollarea_qbase_context_menu_event(void* self, void* param1) {
    QScrollArea_QBaseContextMenuEvent((QScrollArea*)self, (QContextMenuEvent*)param1);
}

void q_scrollarea_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnContextMenuEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_drag_enter_event(void* self, void* param1) {
    QScrollArea_DragEnterEvent((QScrollArea*)self, (QDragEnterEvent*)param1);
}

void q_scrollarea_qbase_drag_enter_event(void* self, void* param1) {
    QScrollArea_QBaseDragEnterEvent((QScrollArea*)self, (QDragEnterEvent*)param1);
}

void q_scrollarea_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnDragEnterEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_drag_move_event(void* self, void* param1) {
    QScrollArea_DragMoveEvent((QScrollArea*)self, (QDragMoveEvent*)param1);
}

void q_scrollarea_qbase_drag_move_event(void* self, void* param1) {
    QScrollArea_QBaseDragMoveEvent((QScrollArea*)self, (QDragMoveEvent*)param1);
}

void q_scrollarea_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnDragMoveEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_drag_leave_event(void* self, void* param1) {
    QScrollArea_DragLeaveEvent((QScrollArea*)self, (QDragLeaveEvent*)param1);
}

void q_scrollarea_qbase_drag_leave_event(void* self, void* param1) {
    QScrollArea_QBaseDragLeaveEvent((QScrollArea*)self, (QDragLeaveEvent*)param1);
}

void q_scrollarea_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnDragLeaveEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_drop_event(void* self, void* param1) {
    QScrollArea_DropEvent((QScrollArea*)self, (QDropEvent*)param1);
}

void q_scrollarea_qbase_drop_event(void* self, void* param1) {
    QScrollArea_QBaseDropEvent((QScrollArea*)self, (QDropEvent*)param1);
}

void q_scrollarea_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnDropEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_key_press_event(void* self, void* param1) {
    QScrollArea_KeyPressEvent((QScrollArea*)self, (QKeyEvent*)param1);
}

void q_scrollarea_qbase_key_press_event(void* self, void* param1) {
    QScrollArea_QBaseKeyPressEvent((QScrollArea*)self, (QKeyEvent*)param1);
}

void q_scrollarea_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnKeyPressEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_change_event(void* self, void* param1) {
    QScrollArea_ChangeEvent((QScrollArea*)self, (QEvent*)param1);
}

void q_scrollarea_qbase_change_event(void* self, void* param1) {
    QScrollArea_QBaseChangeEvent((QScrollArea*)self, (QEvent*)param1);
}

void q_scrollarea_on_change_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnChangeEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_init_style_option(void* self, void* option) {
    QScrollArea_InitStyleOption((QScrollArea*)self, (QStyleOptionFrame*)option);
}

void q_scrollarea_qbase_init_style_option(void* self, void* option) {
    QScrollArea_QBaseInitStyleOption((QScrollArea*)self, (QStyleOptionFrame*)option);
}

void q_scrollarea_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnInitStyleOption((QScrollArea*)self, (intptr_t)slot);
}

int32_t q_scrollarea_dev_type(void* self) {
    return QScrollArea_DevType((QScrollArea*)self);
}

int32_t q_scrollarea_qbase_dev_type(void* self) {
    return QScrollArea_QBaseDevType((QScrollArea*)self);
}

void q_scrollarea_on_dev_type(void* self, int32_t (*slot)()) {
    QScrollArea_OnDevType((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_set_visible(void* self, bool visible) {
    QScrollArea_SetVisible((QScrollArea*)self, visible);
}

void q_scrollarea_qbase_set_visible(void* self, bool visible) {
    QScrollArea_QBaseSetVisible((QScrollArea*)self, visible);
}

void q_scrollarea_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QScrollArea_OnSetVisible((QScrollArea*)self, (intptr_t)slot);
}

int32_t q_scrollarea_height_for_width(void* self, int param1) {
    return QScrollArea_HeightForWidth((QScrollArea*)self, param1);
}

int32_t q_scrollarea_qbase_height_for_width(void* self, int param1) {
    return QScrollArea_QBaseHeightForWidth((QScrollArea*)self, param1);
}

void q_scrollarea_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QScrollArea_OnHeightForWidth((QScrollArea*)self, (intptr_t)slot);
}

bool q_scrollarea_has_height_for_width(void* self) {
    return QScrollArea_HasHeightForWidth((QScrollArea*)self);
}

bool q_scrollarea_qbase_has_height_for_width(void* self) {
    return QScrollArea_QBaseHasHeightForWidth((QScrollArea*)self);
}

void q_scrollarea_on_has_height_for_width(void* self, bool (*slot)()) {
    QScrollArea_OnHasHeightForWidth((QScrollArea*)self, (intptr_t)slot);
}

QPaintEngine* q_scrollarea_paint_engine(void* self) {
    return QScrollArea_PaintEngine((QScrollArea*)self);
}

QPaintEngine* q_scrollarea_qbase_paint_engine(void* self) {
    return QScrollArea_QBasePaintEngine((QScrollArea*)self);
}

void q_scrollarea_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QScrollArea_OnPaintEngine((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_key_release_event(void* self, void* event) {
    QScrollArea_KeyReleaseEvent((QScrollArea*)self, (QKeyEvent*)event);
}

void q_scrollarea_qbase_key_release_event(void* self, void* event) {
    QScrollArea_QBaseKeyReleaseEvent((QScrollArea*)self, (QKeyEvent*)event);
}

void q_scrollarea_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnKeyReleaseEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_focus_in_event(void* self, void* event) {
    QScrollArea_FocusInEvent((QScrollArea*)self, (QFocusEvent*)event);
}

void q_scrollarea_qbase_focus_in_event(void* self, void* event) {
    QScrollArea_QBaseFocusInEvent((QScrollArea*)self, (QFocusEvent*)event);
}

void q_scrollarea_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnFocusInEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_focus_out_event(void* self, void* event) {
    QScrollArea_FocusOutEvent((QScrollArea*)self, (QFocusEvent*)event);
}

void q_scrollarea_qbase_focus_out_event(void* self, void* event) {
    QScrollArea_QBaseFocusOutEvent((QScrollArea*)self, (QFocusEvent*)event);
}

void q_scrollarea_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnFocusOutEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_enter_event(void* self, void* event) {
    QScrollArea_EnterEvent((QScrollArea*)self, (QEnterEvent*)event);
}

void q_scrollarea_qbase_enter_event(void* self, void* event) {
    QScrollArea_QBaseEnterEvent((QScrollArea*)self, (QEnterEvent*)event);
}

void q_scrollarea_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnEnterEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_leave_event(void* self, void* event) {
    QScrollArea_LeaveEvent((QScrollArea*)self, (QEvent*)event);
}

void q_scrollarea_qbase_leave_event(void* self, void* event) {
    QScrollArea_QBaseLeaveEvent((QScrollArea*)self, (QEvent*)event);
}

void q_scrollarea_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnLeaveEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_move_event(void* self, void* event) {
    QScrollArea_MoveEvent((QScrollArea*)self, (QMoveEvent*)event);
}

void q_scrollarea_qbase_move_event(void* self, void* event) {
    QScrollArea_QBaseMoveEvent((QScrollArea*)self, (QMoveEvent*)event);
}

void q_scrollarea_on_move_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnMoveEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_close_event(void* self, void* event) {
    QScrollArea_CloseEvent((QScrollArea*)self, (QCloseEvent*)event);
}

void q_scrollarea_qbase_close_event(void* self, void* event) {
    QScrollArea_QBaseCloseEvent((QScrollArea*)self, (QCloseEvent*)event);
}

void q_scrollarea_on_close_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnCloseEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_tablet_event(void* self, void* event) {
    QScrollArea_TabletEvent((QScrollArea*)self, (QTabletEvent*)event);
}

void q_scrollarea_qbase_tablet_event(void* self, void* event) {
    QScrollArea_QBaseTabletEvent((QScrollArea*)self, (QTabletEvent*)event);
}

void q_scrollarea_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnTabletEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_action_event(void* self, void* event) {
    QScrollArea_ActionEvent((QScrollArea*)self, (QActionEvent*)event);
}

void q_scrollarea_qbase_action_event(void* self, void* event) {
    QScrollArea_QBaseActionEvent((QScrollArea*)self, (QActionEvent*)event);
}

void q_scrollarea_on_action_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnActionEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_show_event(void* self, void* event) {
    QScrollArea_ShowEvent((QScrollArea*)self, (QShowEvent*)event);
}

void q_scrollarea_qbase_show_event(void* self, void* event) {
    QScrollArea_QBaseShowEvent((QScrollArea*)self, (QShowEvent*)event);
}

void q_scrollarea_on_show_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnShowEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_hide_event(void* self, void* event) {
    QScrollArea_HideEvent((QScrollArea*)self, (QHideEvent*)event);
}

void q_scrollarea_qbase_hide_event(void* self, void* event) {
    QScrollArea_QBaseHideEvent((QScrollArea*)self, (QHideEvent*)event);
}

void q_scrollarea_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnHideEvent((QScrollArea*)self, (intptr_t)slot);
}

bool q_scrollarea_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QScrollArea_NativeEvent((QScrollArea*)self, qstring(eventType), message, result);
}

bool q_scrollarea_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QScrollArea_QBaseNativeEvent((QScrollArea*)self, qstring(eventType), message, result);
}

void q_scrollarea_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QScrollArea_OnNativeEvent((QScrollArea*)self, (intptr_t)slot);
}

int32_t q_scrollarea_metric(void* self, int64_t param1) {
    return QScrollArea_Metric((QScrollArea*)self, param1);
}

int32_t q_scrollarea_qbase_metric(void* self, int64_t param1) {
    return QScrollArea_QBaseMetric((QScrollArea*)self, param1);
}

void q_scrollarea_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QScrollArea_OnMetric((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_init_painter(void* self, void* painter) {
    QScrollArea_InitPainter((QScrollArea*)self, (QPainter*)painter);
}

void q_scrollarea_qbase_init_painter(void* self, void* painter) {
    QScrollArea_QBaseInitPainter((QScrollArea*)self, (QPainter*)painter);
}

void q_scrollarea_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnInitPainter((QScrollArea*)self, (intptr_t)slot);
}

QPaintDevice* q_scrollarea_redirected(void* self, void* offset) {
    return QScrollArea_Redirected((QScrollArea*)self, (QPoint*)offset);
}

QPaintDevice* q_scrollarea_qbase_redirected(void* self, void* offset) {
    return QScrollArea_QBaseRedirected((QScrollArea*)self, (QPoint*)offset);
}

void q_scrollarea_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QScrollArea_OnRedirected((QScrollArea*)self, (intptr_t)slot);
}

QPainter* q_scrollarea_shared_painter(void* self) {
    return QScrollArea_SharedPainter((QScrollArea*)self);
}

QPainter* q_scrollarea_qbase_shared_painter(void* self) {
    return QScrollArea_QBaseSharedPainter((QScrollArea*)self);
}

void q_scrollarea_on_shared_painter(void* self, QPainter* (*slot)()) {
    QScrollArea_OnSharedPainter((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_input_method_event(void* self, void* param1) {
    QScrollArea_InputMethodEvent((QScrollArea*)self, (QInputMethodEvent*)param1);
}

void q_scrollarea_qbase_input_method_event(void* self, void* param1) {
    QScrollArea_QBaseInputMethodEvent((QScrollArea*)self, (QInputMethodEvent*)param1);
}

void q_scrollarea_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnInputMethodEvent((QScrollArea*)self, (intptr_t)slot);
}

QVariant* q_scrollarea_input_method_query(void* self, int64_t param1) {
    return QScrollArea_InputMethodQuery((QScrollArea*)self, param1);
}

QVariant* q_scrollarea_qbase_input_method_query(void* self, int64_t param1) {
    return QScrollArea_QBaseInputMethodQuery((QScrollArea*)self, param1);
}

void q_scrollarea_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QScrollArea_OnInputMethodQuery((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_timer_event(void* self, void* event) {
    QScrollArea_TimerEvent((QScrollArea*)self, (QTimerEvent*)event);
}

void q_scrollarea_qbase_timer_event(void* self, void* event) {
    QScrollArea_QBaseTimerEvent((QScrollArea*)self, (QTimerEvent*)event);
}

void q_scrollarea_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnTimerEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_child_event(void* self, void* event) {
    QScrollArea_ChildEvent((QScrollArea*)self, (QChildEvent*)event);
}

void q_scrollarea_qbase_child_event(void* self, void* event) {
    QScrollArea_QBaseChildEvent((QScrollArea*)self, (QChildEvent*)event);
}

void q_scrollarea_on_child_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnChildEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_custom_event(void* self, void* event) {
    QScrollArea_CustomEvent((QScrollArea*)self, (QEvent*)event);
}

void q_scrollarea_qbase_custom_event(void* self, void* event) {
    QScrollArea_QBaseCustomEvent((QScrollArea*)self, (QEvent*)event);
}

void q_scrollarea_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnCustomEvent((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_connect_notify(void* self, void* signal) {
    QScrollArea_ConnectNotify((QScrollArea*)self, (QMetaMethod*)signal);
}

void q_scrollarea_qbase_connect_notify(void* self, void* signal) {
    QScrollArea_QBaseConnectNotify((QScrollArea*)self, (QMetaMethod*)signal);
}

void q_scrollarea_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnConnectNotify((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_disconnect_notify(void* self, void* signal) {
    QScrollArea_DisconnectNotify((QScrollArea*)self, (QMetaMethod*)signal);
}

void q_scrollarea_qbase_disconnect_notify(void* self, void* signal) {
    QScrollArea_QBaseDisconnectNotify((QScrollArea*)self, (QMetaMethod*)signal);
}

void q_scrollarea_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnDisconnectNotify((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QScrollArea_SetViewportMargins((QScrollArea*)self, left, top, right, bottom);
}

void q_scrollarea_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QScrollArea_QBaseSetViewportMargins((QScrollArea*)self, left, top, right, bottom);
}

void q_scrollarea_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QScrollArea_OnSetViewportMargins((QScrollArea*)self, (intptr_t)slot);
}

QMargins* q_scrollarea_viewport_margins(void* self) {
    return QScrollArea_ViewportMargins((QScrollArea*)self);
}

QMargins* q_scrollarea_qbase_viewport_margins(void* self) {
    return QScrollArea_QBaseViewportMargins((QScrollArea*)self);
}

void q_scrollarea_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QScrollArea_OnViewportMargins((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_draw_frame(void* self, void* param1) {
    QScrollArea_DrawFrame((QScrollArea*)self, (QPainter*)param1);
}

void q_scrollarea_qbase_draw_frame(void* self, void* param1) {
    QScrollArea_QBaseDrawFrame((QScrollArea*)self, (QPainter*)param1);
}

void q_scrollarea_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnDrawFrame((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_update_micro_focus(void* self) {
    QScrollArea_UpdateMicroFocus((QScrollArea*)self);
}

void q_scrollarea_qbase_update_micro_focus(void* self) {
    QScrollArea_QBaseUpdateMicroFocus((QScrollArea*)self);
}

void q_scrollarea_on_update_micro_focus(void* self, void (*slot)()) {
    QScrollArea_OnUpdateMicroFocus((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_create(void* self) {
    QScrollArea_Create((QScrollArea*)self);
}

void q_scrollarea_qbase_create(void* self) {
    QScrollArea_QBaseCreate((QScrollArea*)self);
}

void q_scrollarea_on_create(void* self, void (*slot)()) {
    QScrollArea_OnCreate((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_destroy(void* self) {
    QScrollArea_Destroy((QScrollArea*)self);
}

void q_scrollarea_qbase_destroy(void* self) {
    QScrollArea_QBaseDestroy((QScrollArea*)self);
}

void q_scrollarea_on_destroy(void* self, void (*slot)()) {
    QScrollArea_OnDestroy((QScrollArea*)self, (intptr_t)slot);
}

bool q_scrollarea_focus_next_child(void* self) {
    return QScrollArea_FocusNextChild((QScrollArea*)self);
}

bool q_scrollarea_qbase_focus_next_child(void* self) {
    return QScrollArea_QBaseFocusNextChild((QScrollArea*)self);
}

void q_scrollarea_on_focus_next_child(void* self, bool (*slot)()) {
    QScrollArea_OnFocusNextChild((QScrollArea*)self, (intptr_t)slot);
}

bool q_scrollarea_focus_previous_child(void* self) {
    return QScrollArea_FocusPreviousChild((QScrollArea*)self);
}

bool q_scrollarea_qbase_focus_previous_child(void* self) {
    return QScrollArea_QBaseFocusPreviousChild((QScrollArea*)self);
}

void q_scrollarea_on_focus_previous_child(void* self, bool (*slot)()) {
    QScrollArea_OnFocusPreviousChild((QScrollArea*)self, (intptr_t)slot);
}

QObject* q_scrollarea_sender(void* self) {
    return QScrollArea_Sender((QScrollArea*)self);
}

QObject* q_scrollarea_qbase_sender(void* self) {
    return QScrollArea_QBaseSender((QScrollArea*)self);
}

void q_scrollarea_on_sender(void* self, QObject* (*slot)()) {
    QScrollArea_OnSender((QScrollArea*)self, (intptr_t)slot);
}

int32_t q_scrollarea_sender_signal_index(void* self) {
    return QScrollArea_SenderSignalIndex((QScrollArea*)self);
}

int32_t q_scrollarea_qbase_sender_signal_index(void* self) {
    return QScrollArea_QBaseSenderSignalIndex((QScrollArea*)self);
}

void q_scrollarea_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QScrollArea_OnSenderSignalIndex((QScrollArea*)self, (intptr_t)slot);
}

int32_t q_scrollarea_receivers(void* self, const char* signal) {
    return QScrollArea_Receivers((QScrollArea*)self, signal);
}

int32_t q_scrollarea_qbase_receivers(void* self, const char* signal) {
    return QScrollArea_QBaseReceivers((QScrollArea*)self, signal);
}

void q_scrollarea_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QScrollArea_OnReceivers((QScrollArea*)self, (intptr_t)slot);
}

bool q_scrollarea_is_signal_connected(void* self, void* signal) {
    return QScrollArea_IsSignalConnected((QScrollArea*)self, (QMetaMethod*)signal);
}

bool q_scrollarea_qbase_is_signal_connected(void* self, void* signal) {
    return QScrollArea_QBaseIsSignalConnected((QScrollArea*)self, (QMetaMethod*)signal);
}

void q_scrollarea_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QScrollArea_OnIsSignalConnected((QScrollArea*)self, (intptr_t)slot);
}

double q_scrollarea_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QScrollArea_GetDecodedMetricF((QScrollArea*)self, metricA, metricB);
}

double q_scrollarea_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QScrollArea_QBaseGetDecodedMetricF((QScrollArea*)self, metricA, metricB);
}

void q_scrollarea_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QScrollArea_OnGetDecodedMetricF((QScrollArea*)self, (intptr_t)slot);
}

void q_scrollarea_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_scrollarea_delete(void* self) {
    QScrollArea_Delete((QScrollArea*)(self));
}
