#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../qml/libqqmlcomponent.hpp"
#include "../qml/libqqmlcontext.hpp"
#include "../qml/libqqmlengine.hpp"
#include "../qml/libqqmlerror.hpp"
#include "libqquickitem.hpp"
#include "libqquickwindow.hpp"
#include "../libqsize.hpp"
#include "../libqsurfaceformat.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libqquickwidget.hpp"
#include "libqquickwidget.h"

QQuickWidget* q_quickwidget_new(void* parent) {
    return QQuickWidget_New((QWidget*)parent);
}

QQuickWidget* q_quickwidget_new2() {
    return QQuickWidget_New2();
}

QQuickWidget* q_quickwidget_new3(void* engine, void* parent) {
    return QQuickWidget_New3((QQmlEngine*)engine, (QWidget*)parent);
}

QQuickWidget* q_quickwidget_new4(void* source) {
    return QQuickWidget_New4((QUrl*)source);
}

QQuickWidget* q_quickwidget_new5(void* source, void* parent) {
    return QQuickWidget_New5((QUrl*)source, (QWidget*)parent);
}

const QMetaObject* q_quickwidget_meta_object(void* self) {
    return QQuickWidget_MetaObject((QQuickWidget*)self);
}

void q_quickwidget_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQuickWidget_OnMetaObject((QQuickWidget*)self, (intptr_t)callback);
}

const QMetaObject* q_quickwidget_super_meta_object(void* self) {
    return QQuickWidget_SuperMetaObject((QQuickWidget*)self);
}

void* q_quickwidget_metacast(void* self, const char* param1) {
    return QQuickWidget_Metacast((QQuickWidget*)self, param1);
}

void q_quickwidget_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickWidget_OnMetacast((QQuickWidget*)self, (intptr_t)callback);
}

void* q_quickwidget_super_metacast(void* self, const char* param1) {
    return QQuickWidget_SuperMetacast((QQuickWidget*)self, param1);
}

int32_t q_quickwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickWidget_Metacall((QQuickWidget*)self, param1, param2, param3);
}

void q_quickwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickWidget_OnMetacall((QQuickWidget*)self, (intptr_t)callback);
}

int32_t q_quickwidget_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickWidget_SuperMetacall((QQuickWidget*)self, param1, param2, param3);
}

const char* q_quickwidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_quickwidget_source(void* self) {
    return QQuickWidget_Source((QQuickWidget*)self);
}

QQmlEngine* q_quickwidget_engine(void* self) {
    return QQuickWidget_Engine((QQuickWidget*)self);
}

QQmlContext* q_quickwidget_root_context(void* self) {
    return QQuickWidget_RootContext((QQuickWidget*)self);
}

QQuickItem* q_quickwidget_root_object(void* self) {
    return QQuickWidget_RootObject((QQuickWidget*)self);
}

int32_t q_quickwidget_resize_mode(void* self) {
    return QQuickWidget_ResizeMode((QQuickWidget*)self);
}

void q_quickwidget_set_resize_mode(void* self, int32_t resizeMode) {
    QQuickWidget_SetResizeMode((QQuickWidget*)self, resizeMode);
}

int32_t q_quickwidget_status(void* self) {
    return QQuickWidget_Status((QQuickWidget*)self);
}

libqt_list /* of QQmlError* */ q_quickwidget_errors(void* self) {
    libqt_list _arr = QQuickWidget_Errors((QQuickWidget*)self);
    return _arr;
}

QSize* q_quickwidget_size_hint(void* self) {
    return QQuickWidget_SizeHint((QQuickWidget*)self);
}

void q_quickwidget_on_size_hint(void* self, QSize* (*callback)()) {
    QQuickWidget_OnSizeHint((QQuickWidget*)self, (intptr_t)callback);
}

QSize* q_quickwidget_super_size_hint(void* self) {
    return QQuickWidget_SuperSizeHint((QQuickWidget*)self);
}

QSize* q_quickwidget_initial_size(void* self) {
    return QQuickWidget_InitialSize((QQuickWidget*)self);
}

void q_quickwidget_set_format(void* self, void* format) {
    QQuickWidget_SetFormat((QQuickWidget*)self, (QSurfaceFormat*)format);
}

