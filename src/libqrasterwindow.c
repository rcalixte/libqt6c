#include "libqaccessible.hpp"
#include "libqcoreevent.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintdevicewindow.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqsurface.hpp"
#include "libqsurfaceformat.hpp"
#include "libqwindow.hpp"
#include "libqrasterwindow.hpp"
#include "libqrasterwindow.h"

QRasterWindow* q_rasterwindow_new() {
    return QRasterWindow_new();
}

QRasterWindow* q_rasterwindow_new2(void* parent) {
    return QRasterWindow_new2((QWindow*)parent);
}

const QMetaObject* q_rasterwindow_meta_object(void* self) {
    return QRasterWindow_MetaObject((QRasterWindow*)self);
}

void* q_rasterwindow_metacast(void* self, const char* param1) {
    return QRasterWindow_Metacast((QRasterWindow*)self, param1);
}

int32_t q_rasterwindow_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QRasterWindow_Metacall((QRasterWindow*)self, param1, param2, param3);
}

void q_rasterwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QRasterWindow_OnMetacall((QRasterWindow*)self, (intptr_t)callback);
}

int32_t q_rasterwindow_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QRasterWindow_QBaseMetacall((QRasterWindow*)self, param1, param2, param3);
}

const char* q_rasterwindow_tr(const char* s) {
    libqt_string _str = QRasterWindow_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_rasterwindow_metric(void* self, int32_t metric) {
    return QRasterWindow_Metric((QRasterWindow*)self, metric);
}

void q_rasterwindow_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QRasterWindow_OnMetric((QRasterWindow*)self, (intptr_t)callback);
}

int32_t q_rasterwindow_qbase_metric(void* self, int32_t metric) {
    return QRasterWindow_QBaseMetric((QRasterWindow*)self, metric);
}

QPaintDevice* q_rasterwindow_redirected(void* self, void* param1) {
    return QRasterWindow_Redirected((QRasterWindow*)self, (QPoint*)param1);
}

void q_rasterwindow_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QRasterWindow_OnRedirected((QRasterWindow*)self, (intptr_t)callback);
}

QPaintDevice* q_rasterwindow_qbase_redirected(void* self, void* param1) {
    return QRasterWindow_QBaseRedirected((QRasterWindow*)self, (QPoint*)param1);
}

void q_rasterwindow_resize_event(void* self, void* event) {
    QRasterWindow_ResizeEvent((QRasterWindow*)self, (QResizeEvent*)event);
}

void q_rasterwindow_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnResizeEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_qbase_resize_event(void* self, void* event) {
    QRasterWindow_QBaseResizeEvent((QRasterWindow*)self, (QResizeEvent*)event);
}

