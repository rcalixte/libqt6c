#include "libqabstractscrollarea.hpp"
#include "libqevent.hpp"
#include "libqbrush.hpp"
#include "libqcoreevent.hpp"
#include "libqframe.hpp"
#include "libqmargins.hpp"
#include "libqmdisubwindow.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqmdiarea.hpp"
#include "libqmdiarea.h"

QMdiArea* q_mdiarea_new(void* parent) {
    return QMdiArea_new((QWidget*)parent);
}

QMdiArea* q_mdiarea_new2() {
    return QMdiArea_new2();
}

const QMetaObject* q_mdiarea_meta_object(void* self) {
    return QMdiArea_MetaObject((QMdiArea*)self);
}

void* q_mdiarea_metacast(void* self, const char* param1) {
    return QMdiArea_Metacast((QMdiArea*)self, param1);
}

int32_t q_mdiarea_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMdiArea_Metacall((QMdiArea*)self, param1, param2, param3);
}

void q_mdiarea_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QMdiArea_OnMetacall((QMdiArea*)self, (intptr_t)callback);
}

int32_t q_mdiarea_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMdiArea_QBaseMetacall((QMdiArea*)self, param1, param2, param3);
}

const char* q_mdiarea_tr(const char* s) {
    libqt_string _str = QMdiArea_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_mdiarea_size_hint(void* self) {
    return QMdiArea_SizeHint((QMdiArea*)self);
}

void q_mdiarea_on_size_hint(void* self, QSize* (*callback)()) {
    QMdiArea_OnSizeHint((QMdiArea*)self, (intptr_t)callback);
}

QSize* q_mdiarea_qbase_size_hint(void* self) {
    return QMdiArea_QBaseSizeHint((QMdiArea*)self);
}

QSize* q_mdiarea_minimum_size_hint(void* self) {
    return QMdiArea_MinimumSizeHint((QMdiArea*)self);
}

void q_mdiarea_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QMdiArea_OnMinimumSizeHint((QMdiArea*)self, (intptr_t)callback);
}

QSize* q_mdiarea_qbase_minimum_size_hint(void* self) {
    return QMdiArea_QBaseMinimumSizeHint((QMdiArea*)self);
}

QMdiSubWindow* q_mdiarea_current_sub_window(void* self) {
    return QMdiArea_CurrentSubWindow((QMdiArea*)self);
}

QMdiSubWindow* q_mdiarea_active_sub_window(void* self) {
    return QMdiArea_ActiveSubWindow((QMdiArea*)self);
}

libqt_list /* of QMdiSubWindow* */ q_mdiarea_sub_window_list(void* self) {
    libqt_list _arr = QMdiArea_SubWindowList((QMdiArea*)self);
    return _arr;
}

QMdiSubWindow* q_mdiarea_add_sub_window(void* self, void* widget) {
    return QMdiArea_AddSubWindow((QMdiArea*)self, (QWidget*)widget);
}

void q_mdiarea_remove_sub_window(void* self, void* widget) {
    QMdiArea_RemoveSubWindow((QMdiArea*)self, (QWidget*)widget);
}

QBrush* q_mdiarea_background(void* self) {
    return QMdiArea_Background((QMdiArea*)self);
}

void q_mdiarea_set_background(void* self, void* background) {
    QMdiArea_SetBackground((QMdiArea*)self, (QBrush*)background);
}

int32_t q_mdiarea_activation_order(void* self) {
    return QMdiArea_ActivationOrder((QMdiArea*)self);
}

void q_mdiarea_set_activation_order(void* self, int32_t order) {
    QMdiArea_SetActivationOrder((QMdiArea*)self, order);
}

void q_mdiarea_set_option(void* self, int32_t option) {
    QMdiArea_SetOption((QMdiArea*)self, option);
}

bool q_mdiarea_test_option(void* self, int32_t opton) {
    return QMdiArea_TestOption((QMdiArea*)self, opton);
}

void q_mdiarea_set_view_mode(void* self, int32_t mode) {
    QMdiArea_SetViewMode((QMdiArea*)self, mode);
}

int32_t q_mdiarea_view_mode(void* self) {
    return QMdiArea_ViewMode((QMdiArea*)self);
}

bool q_mdiarea_document_mode(void* self) {
    return QMdiArea_DocumentMode((QMdiArea*)self);
}

void q_mdiarea_set_document_mode(void* self, bool enabled) {
    QMdiArea_SetDocumentMode((QMdiArea*)self, enabled);
}

void q_mdiarea_set_tabs_closable(void* self, bool closable) {
    QMdiArea_SetTabsClosable((QMdiArea*)self, closable);
}

bool q_mdiarea_tabs_closable(void* self) {
    return QMdiArea_TabsClosable((QMdiArea*)self);
}

void q_mdiarea_set_tabs_movable(void* self, bool movable) {
    QMdiArea_SetTabsMovable((QMdiArea*)self, movable);
}

bool q_mdiarea_tabs_movable(void* self) {
    return QMdiArea_TabsMovable((QMdiArea*)self);
}