QSurfaceFormat* q_quickwidget_format(void* self) {
    return QQuickWidget_Format((QQuickWidget*)self);
}

QImage* q_quickwidget_grab_framebuffer(void* self) {
    return QQuickWidget_GrabFramebuffer((QQuickWidget*)self);
}

void q_quickwidget_set_clear_color(void* self, void* color) {
    QQuickWidget_SetClearColor((QQuickWidget*)self, (QColor*)color);
}

QQuickWindow* q_quickwidget_quick_window(void* self) {
    return QQuickWidget_QuickWindow((QQuickWidget*)self);
}

void q_quickwidget_set_source(void* self, void* source) {
    QQuickWidget_SetSource((QQuickWidget*)self, (QUrl*)source);
}

void q_quickwidget_set_content(void* self, void* url, void* component, void* item) {
    QQuickWidget_SetContent((QQuickWidget*)self, (QUrl*)url, (QQmlComponent*)component, (QObject*)item);
}

void q_quickwidget_status_changed(void* self, int32_t param1) {
    QQuickWidget_StatusChanged((QQuickWidget*)self, param1);
}

void q_quickwidget_on_status_changed(void* self, void (*callback)(void*, int32_t)) {
    QQuickWidget_Connect_StatusChanged((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_scene_graph_error(void* self, int32_t error, const char* message) {
    QQuickWidget_SceneGraphError((QQuickWidget*)self, error, qstring(message));
}

void q_quickwidget_on_scene_graph_error(void* self, void (*callback)(void*, int32_t, const char*)) {
    QQuickWidget_Connect_SceneGraphError((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_resize_event(void* self, void* param1) {
    QQuickWidget_ResizeEvent((QQuickWidget*)self, (QResizeEvent*)param1);
}

void q_quickwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnResizeEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_resize_event(void* self, void* param1) {
    QQuickWidget_SuperResizeEvent((QQuickWidget*)self, (QResizeEvent*)param1);
}

void q_quickwidget_timer_event(void* self, void* param1) {
    QQuickWidget_TimerEvent((QQuickWidget*)self, (QTimerEvent*)param1);
}

void q_quickwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnTimerEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_timer_event(void* self, void* param1) {
    QQuickWidget_SuperTimerEvent((QQuickWidget*)self, (QTimerEvent*)param1);
}

void q_quickwidget_key_press_event(void* self, void* param1) {
    QQuickWidget_KeyPressEvent((QQuickWidget*)self, (QKeyEvent*)param1);
}

void q_quickwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnKeyPressEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_key_press_event(void* self, void* param1) {
    QQuickWidget_SuperKeyPressEvent((QQuickWidget*)self, (QKeyEvent*)param1);
}

void q_quickwidget_key_release_event(void* self, void* param1) {
    QQuickWidget_KeyReleaseEvent((QQuickWidget*)self, (QKeyEvent*)param1);
}

void q_quickwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnKeyReleaseEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_key_release_event(void* self, void* param1) {
    QQuickWidget_SuperKeyReleaseEvent((QQuickWidget*)self, (QKeyEvent*)param1);
}

void q_quickwidget_mouse_press_event(void* self, void* param1) {
    QQuickWidget_MousePressEvent((QQuickWidget*)self, (QMouseEvent*)param1);
}

void q_quickwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnMousePressEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_mouse_press_event(void* self, void* param1) {
    QQuickWidget_SuperMousePressEvent((QQuickWidget*)self, (QMouseEvent*)param1);
}

void q_quickwidget_mouse_release_event(void* self, void* param1) {
    QQuickWidget_MouseReleaseEvent((QQuickWidget*)self, (QMouseEvent*)param1);
}

void q_quickwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnMouseReleaseEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_mouse_release_event(void* self, void* param1) {
    QQuickWidget_SuperMouseReleaseEvent((QQuickWidget*)self, (QMouseEvent*)param1);
}

void q_quickwidget_mouse_move_event(void* self, void* param1) {
    QQuickWidget_MouseMoveEvent((QQuickWidget*)self, (QMouseEvent*)param1);
}

void q_quickwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnMouseMoveEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_mouse_move_event(void* self, void* param1) {
    QQuickWidget_SuperMouseMoveEvent((QQuickWidget*)self, (QMouseEvent*)param1);
}

void q_quickwidget_mouse_double_click_event(void* self, void* param1) {
    QQuickWidget_MouseDoubleClickEvent((QQuickWidget*)self, (QMouseEvent*)param1);
}

void q_quickwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnMouseDoubleClickEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_mouse_double_click_event(void* self, void* param1) {
    QQuickWidget_SuperMouseDoubleClickEvent((QQuickWidget*)self, (QMouseEvent*)param1);
}

void q_quickwidget_show_event(void* self, void* param1) {
    QQuickWidget_ShowEvent((QQuickWidget*)self, (QShowEvent*)param1);
}

void q_quickwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnShowEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_show_event(void* self, void* param1) {
    QQuickWidget_SuperShowEvent((QQuickWidget*)self, (QShowEvent*)param1);
}

void q_quickwidget_hide_event(void* self, void* param1) {
    QQuickWidget_HideEvent((QQuickWidget*)self, (QHideEvent*)param1);
}

void q_quickwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnHideEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_hide_event(void* self, void* param1) {
    QQuickWidget_SuperHideEvent((QQuickWidget*)self, (QHideEvent*)param1);
}

void q_quickwidget_focus_in_event(void* self, void* event) {
    QQuickWidget_FocusInEvent((QQuickWidget*)self, (QFocusEvent*)event);
}

void q_quickwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnFocusInEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_focus_in_event(void* self, void* event) {
    QQuickWidget_SuperFocusInEvent((QQuickWidget*)self, (QFocusEvent*)event);
}

void q_quickwidget_focus_out_event(void* self, void* event) {
    QQuickWidget_FocusOutEvent((QQuickWidget*)self, (QFocusEvent*)event);
}

void q_quickwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnFocusOutEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_focus_out_event(void* self, void* event) {
    QQuickWidget_SuperFocusOutEvent((QQuickWidget*)self, (QFocusEvent*)event);
}

void q_quickwidget_wheel_event(void* self, void* param1) {
    QQuickWidget_WheelEvent((QQuickWidget*)self, (QWheelEvent*)param1);
}

void q_quickwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnWheelEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_wheel_event(void* self, void* param1) {
    QQuickWidget_SuperWheelEvent((QQuickWidget*)self, (QWheelEvent*)param1);
}

void q_quickwidget_drag_enter_event(void* self, void* param1) {
    QQuickWidget_DragEnterEvent((QQuickWidget*)self, (QDragEnterEvent*)param1);
}

void q_quickwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnDragEnterEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_drag_enter_event(void* self, void* param1) {
    QQuickWidget_SuperDragEnterEvent((QQuickWidget*)self, (QDragEnterEvent*)param1);
}

void q_quickwidget_drag_move_event(void* self, void* param1) {
    QQuickWidget_DragMoveEvent((QQuickWidget*)self, (QDragMoveEvent*)param1);
}

void q_quickwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnDragMoveEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_drag_move_event(void* self, void* param1) {
    QQuickWidget_SuperDragMoveEvent((QQuickWidget*)self, (QDragMoveEvent*)param1);
}

void q_quickwidget_drag_leave_event(void* self, void* param1) {
    QQuickWidget_DragLeaveEvent((QQuickWidget*)self, (QDragLeaveEvent*)param1);
}

void q_quickwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnDragLeaveEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_drag_leave_event(void* self, void* param1) {
    QQuickWidget_SuperDragLeaveEvent((QQuickWidget*)self, (QDragLeaveEvent*)param1);
}

void q_quickwidget_drop_event(void* self, void* param1) {
    QQuickWidget_DropEvent((QQuickWidget*)self, (QDropEvent*)param1);
}

void q_quickwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnDropEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_drop_event(void* self, void* param1) {
    QQuickWidget_SuperDropEvent((QQuickWidget*)self, (QDropEvent*)param1);
}

bool q_quickwidget_event(void* self, void* param1) {
    return QQuickWidget_Event((QQuickWidget*)self, (QEvent*)param1);
}

void q_quickwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickWidget_OnEvent((QQuickWidget*)self, (intptr_t)callback);
}

bool q_quickwidget_super_event(void* self, void* param1) {
    return QQuickWidget_SuperEvent((QQuickWidget*)self, (QEvent*)param1);
}

void q_quickwidget_paint_event(void* self, void* event) {
    QQuickWidget_PaintEvent((QQuickWidget*)self, (QPaintEvent*)event);
}

void q_quickwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnPaintEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_super_paint_event(void* self, void* event) {
    QQuickWidget_SuperPaintEvent((QQuickWidget*)self, (QPaintEvent*)event);
}

bool q_quickwidget_focus_next_prev_child(void* self, bool next) {
    return QQuickWidget_FocusNextPrevChild((QQuickWidget*)self, next);
}

void q_quickwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QQuickWidget_OnFocusNextPrevChild((QQuickWidget*)self, (intptr_t)callback);
}

bool q_quickwidget_super_focus_next_prev_child(void* self, bool next) {
    return QQuickWidget_SuperFocusNextPrevChild((QQuickWidget*)self, next);
}

const char* q_quickwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPaintDevice* q_quickwidget_as_q_paint_device(void* self) {
    return QWidget_AsQPaintDevice((QWidget*)self);
}

QQuickWidget* q_quickwidget_from_q_paint_device(void* _qpaintdevice) {
    return (QQuickWidget*)QWidget_FromQPaintDevice((QPaintDevice*)_qpaintdevice);
}

uintptr_t q_quickwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_quickwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_quickwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_quickwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_quickwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_quickwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_quickwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_quickwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_quickwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_quickwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_quickwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_quickwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_quickwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_quickwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_quickwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_quickwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_quickwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_quickwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_quickwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_quickwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_quickwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_quickwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_quickwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_quickwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_quickwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_quickwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_quickwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_quickwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_quickwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_quickwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_quickwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_quickwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_quickwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_quickwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_quickwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_quickwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_quickwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_quickwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_quickwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_quickwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_quickwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_quickwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_quickwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_quickwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_quickwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_quickwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_quickwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_quickwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_quickwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_quickwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_quickwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_quickwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_quickwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_quickwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_quickwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_quickwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_quickwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_quickwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_quickwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_quickwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_quickwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_quickwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_quickwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_quickwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_quickwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_quickwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_quickwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_quickwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_quickwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_quickwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_quickwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_quickwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_quickwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_quickwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_quickwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_quickwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_quickwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_quickwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_quickwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_quickwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_quickwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_quickwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_quickwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_quickwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_quickwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_quickwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_quickwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_quickwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_quickwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_quickwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_quickwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_quickwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_quickwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_quickwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_quickwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_quickwidget_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_quickwidget_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_quickwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_quickwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_quickwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_quickwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_quickwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_quickwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_quickwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_quickwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_quickwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_quickwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_quickwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_quickwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_quickwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_quickwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_quickwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_quickwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_quickwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_quickwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_quickwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_quickwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_quickwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_quickwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_quickwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_quickwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_quickwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_quickwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_quickwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_quickwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_quickwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_quickwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_quickwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_quickwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_quickwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_quickwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_quickwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_quickwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_quickwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_quickwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_quickwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_quickwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_quickwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_quickwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_quickwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_quickwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_quickwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_quickwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_quickwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_quickwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_quickwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_quickwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_quickwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_quickwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_quickwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_quickwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_quickwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_quickwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_quickwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_quickwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_quickwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_quickwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_quickwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_quickwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_quickwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_quickwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_quickwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_quickwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_quickwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_quickwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_quickwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_quickwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_quickwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_quickwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_quickwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_quickwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_quickwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_quickwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_quickwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_quickwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_quickwidget_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_quickwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_quickwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_quickwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_quickwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_quickwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_quickwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_quickwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_quickwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_quickwidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_quickwidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_quickwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_quickwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_quickwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_quickwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_quickwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_quickwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_quickwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_quickwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_quickwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_quickwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_quickwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_quickwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_quickwidget_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_quickwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_quickwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_quickwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_quickwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_quickwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_quickwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_quickwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_quickwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_quickwidget_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_quickwidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_quickwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_quickwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_quickwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_quickwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_quickwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_quickwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_quickwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_quickwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_quickwidget_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_quickwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_quickwidget_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_quickwidget_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_quickwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_quickwidget_find(uintptr_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_quickwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_quickwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_quickwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_quickwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_quickwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_quickwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_quickwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_quickwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_quickwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_quickwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_quickwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_quickwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_quickwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_quickwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_quickwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_quickwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_quickwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_quickwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_quickwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_quickwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_quickwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_quickwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_quickwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_quickwidget_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_quickwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_quickwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_quickwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_quickwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_quickwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_quickwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_quickwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_quickwidget_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_quickwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_quickwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_quickwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_quickwidget_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_quickwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_quickwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_quickwidget_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_quickwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickwidget_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quickwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quickwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quickwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quickwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quickwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quickwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quickwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quickwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quickwidget_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quickwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quickwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quickwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quickwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quickwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quickwidget_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quickwidget_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quickwidget_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quickwidget_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quickwidget_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quickwidget_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quickwidget_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quickwidget_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quickwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quickwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quickwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quickwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quickwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickwidget_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_quickwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quickwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quickwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quickwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quickwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quickwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quickwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quickwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quickwidget_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quickwidget_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quickwidget_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quickwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quickwidget_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quickwidget_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quickwidget_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quickwidget_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quickwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quickwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_quickwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive(q_quickwidget_as_q_paint_device(self));
}

int32_t q_quickwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM(q_quickwidget_as_q_paint_device(self));
}

int32_t q_quickwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM(q_quickwidget_as_q_paint_device(self));
}

int32_t q_quickwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX(q_quickwidget_as_q_paint_device(self));
}

int32_t q_quickwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY(q_quickwidget_as_q_paint_device(self));
}

