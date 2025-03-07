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
#include "libqpaintdevicewindow.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
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
#include "libqrasterwindow.hpp"
#include "libqrasterwindow.h"

/// https://doc.qt.io/qt-6/qrasterwindow.html

/// q_rasterwindow_new constructs a new QRasterWindow object.
///
///
QRasterWindow* q_rasterwindow_new() {
    return QRasterWindow_new();
}

/// q_rasterwindow_new2 constructs a new QRasterWindow object.
///
/// ``` QWindow* parent ```
QRasterWindow* q_rasterwindow_new2(void* parent) {
    return QRasterWindow_new2((QWindow*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QRasterWindow* self ```
QMetaObject* q_rasterwindow_meta_object(void* self) {
    return QRasterWindow_MetaObject((QRasterWindow*)self);
}

/// ``` QRasterWindow* self, const char* param1 ```
void* q_rasterwindow_metacast(void* self, const char* param1) {
    return QRasterWindow_Metacast((QRasterWindow*)self, param1);
}

/// ``` QRasterWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_rasterwindow_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QRasterWindow_Metacall((QRasterWindow*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QRasterWindow* self, int32_t (*slot)(QRasterWindow*, enum QMetaObject__Call, int, void*) ```
void q_rasterwindow_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QRasterWindow_OnMetacall((QRasterWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRasterWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_rasterwindow_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QRasterWindow_QBaseMetacall((QRasterWindow*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_rasterwindow_tr(const char* s) {
    libqt_string _str = QRasterWindow_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#metric)
///
/// ``` QRasterWindow* self, enum QPaintDevice__PaintDeviceMetric metric ```
int32_t q_rasterwindow_metric(void* self, int64_t metric) {
    return QRasterWindow_Metric((QRasterWindow*)self, metric);
}

/// Allows for overriding the related default method
///
/// ``` QRasterWindow* self, int32_t (*slot)(QRasterWindow*, enum QPaintDevice__PaintDeviceMetric) ```
void q_rasterwindow_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QRasterWindow_OnMetric((QRasterWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRasterWindow* self, enum QPaintDevice__PaintDeviceMetric metric ```
int32_t q_rasterwindow_qbase_metric(void* self, int64_t metric) {
    return QRasterWindow_QBaseMetric((QRasterWindow*)self, metric);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrasterwindow.html#redirected)
///
/// ``` QRasterWindow* self, QPoint* param1 ```
QPaintDevice* q_rasterwindow_redirected(void* self, void* param1) {
    return QRasterWindow_Redirected((QRasterWindow*)self, (QPoint*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QRasterWindow* self, QPaintDevice* (*slot)(QRasterWindow*, QPoint*) ```
void q_rasterwindow_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QRasterWindow_OnRedirected((QRasterWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRasterWindow* self, QPoint* param1 ```
QPaintDevice* q_rasterwindow_qbase_redirected(void* self, void* param1) {
    return QRasterWindow_QBaseRedirected((QRasterWindow*)self, (QPoint*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_rasterwindow_tr2(const char* s, const char* c) {
    libqt_string _str = QRasterWindow_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_rasterwindow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QRasterWindow_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// ``` QRasterWindow* self, QRect* rect ```
void q_rasterwindow_update(void* self, void* rect) {
    QPaintDeviceWindow_Update((QPaintDeviceWindow*)self, (QRect*)rect);
}

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// ``` QRasterWindow* self, QRegion* region ```
void q_rasterwindow_update_with_region(void* self, void* region) {
    QPaintDeviceWindow_UpdateWithRegion((QPaintDeviceWindow*)self, (QRegion*)region);
}

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#update)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_update2(void* self) {
    QPaintDeviceWindow_Update2((QPaintDeviceWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
///
/// ``` QRasterWindow* self, enum QSurface__SurfaceType surfaceType ```
void q_rasterwindow_set_surface_type(void* self, int64_t surfaceType) {
    QWindow_SetSurfaceType((QWindow*)self, surfaceType);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isVisible)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_visible(void* self) {
    return QWindow_IsVisible((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibility)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_visibility(void* self) {
    return QWindow_Visibility((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
///
/// ``` QRasterWindow* self, enum QWindow__Visibility v ```
void q_rasterwindow_set_visibility(void* self, int64_t v) {
    QWindow_SetVisibility((QWindow*)self, v);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#create)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_create(void* self) {
    QWindow_Create((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#winId)
///
/// ``` QRasterWindow* self ```
uintptr_t q_rasterwindow_win_id(void* self) {
    return QWindow_WinId((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// ``` QRasterWindow* self ```
QWindow* q_rasterwindow_parent(void* self) {
    return QWindow_Parent((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setParent)
///
/// ``` QRasterWindow* self, QWindow* parent ```
void q_rasterwindow_set_parent(void* self, void* parent) {
    QWindow_SetParent((QWindow*)self, (QWindow*)parent);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_top_level(void* self) {
    return QWindow_IsTopLevel((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isModal)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_modal(void* self) {
    return QWindow_IsModal((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modality)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_modality(void* self) {
    return QWindow_Modality((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setModality)
///
/// ``` QRasterWindow* self, enum Qt__WindowModality modality ```
void q_rasterwindow_set_modality(void* self, int64_t modality) {
    QWindow_SetModality((QWindow*)self, modality);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFormat)
///
/// ``` QRasterWindow* self, QSurfaceFormat* format ```
void q_rasterwindow_set_format(void* self, void* format) {
    QWindow_SetFormat((QWindow*)self, (QSurfaceFormat*)format);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
///
/// ``` QRasterWindow* self ```
QSurfaceFormat* q_rasterwindow_requested_format(void* self) {
    return QWindow_RequestedFormat((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlags)
///
/// ``` QRasterWindow* self, int flags ```
void q_rasterwindow_set_flags(void* self, int64_t flags) {
    QWindow_SetFlags((QWindow*)self, flags);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#flags)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_flags(void* self) {
    return QWindow_Flags((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// ``` QRasterWindow* self, enum Qt__WindowType param1 ```
void q_rasterwindow_set_flag(void* self, int64_t param1) {
    QWindow_SetFlag((QWindow*)self, param1);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#type)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_type(void* self) {
    return QWindow_Type((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#title)
///
/// ``` QRasterWindow* self ```
const char* q_rasterwindow_title(void* self) {
    libqt_string _str = QWindow_Title((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
///
/// ``` QRasterWindow* self, double level ```
void q_rasterwindow_set_opacity(void* self, double level) {
    QWindow_SetOpacity((QWindow*)self, level);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacity)
///
/// ``` QRasterWindow* self ```
double q_rasterwindow_opacity(void* self) {
    return QWindow_Opacity((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMask)
///
/// ``` QRasterWindow* self, QRegion* region ```
void q_rasterwindow_set_mask(void* self, void* region) {
    QWindow_SetMask((QWindow*)self, (QRegion*)region);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mask)
///
/// ``` QRasterWindow* self ```
QRegion* q_rasterwindow_mask(void* self) {
    return QWindow_Mask((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isActive)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_active(void* self) {
    return QWindow_IsActive((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
///
/// ``` QRasterWindow* self, enum Qt__ScreenOrientation orientation ```
void q_rasterwindow_report_content_orientation_change(void* self, int64_t orientation) {
    QWindow_ReportContentOrientationChange((QWindow*)self, orientation);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_content_orientation(void* self) {
    return QWindow_ContentOrientation((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
///
/// ``` QRasterWindow* self ```
double q_rasterwindow_device_pixel_ratio(void* self) {
    return QWindow_DevicePixelRatio((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowState)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_window_state(void* self) {
    return QWindow_WindowState((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStates)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_window_states(void* self) {
    return QWindow_WindowStates((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
///
/// ``` QRasterWindow* self, enum Qt__WindowState state ```
void q_rasterwindow_set_window_state(void* self, int64_t state) {
    QWindow_SetWindowState((QWindow*)self, state);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
///
/// ``` QRasterWindow* self, int states ```
void q_rasterwindow_set_window_states(void* self, int64_t states) {
    QWindow_SetWindowStates((QWindow*)self, states);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
///
/// ``` QRasterWindow* self, QWindow* parent ```
void q_rasterwindow_set_transient_parent(void* self, void* parent) {
    QWindow_SetTransientParent((QWindow*)self, (QWindow*)parent);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParent)
///
/// ``` QRasterWindow* self ```
QWindow* q_rasterwindow_transient_parent(void* self) {
    return QWindow_TransientParent((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// ``` QRasterWindow* self, QWindow* child ```
bool q_rasterwindow_is_ancestor_of(void* self, void* child) {
    return QWindow_IsAncestorOf((QWindow*)self, (QWindow*)child);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isExposed)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_exposed(void* self) {
    return QWindow_IsExposed((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_minimum_width(void* self) {
    return QWindow_MinimumWidth((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_minimum_height(void* self) {
    return QWindow_MinimumHeight((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_maximum_width(void* self) {
    return QWindow_MaximumWidth((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_maximum_height(void* self) {
    return QWindow_MaximumHeight((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
///
/// ``` QRasterWindow* self ```
QSize* q_rasterwindow_minimum_size(void* self) {
    return QWindow_MinimumSize((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
///
/// ``` QRasterWindow* self ```
QSize* q_rasterwindow_maximum_size(void* self) {
    return QWindow_MaximumSize((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#baseSize)
///
/// ``` QRasterWindow* self ```
QSize* q_rasterwindow_base_size(void* self) {
    return QWindow_BaseSize((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
///
/// ``` QRasterWindow* self ```
QSize* q_rasterwindow_size_increment(void* self) {
    return QWindow_SizeIncrement((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
///
/// ``` QRasterWindow* self, QSize* size ```
void q_rasterwindow_set_minimum_size(void* self, void* size) {
    QWindow_SetMinimumSize((QWindow*)self, (QSize*)size);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
///
/// ``` QRasterWindow* self, QSize* size ```
void q_rasterwindow_set_maximum_size(void* self, void* size) {
    QWindow_SetMaximumSize((QWindow*)self, (QSize*)size);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
///
/// ``` QRasterWindow* self, QSize* size ```
void q_rasterwindow_set_base_size(void* self, void* size) {
    QWindow_SetBaseSize((QWindow*)self, (QSize*)size);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
///
/// ``` QRasterWindow* self, QSize* size ```
void q_rasterwindow_set_size_increment(void* self, void* size) {
    QWindow_SetSizeIncrement((QWindow*)self, (QSize*)size);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#geometry)
///
/// ``` QRasterWindow* self ```
QRect* q_rasterwindow_geometry(void* self) {
    return QWindow_Geometry((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
///
/// ``` QRasterWindow* self ```
QMargins* q_rasterwindow_frame_margins(void* self) {
    return QWindow_FrameMargins((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
///
/// ``` QRasterWindow* self ```
QRect* q_rasterwindow_frame_geometry(void* self) {
    return QWindow_FrameGeometry((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#framePosition)
///
/// ``` QRasterWindow* self ```
QPoint* q_rasterwindow_frame_position(void* self) {
    return QWindow_FramePosition((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
///
/// ``` QRasterWindow* self, QPoint* point ```
void q_rasterwindow_set_frame_position(void* self, void* point) {
    QWindow_SetFramePosition((QWindow*)self, (QPoint*)point);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#width)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_width(void* self) {
    return QWindow_Width((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#height)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_height(void* self) {
    return QWindow_Height((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#x)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_x(void* self) {
    return QWindow_X((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#y)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_y(void* self) {
    return QWindow_Y((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#position)
///
/// ``` QRasterWindow* self ```
QPoint* q_rasterwindow_position(void* self) {
    return QWindow_Position((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// ``` QRasterWindow* self, QPoint* pt ```
void q_rasterwindow_set_position(void* self, void* pt) {
    QWindow_SetPosition((QWindow*)self, (QPoint*)pt);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// ``` QRasterWindow* self, int posx, int posy ```
void q_rasterwindow_set_position2(void* self, int posx, int posy) {
    QWindow_SetPosition2((QWindow*)self, posx, posy);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// ``` QRasterWindow* self, QSize* newSize ```
void q_rasterwindow_resize(void* self, void* newSize) {
    QWindow_Resize((QWindow*)self, (QSize*)newSize);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// ``` QRasterWindow* self, int w, int h ```
void q_rasterwindow_resize2(void* self, int w, int h) {
    QWindow_Resize2((QWindow*)self, w, h);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
///
/// ``` QRasterWindow* self, const char* filePath ```
void q_rasterwindow_set_file_path(void* self, const char* filePath) {
    QWindow_SetFilePath((QWindow*)self, qstring(filePath));
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#filePath)
///
/// ``` QRasterWindow* self ```
const char* q_rasterwindow_file_path(void* self) {
    libqt_string _str = QWindow_FilePath((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setIcon)
///
/// ``` QRasterWindow* self, QIcon* icon ```
void q_rasterwindow_set_icon(void* self, void* icon) {
    QWindow_SetIcon((QWindow*)self, (QIcon*)icon);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#icon)
///
/// ``` QRasterWindow* self ```
QIcon* q_rasterwindow_icon(void* self) {
    return QWindow_Icon((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#destroy)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_destroy(void* self) {
    QWindow_Destroy((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
///
/// ``` QRasterWindow* self, bool grab ```
bool q_rasterwindow_set_keyboard_grab_enabled(void* self, bool grab) {
    return QWindow_SetKeyboardGrabEnabled((QWindow*)self, grab);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
///
/// ``` QRasterWindow* self, bool grab ```
bool q_rasterwindow_set_mouse_grab_enabled(void* self, bool grab) {
    return QWindow_SetMouseGrabEnabled((QWindow*)self, grab);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screen)
///
/// ``` QRasterWindow* self ```
QScreen* q_rasterwindow_screen(void* self) {
    return QWindow_Screen((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setScreen)
///
/// ``` QRasterWindow* self, QScreen* screen ```
void q_rasterwindow_set_screen(void* self, void* screen) {
    QWindow_SetScreen((QWindow*)self, (QScreen*)screen);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// ``` QRasterWindow* self, QPointF* pos ```
QPointF* q_rasterwindow_map_to_global(void* self, void* pos) {
    return QWindow_MapToGlobal((QWindow*)self, (QPointF*)pos);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// ``` QRasterWindow* self, QPointF* pos ```
QPointF* q_rasterwindow_map_from_global(void* self, void* pos) {
    return QWindow_MapFromGlobal((QWindow*)self, (QPointF*)pos);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// ``` QRasterWindow* self, QPoint* pos ```
QPoint* q_rasterwindow_map_to_global_with_pos(void* self, void* pos) {
    return QWindow_MapToGlobalWithPos((QWindow*)self, (QPoint*)pos);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// ``` QRasterWindow* self, QPoint* pos ```
QPoint* q_rasterwindow_map_from_global_with_pos(void* self, void* pos) {
    return QWindow_MapFromGlobalWithPos((QWindow*)self, (QPoint*)pos);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#cursor)
///
/// ``` QRasterWindow* self ```
QCursor* q_rasterwindow_cursor(void* self) {
    return QWindow_Cursor((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setCursor)
///
/// ``` QRasterWindow* self, QCursor* cursor ```
void q_rasterwindow_set_cursor(void* self, void* cursor) {
    QWindow_SetCursor((QWindow*)self, (QCursor*)cursor);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_unset_cursor(void* self) {
    QWindow_UnsetCursor((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
///
/// ``` uintptr_t id ```
QWindow* q_rasterwindow_from_win_id(uintptr_t id) {
    return QWindow_FromWinId(id);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_request_activate(void* self) {
    QWindow_RequestActivate((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisible)
///
/// ``` QRasterWindow* self, bool visible ```
void q_rasterwindow_set_visible(void* self, bool visible) {
    QWindow_SetVisible((QWindow*)self, visible);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#show)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_show(void* self) {
    QWindow_Show((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hide)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_hide(void* self) {
    QWindow_Hide((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_show_minimized(void* self) {
    QWindow_ShowMinimized((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_show_maximized(void* self) {
    QWindow_ShowMaximized((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_show_full_screen(void* self) {
    QWindow_ShowFullScreen((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showNormal)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_show_normal(void* self) {
    QWindow_ShowNormal((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#close)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_close(void* self) {
    return QWindow_Close((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#raise)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_raise(void* self) {
    QWindow_Raise((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#lower)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_lower(void* self) {
    QWindow_Lower((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
///
/// ``` QRasterWindow* self, int edges ```
bool q_rasterwindow_start_system_resize(void* self, int64_t edges) {
    return QWindow_StartSystemResize((QWindow*)self, edges);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_start_system_move(void* self) {
    return QWindow_StartSystemMove((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTitle)
///
/// ``` QRasterWindow* self, const char* title ```
void q_rasterwindow_set_title(void* self, const char* title) {
    QWindow_SetTitle((QWindow*)self, qstring(title));
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setX)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_set_x(void* self, int arg) {
    QWindow_SetX((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setY)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_set_y(void* self, int arg) {
    QWindow_SetY((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWidth)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_set_width(void* self, int arg) {
    QWindow_SetWidth((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setHeight)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_set_height(void* self, int arg) {
    QWindow_SetHeight((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// ``` QRasterWindow* self, int posx, int posy, int w, int h ```
void q_rasterwindow_set_geometry(void* self, int posx, int posy, int w, int h) {
    QWindow_SetGeometry((QWindow*)self, posx, posy, w, h);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// ``` QRasterWindow* self, QRect* rect ```
void q_rasterwindow_set_geometry_with_rect(void* self, void* rect) {
    QWindow_SetGeometryWithRect((QWindow*)self, (QRect*)rect);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
///
/// ``` QRasterWindow* self, int w ```
void q_rasterwindow_set_minimum_width(void* self, int w) {
    QWindow_SetMinimumWidth((QWindow*)self, w);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
///
/// ``` QRasterWindow* self, int h ```
void q_rasterwindow_set_minimum_height(void* self, int h) {
    QWindow_SetMinimumHeight((QWindow*)self, h);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
///
/// ``` QRasterWindow* self, int w ```
void q_rasterwindow_set_maximum_width(void* self, int w) {
    QWindow_SetMaximumWidth((QWindow*)self, w);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
///
/// ``` QRasterWindow* self, int h ```
void q_rasterwindow_set_maximum_height(void* self, int h) {
    QWindow_SetMaximumHeight((QWindow*)self, h);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#alert)
///
/// ``` QRasterWindow* self, int msec ```
void q_rasterwindow_alert(void* self, int msec) {
    QWindow_Alert((QWindow*)self, msec);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_request_update(void* self) {
    QWindow_RequestUpdate((QWindow*)self);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// ``` QRasterWindow* self, QScreen* screen ```
void q_rasterwindow_screen_changed(void* self, void* screen) {
    QWindow_ScreenChanged((QWindow*)self, (QScreen*)screen);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, QScreen*) ```
void q_rasterwindow_on_screen_changed(void* self, void (*slot)(void*, void*)) {
    QWindow_Connect_ScreenChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// ``` QRasterWindow* self, enum Qt__WindowModality modality ```
void q_rasterwindow_modality_changed(void* self, int64_t modality) {
    QWindow_ModalityChanged((QWindow*)self, modality);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, enum Qt__WindowModality) ```
void q_rasterwindow_on_modality_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_ModalityChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// ``` QRasterWindow* self, enum Qt__WindowState windowState ```
void q_rasterwindow_window_state_changed(void* self, int64_t windowState) {
    QWindow_WindowStateChanged((QWindow*)self, windowState);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, enum Qt__WindowState) ```
void q_rasterwindow_on_window_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_WindowStateChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// ``` QRasterWindow* self, const char* title ```
void q_rasterwindow_window_title_changed(void* self, const char* title) {
    QWindow_WindowTitleChanged((QWindow*)self, qstring(title));
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, const char*) ```
void q_rasterwindow_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWindow_Connect_WindowTitleChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_x_changed(void* self, int arg) {
    QWindow_XChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, int) ```
void q_rasterwindow_on_x_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_XChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_y_changed(void* self, int arg) {
    QWindow_YChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, int) ```
void q_rasterwindow_on_y_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_YChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_width_changed(void* self, int arg) {
    QWindow_WidthChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, int) ```
void q_rasterwindow_on_width_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_WidthChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_height_changed(void* self, int arg) {
    QWindow_HeightChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, int) ```
void q_rasterwindow_on_height_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_HeightChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_minimum_width_changed(void* self, int arg) {
    QWindow_MinimumWidthChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, int) ```
void q_rasterwindow_on_minimum_width_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MinimumWidthChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_minimum_height_changed(void* self, int arg) {
    QWindow_MinimumHeightChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, int) ```
void q_rasterwindow_on_minimum_height_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MinimumHeightChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_maximum_width_changed(void* self, int arg) {
    QWindow_MaximumWidthChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, int) ```
void q_rasterwindow_on_maximum_width_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MaximumWidthChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// ``` QRasterWindow* self, int arg ```
void q_rasterwindow_maximum_height_changed(void* self, int arg) {
    QWindow_MaximumHeightChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, int) ```
void q_rasterwindow_on_maximum_height_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MaximumHeightChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// ``` QRasterWindow* self, bool arg ```
void q_rasterwindow_visible_changed(void* self, bool arg) {
    QWindow_VisibleChanged((QWindow*)self, arg);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, bool) ```
void q_rasterwindow_on_visible_changed(void* self, void (*slot)(void*, bool)) {
    QWindow_Connect_VisibleChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// ``` QRasterWindow* self, enum QWindow__Visibility visibility ```
void q_rasterwindow_visibility_changed(void* self, int64_t visibility) {
    QWindow_VisibilityChanged((QWindow*)self, visibility);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, enum QWindow__Visibility) ```
void q_rasterwindow_on_visibility_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_VisibilityChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_active_changed(void* self) {
    QWindow_ActiveChanged((QWindow*)self);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*) ```
void q_rasterwindow_on_active_changed(void* self, void (*slot)(void*)) {
    QWindow_Connect_ActiveChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// ``` QRasterWindow* self, enum Qt__ScreenOrientation orientation ```
void q_rasterwindow_content_orientation_changed(void* self, int64_t orientation) {
    QWindow_ContentOrientationChanged((QWindow*)self, orientation);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, enum Qt__ScreenOrientation) ```
void q_rasterwindow_on_content_orientation_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_ContentOrientationChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// ``` QRasterWindow* self, QObject* object ```
void q_rasterwindow_focus_object_changed(void* self, void* object) {
    QWindow_FocusObjectChanged((QWindow*)self, (QObject*)object);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, QObject*) ```
void q_rasterwindow_on_focus_object_changed(void* self, void (*slot)(void*, void*)) {
    QWindow_Connect_FocusObjectChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// ``` QRasterWindow* self, double opacity ```
void q_rasterwindow_opacity_changed(void* self, double opacity) {
    QWindow_OpacityChanged((QWindow*)self, opacity);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, double) ```
void q_rasterwindow_on_opacity_changed(void* self, void (*slot)(void*, double)) {
    QWindow_Connect_OpacityChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// ``` QRasterWindow* self, QWindow* transientParent ```
void q_rasterwindow_transient_parent_changed(void* self, void* transientParent) {
    QWindow_TransientParentChanged((QWindow*)self, (QWindow*)transientParent);
}

/// Inherited from QWindow
///
/// ``` QRasterWindow* self, void (*slot)(QWindow*, QWindow*) ```
void q_rasterwindow_on_transient_parent_changed(void* self, void (*slot)(void*, void*)) {
    QWindow_Connect_TransientParentChanged((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// ``` QRasterWindow* self, enum QWindow__AncestorMode mode ```
QWindow* q_rasterwindow_parent1(void* self, int64_t mode) {
    return QWindow_Parent1((QWindow*)self, mode);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// ``` QRasterWindow* self, enum Qt__WindowType param1, bool on ```
void q_rasterwindow_set_flag2(void* self, int64_t param1, bool on) {
    QWindow_SetFlag2((QWindow*)self, param1, on);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// ``` QRasterWindow* self, QWindow* child, enum QWindow__AncestorMode mode ```
bool q_rasterwindow_is_ancestor_of2(void* self, void* child, int64_t mode) {
    return QWindow_IsAncestorOf2((QWindow*)self, (QWindow*)child, mode);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QRasterWindow* self ```
const char* q_rasterwindow_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QRasterWindow* self, const char* name ```
void q_rasterwindow_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QRasterWindow* self, bool b ```
bool q_rasterwindow_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QRasterWindow* self ```
QThread* q_rasterwindow_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QRasterWindow* self, QThread* thread ```
void q_rasterwindow_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QRasterWindow* self, int interval ```
int32_t q_rasterwindow_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QRasterWindow* self, int id ```
void q_rasterwindow_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QRasterWindow* self ```
libqt_list /* of QObject* */ q_rasterwindow_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QRasterWindow* self, QObject* filterObj ```
void q_rasterwindow_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QRasterWindow* self, QObject* obj ```
void q_rasterwindow_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_rasterwindow_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QRasterWindow* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_rasterwindow_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_rasterwindow_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_rasterwindow_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QRasterWindow* self, const char* name, QVariant* value ```
bool q_rasterwindow_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QRasterWindow* self, const char* name ```
QVariant* q_rasterwindow_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QRasterWindow* self ```
const char** q_rasterwindow_dynamic_property_names(void* self) {
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
/// ``` QRasterWindow* self ```
QBindingStorage* q_rasterwindow_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QRasterWindow* self ```
QBindingStorage* q_rasterwindow_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QRasterWindow* self, void (*slot)(QObject*) ```
void q_rasterwindow_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QRasterWindow* self, const char* classname ```
bool q_rasterwindow_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QRasterWindow* self, int interval, enum Qt__TimerType timerType ```
int32_t q_rasterwindow_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_rasterwindow_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QRasterWindow* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_rasterwindow_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRasterWindow* self, QObject* param1 ```
void q_rasterwindow_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QRasterWindow* self, void (*slot)(QObject*, QObject*) ```
void q_rasterwindow_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_surface_class(void* self) {
    return QSurface_SurfaceClass((QSurface*)self);
}

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_supports_open_g_l(void* self) {
    return QSurface_SupportsOpenGL((QSurface*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QRasterWindow* self ```
bool q_rasterwindow_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
///
/// ``` QRasterWindow* self ```
QPaintEngine* q_rasterwindow_paint_engine(void* self) {
    return QPaintDevice_PaintEngine((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QRasterWindow* self ```
double q_rasterwindow_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_rasterwindow_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#exposeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QExposeEvent* param1 ```
void q_rasterwindow_expose_event(void* self, void* param1) {
    QRasterWindow_ExposeEvent((QRasterWindow*)self, (QExposeEvent*)param1);
}

/// Inherited from QPaintDeviceWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QExposeEvent* param1 ```
void q_rasterwindow_qbase_expose_event(void* self, void* param1) {
    QRasterWindow_QBaseExposeEvent((QRasterWindow*)self, (QExposeEvent*)param1);
}

/// Inherited from QPaintDeviceWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QExposeEvent*) ```
void q_rasterwindow_on_expose_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnExposeEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QPaintEvent* event ```
void q_rasterwindow_paint_event(void* self, void* event) {
    QRasterWindow_PaintEvent((QRasterWindow*)self, (QPaintEvent*)event);
}

/// Inherited from QPaintDeviceWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QPaintEvent* event ```
void q_rasterwindow_qbase_paint_event(void* self, void* event) {
    QRasterWindow_QBasePaintEvent((QRasterWindow*)self, (QPaintEvent*)event);
}

/// Inherited from QPaintDeviceWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QPaintEvent*) ```
void q_rasterwindow_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnPaintEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QPaintDeviceWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevicewindow.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QEvent* event ```
bool q_rasterwindow_event(void* self, void* event) {
    return QRasterWindow_Event((QRasterWindow*)self, (QEvent*)event);
}

/// Inherited from QPaintDeviceWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QEvent* event ```
bool q_rasterwindow_qbase_event(void* self, void* event) {
    return QRasterWindow_QBaseEvent((QRasterWindow*)self, (QEvent*)event);
}

/// Inherited from QPaintDeviceWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, bool (*slot)(QRasterWindow*, QEvent*) ```
void q_rasterwindow_on_event(void* self, bool (*slot)(void*, void*)) {
    QRasterWindow_OnEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_surface_type(void* self) {
    return QRasterWindow_SurfaceType((QRasterWindow*)self);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
int64_t q_rasterwindow_qbase_surface_type(void* self) {
    return QRasterWindow_QBaseSurfaceType((QRasterWindow*)self);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, int64_t (*slot)() ```
void q_rasterwindow_on_surface_type(void* self, int64_t (*slot)()) {
    QRasterWindow_OnSurfaceType((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
QSurfaceFormat* q_rasterwindow_format(void* self) {
    return QRasterWindow_Format((QRasterWindow*)self);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
QSurfaceFormat* q_rasterwindow_qbase_format(void* self) {
    return QRasterWindow_QBaseFormat((QRasterWindow*)self);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, QSurfaceFormat* (*slot)() ```
void q_rasterwindow_on_format(void* self, QSurfaceFormat* (*slot)()) {
    QRasterWindow_OnFormat((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
QSize* q_rasterwindow_size(void* self) {
    return QRasterWindow_Size((QRasterWindow*)self);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
QSize* q_rasterwindow_qbase_size(void* self) {
    return QRasterWindow_QBaseSize((QRasterWindow*)self);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, QSize* (*slot)() ```
void q_rasterwindow_on_size(void* self, QSize* (*slot)()) {
    QRasterWindow_OnSize((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
QAccessibleInterface* q_rasterwindow_accessible_root(void* self) {
    return QRasterWindow_AccessibleRoot((QRasterWindow*)self);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
QAccessibleInterface* q_rasterwindow_qbase_accessible_root(void* self) {
    return QRasterWindow_QBaseAccessibleRoot((QRasterWindow*)self);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, QAccessibleInterface* (*slot)() ```
void q_rasterwindow_on_accessible_root(void* self, QAccessibleInterface* (*slot)()) {
    QRasterWindow_OnAccessibleRoot((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
QObject* q_rasterwindow_focus_object(void* self) {
    return QRasterWindow_FocusObject((QRasterWindow*)self);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
QObject* q_rasterwindow_qbase_focus_object(void* self) {
    return QRasterWindow_QBaseFocusObject((QRasterWindow*)self);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, QObject* (*slot)() ```
void q_rasterwindow_on_focus_object(void* self, QObject* (*slot)()) {
    QRasterWindow_OnFocusObject((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QResizeEvent* param1 ```
void q_rasterwindow_resize_event(void* self, void* param1) {
    QRasterWindow_ResizeEvent((QRasterWindow*)self, (QResizeEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QResizeEvent* param1 ```
void q_rasterwindow_qbase_resize_event(void* self, void* param1) {
    QRasterWindow_QBaseResizeEvent((QRasterWindow*)self, (QResizeEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QResizeEvent*) ```
void q_rasterwindow_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnResizeEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMoveEvent* param1 ```
void q_rasterwindow_move_event(void* self, void* param1) {
    QRasterWindow_MoveEvent((QRasterWindow*)self, (QMoveEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMoveEvent* param1 ```
void q_rasterwindow_qbase_move_event(void* self, void* param1) {
    QRasterWindow_QBaseMoveEvent((QRasterWindow*)self, (QMoveEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QMoveEvent*) ```
void q_rasterwindow_on_move_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnMoveEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QFocusEvent* param1 ```
void q_rasterwindow_focus_in_event(void* self, void* param1) {
    QRasterWindow_FocusInEvent((QRasterWindow*)self, (QFocusEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QFocusEvent* param1 ```
void q_rasterwindow_qbase_focus_in_event(void* self, void* param1) {
    QRasterWindow_QBaseFocusInEvent((QRasterWindow*)self, (QFocusEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QFocusEvent*) ```
void q_rasterwindow_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnFocusInEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QFocusEvent* param1 ```
void q_rasterwindow_focus_out_event(void* self, void* param1) {
    QRasterWindow_FocusOutEvent((QRasterWindow*)self, (QFocusEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QFocusEvent* param1 ```
void q_rasterwindow_qbase_focus_out_event(void* self, void* param1) {
    QRasterWindow_QBaseFocusOutEvent((QRasterWindow*)self, (QFocusEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QFocusEvent*) ```
void q_rasterwindow_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnFocusOutEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QShowEvent* param1 ```
void q_rasterwindow_show_event(void* self, void* param1) {
    QRasterWindow_ShowEvent((QRasterWindow*)self, (QShowEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QShowEvent* param1 ```
void q_rasterwindow_qbase_show_event(void* self, void* param1) {
    QRasterWindow_QBaseShowEvent((QRasterWindow*)self, (QShowEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QShowEvent*) ```
void q_rasterwindow_on_show_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnShowEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QHideEvent* param1 ```
void q_rasterwindow_hide_event(void* self, void* param1) {
    QRasterWindow_HideEvent((QRasterWindow*)self, (QHideEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QHideEvent* param1 ```
void q_rasterwindow_qbase_hide_event(void* self, void* param1) {
    QRasterWindow_QBaseHideEvent((QRasterWindow*)self, (QHideEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QHideEvent*) ```
void q_rasterwindow_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnHideEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QCloseEvent* param1 ```
void q_rasterwindow_close_event(void* self, void* param1) {
    QRasterWindow_CloseEvent((QRasterWindow*)self, (QCloseEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QCloseEvent* param1 ```
void q_rasterwindow_qbase_close_event(void* self, void* param1) {
    QRasterWindow_QBaseCloseEvent((QRasterWindow*)self, (QCloseEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QCloseEvent*) ```
void q_rasterwindow_on_close_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnCloseEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QKeyEvent* param1 ```
void q_rasterwindow_key_press_event(void* self, void* param1) {
    QRasterWindow_KeyPressEvent((QRasterWindow*)self, (QKeyEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QKeyEvent* param1 ```
void q_rasterwindow_qbase_key_press_event(void* self, void* param1) {
    QRasterWindow_QBaseKeyPressEvent((QRasterWindow*)self, (QKeyEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QKeyEvent*) ```
void q_rasterwindow_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnKeyPressEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QKeyEvent* param1 ```
void q_rasterwindow_key_release_event(void* self, void* param1) {
    QRasterWindow_KeyReleaseEvent((QRasterWindow*)self, (QKeyEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QKeyEvent* param1 ```
void q_rasterwindow_qbase_key_release_event(void* self, void* param1) {
    QRasterWindow_QBaseKeyReleaseEvent((QRasterWindow*)self, (QKeyEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QKeyEvent*) ```
void q_rasterwindow_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnKeyReleaseEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_mouse_press_event(void* self, void* param1) {
    QRasterWindow_MousePressEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_qbase_mouse_press_event(void* self, void* param1) {
    QRasterWindow_QBaseMousePressEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QMouseEvent*) ```
void q_rasterwindow_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnMousePressEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_mouse_release_event(void* self, void* param1) {
    QRasterWindow_MouseReleaseEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_qbase_mouse_release_event(void* self, void* param1) {
    QRasterWindow_QBaseMouseReleaseEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QMouseEvent*) ```
void q_rasterwindow_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnMouseReleaseEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_mouse_double_click_event(void* self, void* param1) {
    QRasterWindow_MouseDoubleClickEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_qbase_mouse_double_click_event(void* self, void* param1) {
    QRasterWindow_QBaseMouseDoubleClickEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QMouseEvent*) ```
void q_rasterwindow_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnMouseDoubleClickEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_mouse_move_event(void* self, void* param1) {
    QRasterWindow_MouseMoveEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMouseEvent* param1 ```
void q_rasterwindow_qbase_mouse_move_event(void* self, void* param1) {
    QRasterWindow_QBaseMouseMoveEvent((QRasterWindow*)self, (QMouseEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QMouseEvent*) ```
void q_rasterwindow_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnMouseMoveEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QWheelEvent* param1 ```
void q_rasterwindow_wheel_event(void* self, void* param1) {
    QRasterWindow_WheelEvent((QRasterWindow*)self, (QWheelEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QWheelEvent* param1 ```
void q_rasterwindow_qbase_wheel_event(void* self, void* param1) {
    QRasterWindow_QBaseWheelEvent((QRasterWindow*)self, (QWheelEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QWheelEvent*) ```
void q_rasterwindow_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnWheelEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QTouchEvent* param1 ```
void q_rasterwindow_touch_event(void* self, void* param1) {
    QRasterWindow_TouchEvent((QRasterWindow*)self, (QTouchEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QTouchEvent* param1 ```
void q_rasterwindow_qbase_touch_event(void* self, void* param1) {
    QRasterWindow_QBaseTouchEvent((QRasterWindow*)self, (QTouchEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QTouchEvent*) ```
void q_rasterwindow_on_touch_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnTouchEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QTabletEvent* param1 ```
void q_rasterwindow_tablet_event(void* self, void* param1) {
    QRasterWindow_TabletEvent((QRasterWindow*)self, (QTabletEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QTabletEvent* param1 ```
void q_rasterwindow_qbase_tablet_event(void* self, void* param1) {
    QRasterWindow_QBaseTabletEvent((QRasterWindow*)self, (QTabletEvent*)param1);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QTabletEvent*) ```
void q_rasterwindow_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnTabletEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, const char* eventType, void* message, intptr_t* result ```
bool q_rasterwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QRasterWindow_NativeEvent((QRasterWindow*)self, qstring(eventType), message, result);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, const char* eventType, void* message, intptr_t* result ```
bool q_rasterwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QRasterWindow_QBaseNativeEvent((QRasterWindow*)self, qstring(eventType), message, result);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, bool (*slot)(QRasterWindow*, const char*, void*, intptr_t*) ```
void q_rasterwindow_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QRasterWindow_OnNativeEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QObject* watched, QEvent* event ```
bool q_rasterwindow_event_filter(void* self, void* watched, void* event) {
    return QRasterWindow_EventFilter((QRasterWindow*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QObject* watched, QEvent* event ```
bool q_rasterwindow_qbase_event_filter(void* self, void* watched, void* event) {
    return QRasterWindow_QBaseEventFilter((QRasterWindow*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, bool (*slot)(QRasterWindow*, QObject*, QEvent*) ```
void q_rasterwindow_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QRasterWindow_OnEventFilter((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QTimerEvent* event ```
void q_rasterwindow_timer_event(void* self, void* event) {
    QRasterWindow_TimerEvent((QRasterWindow*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QTimerEvent* event ```
void q_rasterwindow_qbase_timer_event(void* self, void* event) {
    QRasterWindow_QBaseTimerEvent((QRasterWindow*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QTimerEvent*) ```
void q_rasterwindow_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnTimerEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QChildEvent* event ```
void q_rasterwindow_child_event(void* self, void* event) {
    QRasterWindow_ChildEvent((QRasterWindow*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QChildEvent* event ```
void q_rasterwindow_qbase_child_event(void* self, void* event) {
    QRasterWindow_QBaseChildEvent((QRasterWindow*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QChildEvent*) ```
void q_rasterwindow_on_child_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnChildEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QEvent* event ```
void q_rasterwindow_custom_event(void* self, void* event) {
    QRasterWindow_CustomEvent((QRasterWindow*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QEvent* event ```
void q_rasterwindow_qbase_custom_event(void* self, void* event) {
    QRasterWindow_QBaseCustomEvent((QRasterWindow*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QEvent*) ```
void q_rasterwindow_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnCustomEvent((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMetaMethod* signal ```
void q_rasterwindow_connect_notify(void* self, void* signal) {
    QRasterWindow_ConnectNotify((QRasterWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMetaMethod* signal ```
void q_rasterwindow_qbase_connect_notify(void* self, void* signal) {
    QRasterWindow_QBaseConnectNotify((QRasterWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QMetaMethod*) ```
void q_rasterwindow_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnConnectNotify((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMetaMethod* signal ```
void q_rasterwindow_disconnect_notify(void* self, void* signal) {
    QRasterWindow_DisconnectNotify((QRasterWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMetaMethod* signal ```
void q_rasterwindow_qbase_disconnect_notify(void* self, void* signal) {
    QRasterWindow_QBaseDisconnectNotify((QRasterWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QMetaMethod*) ```
void q_rasterwindow_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnDisconnectNotify((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_dev_type(void* self) {
    return QRasterWindow_DevType((QRasterWindow*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_qbase_dev_type(void* self) {
    return QRasterWindow_QBaseDevType((QRasterWindow*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, int32_t (*slot)() ```
void q_rasterwindow_on_dev_type(void* self, int32_t (*slot)()) {
    QRasterWindow_OnDevType((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QPainter* painter ```
void q_rasterwindow_init_painter(void* self, void* painter) {
    QRasterWindow_InitPainter((QRasterWindow*)self, (QPainter*)painter);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QPainter* painter ```
void q_rasterwindow_qbase_init_painter(void* self, void* painter) {
    QRasterWindow_QBaseInitPainter((QRasterWindow*)self, (QPainter*)painter);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void (*slot)(QRasterWindow*, QPainter*) ```
void q_rasterwindow_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QRasterWindow_OnInitPainter((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
QPainter* q_rasterwindow_shared_painter(void* self) {
    return QRasterWindow_SharedPainter((QRasterWindow*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
QPainter* q_rasterwindow_qbase_shared_painter(void* self) {
    return QRasterWindow_QBaseSharedPainter((QRasterWindow*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, QPainter* (*slot)() ```
void q_rasterwindow_on_shared_painter(void* self, QPainter* (*slot)()) {
    QRasterWindow_OnSharedPainter((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QWindow
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, const char* name, int revision ```
void* q_rasterwindow_resolve_interface(void* self, const char* name, int revision) {
    return QRasterWindow_ResolveInterface((QRasterWindow*)self, name, revision);
}

/// Inherited from QWindow
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, const char* name, int revision ```
void* q_rasterwindow_qbase_resolve_interface(void* self, const char* name, int revision) {
    return QRasterWindow_QBaseResolveInterface((QRasterWindow*)self, name, revision);
}

/// Inherited from QWindow
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, void* (*slot)(QRasterWindow*, const char*, int) ```
void q_rasterwindow_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int)) {
    QRasterWindow_OnResolveInterface((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
QObject* q_rasterwindow_sender(void* self) {
    return QRasterWindow_Sender((QRasterWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
QObject* q_rasterwindow_qbase_sender(void* self) {
    return QRasterWindow_QBaseSender((QRasterWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, QObject* (*slot)() ```
void q_rasterwindow_on_sender(void* self, QObject* (*slot)()) {
    QRasterWindow_OnSender((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_sender_signal_index(void* self) {
    return QRasterWindow_SenderSignalIndex((QRasterWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self ```
int32_t q_rasterwindow_qbase_sender_signal_index(void* self) {
    return QRasterWindow_QBaseSenderSignalIndex((QRasterWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, int32_t (*slot)() ```
void q_rasterwindow_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QRasterWindow_OnSenderSignalIndex((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, const char* signal ```
int32_t q_rasterwindow_receivers(void* self, const char* signal) {
    return QRasterWindow_Receivers((QRasterWindow*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, const char* signal ```
int32_t q_rasterwindow_qbase_receivers(void* self, const char* signal) {
    return QRasterWindow_QBaseReceivers((QRasterWindow*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, int32_t (*slot)(QRasterWindow*, const char*) ```
void q_rasterwindow_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QRasterWindow_OnReceivers((QRasterWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRasterWindow* self, QMetaMethod* signal ```
bool q_rasterwindow_is_signal_connected(void* self, void* signal) {
    return QRasterWindow_IsSignalConnected((QRasterWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRasterWindow* self, QMetaMethod* signal ```
bool q_rasterwindow_qbase_is_signal_connected(void* self, void* signal) {
    return QRasterWindow_QBaseIsSignalConnected((QRasterWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRasterWindow* self, bool (*slot)(QRasterWindow*, QMetaMethod*) ```
void q_rasterwindow_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QRasterWindow_OnIsSignalConnected((QRasterWindow*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QRasterWindow* self ```
void q_rasterwindow_delete(void* self) {
    QRasterWindow_Delete((QRasterWindow*)(self));
}