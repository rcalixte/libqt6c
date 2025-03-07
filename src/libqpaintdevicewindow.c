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

/// https://doc.qt.io/qt-6/qpaintdevicewindow.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPaintDeviceWindow* self ```
QMetaObject* q_paintdevicewindow_meta_object(void* self) {
    return QPaintDeviceWindow_MetaObject((QPaintDeviceWindow*)self);
}

/// ``` QPaintDeviceWindow* self, const char* param1 ```
void* q_paintdevicewindow_metacast(void* self, const char* param1) {
    return QPaintDeviceWindow_Metacast((QPaintDeviceWindow*)self, param1);
}

/// ``` QPaintDeviceWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_paintdevicewindow_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPaintDeviceWindow_Metacall((QPaintDeviceWindow*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_paintdevicewindow_tr(const char* s) {
    libqt_string _str = QPaintDeviceWindow_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// ``` QPaintDeviceWindow* self, QRect* rect ```
void q_paintdevicewindow_update(void* self, void* rect) {
    QPaintDeviceWindow_Update((QPaintDeviceWindow*)self, (QRect*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// ``` QPaintDeviceWindow* self, QRegion* region ```
void q_paintdevicewindow_update_with_region(void* self, void* region) {
    QPaintDeviceWindow_UpdateWithRegion((QPaintDeviceWindow*)self, (QRegion*)region);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_update2(void* self) {
    QPaintDeviceWindow_Update2((QPaintDeviceWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_paintdevicewindow_tr2(const char* s, const char* c) {
    libqt_string _str = QPaintDeviceWindow_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_paintdevicewindow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPaintDeviceWindow_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
///
/// ``` QPaintDeviceWindow* self, enum QSurface__SurfaceType surfaceType ```
void q_paintdevicewindow_set_surface_type(void* self, int64_t surfaceType) {
    QWindow_SetSurfaceType((QWindow*)self, surfaceType);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_surface_type(void* self) {
    return QWindow_SurfaceType((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isVisible)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_visible(void* self) {
    return QWindow_IsVisible((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibility)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_visibility(void* self) {
    return QWindow_Visibility((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
///
/// ``` QPaintDeviceWindow* self, enum QWindow__Visibility v ```
void q_paintdevicewindow_set_visibility(void* self, int64_t v) {
    QWindow_SetVisibility((QWindow*)self, v);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#create)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_create(void* self) {
    QWindow_Create((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#winId)
///
/// ``` QPaintDeviceWindow* self ```
uintptr_t q_paintdevicewindow_win_id(void* self) {
    return QWindow_WinId((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// ``` QPaintDeviceWindow* self ```
QWindow* q_paintdevicewindow_parent(void* self) {
    return QWindow_Parent((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setParent)
///
/// ``` QPaintDeviceWindow* self, QWindow* parent ```
void q_paintdevicewindow_set_parent(void* self, void* parent) {
    QWindow_SetParent((QWindow*)self, (QWindow*)parent);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_top_level(void* self) {
    return QWindow_IsTopLevel((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isModal)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_modal(void* self) {
    return QWindow_IsModal((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modality)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_modality(void* self) {
    return QWindow_Modality((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setModality)
///
/// ``` QPaintDeviceWindow* self, enum Qt__WindowModality modality ```
void q_paintdevicewindow_set_modality(void* self, int64_t modality) {
    QWindow_SetModality((QWindow*)self, modality);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFormat)
///
/// ``` QPaintDeviceWindow* self, QSurfaceFormat* format ```
void q_paintdevicewindow_set_format(void* self, void* format) {
    QWindow_SetFormat((QWindow*)self, (QSurfaceFormat*)format);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// ``` QPaintDeviceWindow* self ```
QSurfaceFormat* q_paintdevicewindow_format(void* self) {
    return QWindow_Format((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
///
/// ``` QPaintDeviceWindow* self ```
QSurfaceFormat* q_paintdevicewindow_requested_format(void* self) {
    return QWindow_RequestedFormat((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlags)
///
/// ``` QPaintDeviceWindow* self, int flags ```
void q_paintdevicewindow_set_flags(void* self, int64_t flags) {
    QWindow_SetFlags((QWindow*)self, flags);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#flags)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_flags(void* self) {
    return QWindow_Flags((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// ``` QPaintDeviceWindow* self, enum Qt__WindowType param1 ```
void q_paintdevicewindow_set_flag(void* self, int64_t param1) {
    QWindow_SetFlag((QWindow*)self, param1);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#type)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_type(void* self) {
    return QWindow_Type((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#title)
///
/// ``` QPaintDeviceWindow* self ```
const char* q_paintdevicewindow_title(void* self) {
    libqt_string _str = QWindow_Title((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
///
/// ``` QPaintDeviceWindow* self, double level ```
void q_paintdevicewindow_set_opacity(void* self, double level) {
    QWindow_SetOpacity((QWindow*)self, level);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacity)
///
/// ``` QPaintDeviceWindow* self ```
double q_paintdevicewindow_opacity(void* self) {
    return QWindow_Opacity((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMask)
///
/// ``` QPaintDeviceWindow* self, QRegion* region ```
void q_paintdevicewindow_set_mask(void* self, void* region) {
    QWindow_SetMask((QWindow*)self, (QRegion*)region);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mask)
///
/// ``` QPaintDeviceWindow* self ```
QRegion* q_paintdevicewindow_mask(void* self) {
    return QWindow_Mask((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isActive)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_active(void* self) {
    return QWindow_IsActive((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
///
/// ``` QPaintDeviceWindow* self, enum Qt__ScreenOrientation orientation ```
void q_paintdevicewindow_report_content_orientation_change(void* self, int64_t orientation) {
    QWindow_ReportContentOrientationChange((QWindow*)self, orientation);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_content_orientation(void* self) {
    return QWindow_ContentOrientation((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
///
/// ``` QPaintDeviceWindow* self ```
double q_paintdevicewindow_device_pixel_ratio(void* self) {
    return QWindow_DevicePixelRatio((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowState)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_window_state(void* self) {
    return QWindow_WindowState((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStates)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_window_states(void* self) {
    return QWindow_WindowStates((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
///
/// ``` QPaintDeviceWindow* self, enum Qt__WindowState state ```
void q_paintdevicewindow_set_window_state(void* self, int64_t state) {
    QWindow_SetWindowState((QWindow*)self, state);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
///
/// ``` QPaintDeviceWindow* self, int states ```
void q_paintdevicewindow_set_window_states(void* self, int64_t states) {
    QWindow_SetWindowStates((QWindow*)self, states);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
///
/// ``` QPaintDeviceWindow* self, QWindow* parent ```
void q_paintdevicewindow_set_transient_parent(void* self, void* parent) {
    QWindow_SetTransientParent((QWindow*)self, (QWindow*)parent);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParent)
///
/// ``` QPaintDeviceWindow* self ```
QWindow* q_paintdevicewindow_transient_parent(void* self) {
    return QWindow_TransientParent((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// ``` QPaintDeviceWindow* self, QWindow* child ```
bool q_paintdevicewindow_is_ancestor_of(void* self, void* child) {
    return QWindow_IsAncestorOf((QWindow*)self, (QWindow*)child);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isExposed)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_exposed(void* self) {
    return QWindow_IsExposed((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_minimum_width(void* self) {
    return QWindow_MinimumWidth((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_minimum_height(void* self) {
    return QWindow_MinimumHeight((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_maximum_width(void* self) {
    return QWindow_MaximumWidth((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_maximum_height(void* self) {
    return QWindow_MaximumHeight((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
///
/// ``` QPaintDeviceWindow* self ```
QSize* q_paintdevicewindow_minimum_size(void* self) {
    return QWindow_MinimumSize((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
///
/// ``` QPaintDeviceWindow* self ```
QSize* q_paintdevicewindow_maximum_size(void* self) {
    return QWindow_MaximumSize((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#baseSize)
///
/// ``` QPaintDeviceWindow* self ```
QSize* q_paintdevicewindow_base_size(void* self) {
    return QWindow_BaseSize((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
///
/// ``` QPaintDeviceWindow* self ```
QSize* q_paintdevicewindow_size_increment(void* self) {
    return QWindow_SizeIncrement((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
///
/// ``` QPaintDeviceWindow* self, QSize* size ```
void q_paintdevicewindow_set_minimum_size(void* self, void* size) {
    QWindow_SetMinimumSize((QWindow*)self, (QSize*)size);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
///
/// ``` QPaintDeviceWindow* self, QSize* size ```
void q_paintdevicewindow_set_maximum_size(void* self, void* size) {
    QWindow_SetMaximumSize((QWindow*)self, (QSize*)size);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
///
/// ``` QPaintDeviceWindow* self, QSize* size ```
void q_paintdevicewindow_set_base_size(void* self, void* size) {
    QWindow_SetBaseSize((QWindow*)self, (QSize*)size);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
///
/// ``` QPaintDeviceWindow* self, QSize* size ```
void q_paintdevicewindow_set_size_increment(void* self, void* size) {
    QWindow_SetSizeIncrement((QWindow*)self, (QSize*)size);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#geometry)
///
/// ``` QPaintDeviceWindow* self ```
QRect* q_paintdevicewindow_geometry(void* self) {
    return QWindow_Geometry((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
///
/// ``` QPaintDeviceWindow* self ```
QMargins* q_paintdevicewindow_frame_margins(void* self) {
    return QWindow_FrameMargins((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
///
/// ``` QPaintDeviceWindow* self ```
QRect* q_paintdevicewindow_frame_geometry(void* self) {
    return QWindow_FrameGeometry((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#framePosition)
///
/// ``` QPaintDeviceWindow* self ```
QPoint* q_paintdevicewindow_frame_position(void* self) {
    return QWindow_FramePosition((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
///
/// ``` QPaintDeviceWindow* self, QPoint* point ```
void q_paintdevicewindow_set_frame_position(void* self, void* point) {
    QWindow_SetFramePosition((QWindow*)self, (QPoint*)point);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#width)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_width(void* self) {
    return QWindow_Width((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#height)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_height(void* self) {
    return QWindow_Height((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#x)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_x(void* self) {
    return QWindow_X((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#y)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_y(void* self) {
    return QWindow_Y((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// ``` QPaintDeviceWindow* self ```
QSize* q_paintdevicewindow_size(void* self) {
    return QWindow_Size((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#position)
///
/// ``` QPaintDeviceWindow* self ```
QPoint* q_paintdevicewindow_position(void* self) {
    return QWindow_Position((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// ``` QPaintDeviceWindow* self, QPoint* pt ```
void q_paintdevicewindow_set_position(void* self, void* pt) {
    QWindow_SetPosition((QWindow*)self, (QPoint*)pt);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// ``` QPaintDeviceWindow* self, int posx, int posy ```
void q_paintdevicewindow_set_position2(void* self, int posx, int posy) {
    QWindow_SetPosition2((QWindow*)self, posx, posy);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// ``` QPaintDeviceWindow* self, QSize* newSize ```
void q_paintdevicewindow_resize(void* self, void* newSize) {
    QWindow_Resize((QWindow*)self, (QSize*)newSize);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// ``` QPaintDeviceWindow* self, int w, int h ```
void q_paintdevicewindow_resize2(void* self, int w, int h) {
    QWindow_Resize2((QWindow*)self, w, h);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
///
/// ``` QPaintDeviceWindow* self, const char* filePath ```
void q_paintdevicewindow_set_file_path(void* self, const char* filePath) {
    QWindow_SetFilePath((QWindow*)self, qstring(filePath));
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#filePath)
///
/// ``` QPaintDeviceWindow* self ```
const char* q_paintdevicewindow_file_path(void* self) {
    libqt_string _str = QWindow_FilePath((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setIcon)
///
/// ``` QPaintDeviceWindow* self, QIcon* icon ```
void q_paintdevicewindow_set_icon(void* self, void* icon) {
    QWindow_SetIcon((QWindow*)self, (QIcon*)icon);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#icon)
///
/// ``` QPaintDeviceWindow* self ```
QIcon* q_paintdevicewindow_icon(void* self) {
    return QWindow_Icon((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#destroy)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_destroy(void* self) {
    QWindow_Destroy((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
///
/// ``` QPaintDeviceWindow* self, bool grab ```
bool q_paintdevicewindow_set_keyboard_grab_enabled(void* self, bool grab) {
    return QWindow_SetKeyboardGrabEnabled((QWindow*)self, grab);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
///
/// ``` QPaintDeviceWindow* self, bool grab ```
bool q_paintdevicewindow_set_mouse_grab_enabled(void* self, bool grab) {
    return QWindow_SetMouseGrabEnabled((QWindow*)self, grab);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screen)
///
/// ``` QPaintDeviceWindow* self ```
QScreen* q_paintdevicewindow_screen(void* self) {
    return QWindow_Screen((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setScreen)
///
/// ``` QPaintDeviceWindow* self, QScreen* screen ```
void q_paintdevicewindow_set_screen(void* self, void* screen) {
    QWindow_SetScreen((QWindow*)self, (QScreen*)screen);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// ``` QPaintDeviceWindow* self ```
QAccessibleInterface* q_paintdevicewindow_accessible_root(void* self) {
    return QWindow_AccessibleRoot((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// ``` QPaintDeviceWindow* self ```
QObject* q_paintdevicewindow_focus_object(void* self) {
    return QWindow_FocusObject((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// ``` QPaintDeviceWindow* self, QPointF* pos ```
QPointF* q_paintdevicewindow_map_to_global(void* self, void* pos) {
    return QWindow_MapToGlobal((QWindow*)self, (QPointF*)pos);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// ``` QPaintDeviceWindow* self, QPointF* pos ```
QPointF* q_paintdevicewindow_map_from_global(void* self, void* pos) {
    return QWindow_MapFromGlobal((QWindow*)self, (QPointF*)pos);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// ``` QPaintDeviceWindow* self, QPoint* pos ```
QPoint* q_paintdevicewindow_map_to_global_with_pos(void* self, void* pos) {
    return QWindow_MapToGlobalWithPos((QWindow*)self, (QPoint*)pos);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// ``` QPaintDeviceWindow* self, QPoint* pos ```
QPoint* q_paintdevicewindow_map_from_global_with_pos(void* self, void* pos) {
    return QWindow_MapFromGlobalWithPos((QWindow*)self, (QPoint*)pos);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#cursor)
///
/// ``` QPaintDeviceWindow* self ```
QCursor* q_paintdevicewindow_cursor(void* self) {
    return QWindow_Cursor((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setCursor)
///
/// ``` QPaintDeviceWindow* self, QCursor* cursor ```
void q_paintdevicewindow_set_cursor(void* self, void* cursor) {
    QWindow_SetCursor((QWindow*)self, (QCursor*)cursor);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_unset_cursor(void* self) {
    QWindow_UnsetCursor((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
///
/// ``` uintptr_t id ```
QWindow* q_paintdevicewindow_from_win_id(uintptr_t id) {
    return QWindow_FromWinId(id);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_request_activate(void* self) {
    QWindow_RequestActivate((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisible)
///
/// ``` QPaintDeviceWindow* self, bool visible ```
void q_paintdevicewindow_set_visible(void* self, bool visible) {
    QWindow_SetVisible((QWindow*)self, visible);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#show)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_show(void* self) {
    QWindow_Show((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hide)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_hide(void* self) {
    QWindow_Hide((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_show_minimized(void* self) {
    QWindow_ShowMinimized((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_show_maximized(void* self) {
    QWindow_ShowMaximized((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_show_full_screen(void* self) {
    QWindow_ShowFullScreen((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showNormal)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_show_normal(void* self) {
    QWindow_ShowNormal((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#close)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_close(void* self) {
    return QWindow_Close((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#raise)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_raise(void* self) {
    QWindow_Raise((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#lower)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_lower(void* self) {
    QWindow_Lower((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
///
/// ``` QPaintDeviceWindow* self, int edges ```
bool q_paintdevicewindow_start_system_resize(void* self, int64_t edges) {
    return QWindow_StartSystemResize((QWindow*)self, edges);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_start_system_move(void* self) {
    return QWindow_StartSystemMove((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTitle)
///
/// ``` QPaintDeviceWindow* self, const char* title ```
void q_paintdevicewindow_set_title(void* self, const char* title) {
    QWindow_SetTitle((QWindow*)self, qstring(title));
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setX)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_set_x(void* self, int arg) {
    QWindow_SetX((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setY)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_set_y(void* self, int arg) {
    QWindow_SetY((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWidth)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_set_width(void* self, int arg) {
    QWindow_SetWidth((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setHeight)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_set_height(void* self, int arg) {
    QWindow_SetHeight((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// ``` QPaintDeviceWindow* self, int posx, int posy, int w, int h ```
void q_paintdevicewindow_set_geometry(void* self, int posx, int posy, int w, int h) {
    QWindow_SetGeometry((QWindow*)self, posx, posy, w, h);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// ``` QPaintDeviceWindow* self, QRect* rect ```
void q_paintdevicewindow_set_geometry_with_rect(void* self, void* rect) {
    QWindow_SetGeometryWithRect((QWindow*)self, (QRect*)rect);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
///
/// ``` QPaintDeviceWindow* self, int w ```
void q_paintdevicewindow_set_minimum_width(void* self, int w) {
    QWindow_SetMinimumWidth((QWindow*)self, w);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
///
/// ``` QPaintDeviceWindow* self, int h ```
void q_paintdevicewindow_set_minimum_height(void* self, int h) {
    QWindow_SetMinimumHeight((QWindow*)self, h);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
///
/// ``` QPaintDeviceWindow* self, int w ```
void q_paintdevicewindow_set_maximum_width(void* self, int w) {
    QWindow_SetMaximumWidth((QWindow*)self, w);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
///
/// ``` QPaintDeviceWindow* self, int h ```
void q_paintdevicewindow_set_maximum_height(void* self, int h) {
    QWindow_SetMaximumHeight((QWindow*)self, h);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#alert)
///
/// ``` QPaintDeviceWindow* self, int msec ```
void q_paintdevicewindow_alert(void* self, int msec) {
    QWindow_Alert((QWindow*)self, msec);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_request_update(void* self) {
    QWindow_RequestUpdate((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// ``` QPaintDeviceWindow* self, QScreen* screen ```
void q_paintdevicewindow_screen_changed(void* self, void* screen) {
    QWindow_ScreenChanged((QWindow*)self, (QScreen*)screen);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, QScreen*) ```
void q_paintdevicewindow_on_screen_changed(void* self, void (*slot)(void*, void*)) {
    QWindow_Connect_ScreenChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// ``` QPaintDeviceWindow* self, enum Qt__WindowModality modality ```
void q_paintdevicewindow_modality_changed(void* self, int64_t modality) {
    QWindow_ModalityChanged((QWindow*)self, modality);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, enum Qt__WindowModality) ```
void q_paintdevicewindow_on_modality_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_ModalityChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// ``` QPaintDeviceWindow* self, enum Qt__WindowState windowState ```
void q_paintdevicewindow_window_state_changed(void* self, int64_t windowState) {
    QWindow_WindowStateChanged((QWindow*)self, windowState);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, enum Qt__WindowState) ```
void q_paintdevicewindow_on_window_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_WindowStateChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// ``` QPaintDeviceWindow* self, const char* title ```
void q_paintdevicewindow_window_title_changed(void* self, const char* title) {
    QWindow_WindowTitleChanged((QWindow*)self, qstring(title));
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, const char*) ```
void q_paintdevicewindow_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWindow_Connect_WindowTitleChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_x_changed(void* self, int arg) {
    QWindow_XChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_x_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_XChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_y_changed(void* self, int arg) {
    QWindow_YChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_y_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_YChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_width_changed(void* self, int arg) {
    QWindow_WidthChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_width_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_WidthChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_height_changed(void* self, int arg) {
    QWindow_HeightChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_height_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_HeightChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_minimum_width_changed(void* self, int arg) {
    QWindow_MinimumWidthChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_minimum_width_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MinimumWidthChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_minimum_height_changed(void* self, int arg) {
    QWindow_MinimumHeightChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_minimum_height_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MinimumHeightChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_maximum_width_changed(void* self, int arg) {
    QWindow_MaximumWidthChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_maximum_width_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MaximumWidthChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// ``` QPaintDeviceWindow* self, int arg ```
void q_paintdevicewindow_maximum_height_changed(void* self, int arg) {
    QWindow_MaximumHeightChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, int) ```
void q_paintdevicewindow_on_maximum_height_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MaximumHeightChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// ``` QPaintDeviceWindow* self, bool arg ```
void q_paintdevicewindow_visible_changed(void* self, bool arg) {
    QWindow_VisibleChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, bool) ```
void q_paintdevicewindow_on_visible_changed(void* self, void (*slot)(void*, bool)) {
    QWindow_Connect_VisibleChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// ``` QPaintDeviceWindow* self, enum QWindow__Visibility visibility ```
void q_paintdevicewindow_visibility_changed(void* self, int64_t visibility) {
    QWindow_VisibilityChanged((QWindow*)self, visibility);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, enum QWindow__Visibility) ```
void q_paintdevicewindow_on_visibility_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_VisibilityChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_active_changed(void* self) {
    QWindow_ActiveChanged((QWindow*)self);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*) ```
void q_paintdevicewindow_on_active_changed(void* self, void (*slot)(void*)) {
    QWindow_Connect_ActiveChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// ``` QPaintDeviceWindow* self, enum Qt__ScreenOrientation orientation ```
void q_paintdevicewindow_content_orientation_changed(void* self, int64_t orientation) {
    QWindow_ContentOrientationChanged((QWindow*)self, orientation);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, enum Qt__ScreenOrientation) ```
void q_paintdevicewindow_on_content_orientation_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_ContentOrientationChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// ``` QPaintDeviceWindow* self, QObject* object ```
void q_paintdevicewindow_focus_object_changed(void* self, void* object) {
    QWindow_FocusObjectChanged((QWindow*)self, (QObject*)object);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, QObject*) ```
void q_paintdevicewindow_on_focus_object_changed(void* self, void (*slot)(void*, void*)) {
    QWindow_Connect_FocusObjectChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// ``` QPaintDeviceWindow* self, double opacity ```
void q_paintdevicewindow_opacity_changed(void* self, double opacity) {
    QWindow_OpacityChanged((QWindow*)self, opacity);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, double) ```
void q_paintdevicewindow_on_opacity_changed(void* self, void (*slot)(void*, double)) {
    QWindow_Connect_OpacityChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// ``` QPaintDeviceWindow* self, QWindow* transientParent ```
void q_paintdevicewindow_transient_parent_changed(void* self, void* transientParent) {
    QWindow_TransientParentChanged((QWindow*)self, (QWindow*)transientParent);
}

/// Inherited from QWindow
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QWindow*, QWindow*) ```
void q_paintdevicewindow_on_transient_parent_changed(void* self, void (*slot)(void*, void*)) {
    QWindow_Connect_TransientParentChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// ``` QPaintDeviceWindow* self, enum QWindow__AncestorMode mode ```
QWindow* q_paintdevicewindow_parent1(void* self, int64_t mode) {
    return QWindow_Parent1((QWindow*)self, mode);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// ``` QPaintDeviceWindow* self, enum Qt__WindowType param1, bool on ```
void q_paintdevicewindow_set_flag2(void* self, int64_t param1, bool on) {
    QWindow_SetFlag2((QWindow*)self, param1, on);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// ``` QPaintDeviceWindow* self, QWindow* child, enum QWindow__AncestorMode mode ```
bool q_paintdevicewindow_is_ancestor_of2(void* self, void* child, int64_t mode) {
    return QWindow_IsAncestorOf2((QWindow*)self, (QWindow*)child, mode);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QPaintDeviceWindow* self, QObject* watched, QEvent* event ```
bool q_paintdevicewindow_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPaintDeviceWindow* self ```
const char* q_paintdevicewindow_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPaintDeviceWindow* self, const char* name ```
void q_paintdevicewindow_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPaintDeviceWindow* self, bool b ```
bool q_paintdevicewindow_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPaintDeviceWindow* self ```
QThread* q_paintdevicewindow_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPaintDeviceWindow* self, QThread* thread ```
void q_paintdevicewindow_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPaintDeviceWindow* self, int interval ```
int32_t q_paintdevicewindow_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPaintDeviceWindow* self, int id ```
void q_paintdevicewindow_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPaintDeviceWindow* self ```
libqt_list /* of QObject* */ q_paintdevicewindow_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPaintDeviceWindow* self, QObject* filterObj ```
void q_paintdevicewindow_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPaintDeviceWindow* self, QObject* obj ```
void q_paintdevicewindow_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_paintdevicewindow_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPaintDeviceWindow* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_paintdevicewindow_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_paintdevicewindow_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_paintdevicewindow_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPaintDeviceWindow* self, const char* name, QVariant* value ```
bool q_paintdevicewindow_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPaintDeviceWindow* self, const char* name ```
QVariant* q_paintdevicewindow_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPaintDeviceWindow* self ```
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

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPaintDeviceWindow* self ```
QBindingStorage* q_paintdevicewindow_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPaintDeviceWindow* self ```
QBindingStorage* q_paintdevicewindow_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QObject*) ```
void q_paintdevicewindow_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPaintDeviceWindow* self, const char* classname ```
bool q_paintdevicewindow_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPaintDeviceWindow* self, int interval, enum Qt__TimerType timerType ```
int32_t q_paintdevicewindow_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_paintdevicewindow_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPaintDeviceWindow* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_paintdevicewindow_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPaintDeviceWindow* self, QObject* param1 ```
void q_paintdevicewindow_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPaintDeviceWindow* self, void (*slot)(QObject*, QObject*) ```
void q_paintdevicewindow_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// ``` QPaintDeviceWindow* self ```
int64_t q_paintdevicewindow_surface_class(void* self) {
    return QSurface_SurfaceClass((QSurface*)self);
}

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_supports_open_g_l(void* self) {
    return QSurface_SupportsOpenGL((QSurface*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_dev_type(void* self) {
    return QPaintDevice_DevType((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPaintDeviceWindow* self ```
bool q_paintdevicewindow_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
///
/// ``` QPaintDeviceWindow* self ```
QPaintEngine* q_paintdevicewindow_paint_engine(void* self) {
    return QPaintDevice_PaintEngine((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPaintDeviceWindow* self ```
double q_paintdevicewindow_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPaintDeviceWindow* self ```
int32_t q_paintdevicewindow_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_paintdevicewindow_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Delete this object from C++ memory.
///
/// ``` QPaintDeviceWindow* self ```
void q_paintdevicewindow_delete(void* self) {
    QPaintDeviceWindow_Delete((QPaintDeviceWindow*)(self));
}