int32_t q_quickwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX(q_quickwidget_as_q_paint_device(self));
}

int32_t q_quickwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY(q_quickwidget_as_q_paint_device(self));
}

double q_quickwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio(q_quickwidget_as_q_paint_device(self));
}

double q_quickwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF(q_quickwidget_as_q_paint_device(self));
}

int32_t q_quickwidget_color_count(void* self) {
    return QPaintDevice_ColorCount(q_quickwidget_as_q_paint_device(self));
}

int32_t q_quickwidget_depth(void* self) {
    return QPaintDevice_Depth(q_quickwidget_as_q_paint_device(self));
}

double q_quickwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_quickwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_quickwidget_dev_type(void* self) {
    return QQuickWidget_DevType((QQuickWidget*)self);
}

int32_t q_quickwidget_super_dev_type(void* self) {
    return QQuickWidget_SuperDevType((QQuickWidget*)self);
}

void q_quickwidget_on_dev_type(void* self, int32_t (*callback)()) {
    QQuickWidget_OnDevType((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_set_visible(void* self, bool visible) {
    QQuickWidget_SetVisible((QQuickWidget*)self, visible);
}

void q_quickwidget_super_set_visible(void* self, bool visible) {
    QQuickWidget_SuperSetVisible((QQuickWidget*)self, visible);
}

void q_quickwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QQuickWidget_OnSetVisible((QQuickWidget*)self, (intptr_t)callback);
}

QSize* q_quickwidget_minimum_size_hint(void* self) {
    return QQuickWidget_MinimumSizeHint((QQuickWidget*)self);
}

QSize* q_quickwidget_super_minimum_size_hint(void* self) {
    return QQuickWidget_SuperMinimumSizeHint((QQuickWidget*)self);
}

void q_quickwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QQuickWidget_OnMinimumSizeHint((QQuickWidget*)self, (intptr_t)callback);
}

int32_t q_quickwidget_height_for_width(void* self, int param1) {
    return QQuickWidget_HeightForWidth((QQuickWidget*)self, param1);
}

int32_t q_quickwidget_super_height_for_width(void* self, int param1) {
    return QQuickWidget_SuperHeightForWidth((QQuickWidget*)self, param1);
}

void q_quickwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QQuickWidget_OnHeightForWidth((QQuickWidget*)self, (intptr_t)callback);
}

