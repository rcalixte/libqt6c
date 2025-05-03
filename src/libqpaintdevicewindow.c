#include "libqaccessible.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqcursor.hpp"
#include "libqicon.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqsurface.hpp"
#include "libqsurfaceformat.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqpaintdevicewindow.hpp"
#include "libqpaintdevicewindow.h"

QMetaObject* q_paintdevicewindow_meta_object(void* self) {
    return QPaintDeviceWindow_MetaObject((QPaintDeviceWindow*)self);
}

void* q_paintdevicewindow_metacast(void* self, const char* param1) {
    return QPaintDeviceWindow_Metacast((QPaintDeviceWindow*)self, param1);
}

int32_t q_paintdevicewindow_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPaintDeviceWindow_Metacall((QPaintDeviceWindow*)self, param1, param2, param3);
}

const char* q_paintdevicewindow_tr(const char* s) {
    libqt_string _str = QPaintDeviceWindow_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_paintdevicewindow_update(void* self, void* rect) {
    QPaintDeviceWindow_Update((QPaintDeviceWindow*)self, (QRect*)rect);
}

void q_paintdevicewindow_update_with_region(void* self, void* region) {
    QPaintDeviceWindow_UpdateWithRegion((QPaintDeviceWindow*)self, (QRegion*)region);
}

void q_paintdevicewindow_update2(void* self) {
    QPaintDeviceWindow_Update2((QPaintDeviceWindow*)self);
}

const char* q_paintdevicewindow_tr2(const char* s, const char* c) {
    libqt_string _str = QPaintDeviceWindow_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_paintdevicewindow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPaintDeviceWindow_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_paintdevicewindow_set_surface_type(void* self, int64_t surfaceType) {
    QWindow_SetSurfaceType((QWindow*)self, surfaceType);
}

int64_t q_paintdevicewindow_surface_type(void* self) {
    return QWindow_SurfaceType((QWindow*)self);
}

bool q_paintdevicewindow_is_visible(void* self) {
    return QWindow_IsVisible((QWindow*)self);
}

int64_t q_paintdevicewindow_visibility(void* self) {
    return QWindow_Visibility((QWindow*)self);
}

void q_paintdevicewindow_set_visibility(void* self, int64_t v) {
    QWindow_SetVisibility((QWindow*)self, v);
}

void q_paintdevicewindow_create(void* self) {
    QWindow_Create((QWindow*)self);
}

uintptr_t q_paintdevicewindow_win_id(void* self) {
    return QWindow_WinId((QWindow*)self);
}

QWindow* q_paintdevicewindow_parent(void* self) {
    return QWindow_Parent((QWindow*)self);
}

void q_paintdevicewindow_set_parent(void* self, void* parent) {
    QWindow_SetParent((QWindow*)self, (QWindow*)parent);
}

bool q_paintdevicewindow_is_top_level(void* self) {
    return QWindow_IsTopLevel((QWindow*)self);
}

bool q_paintdevicewindow_is_modal(void* self) {
    return QWindow_IsModal((QWindow*)self);
}

int64_t q_paintdevicewindow_modality(void* self) {
    return QWindow_Modality((QWindow*)self);
}

void q_paintdevicewindow_set_modality(void* self, int64_t modality) {
    QWindow_SetModality((QWindow*)self, modality);
}

void q_paintdevicewindow_set_format(void* self, void* format) {
    QWindow_SetFormat((QWindow*)self, (QSurfaceFormat*)format);
}

QSurfaceFormat* q_paintdevicewindow_format(void* self) {
    return QWindow_Format((QWindow*)self);
}

QSurfaceFormat* q_paintdevicewindow_requested_format(void* self) {
    return QWindow_RequestedFormat((QWindow*)self);
}

void q_paintdevicewindow_set_flags(void* self, int64_t flags) {
    QWindow_SetFlags((QWindow*)self, flags);
}

int64_t q_paintdevicewindow_flags(void* self) {
    return QWindow_Flags((QWindow*)self);
}

void q_paintdevicewindow_set_flag(void* self, int64_t param1) {
    QWindow_SetFlag((QWindow*)self, param1);
}

int64_t q_paintdevicewindow_type(void* self) {
    return QWindow_Type((QWindow*)self);
}

const char* q_paintdevicewindow_title(void* self) {
    libqt_string _str = QWindow_Title((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_paintdevicewindow_set_opacity(void* self, double level) {
    QWindow_SetOpacity((QWindow*)self, level);
}

double q_paintdevicewindow_opacity(void* self) {
    return QWindow_Opacity((QWindow*)self);
}

void q_paintdevicewindow_set_mask(void* self, void* region) {
    QWindow_SetMask((QWindow*)self, (QRegion*)region);
}

QRegion* q_paintdevicewindow_mask(void* self) {
    return QWindow_Mask((QWindow*)self);
}

bool q_paintdevicewindow_is_active(void* self) {
    return QWindow_IsActive((QWindow*)self);
}

void q_paintdevicewindow_report_content_orientation_change(void* self, int64_t orientation) {
    QWindow_ReportContentOrientationChange((QWindow*)self, orientation);
}

int64_t q_paintdevicewindow_content_orientation(void* self) {
    return QWindow_ContentOrientation((QWindow*)self);
}

double q_paintdevicewindow_device_pixel_ratio(void* self) {
    return QWindow_DevicePixelRatio((QWindow*)self);
}

int64_t q_paintdevicewindow_window_state(void* self) {
    return QWindow_WindowState((QWindow*)self);
}

int64_t q_paintdevicewindow_window_states(void* self) {
    return QWindow_WindowStates((QWindow*)self);
}

void q_paintdevicewindow_set_window_state(void* self, int64_t state) {
    QWindow_SetWindowState((QWindow*)self, state);
}

void q_paintdevicewindow_set_window_states(void* self, int64_t states) {
    QWindow_SetWindowStates((QWindow*)self, states);
}

void q_paintdevicewindow_set_transient_parent(void* self, void* parent) {
    QWindow_SetTransientParent((QWindow*)self, (QWindow*)parent);
}

QWindow* q_paintdevicewindow_transient_parent(void* self) {
    return QWindow_TransientParent((QWindow*)self);
}

bool q_paintdevicewindow_is_ancestor_of(void* self, void* child) {
    return QWindow_IsAncestorOf((QWindow*)self, (QWindow*)child);
}

bool q_paintdevicewindow_is_exposed(void* self) {
    return QWindow_IsExposed((QWindow*)self);
}

int32_t q_paintdevicewindow_minimum_width(void* self) {
    return QWindow_MinimumWidth((QWindow*)self);
}

int32_t q_paintdevicewindow_minimum_height(void* self) {
    return QWindow_MinimumHeight((QWindow*)self);
}

int32_t q_paintdevicewindow_maximum_width(void* self) {
    return QWindow_MaximumWidth((QWindow*)self);
}

int32_t q_paintdevicewindow_maximum_height(void* self) {
    return QWindow_MaximumHeight((QWindow*)self);
}

QSize* q_paintdevicewindow_minimum_size(void* self) {
    return QWindow_MinimumSize((QWindow*)self);
}

QSize* q_paintdevicewindow_maximum_size(void* self) {
    return QWindow_MaximumSize((QWindow*)self);
}

QSize* q_paintdevicewindow_base_size(void* self) {
    return QWindow_BaseSize((QWindow*)self);
}

QSize* q_paintdevicewindow_size_increment(void* self) {
    return QWindow_SizeIncrement((QWindow*)self);
}

void q_paintdevicewindow_set_minimum_size(void* self, void* size) {
    QWindow_SetMinimumSize((QWindow*)self, (QSize*)size);
}

void q_paintdevicewindow_set_maximum_size(void* self, void* size) {
    QWindow_SetMaximumSize((QWindow*)self, (QSize*)size);
}

void q_paintdevicewindow_set_base_size(void* self, void* size) {
    QWindow_SetBaseSize((QWindow*)self, (QSize*)size);
}

void q_paintdevicewindow_set_size_increment(void* self, void* size) {
    QWindow_SetSizeIncrement((QWindow*)self, (QSize*)size);
}

QRect* q_paintdevicewindow_geometry(void* self) {
    return QWindow_Geometry((QWindow*)self);
}

QMargins* q_paintdevicewindow_frame_margins(void* self) {
    return QWindow_FrameMargins((QWindow*)self);
}

QRect* q_paintdevicewindow_frame_geometry(void* self) {
    return QWindow_FrameGeometry((QWindow*)self);
}

QPoint* q_paintdevicewindow_frame_position(void* self) {
    return QWindow_FramePosition((QWindow*)self);
}

void q_paintdevicewindow_set_frame_position(void* self, void* point) {
    QWindow_SetFramePosition((QWindow*)self, (QPoint*)point);
}

int32_t q_paintdevicewindow_width(void* self) {
    return QWindow_Width((QWindow*)self);
}

int32_t q_paintdevicewindow_height(void* self) {
    return QWindow_Height((QWindow*)self);
}

int32_t q_paintdevicewindow_x(void* self) {
    return QWindow_X((QWindow*)self);
}

int32_t q_paintdevicewindow_y(void* self) {
    return QWindow_Y((QWindow*)self);
}

QSize* q_paintdevicewindow_size(void* self) {
    return QWindow_Size((QWindow*)self);
}

QPoint* q_paintdevicewindow_position(void* self) {
    return QWindow_Position((QWindow*)self);
}

void q_paintdevicewindow_set_position(void* self, void* pt) {
    QWindow_SetPosition((QWindow*)self, (QPoint*)pt);
}

void q_paintdevicewindow_set_position2(void* self, int posx, int posy) {
    QWindow_SetPosition2((QWindow*)self, posx, posy);
}

void q_paintdevicewindow_resize(void* self, void* newSize) {
    QWindow_Resize((QWindow*)self, (QSize*)newSize);
}

void q_paintdevicewindow_resize2(void* self, int w, int h) {
    QWindow_Resize2((QWindow*)self, w, h);
}

void q_paintdevicewindow_set_file_path(void* self, const char* filePath) {
    QWindow_SetFilePath((QWindow*)self, qstring(filePath));
}

const char* q_paintdevicewindow_file_path(void* self) {
    libqt_string _str = QWindow_FilePath((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_paintdevicewindow_set_icon(void* self, void* icon) {
    QWindow_SetIcon((QWindow*)self, (QIcon*)icon);
}

QIcon* q_paintdevicewindow_icon(void* self) {
    return QWindow_Icon((QWindow*)self);
}

void q_paintdevicewindow_destroy(void* self) {
    QWindow_Destroy((QWindow*)self);
}

bool q_paintdevicewindow_set_keyboard_grab_enabled(void* self, bool grab) {
    return QWindow_SetKeyboardGrabEnabled((QWindow*)self, grab);
}

bool q_paintdevicewindow_set_mouse_grab_enabled(void* self, bool grab) {
    return QWindow_SetMouseGrabEnabled((QWindow*)self, grab);
}

QScreen* q_paintdevicewindow_screen(void* self) {
    return QWindow_Screen((QWindow*)self);
}

void q_paintdevicewindow_set_screen(void* self, void* screen) {
    QWindow_SetScreen((QWindow*)self, (QScreen*)screen);
}

QAccessibleInterface* q_paintdevicewindow_accessible_root(void* self) {
    return QWindow_AccessibleRoot((QWindow*)self);
}

QObject* q_paintdevicewindow_focus_object(void* self) {
    return QWindow_FocusObject((QWindow*)self);
}

QPointF* q_paintdevicewindow_map_to_global(void* self, void* pos) {
    return QWindow_MapToGlobal((QWindow*)self, (QPointF*)pos);
}

QPointF* q_paintdevicewindow_map_from_global(void* self, void* pos) {
    return QWindow_MapFromGlobal((QWindow*)self, (QPointF*)pos);
}

QPoint* q_paintdevicewindow_map_to_global_with_pos(void* self, void* pos) {
    return QWindow_MapToGlobalWithPos((QWindow*)self, (QPoint*)pos);
}

QPoint* q_paintdevicewindow_map_from_global_with_pos(void* self, void* pos) {
    return QWindow_MapFromGlobalWithPos((QWindow*)self, (QPoint*)pos);
}

QCursor* q_paintdevicewindow_cursor(void* self) {
    return QWindow_Cursor((QWindow*)self);
}

void q_paintdevicewindow_set_cursor(void* self, void* cursor) {
    QWindow_SetCursor((QWindow*)self, (QCursor*)cursor);
}

void q_paintdevicewindow_unset_cursor(void* self) {
    QWindow_UnsetCursor((QWindow*)self);
}

QWindow* q_paintdevicewindow_from_win_id(uintptr_t id) {
    return QWindow_FromWinId(id);
}

void q_paintdevicewindow_request_activate(void* self) {
    QWindow_RequestActivate((QWindow*)self);
}

void q_paintdevicewindow_set_visible(void* self, bool visible) {
    QWindow_SetVisible((QWindow*)self, visible);
}

void q_paintdevicewindow_show(void* self) {
    QWindow_Show((QWindow*)self);
}

void q_paintdevicewindow_hide(void* self) {
    QWindow_Hide((QWindow*)self);
}

void q_paintdevicewindow_show_minimized(void* self) {
    QWindow_ShowMinimized((QWindow*)self);
}

void q_paintdevicewindow_show_maximized(void* self) {
    QWindow_ShowMaximized((QWindow*)self);
}

void q_paintdevicewindow_show_full_screen(void* self) {
    QWindow_ShowFullScreen((QWindow*)self);
}

void q_paintdevicewindow_show_normal(void* self) {
    QWindow_ShowNormal((QWindow*)self);
}

bool q_paintdevicewindow_close(void* self) {
    return QWindow_Close((QWindow*)self);
}

void q_paintdevicewindow_raise(void* self) {
    QWindow_Raise((QWindow*)self);
}

void q_paintdevicewindow_lower(void* self) {
    QWindow_Lower((QWindow*)self);
}

bool q_paintdevicewindow_start_system_resize(void* self, int64_t edges) {
    return QWindow_StartSystemResize((QWindow*)self, edges);
}

bool q_paintdevicewindow_start_system_move(void* self) {
    return QWindow_StartSystemMove((QWindow*)self);
}

void q_paintdevicewindow_set_title(void* self, const char* title) {
    QWindow_SetTitle((QWindow*)self, qstring(title));
}

void q_paintdevicewindow_set_x(void* self, int arg) {
    QWindow_SetX((QWindow*)self, arg);
}

void q_paintdevicewindow_set_y(void* self, int arg) {
    QWindow_SetY((QWindow*)self, arg);
}

void q_paintdevicewindow_set_width(void* self, int arg) {
    QWindow_SetWidth((QWindow*)self, arg);
}

void q_paintdevicewindow_set_height(void* self, int arg) {
    QWindow_SetHeight((QWindow*)self, arg);
}

void q_paintdevicewindow_set_geometry(void* self, int posx, int posy, int w, int h) {
    QWindow_SetGeometry((QWindow*)self, posx, posy, w, h);
}

void q_paintdevicewindow_set_geometry_with_rect(void* self, void* rect) {
    QWindow_SetGeometryWithRect((QWindow*)self, (QRect*)rect);
}

void q_paintdevicewindow_set_minimum_width(void* self, int w) {
    QWindow_SetMinimumWidth((QWindow*)self, w);
}

void q_paintdevicewindow_set_minimum_height(void* self, int h) {
    QWindow_SetMinimumHeight((QWindow*)self, h);
}

void q_paintdevicewindow_set_maximum_width(void* self, int w) {
    QWindow_SetMaximumWidth((QWindow*)self, w);
}

void q_paintdevicewindow_set_maximum_height(void* self, int h) {
    QWindow_SetMaximumHeight((QWindow*)self, h);
}

void q_paintdevicewindow_alert(void* self, int msec) {
    QWindow_Alert((QWindow*)self, msec);
}

void q_paintdevicewindow_request_update(void* self) {
    QWindow_RequestUpdate((QWindow*)self);
}

void q_paintdevicewindow_screen_changed(void* self, void* screen) {
    QWindow_ScreenChanged((QWindow*)self, (QScreen*)screen);
}

void q_paintdevicewindow_on_screen_changed(void* self, void (*slot)(void*, void*)) {
    QWindow_Connect_ScreenChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_modality_changed(void* self, int64_t modality) {
    QWindow_ModalityChanged((QWindow*)self, modality);
}

void q_paintdevicewindow_on_modality_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_ModalityChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_window_state_changed(void* self, int64_t windowState) {
    QWindow_WindowStateChanged((QWindow*)self, windowState);
}

void q_paintdevicewindow_on_window_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_WindowStateChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_window_title_changed(void* self, const char* title) {
    QWindow_WindowTitleChanged((QWindow*)self, qstring(title));
}

void q_paintdevicewindow_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWindow_Connect_WindowTitleChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_x_changed(void* self, int arg) {
    QWindow_XChanged((QWindow*)self, arg);
}

void q_paintdevicewindow_on_x_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_XChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_y_changed(void* self, int arg) {
    QWindow_YChanged((QWindow*)self, arg);
}

void q_paintdevicewindow_on_y_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_YChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_width_changed(void* self, int arg) {
    QWindow_WidthChanged((QWindow*)self, arg);
}

void q_paintdevicewindow_on_width_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_WidthChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_height_changed(void* self, int arg) {
    QWindow_HeightChanged((QWindow*)self, arg);
}

void q_paintdevicewindow_on_height_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_HeightChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_minimum_width_changed(void* self, int arg) {
    QWindow_MinimumWidthChanged((QWindow*)self, arg);
}

void q_paintdevicewindow_on_minimum_width_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MinimumWidthChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_minimum_height_changed(void* self, int arg) {
    QWindow_MinimumHeightChanged((QWindow*)self, arg);
}

void q_paintdevicewindow_on_minimum_height_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MinimumHeightChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_maximum_width_changed(void* self, int arg) {
    QWindow_MaximumWidthChanged((QWindow*)self, arg);
}

void q_paintdevicewindow_on_maximum_width_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MaximumWidthChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_maximum_height_changed(void* self, int arg) {
    QWindow_MaximumHeightChanged((QWindow*)self, arg);
}

void q_paintdevicewindow_on_maximum_height_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MaximumHeightChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_visible_changed(void* self, bool arg) {
    QWindow_VisibleChanged((QWindow*)self, arg);
}

void q_paintdevicewindow_on_visible_changed(void* self, void (*slot)(void*, bool)) {
    QWindow_Connect_VisibleChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_visibility_changed(void* self, int64_t visibility) {
    QWindow_VisibilityChanged((QWindow*)self, visibility);
}

void q_paintdevicewindow_on_visibility_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_VisibilityChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_active_changed(void* self) {
    QWindow_ActiveChanged((QWindow*)self);
}

void q_paintdevicewindow_on_active_changed(void* self, void (*slot)(void*)) {
    QWindow_Connect_ActiveChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_content_orientation_changed(void* self, int64_t orientation) {
    QWindow_ContentOrientationChanged((QWindow*)self, orientation);
}

void q_paintdevicewindow_on_content_orientation_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_ContentOrientationChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_focus_object_changed(void* self, void* object) {
    QWindow_FocusObjectChanged((QWindow*)self, (QObject*)object);
}

void q_paintdevicewindow_on_focus_object_changed(void* self, void (*slot)(void*, void*)) {
    QWindow_Connect_FocusObjectChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_opacity_changed(void* self, double opacity) {
    QWindow_OpacityChanged((QWindow*)self, opacity);
}

void q_paintdevicewindow_on_opacity_changed(void* self, void (*slot)(void*, double)) {
    QWindow_Connect_OpacityChanged((QWindow*)self, (intptr_t)slot);
}

void q_paintdevicewindow_transient_parent_changed(void* self, void* transientParent) {
    QWindow_TransientParentChanged((QWindow*)self, (QWindow*)transientParent);
}

void q_paintdevicewindow_on_transient_parent_changed(void* self, void (*slot)(void*, void*)) {
    QWindow_Connect_TransientParentChanged((QWindow*)self, (intptr_t)slot);
}

QWindow* q_paintdevicewindow_parent1(void* self, int64_t mode) {
    return QWindow_Parent1((QWindow*)self, mode);
}

void q_paintdevicewindow_set_flag2(void* self, int64_t param1, bool on) {
    QWindow_SetFlag2((QWindow*)self, param1, on);
}

bool q_paintdevicewindow_is_ancestor_of2(void* self, void* child, int64_t mode) {
    return QWindow_IsAncestorOf2((QWindow*)self, (QWindow*)child, mode);
}

bool q_paintdevicewindow_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_paintdevicewindow_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_paintdevicewindow_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_paintdevicewindow_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_paintdevicewindow_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_paintdevicewindow_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_paintdevicewindow_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_paintdevicewindow_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_paintdevicewindow_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_paintdevicewindow_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_paintdevicewindow_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_paintdevicewindow_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_paintdevicewindow_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_paintdevicewindow_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_paintdevicewindow_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_paintdevicewindow_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_paintdevicewindow_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_paintdevicewindow_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_paintdevicewindow_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_paintdevicewindow_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_paintdevicewindow_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_paintdevicewindow_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_paintdevicewindow_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_paintdevicewindow_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_paintdevicewindow_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_paintdevicewindow_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_paintdevicewindow_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_paintdevicewindow_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

bool q_paintdevicewindow_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_paintdevicewindow_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_paintdevicewindow_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_paintdevicewindow_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_paintdevicewindow_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_paintdevicewindow_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_paintdevicewindow_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

int64_t q_paintdevicewindow_surface_class(void* self) {
    return QSurface_SurfaceClass((QSurface*)self);
}

bool q_paintdevicewindow_supports_open_g_l(void* self) {
    return QSurface_SupportsOpenGL((QSurface*)self);
}

int32_t q_paintdevicewindow_dev_type(void* self) {
    return QPaintDevice_DevType((QPaintDevice*)self);
}

bool q_paintdevicewindow_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

QPaintEngine* q_paintdevicewindow_paint_engine(void* self) {
    return QPaintDevice_PaintEngine((QPaintDevice*)self);
}

int32_t q_paintdevicewindow_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_paintdevicewindow_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_paintdevicewindow_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_paintdevicewindow_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_paintdevicewindow_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_paintdevicewindow_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_paintdevicewindow_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_paintdevicewindow_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_paintdevicewindow_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_paintdevicewindow_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

void q_paintdevicewindow_delete(void* self) {
    QPaintDeviceWindow_Delete((QPaintDeviceWindow*)(self));
}