void q_mdiarea_set_tab_shape(void* self, int32_t shape) {
    QMdiArea_SetTabShape((QMdiArea*)self, shape);
}

int32_t q_mdiarea_tab_shape(void* self) {
    return QMdiArea_TabShape((QMdiArea*)self);
}

void q_mdiarea_set_tab_position(void* self, int32_t position) {
    QMdiArea_SetTabPosition((QMdiArea*)self, position);
}

int32_t q_mdiarea_tab_position(void* self) {
    return QMdiArea_TabPosition((QMdiArea*)self);
}

void q_mdiarea_sub_window_activated(void* self, void* param1) {
    QMdiArea_SubWindowActivated((QMdiArea*)self, (QMdiSubWindow*)param1);
}

void q_mdiarea_on_sub_window_activated(void* self, void (*callback)(void*, void*)) {
    QMdiArea_Connect_SubWindowActivated((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_set_active_sub_window(void* self, void* window) {
    QMdiArea_SetActiveSubWindow((QMdiArea*)self, (QMdiSubWindow*)window);
}

void q_mdiarea_tile_sub_windows(void* self) {
    QMdiArea_TileSubWindows((QMdiArea*)self);
}

void q_mdiarea_cascade_sub_windows(void* self) {
    QMdiArea_CascadeSubWindows((QMdiArea*)self);
}

void q_mdiarea_close_active_sub_window(void* self) {
    QMdiArea_CloseActiveSubWindow((QMdiArea*)self);
}

void q_mdiarea_close_all_sub_windows(void* self) {
    QMdiArea_CloseAllSubWindows((QMdiArea*)self);
}

void q_mdiarea_activate_next_sub_window(void* self) {
    QMdiArea_ActivateNextSubWindow((QMdiArea*)self);
}

void q_mdiarea_activate_previous_sub_window(void* self) {
    QMdiArea_ActivatePreviousSubWindow((QMdiArea*)self);
}

void q_mdiarea_setup_viewport(void* self, void* viewport) {
    QMdiArea_SetupViewport((QMdiArea*)self, (QWidget*)viewport);
}

void q_mdiarea_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnSetupViewport((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_qbase_setup_viewport(void* self, void* viewport) {
    QMdiArea_QBaseSetupViewport((QMdiArea*)self, (QWidget*)viewport);
}

bool q_mdiarea_event(void* self, void* event) {
    return QMdiArea_Event((QMdiArea*)self, (QEvent*)event);
}

void q_mdiarea_on_event(void* self, bool (*callback)(void*, void*)) {
    QMdiArea_OnEvent((QMdiArea*)self, (intptr_t)callback);
}

bool q_mdiarea_qbase_event(void* self, void* event) {
    return QMdiArea_QBaseEvent((QMdiArea*)self, (QEvent*)event);
}

bool q_mdiarea_event_filter(void* self, void* object, void* event) {
    return QMdiArea_EventFilter((QMdiArea*)self, (QObject*)object, (QEvent*)event);
}

void q_mdiarea_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QMdiArea_OnEventFilter((QMdiArea*)self, (intptr_t)callback);
}

bool q_mdiarea_qbase_event_filter(void* self, void* object, void* event) {
    return QMdiArea_QBaseEventFilter((QMdiArea*)self, (QObject*)object, (QEvent*)event);
}

void q_mdiarea_paint_event(void* self, void* paintEvent) {
    QMdiArea_PaintEvent((QMdiArea*)self, (QPaintEvent*)paintEvent);
}

void q_mdiarea_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnPaintEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_qbase_paint_event(void* self, void* paintEvent) {
    QMdiArea_QBasePaintEvent((QMdiArea*)self, (QPaintEvent*)paintEvent);
}

void q_mdiarea_child_event(void* self, void* childEvent) {
    QMdiArea_ChildEvent((QMdiArea*)self, (QChildEvent*)childEvent);
}

void q_mdiarea_on_child_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnChildEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_qbase_child_event(void* self, void* childEvent) {
    QMdiArea_QBaseChildEvent((QMdiArea*)self, (QChildEvent*)childEvent);
}

void q_mdiarea_resize_event(void* self, void* resizeEvent) {
    QMdiArea_ResizeEvent((QMdiArea*)self, (QResizeEvent*)resizeEvent);
}

void q_mdiarea_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnResizeEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_qbase_resize_event(void* self, void* resizeEvent) {
    QMdiArea_QBaseResizeEvent((QMdiArea*)self, (QResizeEvent*)resizeEvent);
}

void q_mdiarea_timer_event(void* self, void* timerEvent) {
    QMdiArea_TimerEvent((QMdiArea*)self, (QTimerEvent*)timerEvent);
}

void q_mdiarea_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnTimerEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_qbase_timer_event(void* self, void* timerEvent) {
    QMdiArea_QBaseTimerEvent((QMdiArea*)self, (QTimerEvent*)timerEvent);
}

void q_mdiarea_show_event(void* self, void* showEvent) {
    QMdiArea_ShowEvent((QMdiArea*)self, (QShowEvent*)showEvent);
}

void q_mdiarea_on_show_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnShowEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_qbase_show_event(void* self, void* showEvent) {
    QMdiArea_QBaseShowEvent((QMdiArea*)self, (QShowEvent*)showEvent);
}

bool q_mdiarea_viewport_event(void* self, void* event) {
    return QMdiArea_ViewportEvent((QMdiArea*)self, (QEvent*)event);
}

void q_mdiarea_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    QMdiArea_OnViewportEvent((QMdiArea*)self, (intptr_t)callback);
}

bool q_mdiarea_qbase_viewport_event(void* self, void* event) {
    return QMdiArea_QBaseViewportEvent((QMdiArea*)self, (QEvent*)event);
}

void q_mdiarea_scroll_contents_by(void* self, int dx, int dy) {
    QMdiArea_ScrollContentsBy((QMdiArea*)self, dx, dy);
}

void q_mdiarea_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    QMdiArea_OnScrollContentsBy((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QMdiArea_QBaseScrollContentsBy((QMdiArea*)self, dx, dy);
}

const char* q_mdiarea_tr2(const char* s, const char* c) {
    libqt_string _str = QMdiArea_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mdiarea_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMdiArea_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QMdiSubWindow* */ q_mdiarea_sub_window_list1(void* self, int32_t order) {
    libqt_list _arr = QMdiArea_SubWindowList1((QMdiArea*)self, order);
    return _arr;
}

QMdiSubWindow* q_mdiarea_add_sub_window2(void* self, void* widget, int64_t flags) {
    return QMdiArea_AddSubWindow2((QMdiArea*)self, (QWidget*)widget, flags);
}

void q_mdiarea_set_option2(void* self, int32_t option, bool on) {
    QMdiArea_SetOption2((QMdiArea*)self, option, on);
}

int32_t q_mdiarea_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_mdiarea_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_mdiarea_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_mdiarea_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t q_mdiarea_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_mdiarea_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_mdiarea_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_mdiarea_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_mdiarea_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_mdiarea_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_mdiarea_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_mdiarea_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_mdiarea_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_mdiarea_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_mdiarea_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t q_mdiarea_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_mdiarea_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_mdiarea_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_mdiarea_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_mdiarea_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t q_mdiarea_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_mdiarea_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t q_mdiarea_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_mdiarea_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_mdiarea_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_mdiarea_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_mdiarea_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_mdiarea_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_mdiarea_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_mdiarea_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_mdiarea_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_mdiarea_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_mdiarea_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_mdiarea_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_mdiarea_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_mdiarea_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_mdiarea_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_mdiarea_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_mdiarea_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_mdiarea_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_mdiarea_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_mdiarea_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_mdiarea_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_mdiarea_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_mdiarea_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_mdiarea_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_mdiarea_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_mdiarea_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_mdiarea_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_mdiarea_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_mdiarea_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_mdiarea_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_mdiarea_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_mdiarea_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_mdiarea_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_mdiarea_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_mdiarea_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_mdiarea_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_mdiarea_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_mdiarea_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_mdiarea_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_mdiarea_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_mdiarea_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_mdiarea_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_mdiarea_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_mdiarea_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_mdiarea_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_mdiarea_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_mdiarea_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_mdiarea_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_mdiarea_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_mdiarea_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_mdiarea_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_mdiarea_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_mdiarea_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_mdiarea_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_mdiarea_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_mdiarea_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_mdiarea_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_mdiarea_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_mdiarea_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_mdiarea_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_mdiarea_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_mdiarea_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_mdiarea_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_mdiarea_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_mdiarea_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_mdiarea_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_mdiarea_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_mdiarea_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_mdiarea_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_mdiarea_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_mdiarea_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_mdiarea_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_mdiarea_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_mdiarea_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_mdiarea_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_mdiarea_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_mdiarea_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_mdiarea_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_mdiarea_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_mdiarea_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_mdiarea_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_mdiarea_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_mdiarea_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_mdiarea_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_mdiarea_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_mdiarea_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_mdiarea_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_mdiarea_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_mdiarea_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_mdiarea_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_mdiarea_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_mdiarea_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_mdiarea_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_mdiarea_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_mdiarea_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_mdiarea_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_mdiarea_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_mdiarea_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_mdiarea_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_mdiarea_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_mdiarea_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_mdiarea_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_mdiarea_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_mdiarea_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_mdiarea_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_mdiarea_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_mdiarea_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_mdiarea_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mdiarea_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdiarea_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_mdiarea_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_mdiarea_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_mdiarea_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdiarea_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_mdiarea_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdiarea_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_mdiarea_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdiarea_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_mdiarea_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_mdiarea_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_mdiarea_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_mdiarea_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdiarea_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_mdiarea_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_mdiarea_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_mdiarea_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdiarea_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_mdiarea_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mdiarea_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdiarea_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_mdiarea_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdiarea_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_mdiarea_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_mdiarea_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_mdiarea_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_mdiarea_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_mdiarea_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_mdiarea_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_mdiarea_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_mdiarea_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_mdiarea_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_mdiarea_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_mdiarea_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_mdiarea_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_mdiarea_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_mdiarea_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_mdiarea_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_mdiarea_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_mdiarea_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_mdiarea_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_mdiarea_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_mdiarea_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_mdiarea_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_mdiarea_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_mdiarea_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_mdiarea_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_mdiarea_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_mdiarea_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_mdiarea_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_mdiarea_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_mdiarea_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_mdiarea_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_mdiarea_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_mdiarea_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_mdiarea_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_mdiarea_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_mdiarea_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_mdiarea_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_mdiarea_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_mdiarea_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_mdiarea_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_mdiarea_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_mdiarea_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_mdiarea_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_mdiarea_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_mdiarea_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_mdiarea_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_mdiarea_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_mdiarea_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_mdiarea_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_mdiarea_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_mdiarea_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_mdiarea_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_mdiarea_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_mdiarea_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_mdiarea_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_mdiarea_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_mdiarea_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_mdiarea_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_mdiarea_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_mdiarea_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_mdiarea_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_mdiarea_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_mdiarea_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_mdiarea_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_mdiarea_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_mdiarea_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_mdiarea_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_mdiarea_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_mdiarea_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_mdiarea_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_mdiarea_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_mdiarea_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_mdiarea_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_mdiarea_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_mdiarea_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_mdiarea_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_mdiarea_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_mdiarea_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_mdiarea_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_mdiarea_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_mdiarea_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_mdiarea_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_mdiarea_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_mdiarea_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_mdiarea_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_mdiarea_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_mdiarea_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_mdiarea_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_mdiarea_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_mdiarea_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_mdiarea_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_mdiarea_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_mdiarea_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_mdiarea_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_mdiarea_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_mdiarea_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_mdiarea_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_mdiarea_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_mdiarea_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_mdiarea_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_mdiarea_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_mdiarea_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_mdiarea_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_mdiarea_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_mdiarea_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t q_mdiarea_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_mdiarea_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_mdiarea_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t q_mdiarea_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_mdiarea_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_mdiarea_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_mdiarea_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_mdiarea_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_mdiarea_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_mdiarea_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_mdiarea_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_mdiarea_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_mdiarea_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_mdiarea_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_mdiarea_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_mdiarea_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_mdiarea_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_mdiarea_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_mdiarea_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_mdiarea_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_mdiarea_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_mdiarea_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_mdiarea_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_mdiarea_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_mdiarea_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_mdiarea_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_mdiarea_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_mdiarea_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_mdiarea_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_mdiarea_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_mdiarea_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_mdiarea_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_mdiarea_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_mdiarea_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_mdiarea_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_mdiarea_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_mdiarea_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_mdiarea_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_mdiarea_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_mdiarea_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_mdiarea_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_mdiarea_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_mdiarea_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_mdiarea_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_mdiarea_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mdiarea_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_mdiarea_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_mdiarea_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_mdiarea_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_mdiarea_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_mdiarea_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_mdiarea_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_mdiarea_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_mdiarea_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_mdiarea_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_mdiarea_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_mdiarea_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_mdiarea_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_mdiarea_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_mdiarea_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_mdiarea_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_mdiarea_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_mdiarea_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_mdiarea_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_mdiarea_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_mdiarea_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_mdiarea_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_mdiarea_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_mdiarea_dynamic_property_names");
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

QBindingStorage* q_mdiarea_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_mdiarea_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_mdiarea_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_mdiarea_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_mdiarea_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_mdiarea_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_mdiarea_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_mdiarea_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_mdiarea_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_mdiarea_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_mdiarea_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_mdiarea_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_mdiarea_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_mdiarea_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_mdiarea_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_mdiarea_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_mdiarea_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_mdiarea_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_mdiarea_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_mdiarea_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_mdiarea_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_mdiarea_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_mdiarea_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_mdiarea_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_mdiarea_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_mdiarea_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_mdiarea_mouse_press_event(void* self, void* param1) {
    QMdiArea_MousePressEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

void q_mdiarea_qbase_mouse_press_event(void* self, void* param1) {
    QMdiArea_QBaseMousePressEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

void q_mdiarea_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnMousePressEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_mouse_release_event(void* self, void* param1) {
    QMdiArea_MouseReleaseEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

void q_mdiarea_qbase_mouse_release_event(void* self, void* param1) {
    QMdiArea_QBaseMouseReleaseEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

void q_mdiarea_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnMouseReleaseEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_mouse_double_click_event(void* self, void* param1) {
    QMdiArea_MouseDoubleClickEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

void q_mdiarea_qbase_mouse_double_click_event(void* self, void* param1) {
    QMdiArea_QBaseMouseDoubleClickEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

void q_mdiarea_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnMouseDoubleClickEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_mouse_move_event(void* self, void* param1) {
    QMdiArea_MouseMoveEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

void q_mdiarea_qbase_mouse_move_event(void* self, void* param1) {
    QMdiArea_QBaseMouseMoveEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

void q_mdiarea_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnMouseMoveEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_wheel_event(void* self, void* param1) {
    QMdiArea_WheelEvent((QMdiArea*)self, (QWheelEvent*)param1);
}

void q_mdiarea_qbase_wheel_event(void* self, void* param1) {
    QMdiArea_QBaseWheelEvent((QMdiArea*)self, (QWheelEvent*)param1);
}

void q_mdiarea_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnWheelEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_context_menu_event(void* self, void* param1) {
    QMdiArea_ContextMenuEvent((QMdiArea*)self, (QContextMenuEvent*)param1);
}

void q_mdiarea_qbase_context_menu_event(void* self, void* param1) {
    QMdiArea_QBaseContextMenuEvent((QMdiArea*)self, (QContextMenuEvent*)param1);
}

void q_mdiarea_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnContextMenuEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_drag_enter_event(void* self, void* param1) {
    QMdiArea_DragEnterEvent((QMdiArea*)self, (QDragEnterEvent*)param1);
}

void q_mdiarea_qbase_drag_enter_event(void* self, void* param1) {
    QMdiArea_QBaseDragEnterEvent((QMdiArea*)self, (QDragEnterEvent*)param1);
}

void q_mdiarea_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnDragEnterEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_drag_move_event(void* self, void* param1) {
    QMdiArea_DragMoveEvent((QMdiArea*)self, (QDragMoveEvent*)param1);
}

void q_mdiarea_qbase_drag_move_event(void* self, void* param1) {
    QMdiArea_QBaseDragMoveEvent((QMdiArea*)self, (QDragMoveEvent*)param1);
}

void q_mdiarea_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnDragMoveEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_drag_leave_event(void* self, void* param1) {
    QMdiArea_DragLeaveEvent((QMdiArea*)self, (QDragLeaveEvent*)param1);
}

void q_mdiarea_qbase_drag_leave_event(void* self, void* param1) {
    QMdiArea_QBaseDragLeaveEvent((QMdiArea*)self, (QDragLeaveEvent*)param1);
}

void q_mdiarea_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnDragLeaveEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_drop_event(void* self, void* param1) {
    QMdiArea_DropEvent((QMdiArea*)self, (QDropEvent*)param1);
}

void q_mdiarea_qbase_drop_event(void* self, void* param1) {
    QMdiArea_QBaseDropEvent((QMdiArea*)self, (QDropEvent*)param1);
}

void q_mdiarea_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnDropEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_key_press_event(void* self, void* param1) {
    QMdiArea_KeyPressEvent((QMdiArea*)self, (QKeyEvent*)param1);
}

void q_mdiarea_qbase_key_press_event(void* self, void* param1) {
    QMdiArea_QBaseKeyPressEvent((QMdiArea*)self, (QKeyEvent*)param1);
}

void q_mdiarea_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnKeyPressEvent((QMdiArea*)self, (intptr_t)callback);
}

QSize* q_mdiarea_viewport_size_hint(void* self) {
    return QMdiArea_ViewportSizeHint((QMdiArea*)self);
}

QSize* q_mdiarea_qbase_viewport_size_hint(void* self) {
    return QMdiArea_QBaseViewportSizeHint((QMdiArea*)self);
}

void q_mdiarea_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    QMdiArea_OnViewportSizeHint((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_change_event(void* self, void* param1) {
    QMdiArea_ChangeEvent((QMdiArea*)self, (QEvent*)param1);
}

void q_mdiarea_qbase_change_event(void* self, void* param1) {
    QMdiArea_QBaseChangeEvent((QMdiArea*)self, (QEvent*)param1);
}

void q_mdiarea_on_change_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnChangeEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_init_style_option(void* self, void* option) {
    QMdiArea_InitStyleOption((QMdiArea*)self, (QStyleOptionFrame*)option);
}

void q_mdiarea_qbase_init_style_option(void* self, void* option) {
    QMdiArea_QBaseInitStyleOption((QMdiArea*)self, (QStyleOptionFrame*)option);
}

void q_mdiarea_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnInitStyleOption((QMdiArea*)self, (intptr_t)callback);
}

int32_t q_mdiarea_dev_type(void* self) {
    return QMdiArea_DevType((QMdiArea*)self);
}

int32_t q_mdiarea_qbase_dev_type(void* self) {
    return QMdiArea_QBaseDevType((QMdiArea*)self);
}

void q_mdiarea_on_dev_type(void* self, int32_t (*callback)()) {
    QMdiArea_OnDevType((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_set_visible(void* self, bool visible) {
    QMdiArea_SetVisible((QMdiArea*)self, visible);
}

void q_mdiarea_qbase_set_visible(void* self, bool visible) {
    QMdiArea_QBaseSetVisible((QMdiArea*)self, visible);
}

void q_mdiarea_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QMdiArea_OnSetVisible((QMdiArea*)self, (intptr_t)callback);
}

int32_t q_mdiarea_height_for_width(void* self, int param1) {
    return QMdiArea_HeightForWidth((QMdiArea*)self, param1);
}

int32_t q_mdiarea_qbase_height_for_width(void* self, int param1) {
    return QMdiArea_QBaseHeightForWidth((QMdiArea*)self, param1);
}

void q_mdiarea_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QMdiArea_OnHeightForWidth((QMdiArea*)self, (intptr_t)callback);
}

bool q_mdiarea_has_height_for_width(void* self) {
    return QMdiArea_HasHeightForWidth((QMdiArea*)self);
}

bool q_mdiarea_qbase_has_height_for_width(void* self) {
    return QMdiArea_QBaseHasHeightForWidth((QMdiArea*)self);
}

void q_mdiarea_on_has_height_for_width(void* self, bool (*callback)()) {
    QMdiArea_OnHasHeightForWidth((QMdiArea*)self, (intptr_t)callback);
}

QPaintEngine* q_mdiarea_paint_engine(void* self) {
    return QMdiArea_PaintEngine((QMdiArea*)self);
}

QPaintEngine* q_mdiarea_qbase_paint_engine(void* self) {
    return QMdiArea_QBasePaintEngine((QMdiArea*)self);
}

void q_mdiarea_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QMdiArea_OnPaintEngine((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_key_release_event(void* self, void* event) {
    QMdiArea_KeyReleaseEvent((QMdiArea*)self, (QKeyEvent*)event);
}

void q_mdiarea_qbase_key_release_event(void* self, void* event) {
    QMdiArea_QBaseKeyReleaseEvent((QMdiArea*)self, (QKeyEvent*)event);
}

void q_mdiarea_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnKeyReleaseEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_focus_in_event(void* self, void* event) {
    QMdiArea_FocusInEvent((QMdiArea*)self, (QFocusEvent*)event);
}

void q_mdiarea_qbase_focus_in_event(void* self, void* event) {
    QMdiArea_QBaseFocusInEvent((QMdiArea*)self, (QFocusEvent*)event);
}

void q_mdiarea_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnFocusInEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_focus_out_event(void* self, void* event) {
    QMdiArea_FocusOutEvent((QMdiArea*)self, (QFocusEvent*)event);
}

void q_mdiarea_qbase_focus_out_event(void* self, void* event) {
    QMdiArea_QBaseFocusOutEvent((QMdiArea*)self, (QFocusEvent*)event);
}

void q_mdiarea_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnFocusOutEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_enter_event(void* self, void* event) {
    QMdiArea_EnterEvent((QMdiArea*)self, (QEnterEvent*)event);
}

void q_mdiarea_qbase_enter_event(void* self, void* event) {
    QMdiArea_QBaseEnterEvent((QMdiArea*)self, (QEnterEvent*)event);
}

void q_mdiarea_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnEnterEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_leave_event(void* self, void* event) {
    QMdiArea_LeaveEvent((QMdiArea*)self, (QEvent*)event);
}

void q_mdiarea_qbase_leave_event(void* self, void* event) {
    QMdiArea_QBaseLeaveEvent((QMdiArea*)self, (QEvent*)event);
}

void q_mdiarea_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnLeaveEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_move_event(void* self, void* event) {
    QMdiArea_MoveEvent((QMdiArea*)self, (QMoveEvent*)event);
}

void q_mdiarea_qbase_move_event(void* self, void* event) {
    QMdiArea_QBaseMoveEvent((QMdiArea*)self, (QMoveEvent*)event);
}

void q_mdiarea_on_move_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnMoveEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_close_event(void* self, void* event) {
    QMdiArea_CloseEvent((QMdiArea*)self, (QCloseEvent*)event);
}

void q_mdiarea_qbase_close_event(void* self, void* event) {
    QMdiArea_QBaseCloseEvent((QMdiArea*)self, (QCloseEvent*)event);
}

void q_mdiarea_on_close_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnCloseEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_tablet_event(void* self, void* event) {
    QMdiArea_TabletEvent((QMdiArea*)self, (QTabletEvent*)event);
}

void q_mdiarea_qbase_tablet_event(void* self, void* event) {
    QMdiArea_QBaseTabletEvent((QMdiArea*)self, (QTabletEvent*)event);
}

void q_mdiarea_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnTabletEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_action_event(void* self, void* event) {
    QMdiArea_ActionEvent((QMdiArea*)self, (QActionEvent*)event);
}

void q_mdiarea_qbase_action_event(void* self, void* event) {
    QMdiArea_QBaseActionEvent((QMdiArea*)self, (QActionEvent*)event);
}

void q_mdiarea_on_action_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnActionEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_hide_event(void* self, void* event) {
    QMdiArea_HideEvent((QMdiArea*)self, (QHideEvent*)event);
}

void q_mdiarea_qbase_hide_event(void* self, void* event) {
    QMdiArea_QBaseHideEvent((QMdiArea*)self, (QHideEvent*)event);
}

void q_mdiarea_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnHideEvent((QMdiArea*)self, (intptr_t)callback);
}

bool q_mdiarea_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMdiArea_NativeEvent((QMdiArea*)self, qstring(eventType), message, result);
}

bool q_mdiarea_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMdiArea_QBaseNativeEvent((QMdiArea*)self, qstring(eventType), message, result);
}

void q_mdiarea_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QMdiArea_OnNativeEvent((QMdiArea*)self, (intptr_t)callback);
}

int32_t q_mdiarea_metric(void* self, int32_t param1) {
    return QMdiArea_Metric((QMdiArea*)self, param1);
}

int32_t q_mdiarea_qbase_metric(void* self, int32_t param1) {
    return QMdiArea_QBaseMetric((QMdiArea*)self, param1);
}

void q_mdiarea_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QMdiArea_OnMetric((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_init_painter(void* self, void* painter) {
    QMdiArea_InitPainter((QMdiArea*)self, (QPainter*)painter);
}

void q_mdiarea_qbase_init_painter(void* self, void* painter) {
    QMdiArea_QBaseInitPainter((QMdiArea*)self, (QPainter*)painter);
}

void q_mdiarea_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnInitPainter((QMdiArea*)self, (intptr_t)callback);
}

QPaintDevice* q_mdiarea_redirected(void* self, void* offset) {
    return QMdiArea_Redirected((QMdiArea*)self, (QPoint*)offset);
}

QPaintDevice* q_mdiarea_qbase_redirected(void* self, void* offset) {
    return QMdiArea_QBaseRedirected((QMdiArea*)self, (QPoint*)offset);
}

void q_mdiarea_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QMdiArea_OnRedirected((QMdiArea*)self, (intptr_t)callback);
}

QPainter* q_mdiarea_shared_painter(void* self) {
    return QMdiArea_SharedPainter((QMdiArea*)self);
}

QPainter* q_mdiarea_qbase_shared_painter(void* self) {
    return QMdiArea_QBaseSharedPainter((QMdiArea*)self);
}

void q_mdiarea_on_shared_painter(void* self, QPainter* (*callback)()) {
    QMdiArea_OnSharedPainter((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_input_method_event(void* self, void* param1) {
    QMdiArea_InputMethodEvent((QMdiArea*)self, (QInputMethodEvent*)param1);
}

void q_mdiarea_qbase_input_method_event(void* self, void* param1) {
    QMdiArea_QBaseInputMethodEvent((QMdiArea*)self, (QInputMethodEvent*)param1);
}

void q_mdiarea_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnInputMethodEvent((QMdiArea*)self, (intptr_t)callback);
}

QVariant* q_mdiarea_input_method_query(void* self, int64_t param1) {
    return QMdiArea_InputMethodQuery((QMdiArea*)self, param1);
}

QVariant* q_mdiarea_qbase_input_method_query(void* self, int64_t param1) {
    return QMdiArea_QBaseInputMethodQuery((QMdiArea*)self, param1);
}

void q_mdiarea_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QMdiArea_OnInputMethodQuery((QMdiArea*)self, (intptr_t)callback);
}

bool q_mdiarea_focus_next_prev_child(void* self, bool next) {
    return QMdiArea_FocusNextPrevChild((QMdiArea*)self, next);
}

bool q_mdiarea_qbase_focus_next_prev_child(void* self, bool next) {
    return QMdiArea_QBaseFocusNextPrevChild((QMdiArea*)self, next);
}

void q_mdiarea_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QMdiArea_OnFocusNextPrevChild((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_custom_event(void* self, void* event) {
    QMdiArea_CustomEvent((QMdiArea*)self, (QEvent*)event);
}

void q_mdiarea_qbase_custom_event(void* self, void* event) {
    QMdiArea_QBaseCustomEvent((QMdiArea*)self, (QEvent*)event);
}

void q_mdiarea_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnCustomEvent((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_connect_notify(void* self, void* signal) {
    QMdiArea_ConnectNotify((QMdiArea*)self, (QMetaMethod*)signal);
}

void q_mdiarea_qbase_connect_notify(void* self, void* signal) {
    QMdiArea_QBaseConnectNotify((QMdiArea*)self, (QMetaMethod*)signal);
}

void q_mdiarea_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnConnectNotify((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_disconnect_notify(void* self, void* signal) {
    QMdiArea_DisconnectNotify((QMdiArea*)self, (QMetaMethod*)signal);
}

void q_mdiarea_qbase_disconnect_notify(void* self, void* signal) {
    QMdiArea_QBaseDisconnectNotify((QMdiArea*)self, (QMetaMethod*)signal);
}

void q_mdiarea_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnDisconnectNotify((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QMdiArea_SetViewportMargins((QMdiArea*)self, left, top, right, bottom);
}

void q_mdiarea_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QMdiArea_QBaseSetViewportMargins((QMdiArea*)self, left, top, right, bottom);
}

void q_mdiarea_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    QMdiArea_OnSetViewportMargins((QMdiArea*)self, (intptr_t)callback);
}

QMargins* q_mdiarea_viewport_margins(void* self) {
    return QMdiArea_ViewportMargins((QMdiArea*)self);
}

QMargins* q_mdiarea_qbase_viewport_margins(void* self) {
    return QMdiArea_QBaseViewportMargins((QMdiArea*)self);
}

void q_mdiarea_on_viewport_margins(void* self, QMargins* (*callback)()) {
    QMdiArea_OnViewportMargins((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_draw_frame(void* self, void* param1) {
    QMdiArea_DrawFrame((QMdiArea*)self, (QPainter*)param1);
}

void q_mdiarea_qbase_draw_frame(void* self, void* param1) {
    QMdiArea_QBaseDrawFrame((QMdiArea*)self, (QPainter*)param1);
}

void q_mdiarea_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    QMdiArea_OnDrawFrame((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_update_micro_focus(void* self) {
    QMdiArea_UpdateMicroFocus((QMdiArea*)self);
}

void q_mdiarea_qbase_update_micro_focus(void* self) {
    QMdiArea_QBaseUpdateMicroFocus((QMdiArea*)self);
}

void q_mdiarea_on_update_micro_focus(void* self, void (*callback)()) {
    QMdiArea_OnUpdateMicroFocus((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_create(void* self) {
    QMdiArea_Create((QMdiArea*)self);
}

void q_mdiarea_qbase_create(void* self) {
    QMdiArea_QBaseCreate((QMdiArea*)self);
}

void q_mdiarea_on_create(void* self, void (*callback)()) {
    QMdiArea_OnCreate((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_destroy(void* self) {
    QMdiArea_Destroy((QMdiArea*)self);
}

void q_mdiarea_qbase_destroy(void* self) {
    QMdiArea_QBaseDestroy((QMdiArea*)self);
}

void q_mdiarea_on_destroy(void* self, void (*callback)()) {
    QMdiArea_OnDestroy((QMdiArea*)self, (intptr_t)callback);
}

bool q_mdiarea_focus_next_child(void* self) {
    return QMdiArea_FocusNextChild((QMdiArea*)self);
}

bool q_mdiarea_qbase_focus_next_child(void* self) {
    return QMdiArea_QBaseFocusNextChild((QMdiArea*)self);
}

void q_mdiarea_on_focus_next_child(void* self, bool (*callback)()) {
    QMdiArea_OnFocusNextChild((QMdiArea*)self, (intptr_t)callback);
}

bool q_mdiarea_focus_previous_child(void* self) {
    return QMdiArea_FocusPreviousChild((QMdiArea*)self);
}

bool q_mdiarea_qbase_focus_previous_child(void* self) {
    return QMdiArea_QBaseFocusPreviousChild((QMdiArea*)self);
}

void q_mdiarea_on_focus_previous_child(void* self, bool (*callback)()) {
    QMdiArea_OnFocusPreviousChild((QMdiArea*)self, (intptr_t)callback);
}

QObject* q_mdiarea_sender(void* self) {
    return QMdiArea_Sender((QMdiArea*)self);
}

QObject* q_mdiarea_qbase_sender(void* self) {
    return QMdiArea_QBaseSender((QMdiArea*)self);
}

void q_mdiarea_on_sender(void* self, QObject* (*callback)()) {
    QMdiArea_OnSender((QMdiArea*)self, (intptr_t)callback);
}

int32_t q_mdiarea_sender_signal_index(void* self) {
    return QMdiArea_SenderSignalIndex((QMdiArea*)self);
}

int32_t q_mdiarea_qbase_sender_signal_index(void* self) {
    return QMdiArea_QBaseSenderSignalIndex((QMdiArea*)self);
}

void q_mdiarea_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QMdiArea_OnSenderSignalIndex((QMdiArea*)self, (intptr_t)callback);
}

int32_t q_mdiarea_receivers(void* self, const char* signal) {
    return QMdiArea_Receivers((QMdiArea*)self, signal);
}

int32_t q_mdiarea_qbase_receivers(void* self, const char* signal) {
    return QMdiArea_QBaseReceivers((QMdiArea*)self, signal);
}

void q_mdiarea_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QMdiArea_OnReceivers((QMdiArea*)self, (intptr_t)callback);
}

bool q_mdiarea_is_signal_connected(void* self, void* signal) {
    return QMdiArea_IsSignalConnected((QMdiArea*)self, (QMetaMethod*)signal);
}

bool q_mdiarea_qbase_is_signal_connected(void* self, void* signal) {
    return QMdiArea_QBaseIsSignalConnected((QMdiArea*)self, (QMetaMethod*)signal);
}

void q_mdiarea_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QMdiArea_OnIsSignalConnected((QMdiArea*)self, (intptr_t)callback);
}

double q_mdiarea_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QMdiArea_GetDecodedMetricF((QMdiArea*)self, metricA, metricB);
}

double q_mdiarea_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QMdiArea_QBaseGetDecodedMetricF((QMdiArea*)self, metricA, metricB);
}

void q_mdiarea_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QMdiArea_OnGetDecodedMetricF((QMdiArea*)self, (intptr_t)callback);
}

void q_mdiarea_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_mdiarea_delete(void* self) {
    QMdiArea_Delete((QMdiArea*)(self));
}