bool q_quickwidget_has_height_for_width(void* self) {
    return QQuickWidget_HasHeightForWidth((QQuickWidget*)self);
}

bool q_quickwidget_super_has_height_for_width(void* self) {
    return QQuickWidget_SuperHasHeightForWidth((QQuickWidget*)self);
}

void q_quickwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    QQuickWidget_OnHasHeightForWidth((QQuickWidget*)self, (intptr_t)callback);
}

QPaintEngine* q_quickwidget_paint_engine(void* self) {
    return QQuickWidget_PaintEngine((QQuickWidget*)self);
}

QPaintEngine* q_quickwidget_super_paint_engine(void* self) {
    return QQuickWidget_SuperPaintEngine((QQuickWidget*)self);
}

void q_quickwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QQuickWidget_OnPaintEngine((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_enter_event(void* self, void* event) {
    QQuickWidget_EnterEvent((QQuickWidget*)self, (QEnterEvent*)event);
}

void q_quickwidget_super_enter_event(void* self, void* event) {
    QQuickWidget_SuperEnterEvent((QQuickWidget*)self, (QEnterEvent*)event);
}

void q_quickwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnEnterEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_leave_event(void* self, void* event) {
    QQuickWidget_LeaveEvent((QQuickWidget*)self, (QEvent*)event);
}

void q_quickwidget_super_leave_event(void* self, void* event) {
    QQuickWidget_SuperLeaveEvent((QQuickWidget*)self, (QEvent*)event);
}

void q_quickwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnLeaveEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_move_event(void* self, void* event) {
    QQuickWidget_MoveEvent((QQuickWidget*)self, (QMoveEvent*)event);
}

void q_quickwidget_super_move_event(void* self, void* event) {
    QQuickWidget_SuperMoveEvent((QQuickWidget*)self, (QMoveEvent*)event);
}

void q_quickwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnMoveEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_close_event(void* self, void* event) {
    QQuickWidget_CloseEvent((QQuickWidget*)self, (QCloseEvent*)event);
}

void q_quickwidget_super_close_event(void* self, void* event) {
    QQuickWidget_SuperCloseEvent((QQuickWidget*)self, (QCloseEvent*)event);
}

void q_quickwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnCloseEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_context_menu_event(void* self, void* event) {
    QQuickWidget_ContextMenuEvent((QQuickWidget*)self, (QContextMenuEvent*)event);
}

void q_quickwidget_super_context_menu_event(void* self, void* event) {
    QQuickWidget_SuperContextMenuEvent((QQuickWidget*)self, (QContextMenuEvent*)event);
}

void q_quickwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnContextMenuEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_tablet_event(void* self, void* event) {
    QQuickWidget_TabletEvent((QQuickWidget*)self, (QTabletEvent*)event);
}

void q_quickwidget_super_tablet_event(void* self, void* event) {
    QQuickWidget_SuperTabletEvent((QQuickWidget*)self, (QTabletEvent*)event);
}

void q_quickwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnTabletEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_action_event(void* self, void* event) {
    QQuickWidget_ActionEvent((QQuickWidget*)self, (QActionEvent*)event);
}

void q_quickwidget_super_action_event(void* self, void* event) {
    QQuickWidget_SuperActionEvent((QQuickWidget*)self, (QActionEvent*)event);
}

void q_quickwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnActionEvent((QQuickWidget*)self, (intptr_t)callback);
}

bool q_quickwidget_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return QQuickWidget_NativeEvent((QQuickWidget*)self, qstring(eventType), message, result);
}

