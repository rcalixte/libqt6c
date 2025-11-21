#include "../libqaccessible.hpp"
#include "../libqcoreevent.hpp"
#include "../libqevent.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqopenglcontext.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintdevicewindow.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqsurface.hpp"
#include "../libqsurfaceformat.hpp"
#include "../libqwindow.hpp"
#include "libqopenglwindow.hpp"
#include "libqopenglwindow.h"

QOpenGLWindow* q_openglwindow_new() {
    return QOpenGLWindow_new();
}

QOpenGLWindow* q_openglwindow_new2(void* shareContext) {
    return QOpenGLWindow_new2((QOpenGLContext*)shareContext);
}

QOpenGLWindow* q_openglwindow_new3(int32_t updateBehavior) {
    return QOpenGLWindow_new3(updateBehavior);
}

QOpenGLWindow* q_openglwindow_new4(int32_t updateBehavior, void* parent) {
    return QOpenGLWindow_new4(updateBehavior, (QWindow*)parent);
}

QOpenGLWindow* q_openglwindow_new5(void* shareContext, int32_t updateBehavior) {
    return QOpenGLWindow_new5((QOpenGLContext*)shareContext, updateBehavior);
}

QOpenGLWindow* q_openglwindow_new6(void* shareContext, int32_t updateBehavior, void* parent) {
    return QOpenGLWindow_new6((QOpenGLContext*)shareContext, updateBehavior, (QWindow*)parent);
}

const QMetaObject* q_openglwindow_meta_object(void* self) {
    return QOpenGLWindow_MetaObject((QOpenGLWindow*)self);
}

void* q_openglwindow_metacast(void* self, const char* param1) {
    return QOpenGLWindow_Metacast((QOpenGLWindow*)self, param1);
}

int32_t q_openglwindow_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLWindow_Metacall((QOpenGLWindow*)self, param1, param2, param3);
}

void q_openglwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QOpenGLWindow_OnMetacall((QOpenGLWindow*)self, (intptr_t)callback);
}

int32_t q_openglwindow_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLWindow_QBaseMetacall((QOpenGLWindow*)self, param1, param2, param3);
}

const char* q_openglwindow_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_openglwindow_update_behavior(void* self) {
    return QOpenGLWindow_UpdateBehavior((QOpenGLWindow*)self);
}

bool q_openglwindow_is_valid(void* self) {
    return QOpenGLWindow_IsValid((QOpenGLWindow*)self);
}

void q_openglwindow_make_current(void* self) {
    QOpenGLWindow_MakeCurrent((QOpenGLWindow*)self);
}

void q_openglwindow_done_current(void* self) {
    QOpenGLWindow_DoneCurrent((QOpenGLWindow*)self);
}

QOpenGLContext* q_openglwindow_context(void* self) {
    return QOpenGLWindow_Context((QOpenGLWindow*)self);
}

QOpenGLContext* q_openglwindow_share_context(void* self) {
    return QOpenGLWindow_ShareContext((QOpenGLWindow*)self);
}

uint32_t q_openglwindow_default_framebuffer_object(void* self) {
    return QOpenGLWindow_DefaultFramebufferObject((QOpenGLWindow*)self);
}

QImage* q_openglwindow_grab_framebuffer(void* self) {
    return QOpenGLWindow_GrabFramebuffer((QOpenGLWindow*)self);
}

void q_openglwindow_frame_swapped(void* self) {
    QOpenGLWindow_FrameSwapped((QOpenGLWindow*)self);
}