const char* q_rasterwindow_tr2(const char* s, const char* c) {
    libqt_string _str = QRasterWindow_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_rasterwindow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QRasterWindow_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_rasterwindow_update(void* self, void* rect) {
    QPaintDeviceWindow_Update((QPaintDeviceWindow*)self, (QRect*)rect);
}

void q_rasterwindow_update2(void* self, void* region) {
    QPaintDeviceWindow_Update2((QPaintDeviceWindow*)self, (QRegion*)region);
}

void q_rasterwindow_update3(void* self) {
    QPaintDeviceWindow_Update3((QPaintDeviceWindow*)self);
}

void q_rasterwindow_set_surface_type(void* self, int32_t surfaceType) {
    QWindow_SetSurfaceType((QWindow*)self, surfaceType);
}

bool q_rasterwindow_is_visible(void* self) {
    return QWindow_IsVisible((QWindow*)self);
}

int32_t q_rasterwindow_visibility(void* self) {
    return QWindow_Visibility((QWindow*)self);
}

void q_rasterwindow_set_visibility(void* self, int32_t v) {
    QWindow_SetVisibility((QWindow*)self, v);
}

void q_rasterwindow_create(void* self) {
    QWindow_Create((QWindow*)self);
}

uintptr_t q_rasterwindow_win_id(void* self) {
    return QWindow_WinId((QWindow*)self);
}

QWindow* q_rasterwindow_parent(void* self) {
    return QWindow_Parent((QWindow*)self);
}

void q_rasterwindow_set_parent(void* self, void* parent) {
    QWindow_SetParent((QWindow*)self, (QWindow*)parent);
}

bool q_rasterwindow_is_top_level(void* self) {
    return QWindow_IsTopLevel((QWindow*)self);
}

bool q_rasterwindow_is_modal(void* self) {
    return QWindow_IsModal((QWindow*)self);
}

int32_t q_rasterwindow_modality(void* self) {
    return QWindow_Modality((QWindow*)self);
}

void q_rasterwindow_set_modality(void* self, int32_t modality) {
    QWindow_SetModality((QWindow*)self, modality);
}

void q_rasterwindow_set_format(void* self, void* format) {
    QWindow_SetFormat((QWindow*)self, (QSurfaceFormat*)format);
}

QSurfaceFormat* q_rasterwindow_requested_format(void* self) {
    return QWindow_RequestedFormat((QWindow*)self);
}

void q_rasterwindow_set_flags(void* self, int64_t flags) {
    QWindow_SetFlags((QWindow*)self, flags);
}

int64_t q_rasterwindow_flags(void* self) {
    return QWindow_Flags((QWindow*)self);
}

void q_rasterwindow_set_flag(void* self, int64_t param1) {
    QWindow_SetFlag((QWindow*)self, param1);
}

int64_t q_rasterwindow_type(void* self) {
    return QWindow_Type((QWindow*)self);
}

const char* q_rasterwindow_title(void* self) {
    libqt_string _str = QWindow_Title((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_rasterwindow_set_opacity(void* self, double level) {
    QWindow_SetOpacity((QWindow*)self, level);
}

double q_rasterwindow_opacity(void* self) {
    return QWindow_Opacity((QWindow*)self);
}

void q_rasterwindow_set_mask(void* self, void* region) {
    QWindow_SetMask((QWindow*)self, (QRegion*)region);
}

QRegion* q_rasterwindow_mask(void* self) {
    return QWindow_Mask((QWindow*)self);
}

bool q_rasterwindow_is_active(void* self) {
    return QWindow_IsActive((QWindow*)self);
}

void q_rasterwindow_report_content_orientation_change(void* self, int32_t orientation) {
    QWindow_ReportContentOrientationChange((QWindow*)self, orientation);
}

int32_t q_rasterwindow_content_orientation(void* self) {
    return QWindow_ContentOrientation((QWindow*)self);
}

double q_rasterwindow_device_pixel_ratio(void* self) {
    return QWindow_DevicePixelRatio((QWindow*)self);
}

int32_t q_rasterwindow_window_state(void* self) {
    return QWindow_WindowState((QWindow*)self);
}

int32_t q_rasterwindow_window_states(void* self) {
    return QWindow_WindowStates((QWindow*)self);
}

void q_rasterwindow_set_window_state(void* self, int32_t state) {
    QWindow_SetWindowState((QWindow*)self, state);
}

void q_rasterwindow_set_window_states(void* self, int32_t states) {
    QWindow_SetWindowStates((QWindow*)self, states);
}

void q_rasterwindow_set_transient_parent(void* self, void* parent) {
    QWindow_SetTransientParent((QWindow*)self, (QWindow*)parent);
}

QWindow* q_rasterwindow_transient_parent(void* self) {
    return QWindow_TransientParent((QWindow*)self);
}

bool q_rasterwindow_is_ancestor_of(void* self, void* child) {
    return QWindow_IsAncestorOf((QWindow*)self, (QWindow*)child);
}

bool q_rasterwindow_is_exposed(void* self) {
    return QWindow_IsExposed((QWindow*)self);
}

int32_t q_rasterwindow_minimum_width(void* self) {
    return QWindow_MinimumWidth((QWindow*)self);
}

int32_t q_rasterwindow_minimum_height(void* self) {
    return QWindow_MinimumHeight((QWindow*)self);
}

int32_t q_rasterwindow_maximum_width(void* self) {
    return QWindow_MaximumWidth((QWindow*)self);
}

int32_t q_rasterwindow_maximum_height(void* self) {
    return QWindow_MaximumHeight((QWindow*)self);
}

QSize* q_rasterwindow_minimum_size(void* self) {
    return QWindow_MinimumSize((QWindow*)self);
}

QSize* q_rasterwindow_maximum_size(void* self) {
    return QWindow_MaximumSize((QWindow*)self);
}

QSize* q_rasterwindow_base_size(void* self) {
    return QWindow_BaseSize((QWindow*)self);
}

QSize* q_rasterwindow_size_increment(void* self) {
    return QWindow_SizeIncrement((QWindow*)self);
}

void q_rasterwindow_set_minimum_size(void* self, void* size) {
    QWindow_SetMinimumSize((QWindow*)self, (QSize*)size);
}

void q_rasterwindow_set_maximum_size(void* self, void* size) {
    QWindow_SetMaximumSize((QWindow*)self, (QSize*)size);
}

void q_rasterwindow_set_base_size(void* self, void* size) {
    QWindow_SetBaseSize((QWindow*)self, (QSize*)size);
}

void q_rasterwindow_set_size_increment(void* self, void* size) {
    QWindow_SetSizeIncrement((QWindow*)self, (QSize*)size);
}

QRect* q_rasterwindow_geometry(void* self) {
    return QWindow_Geometry((QWindow*)self);
}

QMargins* q_rasterwindow_frame_margins(void* self) {
    return QWindow_FrameMargins((QWindow*)self);
}

QRect* q_rasterwindow_frame_geometry(void* self) {
    return QWindow_FrameGeometry((QWindow*)self);
}

QPoint* q_rasterwindow_frame_position(void* self) {
    return QWindow_FramePosition((QWindow*)self);
}

void q_rasterwindow_set_frame_position(void* self, void* point) {
    QWindow_SetFramePosition((QWindow*)self, (QPoint*)point);
}

int32_t q_rasterwindow_width(void* self) {
    return QWindow_Width((QWindow*)self);
}

int32_t q_rasterwindow_height(void* self) {
    return QWindow_Height((QWindow*)self);
}

int32_t q_rasterwindow_x(void* self) {
    return QWindow_X((QWindow*)self);
}

int32_t q_rasterwindow_y(void* self) {
    return QWindow_Y((QWindow*)self);
}

QPoint* q_rasterwindow_position(void* self) {
    return QWindow_Position((QWindow*)self);
}

void q_rasterwindow_set_position(void* self, void* pt) {
    QWindow_SetPosition((QWindow*)self, (QPoint*)pt);
}

void q_rasterwindow_set_position2(void* self, int posx, int posy) {
    QWindow_SetPosition2((QWindow*)self, posx, posy);
}

void q_rasterwindow_resize(void* self, void* newSize) {
    QWindow_Resize((QWindow*)self, (QSize*)newSize);
}

void q_rasterwindow_resize2(void* self, int w, int h) {
    QWindow_Resize2((QWindow*)self, w, h);
}

void q_rasterwindow_set_file_path(void* self, const char* filePath) {
    QWindow_SetFilePath((QWindow*)self, qstring(filePath));
}

const char* q_rasterwindow_file_path(void* self) {
    libqt_string _str = QWindow_FilePath((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_rasterwindow_set_icon(void* self, void* icon) {
    QWindow_SetIcon((QWindow*)self, (QIcon*)icon);
}

QIcon* q_rasterwindow_icon(void* self) {
    return QWindow_Icon((QWindow*)self);
}

void q_rasterwindow_destroy(void* self) {
    QWindow_Destroy((QWindow*)self);
}

bool q_rasterwindow_set_keyboard_grab_enabled(void* self, bool grab) {
    return QWindow_SetKeyboardGrabEnabled((QWindow*)self, grab);
}

bool q_rasterwindow_set_mouse_grab_enabled(void* self, bool grab) {
    return QWindow_SetMouseGrabEnabled((QWindow*)self, grab);
}

QScreen* q_rasterwindow_screen(void* self) {
    return QWindow_Screen((QWindow*)self);
}

void q_rasterwindow_set_screen(void* self, void* screen) {
    QWindow_SetScreen((QWindow*)self, (QScreen*)screen);
}

QPointF* q_rasterwindow_map_to_global(void* self, void* pos) {
    return QWindow_MapToGlobal((QWindow*)self, (QPointF*)pos);
}

QPointF* q_rasterwindow_map_from_global(void* self, void* pos) {
    return QWindow_MapFromGlobal((QWindow*)self, (QPointF*)pos);
}

QPoint* q_rasterwindow_map_to_global2(void* self, void* pos) {
    return QWindow_MapToGlobal2((QWindow*)self, (QPoint*)pos);
}

QPoint* q_rasterwindow_map_from_global2(void* self, void* pos) {
    return QWindow_MapFromGlobal2((QWindow*)self, (QPoint*)pos);
}

QCursor* q_rasterwindow_cursor(void* self) {
    return QWindow_Cursor((QWindow*)self);
}

void q_rasterwindow_set_cursor(void* self, void* cursor) {
    QWindow_SetCursor((QWindow*)self, (QCursor*)cursor);
}

void q_rasterwindow_unset_cursor(void* self) {
    QWindow_UnsetCursor((QWindow*)self);
}

QWindow* q_rasterwindow_from_win_id(uintptr_t id) {
    return QWindow_FromWinId(id);
}

void q_rasterwindow_request_activate(void* self) {
    QWindow_RequestActivate((QWindow*)self);
}

void q_rasterwindow_set_visible(void* self, bool visible) {
    QWindow_SetVisible((QWindow*)self, visible);
}

void q_rasterwindow_show(void* self) {
    QWindow_Show((QWindow*)self);
}

void q_rasterwindow_hide(void* self) {
    QWindow_Hide((QWindow*)self);
}

void q_rasterwindow_show_minimized(void* self) {
    QWindow_ShowMinimized((QWindow*)self);
}

void q_rasterwindow_show_maximized(void* self) {
    QWindow_ShowMaximized((QWindow*)self);
}

void q_rasterwindow_show_full_screen(void* self) {
    QWindow_ShowFullScreen((QWindow*)self);
}

void q_rasterwindow_show_normal(void* self) {
    QWindow_ShowNormal((QWindow*)self);
}

bool q_rasterwindow_close(void* self) {
    return QWindow_Close((QWindow*)self);
}

void q_rasterwindow_raise(void* self) {
    QWindow_Raise((QWindow*)self);
}

void q_rasterwindow_lower(void* self) {
    QWindow_Lower((QWindow*)self);
}

bool q_rasterwindow_start_system_resize(void* self, int32_t edges) {
    return QWindow_StartSystemResize((QWindow*)self, edges);
}

bool q_rasterwindow_start_system_move(void* self) {
    return QWindow_StartSystemMove((QWindow*)self);
}

void q_rasterwindow_set_title(void* self, const char* title) {
    QWindow_SetTitle((QWindow*)self, qstring(title));
}

void q_rasterwindow_set_x(void* self, int arg) {
    QWindow_SetX((QWindow*)self, arg);
}

void q_rasterwindow_set_y(void* self, int arg) {
    QWindow_SetY((QWindow*)self, arg);
}

void q_rasterwindow_set_width(void* self, int arg) {
    QWindow_SetWidth((QWindow*)self, arg);
}

void q_rasterwindow_set_height(void* self, int arg) {
    QWindow_SetHeight((QWindow*)self, arg);
}

void q_rasterwindow_set_geometry(void* self, int posx, int posy, int w, int h) {
    QWindow_SetGeometry((QWindow*)self, posx, posy, w, h);
}

void q_rasterwindow_set_geometry2(void* self, void* rect) {
    QWindow_SetGeometry2((QWindow*)self, (QRect*)rect);
}

void q_rasterwindow_set_minimum_width(void* self, int w) {
    QWindow_SetMinimumWidth((QWindow*)self, w);
}

void q_rasterwindow_set_minimum_height(void* self, int h) {
    QWindow_SetMinimumHeight((QWindow*)self, h);
}

void q_rasterwindow_set_maximum_width(void* self, int w) {
    QWindow_SetMaximumWidth((QWindow*)self, w);
}

void q_rasterwindow_set_maximum_height(void* self, int h) {
    QWindow_SetMaximumHeight((QWindow*)self, h);
}

void q_rasterwindow_alert(void* self, int msec) {
    QWindow_Alert((QWindow*)self, msec);
}

void q_rasterwindow_request_update(void* self) {
    QWindow_RequestUpdate((QWindow*)self);
}

void q_rasterwindow_screen_changed(void* self, void* screen) {
    QWindow_ScreenChanged((QWindow*)self, (QScreen*)screen);
}

void q_rasterwindow_on_screen_changed(void* self, void (*callback)(void*, void*)) {
    QWindow_Connect_ScreenChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_modality_changed(void* self, int32_t modality) {
    QWindow_ModalityChanged((QWindow*)self, modality);
}

void q_rasterwindow_on_modality_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_ModalityChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_window_state_changed(void* self, int32_t windowState) {
    QWindow_WindowStateChanged((QWindow*)self, windowState);
}

void q_rasterwindow_on_window_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_WindowStateChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_window_title_changed(void* self, const char* title) {
    QWindow_WindowTitleChanged((QWindow*)self, qstring(title));
}

void q_rasterwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWindow_Connect_WindowTitleChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_x_changed(void* self, int arg) {
    QWindow_XChanged((QWindow*)self, arg);
}

void q_rasterwindow_on_x_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_XChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_y_changed(void* self, int arg) {
    QWindow_YChanged((QWindow*)self, arg);
}

void q_rasterwindow_on_y_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_YChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_width_changed(void* self, int arg) {
    QWindow_WidthChanged((QWindow*)self, arg);
}

void q_rasterwindow_on_width_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_WidthChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_height_changed(void* self, int arg) {
    QWindow_HeightChanged((QWindow*)self, arg);
}

void q_rasterwindow_on_height_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_HeightChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_minimum_width_changed(void* self, int arg) {
    QWindow_MinimumWidthChanged((QWindow*)self, arg);
}

void q_rasterwindow_on_minimum_width_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MinimumWidthChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_minimum_height_changed(void* self, int arg) {
    QWindow_MinimumHeightChanged((QWindow*)self, arg);
}

void q_rasterwindow_on_minimum_height_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MinimumHeightChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_maximum_width_changed(void* self, int arg) {
    QWindow_MaximumWidthChanged((QWindow*)self, arg);
}

void q_rasterwindow_on_maximum_width_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MaximumWidthChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_maximum_height_changed(void* self, int arg) {
    QWindow_MaximumHeightChanged((QWindow*)self, arg);
}

void q_rasterwindow_on_maximum_height_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MaximumHeightChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_visible_changed(void* self, bool arg) {
    QWindow_VisibleChanged((QWindow*)self, arg);
}

void q_rasterwindow_on_visible_changed(void* self, void (*callback)(void*, bool)) {
    QWindow_Connect_VisibleChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_visibility_changed(void* self, int32_t visibility) {
    QWindow_VisibilityChanged((QWindow*)self, visibility);
}

void q_rasterwindow_on_visibility_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_VisibilityChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_active_changed(void* self) {
    QWindow_ActiveChanged((QWindow*)self);
}

void q_rasterwindow_on_active_changed(void* self, void (*callback)(void*)) {
    QWindow_Connect_ActiveChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_content_orientation_changed(void* self, int32_t orientation) {
    QWindow_ContentOrientationChanged((QWindow*)self, orientation);
}

void q_rasterwindow_on_content_orientation_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_ContentOrientationChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_focus_object_changed(void* self, void* object) {
    QWindow_FocusObjectChanged((QWindow*)self, (QObject*)object);
}

void q_rasterwindow_on_focus_object_changed(void* self, void (*callback)(void*, void*)) {
    QWindow_Connect_FocusObjectChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_opacity_changed(void* self, double opacity) {
    QWindow_OpacityChanged((QWindow*)self, opacity);
}

void q_rasterwindow_on_opacity_changed(void* self, void (*callback)(void*, double)) {
    QWindow_Connect_OpacityChanged((QWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_transient_parent_changed(void* self, void* transientParent) {
    QWindow_TransientParentChanged((QWindow*)self, (QWindow*)transientParent);
}

void q_rasterwindow_on_transient_parent_changed(void* self, void (*callback)(void*, void*)) {
    QWindow_Connect_TransientParentChanged((QWindow*)self, (intptr_t)callback);
}

QWindow* q_rasterwindow_parent1(void* self, int32_t mode) {
    return QWindow_Parent1((QWindow*)self, mode);
}

void q_rasterwindow_set_flag2(void* self, int64_t param1, bool on) {
    QWindow_SetFlag2((QWindow*)self, param1, on);
}

bool q_rasterwindow_is_ancestor_of2(void* self, void* child, int32_t mode) {
    return QWindow_IsAncestorOf2((QWindow*)self, (QWindow*)child, mode);
}

const char* q_rasterwindow_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_rasterwindow_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_rasterwindow_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_rasterwindow_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_rasterwindow_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_rasterwindow_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_rasterwindow_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_rasterwindow_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_rasterwindow_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_rasterwindow_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_rasterwindow_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_rasterwindow_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_rasterwindow_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_rasterwindow_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_rasterwindow_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_rasterwindow_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_rasterwindow_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_rasterwindow_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_rasterwindow_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_rasterwindow_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_rasterwindow_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_rasterwindow_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_rasterwindow_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_rasterwindow_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_rasterwindow_dynamic_property_names");
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

QBindingStorage* q_rasterwindow_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_rasterwindow_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_rasterwindow_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_rasterwindow_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_rasterwindow_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_rasterwindow_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_rasterwindow_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_rasterwindow_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_rasterwindow_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_rasterwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_rasterwindow_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_rasterwindow_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_rasterwindow_surface_class(void* self) {
    return QSurface_SurfaceClass((QSurface*)self);
}

bool q_rasterwindow_supports_open_g_l(void* self) {
    return QSurface_SupportsOpenGL((QSurface*)self);
}

bool q_rasterwindow_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

QPaintEngine* q_rasterwindow_paint_engine(void* self) {
    return QPaintDevice_PaintEngine((QPaintDevice*)self);
}

int32_t q_rasterwindow_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_rasterwindow_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_rasterwindow_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_rasterwindow_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_rasterwindow_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_rasterwindow_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_rasterwindow_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_rasterwindow_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_rasterwindow_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_rasterwindow_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_rasterwindow_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_rasterwindow_expose_event(void* self, void* param1) {
    QRasterWindow_ExposeEvent((QRasterWindow*)self, (QExposeEvent*)param1);
}

void q_rasterwindow_qbase_expose_event(void* self, void* param1) {
    QRasterWindow_QBaseExposeEvent((QRasterWindow*)self, (QExposeEvent*)param1);
}

void q_rasterwindow_on_expose_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnExposeEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_paint_event(void* self, void* event) {
    QRasterWindow_PaintEvent((QRasterWindow*)self, (QPaintEvent*)event);
}

void q_rasterwindow_qbase_paint_event(void* self, void* event) {
    QRasterWindow_QBasePaintEvent((QRasterWindow*)self, (QPaintEvent*)event);
}

void q_rasterwindow_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnPaintEvent((QRasterWindow*)self, (intptr_t)callback);
}

bool q_rasterwindow_event(void* self, void* event) {
    return QRasterWindow_Event((QRasterWindow*)self, (QEvent*)event);
}

bool q_rasterwindow_qbase_event(void* self, void* event) {
    return QRasterWindow_QBaseEvent((QRasterWindow*)self, (QEvent*)event);
}

void q_rasterwindow_on_event(void* self, bool (*callback)(void*, void*)) {
    QRasterWindow_OnEvent((QRasterWindow*)self, (intptr_t)callback);
}

int32_t q_rasterwindow_surface_type(void* self) {
    return QRasterWindow_SurfaceType((QRasterWindow*)self);
}

int32_t q_rasterwindow_qbase_surface_type(void* self) {
    return QRasterWindow_QBaseSurfaceType((QRasterWindow*)self);
}

void q_rasterwindow_on_surface_type(void* self, int32_t (*callback)()) {
    QRasterWindow_OnSurfaceType((QRasterWindow*)self, (intptr_t)callback);
}

QSurfaceFormat* q_rasterwindow_format(void* self) {
    return QRasterWindow_Format((QRasterWindow*)self);
}

QSurfaceFormat* q_rasterwindow_qbase_format(void* self) {
    return QRasterWindow_QBaseFormat((QRasterWindow*)self);
}

void q_rasterwindow_on_format(void* self, QSurfaceFormat* (*callback)()) {
    QRasterWindow_OnFormat((QRasterWindow*)self, (intptr_t)callback);
}

QSize* q_rasterwindow_size(void* self) {
    return QRasterWindow_Size((QRasterWindow*)self);
}

QSize* q_rasterwindow_qbase_size(void* self) {
    return QRasterWindow_QBaseSize((QRasterWindow*)self);
}

void q_rasterwindow_on_size(void* self, QSize* (*callback)()) {
    QRasterWindow_OnSize((QRasterWindow*)self, (intptr_t)callback);
}

QAccessibleInterface* q_rasterwindow_accessible_root(void* self) {
    return QRasterWindow_AccessibleRoot((QRasterWindow*)self);
}

QAccessibleInterface* q_rasterwindow_qbase_accessible_root(void* self) {
    return QRasterWindow_QBaseAccessibleRoot((QRasterWindow*)self);
}

void q_rasterwindow_on_accessible_root(void* self, QAccessibleInterface* (*callback)()) {
    QRasterWindow_OnAccessibleRoot((QRasterWindow*)self, (intptr_t)callback);
}

QObject* q_rasterwindow_focus_object(void* self) {
    return QRasterWindow_FocusObject((QRasterWindow*)self);
}

QObject* q_rasterwindow_qbase_focus_object(void* self) {
    return QRasterWindow_QBaseFocusObject((QRasterWindow*)self);
}

void q_rasterwindow_on_focus_object(void* self, QObject* (*callback)()) {
    QRasterWindow_OnFocusObject((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_move_event(void* self, void* param1) {
    QRasterWindow_MoveEvent((QRasterWindow*)self, (QMoveEvent*)param1);
}

void q_rasterwindow_qbase_move_event(void* self, void* param1) {
    QRasterWindow_QBaseMoveEvent((QRasterWindow*)self, (QMoveEvent*)param1);
}

void q_rasterwindow_on_move_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnMoveEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_focus_in_event(void* self, void* param1) {
    QRasterWindow_FocusInEvent((QRasterWindow*)self, (QFocusEvent*)param1);
}

void q_rasterwindow_qbase_focus_in_event(void* self, void* param1) {
    QRasterWindow_QBaseFocusInEvent((QRasterWindow*)self, (QFocusEvent*)param1);
}

void q_rasterwindow_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnFocusInEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_focus_out_event(void* self, void* param1) {
    QRasterWindow_FocusOutEvent((QRasterWindow*)self, (QFocusEvent*)param1);
}

void q_rasterwindow_qbase_focus_out_event(void* self, void* param1) {
    QRasterWindow_QBaseFocusOutEvent((QRasterWindow*)self, (QFocusEvent*)param1);
}

void q_rasterwindow_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnFocusOutEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_show_event(void* self, void* param1) {
    QRasterWindow_ShowEvent((QRasterWindow*)self, (QShowEvent*)param1);
}

void q_rasterwindow_qbase_show_event(void* self, void* param1) {
    QRasterWindow_QBaseShowEvent((QRasterWindow*)self, (QShowEvent*)param1);
}

void q_rasterwindow_on_show_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnShowEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_hide_event(void* self, void* param1) {
    QRasterWindow_HideEvent((QRasterWindow*)self, (QHideEvent*)param1);
}

void q_rasterwindow_qbase_hide_event(void* self, void* param1) {
    QRasterWindow_QBaseHideEvent((QRasterWindow*)self, (QHideEvent*)param1);
}

void q_rasterwindow_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnHideEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_close_event(void* self, void* param1) {
    QRasterWindow_CloseEvent((QRasterWindow*)self, (QCloseEvent*)param1);
}

void q_rasterwindow_qbase_close_event(void* self, void* param1) {
    QRasterWindow_QBaseCloseEvent((QRasterWindow*)self, (QCloseEvent*)param1);
}

void q_rasterwindow_on_close_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnCloseEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_key_press_event(void* self, void* param1) {
    QRasterWindow_KeyPressEvent((QRasterWindow*)self, (QKeyEvent*)param1);
}

void q_rasterwindow_qbase_key_press_event(void* self, void* param1) {
    QRasterWindow_QBaseKeyPressEvent((QRasterWindow*)self, (QKeyEvent*)param1);
}

void q_rasterwindow_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnKeyPressEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_key_release_event(void* self, void* param1) {
    QRasterWindow_KeyReleaseEvent((QRasterWindow*)self, (QKeyEvent*)param1);
}

void q_rasterwindow_qbase_key_release_event(void* self, void* param1) {
    QRasterWindow_QBaseKeyReleaseEvent((QRasterWindow*)self, (QKeyEvent*)param1);
}

void q_rasterwindow_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnKeyReleaseEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_mouse_press_event(void* self, void* param1) {
    QRasterWindow_MousePressEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

void q_rasterwindow_qbase_mouse_press_event(void* self, void* param1) {
    QRasterWindow_QBaseMousePressEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

void q_rasterwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnMousePressEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_mouse_release_event(void* self, void* param1) {
    QRasterWindow_MouseReleaseEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

void q_rasterwindow_qbase_mouse_release_event(void* self, void* param1) {
    QRasterWindow_QBaseMouseReleaseEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

void q_rasterwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnMouseReleaseEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_mouse_double_click_event(void* self, void* param1) {
    QRasterWindow_MouseDoubleClickEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

void q_rasterwindow_qbase_mouse_double_click_event(void* self, void* param1) {
    QRasterWindow_QBaseMouseDoubleClickEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

void q_rasterwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnMouseDoubleClickEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_mouse_move_event(void* self, void* param1) {
    QRasterWindow_MouseMoveEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

void q_rasterwindow_qbase_mouse_move_event(void* self, void* param1) {
    QRasterWindow_QBaseMouseMoveEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

void q_rasterwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnMouseMoveEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_wheel_event(void* self, void* param1) {
    QRasterWindow_WheelEvent((QRasterWindow*)self, (QWheelEvent*)param1);
}

void q_rasterwindow_qbase_wheel_event(void* self, void* param1) {
    QRasterWindow_QBaseWheelEvent((QRasterWindow*)self, (QWheelEvent*)param1);
}

void q_rasterwindow_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnWheelEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_touch_event(void* self, void* param1) {
    QRasterWindow_TouchEvent((QRasterWindow*)self, (QTouchEvent*)param1);
}

void q_rasterwindow_qbase_touch_event(void* self, void* param1) {
    QRasterWindow_QBaseTouchEvent((QRasterWindow*)self, (QTouchEvent*)param1);
}

void q_rasterwindow_on_touch_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnTouchEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_tablet_event(void* self, void* param1) {
    QRasterWindow_TabletEvent((QRasterWindow*)self, (QTabletEvent*)param1);
}

void q_rasterwindow_qbase_tablet_event(void* self, void* param1) {
    QRasterWindow_QBaseTabletEvent((QRasterWindow*)self, (QTabletEvent*)param1);
}

void q_rasterwindow_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnTabletEvent((QRasterWindow*)self, (intptr_t)callback);
}

bool q_rasterwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QRasterWindow_NativeEvent((QRasterWindow*)self, qstring(eventType), message, result);
}

bool q_rasterwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QRasterWindow_QBaseNativeEvent((QRasterWindow*)self, qstring(eventType), message, result);
}

void q_rasterwindow_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QRasterWindow_OnNativeEvent((QRasterWindow*)self, (intptr_t)callback);
}

bool q_rasterwindow_event_filter(void* self, void* watched, void* event) {
    return QRasterWindow_EventFilter((QRasterWindow*)self, (QObject*)watched, (QEvent*)event);
}

bool q_rasterwindow_qbase_event_filter(void* self, void* watched, void* event) {
    return QRasterWindow_QBaseEventFilter((QRasterWindow*)self, (QObject*)watched, (QEvent*)event);
}

void q_rasterwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QRasterWindow_OnEventFilter((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_timer_event(void* self, void* event) {
    QRasterWindow_TimerEvent((QRasterWindow*)self, (QTimerEvent*)event);
}

void q_rasterwindow_qbase_timer_event(void* self, void* event) {
    QRasterWindow_QBaseTimerEvent((QRasterWindow*)self, (QTimerEvent*)event);
}

void q_rasterwindow_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnTimerEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_child_event(void* self, void* event) {
    QRasterWindow_ChildEvent((QRasterWindow*)self, (QChildEvent*)event);
}

void q_rasterwindow_qbase_child_event(void* self, void* event) {
    QRasterWindow_QBaseChildEvent((QRasterWindow*)self, (QChildEvent*)event);
}

void q_rasterwindow_on_child_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnChildEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_custom_event(void* self, void* event) {
    QRasterWindow_CustomEvent((QRasterWindow*)self, (QEvent*)event);
}

void q_rasterwindow_qbase_custom_event(void* self, void* event) {
    QRasterWindow_QBaseCustomEvent((QRasterWindow*)self, (QEvent*)event);
}

void q_rasterwindow_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnCustomEvent((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_connect_notify(void* self, void* signal) {
    QRasterWindow_ConnectNotify((QRasterWindow*)self, (QMetaMethod*)signal);
}

void q_rasterwindow_qbase_connect_notify(void* self, void* signal) {
    QRasterWindow_QBaseConnectNotify((QRasterWindow*)self, (QMetaMethod*)signal);
}

void q_rasterwindow_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnConnectNotify((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_disconnect_notify(void* self, void* signal) {
    QRasterWindow_DisconnectNotify((QRasterWindow*)self, (QMetaMethod*)signal);
}

void q_rasterwindow_qbase_disconnect_notify(void* self, void* signal) {
    QRasterWindow_QBaseDisconnectNotify((QRasterWindow*)self, (QMetaMethod*)signal);
}

void q_rasterwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnDisconnectNotify((QRasterWindow*)self, (intptr_t)callback);
}

int32_t q_rasterwindow_dev_type(void* self) {
    return QRasterWindow_DevType((QRasterWindow*)self);
}

int32_t q_rasterwindow_qbase_dev_type(void* self) {
    return QRasterWindow_QBaseDevType((QRasterWindow*)self);
}

void q_rasterwindow_on_dev_type(void* self, int32_t (*callback)()) {
    QRasterWindow_OnDevType((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_init_painter(void* self, void* painter) {
    QRasterWindow_InitPainter((QRasterWindow*)self, (QPainter*)painter);
}

void q_rasterwindow_qbase_init_painter(void* self, void* painter) {
    QRasterWindow_QBaseInitPainter((QRasterWindow*)self, (QPainter*)painter);
}

void q_rasterwindow_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QRasterWindow_OnInitPainter((QRasterWindow*)self, (intptr_t)callback);
}

QPainter* q_rasterwindow_shared_painter(void* self) {
    return QRasterWindow_SharedPainter((QRasterWindow*)self);
}

QPainter* q_rasterwindow_qbase_shared_painter(void* self) {
    return QRasterWindow_QBaseSharedPainter((QRasterWindow*)self);
}

void q_rasterwindow_on_shared_painter(void* self, QPainter* (*callback)()) {
    QRasterWindow_OnSharedPainter((QRasterWindow*)self, (intptr_t)callback);
}

void* q_rasterwindow_resolve_interface(void* self, const char* name, int revision) {
    return QRasterWindow_ResolveInterface((QRasterWindow*)self, name, revision);
}

void* q_rasterwindow_qbase_resolve_interface(void* self, const char* name, int revision) {
    return QRasterWindow_QBaseResolveInterface((QRasterWindow*)self, name, revision);
}

void q_rasterwindow_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int)) {
    QRasterWindow_OnResolveInterface((QRasterWindow*)self, (intptr_t)callback);
}

QObject* q_rasterwindow_sender(void* self) {
    return QRasterWindow_Sender((QRasterWindow*)self);
}

QObject* q_rasterwindow_qbase_sender(void* self) {
    return QRasterWindow_QBaseSender((QRasterWindow*)self);
}

void q_rasterwindow_on_sender(void* self, QObject* (*callback)()) {
    QRasterWindow_OnSender((QRasterWindow*)self, (intptr_t)callback);
}

int32_t q_rasterwindow_sender_signal_index(void* self) {
    return QRasterWindow_SenderSignalIndex((QRasterWindow*)self);
}

int32_t q_rasterwindow_qbase_sender_signal_index(void* self) {
    return QRasterWindow_QBaseSenderSignalIndex((QRasterWindow*)self);
}

void q_rasterwindow_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QRasterWindow_OnSenderSignalIndex((QRasterWindow*)self, (intptr_t)callback);
}

int32_t q_rasterwindow_receivers(void* self, const char* signal) {
    return QRasterWindow_Receivers((QRasterWindow*)self, signal);
}

int32_t q_rasterwindow_qbase_receivers(void* self, const char* signal) {
    return QRasterWindow_QBaseReceivers((QRasterWindow*)self, signal);
}

void q_rasterwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QRasterWindow_OnReceivers((QRasterWindow*)self, (intptr_t)callback);
}

bool q_rasterwindow_is_signal_connected(void* self, void* signal) {
    return QRasterWindow_IsSignalConnected((QRasterWindow*)self, (QMetaMethod*)signal);
}

bool q_rasterwindow_qbase_is_signal_connected(void* self, void* signal) {
    return QRasterWindow_QBaseIsSignalConnected((QRasterWindow*)self, (QMetaMethod*)signal);
}

void q_rasterwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QRasterWindow_OnIsSignalConnected((QRasterWindow*)self, (intptr_t)callback);
}

double q_rasterwindow_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QRasterWindow_GetDecodedMetricF((QRasterWindow*)self, metricA, metricB);
}

double q_rasterwindow_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QRasterWindow_QBaseGetDecodedMetricF((QRasterWindow*)self, metricA, metricB);
}

void q_rasterwindow_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QRasterWindow_OnGetDecodedMetricF((QRasterWindow*)self, (intptr_t)callback);
}

void q_rasterwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_rasterwindow_delete(void* self) {
    QRasterWindow_Delete((QRasterWindow*)(self));
}