bool q_quickwidget_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return QQuickWidget_SuperNativeEvent((QQuickWidget*)self, qstring(eventType), message, result);
}

void q_quickwidget_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    QQuickWidget_OnNativeEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_change_event(void* self, void* param1) {
    QQuickWidget_ChangeEvent((QQuickWidget*)self, (QEvent*)param1);
}

void q_quickwidget_super_change_event(void* self, void* param1) {
    QQuickWidget_SuperChangeEvent((QQuickWidget*)self, (QEvent*)param1);
}

void q_quickwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnChangeEvent((QQuickWidget*)self, (intptr_t)callback);
}

int32_t q_quickwidget_metric(void* self, int32_t param1) {
    return QQuickWidget_Metric((QQuickWidget*)self, param1);
}

int32_t q_quickwidget_super_metric(void* self, int32_t param1) {
    return QQuickWidget_SuperMetric((QQuickWidget*)self, param1);
}

void q_quickwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QQuickWidget_OnMetric((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_init_painter(void* self, void* painter) {
    QQuickWidget_InitPainter((QQuickWidget*)self, (QPainter*)painter);
}

void q_quickwidget_super_init_painter(void* self, void* painter) {
    QQuickWidget_SuperInitPainter((QQuickWidget*)self, (QPainter*)painter);
}

void q_quickwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnInitPainter((QQuickWidget*)self, (intptr_t)callback);
}

QPaintDevice* q_quickwidget_redirected(void* self, void* offset) {
    return QQuickWidget_Redirected((QQuickWidget*)self, (QPoint*)offset);
}

QPaintDevice* q_quickwidget_super_redirected(void* self, void* offset) {
    return QQuickWidget_SuperRedirected((QQuickWidget*)self, (QPoint*)offset);
}

void q_quickwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QQuickWidget_OnRedirected((QQuickWidget*)self, (intptr_t)callback);
}