void q_openglwindow_on_frame_swapped(void* self, void (*callback)(void*)) {
    QOpenGLWindow_Connect_FrameSwapped((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_initialize_g_l(void* self) {
    QOpenGLWindow_InitializeGL((QOpenGLWindow*)self);
}

void q_openglwindow_on_initialize_g_l(void* self, void (*callback)()) {
    QOpenGLWindow_OnInitializeGL((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_qbase_initialize_g_l(void* self) {
    QOpenGLWindow_QBaseInitializeGL((QOpenGLWindow*)self);
}

void q_openglwindow_resize_g_l(void* self, int w, int h) {
    QOpenGLWindow_ResizeGL((QOpenGLWindow*)self, w, h);
}

void q_openglwindow_on_resize_g_l(void* self, void (*callback)(void*, int, int)) {
    QOpenGLWindow_OnResizeGL((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_qbase_resize_g_l(void* self, int w, int h) {
    QOpenGLWindow_QBaseResizeGL((QOpenGLWindow*)self, w, h);
}

void q_openglwindow_paint_g_l(void* self) {
    QOpenGLWindow_PaintGL((QOpenGLWindow*)self);
}

void q_openglwindow_on_paint_g_l(void* self, void (*callback)()) {
    QOpenGLWindow_OnPaintGL((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_qbase_paint_g_l(void* self) {
    QOpenGLWindow_QBasePaintGL((QOpenGLWindow*)self);
}

void q_openglwindow_paint_under_g_l(void* self) {
    QOpenGLWindow_PaintUnderGL((QOpenGLWindow*)self);
}

void q_openglwindow_on_paint_under_g_l(void* self, void (*callback)()) {
    QOpenGLWindow_OnPaintUnderGL((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_qbase_paint_under_g_l(void* self) {
    QOpenGLWindow_QBasePaintUnderGL((QOpenGLWindow*)self);
}

void q_openglwindow_paint_over_g_l(void* self) {
    QOpenGLWindow_PaintOverGL((QOpenGLWindow*)self);
}

void q_openglwindow_on_paint_over_g_l(void* self, void (*callback)()) {
    QOpenGLWindow_OnPaintOverGL((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_qbase_paint_over_g_l(void* self) {
    QOpenGLWindow_QBasePaintOverGL((QOpenGLWindow*)self);
}

void q_openglwindow_paint_event(void* self, void* event) {
    QOpenGLWindow_PaintEvent((QOpenGLWindow*)self, (QPaintEvent*)event);
}

void q_openglwindow_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnPaintEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_qbase_paint_event(void* self, void* event) {
    QOpenGLWindow_QBasePaintEvent((QOpenGLWindow*)self, (QPaintEvent*)event);
}

void q_openglwindow_resize_event(void* self, void* event) {
    QOpenGLWindow_ResizeEvent((QOpenGLWindow*)self, (QResizeEvent*)event);
}

void q_openglwindow_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnResizeEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_qbase_resize_event(void* self, void* event) {
    QOpenGLWindow_QBaseResizeEvent((QOpenGLWindow*)self, (QResizeEvent*)event);
}

int32_t q_openglwindow_metric(void* self, int32_t metric) {
    return QOpenGLWindow_Metric((QOpenGLWindow*)self, metric);
}

void q_openglwindow_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QOpenGLWindow_OnMetric((QOpenGLWindow*)self, (intptr_t)callback);
}

int32_t q_openglwindow_qbase_metric(void* self, int32_t metric) {
    return QOpenGLWindow_QBaseMetric((QOpenGLWindow*)self, metric);
}

QPaintDevice* q_openglwindow_redirected(void* self, void* param1) {
    return QOpenGLWindow_Redirected((QOpenGLWindow*)self, (QPoint*)param1);
}

void q_openglwindow_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QOpenGLWindow_OnRedirected((QOpenGLWindow*)self, (intptr_t)callback);
}

QPaintDevice* q_openglwindow_qbase_redirected(void* self, void* param1) {
    return QOpenGLWindow_QBaseRedirected((QOpenGLWindow*)self, (QPoint*)param1);
}

const char* q_openglwindow_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_openglwindow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglwindow_update(void* self, void* rect) {
    QPaintDeviceWindow_Update((QPaintDeviceWindow*)self, (QRect*)rect);
}

void q_openglwindow_update2(void* self, void* region) {
    QPaintDeviceWindow_Update2((QPaintDeviceWindow*)self, (QRegion*)region);
}

void q_openglwindow_update3(void* self) {
    QPaintDeviceWindow_Update3((QPaintDeviceWindow*)self);
}

void q_openglwindow_set_surface_type(void* self, int32_t surfaceType) {
    QWindow_SetSurfaceType((QWindow*)self, surfaceType);
}

bool q_openglwindow_is_visible(void* self) {
    return QWindow_IsVisible((QWindow*)self);
}

int32_t q_openglwindow_visibility(void* self) {
    return QWindow_Visibility((QWindow*)self);
}

void q_openglwindow_set_visibility(void* self, int32_t v) {
    QWindow_SetVisibility((QWindow*)self, v);
}

void q_openglwindow_create(void* self) {
    QWindow_Create((QWindow*)self);
}

uintptr_t q_openglwindow_win_id(void* self) {
    return QWindow_WinId((QWindow*)self);
}

QWindow* q_openglwindow_parent(void* self) {
    return QWindow_Parent((QWindow*)self);
}

void q_openglwindow_set_parent(void* self, void* parent) {
    QWindow_SetParent((QWindow*)self, (QWindow*)parent);
}

bool q_openglwindow_is_top_level(void* self) {
    return QWindow_IsTopLevel((QWindow*)self);
}

bool q_openglwindow_is_modal(void* self) {
    return QWindow_IsModal((QWindow*)self);
}

int32_t q_openglwindow_modality(void* self) {
    return QWindow_Modality((QWindow*)self);
}

void q_openglwindow_set_modality(void* self, int32_t modality) {
    QWindow_SetModality((QWindow*)self, modality);
}

void q_openglwindow_set_format(void* self, void* format) {
    QWindow_SetFormat((QWindow*)self, (QSurfaceFormat*)format);
}

QSurfaceFormat* q_openglwindow_requested_format(void* self) {
    return QWindow_RequestedFormat((QWindow*)self);
}

void q_openglwindow_set_flags(void* self, int64_t flags) {
    QWindow_SetFlags((QWindow*)self, flags);
}

int64_t q_openglwindow_flags(void* self) {
    return QWindow_Flags((QWindow*)self);
}

void q_openglwindow_set_flag(void* self, int64_t param1) {
    QWindow_SetFlag((QWindow*)self, param1);
}

int64_t q_openglwindow_type(void* self) {
    return QWindow_Type((QWindow*)self);
}

const char* q_openglwindow_title(void* self) {
    libqt_string _str = QWindow_Title((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglwindow_set_opacity(void* self, double level) {
    QWindow_SetOpacity((QWindow*)self, level);
}

double q_openglwindow_opacity(void* self) {
    return QWindow_Opacity((QWindow*)self);
}

void q_openglwindow_set_mask(void* self, void* region) {
    QWindow_SetMask((QWindow*)self, (QRegion*)region);
}

QRegion* q_openglwindow_mask(void* self) {
    return QWindow_Mask((QWindow*)self);
}

bool q_openglwindow_is_active(void* self) {
    return QWindow_IsActive((QWindow*)self);
}

void q_openglwindow_report_content_orientation_change(void* self, int32_t orientation) {
    QWindow_ReportContentOrientationChange((QWindow*)self, orientation);
}

int32_t q_openglwindow_content_orientation(void* self) {
    return QWindow_ContentOrientation((QWindow*)self);
}

double q_openglwindow_device_pixel_ratio(void* self) {
    return QWindow_DevicePixelRatio((QWindow*)self);
}

int32_t q_openglwindow_window_state(void* self) {
    return QWindow_WindowState((QWindow*)self);
}

int32_t q_openglwindow_window_states(void* self) {
    return QWindow_WindowStates((QWindow*)self);
}

void q_openglwindow_set_window_state(void* self, int32_t state) {
    QWindow_SetWindowState((QWindow*)self, state);
}

void q_openglwindow_set_window_states(void* self, int32_t states) {
    QWindow_SetWindowStates((QWindow*)self, states);
}

void q_openglwindow_set_transient_parent(void* self, void* parent) {
    QWindow_SetTransientParent((QWindow*)self, (QWindow*)parent);
}

QWindow* q_openglwindow_transient_parent(void* self) {
    return QWindow_TransientParent((QWindow*)self);
}

bool q_openglwindow_is_ancestor_of(void* self, void* child) {
    return QWindow_IsAncestorOf((QWindow*)self, (QWindow*)child);
}

bool q_openglwindow_is_exposed(void* self) {
    return QWindow_IsExposed((QWindow*)self);
}

int32_t q_openglwindow_minimum_width(void* self) {
    return QWindow_MinimumWidth((QWindow*)self);
}

int32_t q_openglwindow_minimum_height(void* self) {
    return QWindow_MinimumHeight((QWindow*)self);
}

int32_t q_openglwindow_maximum_width(void* self) {
    return QWindow_MaximumWidth((QWindow*)self);
}

int32_t q_openglwindow_maximum_height(void* self) {
    return QWindow_MaximumHeight((QWindow*)self);
}

QSize* q_openglwindow_minimum_size(void* self) {
    return QWindow_MinimumSize((QWindow*)self);
}

QSize* q_openglwindow_maximum_size(void* self) {
    return QWindow_MaximumSize((QWindow*)self);
}

QSize* q_openglwindow_base_size(void* self) {
    return QWindow_BaseSize((QWindow*)self);
}

QSize* q_openglwindow_size_increment(void* self) {
    return QWindow_SizeIncrement((QWindow*)self);
}

void q_openglwindow_set_minimum_size(void* self, void* size) {
    QWindow_SetMinimumSize((QWindow*)self, (QSize*)size);
}

void q_openglwindow_set_maximum_size(void* self, void* size) {
    QWindow_SetMaximumSize((QWindow*)self, (QSize*)size);
}

void q_openglwindow_set_base_size(void* self, void* size) {
    QWindow_SetBaseSize((QWindow*)self, (QSize*)size);
}

void q_openglwindow_set_size_increment(void* self, void* size) {
    QWindow_SetSizeIncrement((QWindow*)self, (QSize*)size);
}

QRect* q_openglwindow_geometry(void* self) {
    return QWindow_Geometry((QWindow*)self);
}

QMargins* q_openglwindow_frame_margins(void* self) {
    return QWindow_FrameMargins((QWindow*)self);
}

QRect* q_openglwindow_frame_geometry(void* self) {
    return QWindow_FrameGeometry((QWindow*)self);
}

QPoint* q_openglwindow_frame_position(void* self) {
    return QWindow_FramePosition((QWindow*)self);
}

void q_openglwindow_set_frame_position(void* self, void* point) {
    QWindow_SetFramePosition((QWindow*)self, (QPoint*)point);
}

int32_t q_openglwindow_width(void* self) {
    return QWindow_Width((QWindow*)self);
}

int32_t q_openglwindow_height(void* self) {
    return QWindow_Height((QWindow*)self);
}

int32_t q_openglwindow_x(void* self) {
    return QWindow_X((QWindow*)self);
}

int32_t q_openglwindow_y(void* self) {
    return QWindow_Y((QWindow*)self);
}

QPoint* q_openglwindow_position(void* self) {
    return QWindow_Position((QWindow*)self);
}

void q_openglwindow_set_position(void* self, void* pt) {
    QWindow_SetPosition((QWindow*)self, (QPoint*)pt);
}

void q_openglwindow_set_position2(void* self, int posx, int posy) {
    QWindow_SetPosition2((QWindow*)self, posx, posy);
}

void q_openglwindow_resize(void* self, void* newSize) {
    QWindow_Resize((QWindow*)self, (QSize*)newSize);
}

void q_openglwindow_resize2(void* self, int w, int h) {
    QWindow_Resize2((QWindow*)self, w, h);
}

void q_openglwindow_set_file_path(void* self, const char* filePath) {
    QWindow_SetFilePath((QWindow*)self, qstring(filePath));
}

const char* q_openglwindow_file_path(void* self) {
    libqt_string _str = QWindow_FilePath((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglwindow_set_icon(void* self, void* icon) {
    QWindow_SetIcon((QWindow*)self, (QIcon*)icon);
}

QIcon* q_openglwindow_icon(void* self) {
    return QWindow_Icon((QWindow*)self);
}

void q_openglwindow_destroy(void* self) {
    QWindow_Destroy((QWindow*)self);
}

bool q_openglwindow_set_keyboard_grab_enabled(void* self, bool grab) {
    return QWindow_SetKeyboardGrabEnabled((QWindow*)self, grab);
}

bool q_openglwindow_set_mouse_grab_enabled(void* self, bool grab) {
    return QWindow_SetMouseGrabEnabled((QWindow*)self, grab);
}

QScreen* q_openglwindow_screen(void* self) {
    return QWindow_Screen((QWindow*)self);
}

void q_openglwindow_set_screen(void* self, void* screen) {
    QWindow_SetScreen((QWindow*)self, (QScreen*)screen);
}

QPointF* q_openglwindow_map_to_global(void* self, void* pos) {
    return QWindow_MapToGlobal((QWindow*)self, (QPointF*)pos);
}

QPointF* q_openglwindow_map_from_global(void* self, void* pos) {
    return QWindow_MapFromGlobal((QWindow*)self, (QPointF*)pos);
}

QPoint* q_openglwindow_map_to_global2(void* self, void* pos) {
    return QWindow_MapToGlobal2((QWindow*)self, (QPoint*)pos);
}

QPoint* q_openglwindow_map_from_global2(void* self, void* pos) {
    return QWindow_MapFromGlobal2((QWindow*)self, (QPoint*)pos);
}

QCursor* q_openglwindow_cursor(void* self) {
    return QWindow_Cursor((QWindow*)self);
}

void q_openglwindow_set_cursor(void* self, void* cursor) {
    QWindow_SetCursor((QWindow*)self, (QCursor*)cursor);
}

void q_openglwindow_unset_cursor(void* self) {
    QWindow_UnsetCursor((QWindow*)self);
}

QWindow* q_openglwindow_from_win_id(uintptr_t id) {
    return QWindow_FromWinId(id);
}

void q_openglwindow_request_activate(void* self) {
    QWindow_RequestActivate((QWindow*)self);
}

void q_openglwindow_set_visible(void* self, bool visible) {
    QWindow_SetVisible((QWindow*)self, visible);
}

void q_openglwindow_show(void* self) {
    QWindow_Show((QWindow*)self);
}

void q_openglwindow_hide(void* self) {
    QWindow_Hide((QWindow*)self);
}

void q_openglwindow_show_minimized(void* self) {
    QWindow_ShowMinimized((QWindow*)self);
}

void q_openglwindow_show_maximized(void* self) {
    QWindow_ShowMaximized((QWindow*)self);
}

void q_openglwindow_show_full_screen(void* self) {
    QWindow_ShowFullScreen((QWindow*)self);
}

void q_openglwindow_show_normal(void* self) {
    QWindow_ShowNormal((QWindow*)self);
}

bool q_openglwindow_close(void* self) {
    return QWindow_Close((QWindow*)self);
}

void q_openglwindow_raise(void* self) {
    QWindow_Raise((QWindow*)self);
}

void q_openglwindow_lower(void* self) {
    QWindow_Lower((QWindow*)self);
}

bool q_openglwindow_start_system_resize(void* self, int32_t edges) {
    return QWindow_StartSystemResize((QWindow*)self, edges);
}

bool q_openglwindow_start_system_move(void* self) {
    return QWindow_StartSystemMove((QWindow*)self);
}

void q_openglwindow_set_title(void* self, const char* title) {
    QWindow_SetTitle((QWindow*)self, qstring(title));
}

void q_openglwindow_set_x(void* self, int arg) {
    QWindow_SetX((QWindow*)self, arg);
}

void q_openglwindow_set_y(void* self, int arg) {
    QWindow_SetY((QWindow*)self, arg);
}

void q_openglwindow_set_width(void* self, int arg) {
    QWindow_SetWidth((QWindow*)self, arg);
}

void q_openglwindow_set_height(void* self, int arg) {
    QWindow_SetHeight((QWindow*)self, arg);
}

void q_openglwindow_set_geometry(void* self, int posx, int posy, int w, int h) {
    QWindow_SetGeometry((QWindow*)self, posx, posy, w, h);
}

void q_openglwindow_set_geometry2(void* self, void* rect) {
    QWindow_SetGeometry2((QWindow*)self, (QRect*)rect);
}

void q_openglwindow_set_minimum_width(void* self, int w) {
    QWindow_SetMinimumWidth((QWindow*)self, w);
}

void q_openglwindow_set_minimum_height(void* self, int h) {
    QWindow_SetMinimumHeight((QWindow*)self, h);
}

void q_openglwindow_set_maximum_width(void* self, int w) {
    QWindow_SetMaximumWidth((QWindow*)self, w);
}

void q_openglwindow_set_maximum_height(void* self, int h) {
    QWindow_SetMaximumHeight((QWindow*)self, h);
}

void q_openglwindow_alert(void* self, int msec) {
    QWindow_Alert((QWindow*)self, msec);
}

void q_openglwindow_request_update(void* self) {
    QWindow_RequestUpdate((QWindow*)self);
}

void q_openglwindow_screen_changed(void* self, void* screen) {
    QWindow_ScreenChanged((QWindow*)self, (QScreen*)screen);
}

void q_openglwindow_on_screen_changed(void* self, void (*callback)(void*, void*)) {
    QWindow_Connect_ScreenChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_modality_changed(void* self, int32_t modality) {
    QWindow_ModalityChanged((QWindow*)self, modality);
}

void q_openglwindow_on_modality_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_ModalityChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_window_state_changed(void* self, int32_t windowState) {
    QWindow_WindowStateChanged((QWindow*)self, windowState);
}

void q_openglwindow_on_window_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_WindowStateChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_window_title_changed(void* self, const char* title) {
    QWindow_WindowTitleChanged((QWindow*)self, qstring(title));
}

void q_openglwindow_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWindow_Connect_WindowTitleChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_x_changed(void* self, int arg) {
    QWindow_XChanged((QWindow*)self, arg);
}

void q_openglwindow_on_x_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_XChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_y_changed(void* self, int arg) {
    QWindow_YChanged((QWindow*)self, arg);
}

void q_openglwindow_on_y_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_YChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_width_changed(void* self, int arg) {
    QWindow_WidthChanged((QWindow*)self, arg);
}

void q_openglwindow_on_width_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_WidthChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_height_changed(void* self, int arg) {
    QWindow_HeightChanged((QWindow*)self, arg);
}

void q_openglwindow_on_height_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_HeightChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_minimum_width_changed(void* self, int arg) {
    QWindow_MinimumWidthChanged((QWindow*)self, arg);
}

void q_openglwindow_on_minimum_width_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MinimumWidthChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_minimum_height_changed(void* self, int arg) {
    QWindow_MinimumHeightChanged((QWindow*)self, arg);
}

void q_openglwindow_on_minimum_height_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MinimumHeightChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_maximum_width_changed(void* self, int arg) {
    QWindow_MaximumWidthChanged((QWindow*)self, arg);
}

void q_openglwindow_on_maximum_width_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MaximumWidthChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_maximum_height_changed(void* self, int arg) {
    QWindow_MaximumHeightChanged((QWindow*)self, arg);
}

void q_openglwindow_on_maximum_height_changed(void* self, void (*callback)(void*, int)) {
    QWindow_Connect_MaximumHeightChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_visible_changed(void* self, bool arg) {
    QWindow_VisibleChanged((QWindow*)self, arg);
}

void q_openglwindow_on_visible_changed(void* self, void (*callback)(void*, bool)) {
    QWindow_Connect_VisibleChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_visibility_changed(void* self, int32_t visibility) {
    QWindow_VisibilityChanged((QWindow*)self, visibility);
}

void q_openglwindow_on_visibility_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_VisibilityChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_active_changed(void* self) {
    QWindow_ActiveChanged((QWindow*)self);
}

void q_openglwindow_on_active_changed(void* self, void (*callback)(void*)) {
    QWindow_Connect_ActiveChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_content_orientation_changed(void* self, int32_t orientation) {
    QWindow_ContentOrientationChanged((QWindow*)self, orientation);
}

void q_openglwindow_on_content_orientation_changed(void* self, void (*callback)(void*, int32_t)) {
    QWindow_Connect_ContentOrientationChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_focus_object_changed(void* self, void* object) {
    QWindow_FocusObjectChanged((QWindow*)self, (QObject*)object);
}

void q_openglwindow_on_focus_object_changed(void* self, void (*callback)(void*, void*)) {
    QWindow_Connect_FocusObjectChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_opacity_changed(void* self, double opacity) {
    QWindow_OpacityChanged((QWindow*)self, opacity);
}

void q_openglwindow_on_opacity_changed(void* self, void (*callback)(void*, double)) {
    QWindow_Connect_OpacityChanged((QWindow*)self, (intptr_t)callback);
}

void q_openglwindow_transient_parent_changed(void* self, void* transientParent) {
    QWindow_TransientParentChanged((QWindow*)self, (QWindow*)transientParent);
}

void q_openglwindow_on_transient_parent_changed(void* self, void (*callback)(void*, void*)) {
    QWindow_Connect_TransientParentChanged((QWindow*)self, (intptr_t)callback);
}

QWindow* q_openglwindow_parent1(void* self, int32_t mode) {
    return QWindow_Parent1((QWindow*)self, mode);
}

void q_openglwindow_set_flag2(void* self, int64_t param1, bool on) {
    QWindow_SetFlag2((QWindow*)self, param1, on);
}

bool q_openglwindow_is_ancestor_of2(void* self, void* child, int32_t mode) {
    return QWindow_IsAncestorOf2((QWindow*)self, (QWindow*)child, mode);
}

const char* q_openglwindow_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglwindow_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_openglwindow_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_openglwindow_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_openglwindow_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_openglwindow_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_openglwindow_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_openglwindow_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_openglwindow_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_openglwindow_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_openglwindow_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_openglwindow_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_openglwindow_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_openglwindow_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_openglwindow_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_openglwindow_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_openglwindow_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_openglwindow_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_openglwindow_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_openglwindow_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_openglwindow_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_openglwindow_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_openglwindow_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_openglwindow_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_openglwindow_dynamic_property_names");
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

QBindingStorage* q_openglwindow_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_openglwindow_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_openglwindow_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_openglwindow_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool q_openglwindow_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_openglwindow_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_openglwindow_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_openglwindow_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_openglwindow_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_openglwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_openglwindow_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_openglwindow_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_openglwindow_surface_class(void* self) {
    return QSurface_SurfaceClass((QSurface*)self);
}

bool q_openglwindow_supports_open_g_l(void* self) {
    return QSurface_SupportsOpenGL((QSurface*)self);
}

bool q_openglwindow_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

QPaintEngine* q_openglwindow_paint_engine(void* self) {
    return QPaintDevice_PaintEngine((QPaintDevice*)self);
}

int32_t q_openglwindow_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_openglwindow_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_openglwindow_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_openglwindow_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_openglwindow_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_openglwindow_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_openglwindow_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_openglwindow_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_openglwindow_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_openglwindow_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_openglwindow_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_openglwindow_expose_event(void* self, void* param1) {
    QOpenGLWindow_ExposeEvent((QOpenGLWindow*)self, (QExposeEvent*)param1);
}

void q_openglwindow_qbase_expose_event(void* self, void* param1) {
    QOpenGLWindow_QBaseExposeEvent((QOpenGLWindow*)self, (QExposeEvent*)param1);
}

void q_openglwindow_on_expose_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnExposeEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

bool q_openglwindow_event(void* self, void* event) {
    return QOpenGLWindow_Event((QOpenGLWindow*)self, (QEvent*)event);
}

bool q_openglwindow_qbase_event(void* self, void* event) {
    return QOpenGLWindow_QBaseEvent((QOpenGLWindow*)self, (QEvent*)event);
}

void q_openglwindow_on_event(void* self, bool (*callback)(void*, void*)) {
    QOpenGLWindow_OnEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

int32_t q_openglwindow_surface_type(void* self) {
    return QOpenGLWindow_SurfaceType((QOpenGLWindow*)self);
}

int32_t q_openglwindow_qbase_surface_type(void* self) {
    return QOpenGLWindow_QBaseSurfaceType((QOpenGLWindow*)self);
}

void q_openglwindow_on_surface_type(void* self, int32_t (*callback)()) {
    QOpenGLWindow_OnSurfaceType((QOpenGLWindow*)self, (intptr_t)callback);
}

QSurfaceFormat* q_openglwindow_format(void* self) {
    return QOpenGLWindow_Format((QOpenGLWindow*)self);
}

QSurfaceFormat* q_openglwindow_qbase_format(void* self) {
    return QOpenGLWindow_QBaseFormat((QOpenGLWindow*)self);
}

void q_openglwindow_on_format(void* self, QSurfaceFormat* (*callback)()) {
    QOpenGLWindow_OnFormat((QOpenGLWindow*)self, (intptr_t)callback);
}

QSize* q_openglwindow_size(void* self) {
    return QOpenGLWindow_Size((QOpenGLWindow*)self);
}

QSize* q_openglwindow_qbase_size(void* self) {
    return QOpenGLWindow_QBaseSize((QOpenGLWindow*)self);
}

void q_openglwindow_on_size(void* self, QSize* (*callback)()) {
    QOpenGLWindow_OnSize((QOpenGLWindow*)self, (intptr_t)callback);
}

QAccessibleInterface* q_openglwindow_accessible_root(void* self) {
    return QOpenGLWindow_AccessibleRoot((QOpenGLWindow*)self);
}

QAccessibleInterface* q_openglwindow_qbase_accessible_root(void* self) {
    return QOpenGLWindow_QBaseAccessibleRoot((QOpenGLWindow*)self);
}

void q_openglwindow_on_accessible_root(void* self, QAccessibleInterface* (*callback)()) {
    QOpenGLWindow_OnAccessibleRoot((QOpenGLWindow*)self, (intptr_t)callback);
}

QObject* q_openglwindow_focus_object(void* self) {
    return QOpenGLWindow_FocusObject((QOpenGLWindow*)self);
}

QObject* q_openglwindow_qbase_focus_object(void* self) {
    return QOpenGLWindow_QBaseFocusObject((QOpenGLWindow*)self);
}

void q_openglwindow_on_focus_object(void* self, QObject* (*callback)()) {
    QOpenGLWindow_OnFocusObject((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_move_event(void* self, void* param1) {
    QOpenGLWindow_MoveEvent((QOpenGLWindow*)self, (QMoveEvent*)param1);
}

void q_openglwindow_qbase_move_event(void* self, void* param1) {
    QOpenGLWindow_QBaseMoveEvent((QOpenGLWindow*)self, (QMoveEvent*)param1);
}

void q_openglwindow_on_move_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnMoveEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_focus_in_event(void* self, void* param1) {
    QOpenGLWindow_FocusInEvent((QOpenGLWindow*)self, (QFocusEvent*)param1);
}

void q_openglwindow_qbase_focus_in_event(void* self, void* param1) {
    QOpenGLWindow_QBaseFocusInEvent((QOpenGLWindow*)self, (QFocusEvent*)param1);
}

void q_openglwindow_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnFocusInEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_focus_out_event(void* self, void* param1) {
    QOpenGLWindow_FocusOutEvent((QOpenGLWindow*)self, (QFocusEvent*)param1);
}

void q_openglwindow_qbase_focus_out_event(void* self, void* param1) {
    QOpenGLWindow_QBaseFocusOutEvent((QOpenGLWindow*)self, (QFocusEvent*)param1);
}

void q_openglwindow_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnFocusOutEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_show_event(void* self, void* param1) {
    QOpenGLWindow_ShowEvent((QOpenGLWindow*)self, (QShowEvent*)param1);
}

void q_openglwindow_qbase_show_event(void* self, void* param1) {
    QOpenGLWindow_QBaseShowEvent((QOpenGLWindow*)self, (QShowEvent*)param1);
}

void q_openglwindow_on_show_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnShowEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_hide_event(void* self, void* param1) {
    QOpenGLWindow_HideEvent((QOpenGLWindow*)self, (QHideEvent*)param1);
}

void q_openglwindow_qbase_hide_event(void* self, void* param1) {
    QOpenGLWindow_QBaseHideEvent((QOpenGLWindow*)self, (QHideEvent*)param1);
}

void q_openglwindow_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnHideEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_close_event(void* self, void* param1) {
    QOpenGLWindow_CloseEvent((QOpenGLWindow*)self, (QCloseEvent*)param1);
}

void q_openglwindow_qbase_close_event(void* self, void* param1) {
    QOpenGLWindow_QBaseCloseEvent((QOpenGLWindow*)self, (QCloseEvent*)param1);
}

void q_openglwindow_on_close_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnCloseEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_key_press_event(void* self, void* param1) {
    QOpenGLWindow_KeyPressEvent((QOpenGLWindow*)self, (QKeyEvent*)param1);
}

void q_openglwindow_qbase_key_press_event(void* self, void* param1) {
    QOpenGLWindow_QBaseKeyPressEvent((QOpenGLWindow*)self, (QKeyEvent*)param1);
}

void q_openglwindow_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnKeyPressEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_key_release_event(void* self, void* param1) {
    QOpenGLWindow_KeyReleaseEvent((QOpenGLWindow*)self, (QKeyEvent*)param1);
}

void q_openglwindow_qbase_key_release_event(void* self, void* param1) {
    QOpenGLWindow_QBaseKeyReleaseEvent((QOpenGLWindow*)self, (QKeyEvent*)param1);
}

void q_openglwindow_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnKeyReleaseEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_mouse_press_event(void* self, void* param1) {
    QOpenGLWindow_MousePressEvent((QOpenGLWindow*)self, (QMouseEvent*)param1);
}

void q_openglwindow_qbase_mouse_press_event(void* self, void* param1) {
    QOpenGLWindow_QBaseMousePressEvent((QOpenGLWindow*)self, (QMouseEvent*)param1);
}

void q_openglwindow_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnMousePressEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_mouse_release_event(void* self, void* param1) {
    QOpenGLWindow_MouseReleaseEvent((QOpenGLWindow*)self, (QMouseEvent*)param1);
}

void q_openglwindow_qbase_mouse_release_event(void* self, void* param1) {
    QOpenGLWindow_QBaseMouseReleaseEvent((QOpenGLWindow*)self, (QMouseEvent*)param1);
}

void q_openglwindow_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnMouseReleaseEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_mouse_double_click_event(void* self, void* param1) {
    QOpenGLWindow_MouseDoubleClickEvent((QOpenGLWindow*)self, (QMouseEvent*)param1);
}

void q_openglwindow_qbase_mouse_double_click_event(void* self, void* param1) {
    QOpenGLWindow_QBaseMouseDoubleClickEvent((QOpenGLWindow*)self, (QMouseEvent*)param1);
}

void q_openglwindow_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnMouseDoubleClickEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_mouse_move_event(void* self, void* param1) {
    QOpenGLWindow_MouseMoveEvent((QOpenGLWindow*)self, (QMouseEvent*)param1);
}

void q_openglwindow_qbase_mouse_move_event(void* self, void* param1) {
    QOpenGLWindow_QBaseMouseMoveEvent((QOpenGLWindow*)self, (QMouseEvent*)param1);
}

void q_openglwindow_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnMouseMoveEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_wheel_event(void* self, void* param1) {
    QOpenGLWindow_WheelEvent((QOpenGLWindow*)self, (QWheelEvent*)param1);
}

void q_openglwindow_qbase_wheel_event(void* self, void* param1) {
    QOpenGLWindow_QBaseWheelEvent((QOpenGLWindow*)self, (QWheelEvent*)param1);
}

void q_openglwindow_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnWheelEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_touch_event(void* self, void* param1) {
    QOpenGLWindow_TouchEvent((QOpenGLWindow*)self, (QTouchEvent*)param1);
}

void q_openglwindow_qbase_touch_event(void* self, void* param1) {
    QOpenGLWindow_QBaseTouchEvent((QOpenGLWindow*)self, (QTouchEvent*)param1);
}

void q_openglwindow_on_touch_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnTouchEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_tablet_event(void* self, void* param1) {
    QOpenGLWindow_TabletEvent((QOpenGLWindow*)self, (QTabletEvent*)param1);
}

void q_openglwindow_qbase_tablet_event(void* self, void* param1) {
    QOpenGLWindow_QBaseTabletEvent((QOpenGLWindow*)self, (QTabletEvent*)param1);
}

void q_openglwindow_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnTabletEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

bool q_openglwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QOpenGLWindow_NativeEvent((QOpenGLWindow*)self, qstring(eventType), message, result);
}

bool q_openglwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QOpenGLWindow_QBaseNativeEvent((QOpenGLWindow*)self, qstring(eventType), message, result);
}

void q_openglwindow_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QOpenGLWindow_OnNativeEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

bool q_openglwindow_event_filter(void* self, void* watched, void* event) {
    return QOpenGLWindow_EventFilter((QOpenGLWindow*)self, (QObject*)watched, (QEvent*)event);
}

bool q_openglwindow_qbase_event_filter(void* self, void* watched, void* event) {
    return QOpenGLWindow_QBaseEventFilter((QOpenGLWindow*)self, (QObject*)watched, (QEvent*)event);
}

void q_openglwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QOpenGLWindow_OnEventFilter((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_timer_event(void* self, void* event) {
    QOpenGLWindow_TimerEvent((QOpenGLWindow*)self, (QTimerEvent*)event);
}

void q_openglwindow_qbase_timer_event(void* self, void* event) {
    QOpenGLWindow_QBaseTimerEvent((QOpenGLWindow*)self, (QTimerEvent*)event);
}

void q_openglwindow_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnTimerEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_child_event(void* self, void* event) {
    QOpenGLWindow_ChildEvent((QOpenGLWindow*)self, (QChildEvent*)event);
}

void q_openglwindow_qbase_child_event(void* self, void* event) {
    QOpenGLWindow_QBaseChildEvent((QOpenGLWindow*)self, (QChildEvent*)event);
}

void q_openglwindow_on_child_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnChildEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_custom_event(void* self, void* event) {
    QOpenGLWindow_CustomEvent((QOpenGLWindow*)self, (QEvent*)event);
}

void q_openglwindow_qbase_custom_event(void* self, void* event) {
    QOpenGLWindow_QBaseCustomEvent((QOpenGLWindow*)self, (QEvent*)event);
}

void q_openglwindow_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnCustomEvent((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_connect_notify(void* self, void* signal) {
    QOpenGLWindow_ConnectNotify((QOpenGLWindow*)self, (QMetaMethod*)signal);
}

void q_openglwindow_qbase_connect_notify(void* self, void* signal) {
    QOpenGLWindow_QBaseConnectNotify((QOpenGLWindow*)self, (QMetaMethod*)signal);
}

void q_openglwindow_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnConnectNotify((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_disconnect_notify(void* self, void* signal) {
    QOpenGLWindow_DisconnectNotify((QOpenGLWindow*)self, (QMetaMethod*)signal);
}

void q_openglwindow_qbase_disconnect_notify(void* self, void* signal) {
    QOpenGLWindow_QBaseDisconnectNotify((QOpenGLWindow*)self, (QMetaMethod*)signal);
}

void q_openglwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnDisconnectNotify((QOpenGLWindow*)self, (intptr_t)callback);
}

int32_t q_openglwindow_dev_type(void* self) {
    return QOpenGLWindow_DevType((QOpenGLWindow*)self);
}

int32_t q_openglwindow_qbase_dev_type(void* self) {
    return QOpenGLWindow_QBaseDevType((QOpenGLWindow*)self);
}

void q_openglwindow_on_dev_type(void* self, int32_t (*callback)()) {
    QOpenGLWindow_OnDevType((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_init_painter(void* self, void* painter) {
    QOpenGLWindow_InitPainter((QOpenGLWindow*)self, (QPainter*)painter);
}

void q_openglwindow_qbase_init_painter(void* self, void* painter) {
    QOpenGLWindow_QBaseInitPainter((QOpenGLWindow*)self, (QPainter*)painter);
}

void q_openglwindow_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QOpenGLWindow_OnInitPainter((QOpenGLWindow*)self, (intptr_t)callback);
}

QPainter* q_openglwindow_shared_painter(void* self) {
    return QOpenGLWindow_SharedPainter((QOpenGLWindow*)self);
}

QPainter* q_openglwindow_qbase_shared_painter(void* self) {
    return QOpenGLWindow_QBaseSharedPainter((QOpenGLWindow*)self);
}

void q_openglwindow_on_shared_painter(void* self, QPainter* (*callback)()) {
    QOpenGLWindow_OnSharedPainter((QOpenGLWindow*)self, (intptr_t)callback);
}

void* q_openglwindow_resolve_interface(void* self, const char* name, int revision) {
    return QOpenGLWindow_ResolveInterface((QOpenGLWindow*)self, name, revision);
}

void* q_openglwindow_qbase_resolve_interface(void* self, const char* name, int revision) {
    return QOpenGLWindow_QBaseResolveInterface((QOpenGLWindow*)self, name, revision);
}

void q_openglwindow_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int)) {
    QOpenGLWindow_OnResolveInterface((QOpenGLWindow*)self, (intptr_t)callback);
}

QObject* q_openglwindow_sender(void* self) {
    return QOpenGLWindow_Sender((QOpenGLWindow*)self);
}

QObject* q_openglwindow_qbase_sender(void* self) {
    return QOpenGLWindow_QBaseSender((QOpenGLWindow*)self);
}

void q_openglwindow_on_sender(void* self, QObject* (*callback)()) {
    QOpenGLWindow_OnSender((QOpenGLWindow*)self, (intptr_t)callback);
}

int32_t q_openglwindow_sender_signal_index(void* self) {
    return QOpenGLWindow_SenderSignalIndex((QOpenGLWindow*)self);
}

int32_t q_openglwindow_qbase_sender_signal_index(void* self) {
    return QOpenGLWindow_QBaseSenderSignalIndex((QOpenGLWindow*)self);
}

void q_openglwindow_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QOpenGLWindow_OnSenderSignalIndex((QOpenGLWindow*)self, (intptr_t)callback);
}

int32_t q_openglwindow_receivers(void* self, const char* signal) {
    return QOpenGLWindow_Receivers((QOpenGLWindow*)self, signal);
}

int32_t q_openglwindow_qbase_receivers(void* self, const char* signal) {
    return QOpenGLWindow_QBaseReceivers((QOpenGLWindow*)self, signal);
}

void q_openglwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QOpenGLWindow_OnReceivers((QOpenGLWindow*)self, (intptr_t)callback);
}

bool q_openglwindow_is_signal_connected(void* self, void* signal) {
    return QOpenGLWindow_IsSignalConnected((QOpenGLWindow*)self, (QMetaMethod*)signal);
}

bool q_openglwindow_qbase_is_signal_connected(void* self, void* signal) {
    return QOpenGLWindow_QBaseIsSignalConnected((QOpenGLWindow*)self, (QMetaMethod*)signal);
}

void q_openglwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QOpenGLWindow_OnIsSignalConnected((QOpenGLWindow*)self, (intptr_t)callback);
}

double q_openglwindow_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QOpenGLWindow_GetDecodedMetricF((QOpenGLWindow*)self, metricA, metricB);
}

double q_openglwindow_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QOpenGLWindow_QBaseGetDecodedMetricF((QOpenGLWindow*)self, metricA, metricB);
}

void q_openglwindow_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QOpenGLWindow_OnGetDecodedMetricF((QOpenGLWindow*)self, (intptr_t)callback);
}

void q_openglwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_openglwindow_delete(void* self) {
    QOpenGLWindow_Delete((QOpenGLWindow*)(self));
}