QPainter* q_quickwidget_shared_painter(void* self) {
    return QQuickWidget_SharedPainter((QQuickWidget*)self);
}

QPainter* q_quickwidget_super_shared_painter(void* self) {
    return QQuickWidget_SuperSharedPainter((QQuickWidget*)self);
}

void q_quickwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    QQuickWidget_OnSharedPainter((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_input_method_event(void* self, void* param1) {
    QQuickWidget_InputMethodEvent((QQuickWidget*)self, (QInputMethodEvent*)param1);
}

void q_quickwidget_super_input_method_event(void* self, void* param1) {
    QQuickWidget_SuperInputMethodEvent((QQuickWidget*)self, (QInputMethodEvent*)param1);
}

void q_quickwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnInputMethodEvent((QQuickWidget*)self, (intptr_t)callback);
}

QVariant* q_quickwidget_input_method_query(void* self, int32_t param1) {
    return QQuickWidget_InputMethodQuery((QQuickWidget*)self, param1);
}

QVariant* q_quickwidget_super_input_method_query(void* self, int32_t param1) {
    return QQuickWidget_SuperInputMethodQuery((QQuickWidget*)self, param1);
}

void q_quickwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QQuickWidget_OnInputMethodQuery((QQuickWidget*)self, (intptr_t)callback);
}

bool q_quickwidget_event_filter(void* self, void* watched, void* event) {
    return QQuickWidget_EventFilter((QQuickWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quickwidget_super_event_filter(void* self, void* watched, void* event) {
    return QQuickWidget_SuperEventFilter((QQuickWidget*)self, (QObject*)watched, (QEvent*)event);
}

void q_quickwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickWidget_OnEventFilter((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_child_event(void* self, void* event) {
    QQuickWidget_ChildEvent((QQuickWidget*)self, (QChildEvent*)event);
}

void q_quickwidget_super_child_event(void* self, void* event) {
    QQuickWidget_SuperChildEvent((QQuickWidget*)self, (QChildEvent*)event);
}

void q_quickwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnChildEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_custom_event(void* self, void* event) {
    QQuickWidget_CustomEvent((QQuickWidget*)self, (QEvent*)event);
}

void q_quickwidget_super_custom_event(void* self, void* event) {
    QQuickWidget_SuperCustomEvent((QQuickWidget*)self, (QEvent*)event);
}

void q_quickwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnCustomEvent((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_connect_notify(void* self, void* signal) {
    QQuickWidget_ConnectNotify((QQuickWidget*)self, (QMetaMethod*)signal);
}

void q_quickwidget_super_connect_notify(void* self, void* signal) {
    QQuickWidget_SuperConnectNotify((QQuickWidget*)self, (QMetaMethod*)signal);
}

void q_quickwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnConnectNotify((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_disconnect_notify(void* self, void* signal) {
    QQuickWidget_DisconnectNotify((QQuickWidget*)self, (QMetaMethod*)signal);
}

void q_quickwidget_super_disconnect_notify(void* self, void* signal) {
    QQuickWidget_SuperDisconnectNotify((QQuickWidget*)self, (QMetaMethod*)signal);
}

void q_quickwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickWidget_OnDisconnectNotify((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_update_micro_focus(void* self) {
    QQuickWidget_UpdateMicroFocus((QQuickWidget*)self);
}

void q_quickwidget_super_update_micro_focus(void* self) {
    QQuickWidget_SuperUpdateMicroFocus((QQuickWidget*)self);
}

void q_quickwidget_on_update_micro_focus(void* self, void (*callback)()) {
    QQuickWidget_OnUpdateMicroFocus((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_create(void* self) {
    QQuickWidget_Create((QQuickWidget*)self);
}

void q_quickwidget_super_create(void* self) {
    QQuickWidget_SuperCreate((QQuickWidget*)self);
}

void q_quickwidget_on_create(void* self, void (*callback)()) {
    QQuickWidget_OnCreate((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_destroy(void* self) {
    QQuickWidget_Destroy((QQuickWidget*)self);
}

void q_quickwidget_super_destroy(void* self) {
    QQuickWidget_SuperDestroy((QQuickWidget*)self);
}

void q_quickwidget_on_destroy(void* self, void (*callback)()) {
    QQuickWidget_OnDestroy((QQuickWidget*)self, (intptr_t)callback);
}

bool q_quickwidget_focus_next_child(void* self) {
    return QQuickWidget_FocusNextChild((QQuickWidget*)self);
}

bool q_quickwidget_super_focus_next_child(void* self) {
    return QQuickWidget_SuperFocusNextChild((QQuickWidget*)self);
}

void q_quickwidget_on_focus_next_child(void* self, bool (*callback)()) {
    QQuickWidget_OnFocusNextChild((QQuickWidget*)self, (intptr_t)callback);
}

bool q_quickwidget_focus_previous_child(void* self) {
    return QQuickWidget_FocusPreviousChild((QQuickWidget*)self);
}

bool q_quickwidget_super_focus_previous_child(void* self) {
    return QQuickWidget_SuperFocusPreviousChild((QQuickWidget*)self);
}

void q_quickwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    QQuickWidget_OnFocusPreviousChild((QQuickWidget*)self, (intptr_t)callback);
}

QObject* q_quickwidget_sender(void* self) {
    return QQuickWidget_Sender((QQuickWidget*)self);
}

QObject* q_quickwidget_super_sender(void* self) {
    return QQuickWidget_SuperSender((QQuickWidget*)self);
}

void q_quickwidget_on_sender(void* self, QObject* (*callback)()) {
    QQuickWidget_OnSender((QQuickWidget*)self, (intptr_t)callback);
}

int32_t q_quickwidget_sender_signal_index(void* self) {
    return QQuickWidget_SenderSignalIndex((QQuickWidget*)self);
}

int32_t q_quickwidget_super_sender_signal_index(void* self) {
    return QQuickWidget_SuperSenderSignalIndex((QQuickWidget*)self);
}

void q_quickwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQuickWidget_OnSenderSignalIndex((QQuickWidget*)self, (intptr_t)callback);
}

int32_t q_quickwidget_receivers(void* self, const char* signal) {
    return QQuickWidget_Receivers((QQuickWidget*)self, signal);
}

int32_t q_quickwidget_super_receivers(void* self, const char* signal) {
    return QQuickWidget_SuperReceivers((QQuickWidget*)self, signal);
}

void q_quickwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQuickWidget_OnReceivers((QQuickWidget*)self, (intptr_t)callback);
}

bool q_quickwidget_is_signal_connected(void* self, void* signal) {
    return QQuickWidget_IsSignalConnected((QQuickWidget*)self, (QMetaMethod*)signal);
}

bool q_quickwidget_super_is_signal_connected(void* self, void* signal) {
    return QQuickWidget_SuperIsSignalConnected((QQuickWidget*)self, (QMetaMethod*)signal);
}

void q_quickwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQuickWidget_OnIsSignalConnected((QQuickWidget*)self, (intptr_t)callback);
}

double q_quickwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QQuickWidget_GetDecodedMetricF((QQuickWidget*)self, metricA, metricB);
}

double q_quickwidget_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QQuickWidget_SuperGetDecodedMetricF((QQuickWidget*)self, metricA, metricB);
}

void q_quickwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QQuickWidget_OnGetDecodedMetricF((QQuickWidget*)self, (intptr_t)callback);
}

void q_quickwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quickwidget_delete(void* self) {
    QQuickWidget_Delete((QQuickWidget*)(self));
}
