#include "libqaccessible.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqcursor.hpp"
#include "libqicon.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
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
#include "libqcoreevent.hpp"
#include "libqwindow.hpp"
#include "libqwindow.h"

/// https://doc.qt.io/qt-6/qwindow.html

/// q_window_new constructs a new QWindow object.
///
///
QWindow* q_window_new() {
    return QWindow_new();
}

/// q_window_new2 constructs a new QWindow object.
///
/// ``` QWindow* parent ```
QWindow* q_window_new2(void* parent) {
    return QWindow_new2((QWindow*)parent);
}

/// q_window_new3 constructs a new QWindow object.
///
/// ``` QScreen* screen ```
QWindow* q_window_new3(void* screen) {
    return QWindow_new3((QScreen*)screen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWindow* self ```
QMetaObject* q_window_meta_object(void* self) {
    return QWindow_MetaObject((QWindow*)self);
}

/// ``` QWindow* self, const char* param1 ```
void* q_window_metacast(void* self, const char* param1) {
    return QWindow_Metacast((QWindow*)self, param1);
}

/// ``` QWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_window_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWindow_Metacall((QWindow*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, int32_t (*slot)(QWindow*, enum QMetaObject__Call, int, void*) ```
void q_window_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWindow_OnMetacall((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_window_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWindow_QBaseMetacall((QWindow*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_window_tr(const char* s) {
    libqt_string _str = QWindow_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
///
/// ``` QWindow* self, enum QSurface__SurfaceType surfaceType ```
void q_window_set_surface_type(void* self, int64_t surfaceType) {
    QWindow_SetSurfaceType((QWindow*)self, surfaceType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
///
/// ``` QWindow* self ```
int64_t q_window_surface_type(void* self) {
    return QWindow_SurfaceType((QWindow*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, int64_t (*slot)() ```
void q_window_on_surface_type(void* self, int64_t (*slot)()) {
    QWindow_OnSurfaceType((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self ```
int64_t q_window_qbase_surface_type(void* self) {
    return QWindow_QBaseSurfaceType((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isVisible)
///
/// ``` QWindow* self ```
bool q_window_is_visible(void* self) {
    return QWindow_IsVisible((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibility)
///
/// ``` QWindow* self ```
int64_t q_window_visibility(void* self) {
    return QWindow_Visibility((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
///
/// ``` QWindow* self, enum QWindow__Visibility v ```
void q_window_set_visibility(void* self, int64_t v) {
    QWindow_SetVisibility((QWindow*)self, v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#create)
///
/// ``` QWindow* self ```
void q_window_create(void* self) {
    QWindow_Create((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#winId)
///
/// ``` QWindow* self ```
uintptr_t q_window_win_id(void* self) {
    return QWindow_WinId((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// ``` QWindow* self ```
QWindow* q_window_parent(void* self) {
    return QWindow_Parent((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setParent)
///
/// ``` QWindow* self, QWindow* parent ```
void q_window_set_parent(void* self, void* parent) {
    QWindow_SetParent((QWindow*)self, (QWindow*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
///
/// ``` QWindow* self ```
bool q_window_is_top_level(void* self) {
    return QWindow_IsTopLevel((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isModal)
///
/// ``` QWindow* self ```
bool q_window_is_modal(void* self) {
    return QWindow_IsModal((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modality)
///
/// ``` QWindow* self ```
int64_t q_window_modality(void* self) {
    return QWindow_Modality((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setModality)
///
/// ``` QWindow* self, enum Qt__WindowModality modality ```
void q_window_set_modality(void* self, int64_t modality) {
    QWindow_SetModality((QWindow*)self, modality);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFormat)
///
/// ``` QWindow* self, QSurfaceFormat* format ```
void q_window_set_format(void* self, void* format) {
    QWindow_SetFormat((QWindow*)self, (QSurfaceFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#format)
///
/// ``` QWindow* self ```
QSurfaceFormat* q_window_format(void* self) {
    return QWindow_Format((QWindow*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, QSurfaceFormat* (*slot)() ```
void q_window_on_format(void* self, QSurfaceFormat* (*slot)()) {
    QWindow_OnFormat((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self ```
QSurfaceFormat* q_window_qbase_format(void* self) {
    return QWindow_QBaseFormat((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
///
/// ``` QWindow* self ```
QSurfaceFormat* q_window_requested_format(void* self) {
    return QWindow_RequestedFormat((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlags)
///
/// ``` QWindow* self, int flags ```
void q_window_set_flags(void* self, int64_t flags) {
    QWindow_SetFlags((QWindow*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#flags)
///
/// ``` QWindow* self ```
int64_t q_window_flags(void* self) {
    return QWindow_Flags((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// ``` QWindow* self, enum Qt__WindowType param1 ```
void q_window_set_flag(void* self, int64_t param1) {
    QWindow_SetFlag((QWindow*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#type)
///
/// ``` QWindow* self ```
int64_t q_window_type(void* self) {
    return QWindow_Type((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#title)
///
/// ``` QWindow* self ```
const char* q_window_title(void* self) {
    libqt_string _str = QWindow_Title((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
///
/// ``` QWindow* self, double level ```
void q_window_set_opacity(void* self, double level) {
    QWindow_SetOpacity((QWindow*)self, level);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacity)
///
/// ``` QWindow* self ```
double q_window_opacity(void* self) {
    return QWindow_Opacity((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMask)
///
/// ``` QWindow* self, QRegion* region ```
void q_window_set_mask(void* self, void* region) {
    QWindow_SetMask((QWindow*)self, (QRegion*)region);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mask)
///
/// ``` QWindow* self ```
QRegion* q_window_mask(void* self) {
    return QWindow_Mask((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isActive)
///
/// ``` QWindow* self ```
bool q_window_is_active(void* self) {
    return QWindow_IsActive((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
///
/// ``` QWindow* self, enum Qt__ScreenOrientation orientation ```
void q_window_report_content_orientation_change(void* self, int64_t orientation) {
    QWindow_ReportContentOrientationChange((QWindow*)self, orientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
///
/// ``` QWindow* self ```
int64_t q_window_content_orientation(void* self) {
    return QWindow_ContentOrientation((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
///
/// ``` QWindow* self ```
double q_window_device_pixel_ratio(void* self) {
    return QWindow_DevicePixelRatio((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowState)
///
/// ``` QWindow* self ```
int64_t q_window_window_state(void* self) {
    return QWindow_WindowState((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStates)
///
/// ``` QWindow* self ```
int64_t q_window_window_states(void* self) {
    return QWindow_WindowStates((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
///
/// ``` QWindow* self, enum Qt__WindowState state ```
void q_window_set_window_state(void* self, int64_t state) {
    QWindow_SetWindowState((QWindow*)self, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
///
/// ``` QWindow* self, int states ```
void q_window_set_window_states(void* self, int64_t states) {
    QWindow_SetWindowStates((QWindow*)self, states);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
///
/// ``` QWindow* self, QWindow* parent ```
void q_window_set_transient_parent(void* self, void* parent) {
    QWindow_SetTransientParent((QWindow*)self, (QWindow*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParent)
///
/// ``` QWindow* self ```
QWindow* q_window_transient_parent(void* self) {
    return QWindow_TransientParent((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// ``` QWindow* self, QWindow* child ```
bool q_window_is_ancestor_of(void* self, void* child) {
    return QWindow_IsAncestorOf((QWindow*)self, (QWindow*)child);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isExposed)
///
/// ``` QWindow* self ```
bool q_window_is_exposed(void* self) {
    return QWindow_IsExposed((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
///
/// ``` QWindow* self ```
int32_t q_window_minimum_width(void* self) {
    return QWindow_MinimumWidth((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
///
/// ``` QWindow* self ```
int32_t q_window_minimum_height(void* self) {
    return QWindow_MinimumHeight((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
///
/// ``` QWindow* self ```
int32_t q_window_maximum_width(void* self) {
    return QWindow_MaximumWidth((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
///
/// ``` QWindow* self ```
int32_t q_window_maximum_height(void* self) {
    return QWindow_MaximumHeight((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
///
/// ``` QWindow* self ```
QSize* q_window_minimum_size(void* self) {
    return QWindow_MinimumSize((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
///
/// ``` QWindow* self ```
QSize* q_window_maximum_size(void* self) {
    return QWindow_MaximumSize((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#baseSize)
///
/// ``` QWindow* self ```
QSize* q_window_base_size(void* self) {
    return QWindow_BaseSize((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
///
/// ``` QWindow* self ```
QSize* q_window_size_increment(void* self) {
    return QWindow_SizeIncrement((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
///
/// ``` QWindow* self, QSize* size ```
void q_window_set_minimum_size(void* self, void* size) {
    QWindow_SetMinimumSize((QWindow*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
///
/// ``` QWindow* self, QSize* size ```
void q_window_set_maximum_size(void* self, void* size) {
    QWindow_SetMaximumSize((QWindow*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
///
/// ``` QWindow* self, QSize* size ```
void q_window_set_base_size(void* self, void* size) {
    QWindow_SetBaseSize((QWindow*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
///
/// ``` QWindow* self, QSize* size ```
void q_window_set_size_increment(void* self, void* size) {
    QWindow_SetSizeIncrement((QWindow*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#geometry)
///
/// ``` QWindow* self ```
QRect* q_window_geometry(void* self) {
    return QWindow_Geometry((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
///
/// ``` QWindow* self ```
QMargins* q_window_frame_margins(void* self) {
    return QWindow_FrameMargins((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
///
/// ``` QWindow* self ```
QRect* q_window_frame_geometry(void* self) {
    return QWindow_FrameGeometry((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#framePosition)
///
/// ``` QWindow* self ```
QPoint* q_window_frame_position(void* self) {
    return QWindow_FramePosition((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
///
/// ``` QWindow* self, QPoint* point ```
void q_window_set_frame_position(void* self, void* point) {
    QWindow_SetFramePosition((QWindow*)self, (QPoint*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#width)
///
/// ``` QWindow* self ```
int32_t q_window_width(void* self) {
    return QWindow_Width((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#height)
///
/// ``` QWindow* self ```
int32_t q_window_height(void* self) {
    return QWindow_Height((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#x)
///
/// ``` QWindow* self ```
int32_t q_window_x(void* self) {
    return QWindow_X((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#y)
///
/// ``` QWindow* self ```
int32_t q_window_y(void* self) {
    return QWindow_Y((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#size)
///
/// ``` QWindow* self ```
QSize* q_window_size(void* self) {
    return QWindow_Size((QWindow*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, QSize* (*slot)() ```
void q_window_on_size(void* self, QSize* (*slot)()) {
    QWindow_OnSize((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self ```
QSize* q_window_qbase_size(void* self) {
    return QWindow_QBaseSize((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#position)
///
/// ``` QWindow* self ```
QPoint* q_window_position(void* self) {
    return QWindow_Position((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// ``` QWindow* self, QPoint* pt ```
void q_window_set_position(void* self, void* pt) {
    QWindow_SetPosition((QWindow*)self, (QPoint*)pt);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setPosition)
///
/// ``` QWindow* self, int posx, int posy ```
void q_window_set_position2(void* self, int posx, int posy) {
    QWindow_SetPosition2((QWindow*)self, posx, posy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// ``` QWindow* self, QSize* newSize ```
void q_window_resize(void* self, void* newSize) {
    QWindow_Resize((QWindow*)self, (QSize*)newSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resize)
///
/// ``` QWindow* self, int w, int h ```
void q_window_resize2(void* self, int w, int h) {
    QWindow_Resize2((QWindow*)self, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
///
/// ``` QWindow* self, const char* filePath ```
void q_window_set_file_path(void* self, const char* filePath) {
    QWindow_SetFilePath((QWindow*)self, qstring(filePath));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#filePath)
///
/// ``` QWindow* self ```
const char* q_window_file_path(void* self) {
    libqt_string _str = QWindow_FilePath((QWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setIcon)
///
/// ``` QWindow* self, QIcon* icon ```
void q_window_set_icon(void* self, void* icon) {
    QWindow_SetIcon((QWindow*)self, (QIcon*)icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#icon)
///
/// ``` QWindow* self ```
QIcon* q_window_icon(void* self) {
    return QWindow_Icon((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#destroy)
///
/// ``` QWindow* self ```
void q_window_destroy(void* self) {
    QWindow_Destroy((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
///
/// ``` QWindow* self, bool grab ```
bool q_window_set_keyboard_grab_enabled(void* self, bool grab) {
    return QWindow_SetKeyboardGrabEnabled((QWindow*)self, grab);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
///
/// ``` QWindow* self, bool grab ```
bool q_window_set_mouse_grab_enabled(void* self, bool grab) {
    return QWindow_SetMouseGrabEnabled((QWindow*)self, grab);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screen)
///
/// ``` QWindow* self ```
QScreen* q_window_screen(void* self) {
    return QWindow_Screen((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setScreen)
///
/// ``` QWindow* self, QScreen* screen ```
void q_window_set_screen(void* self, void* screen) {
    QWindow_SetScreen((QWindow*)self, (QScreen*)screen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
///
/// ``` QWindow* self ```
QAccessibleInterface* q_window_accessible_root(void* self) {
    return QWindow_AccessibleRoot((QWindow*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, QAccessibleInterface* (*slot)() ```
void q_window_on_accessible_root(void* self, QAccessibleInterface* (*slot)()) {
    QWindow_OnAccessibleRoot((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self ```
QAccessibleInterface* q_window_qbase_accessible_root(void* self) {
    return QWindow_QBaseAccessibleRoot((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObject)
///
/// ``` QWindow* self ```
QObject* q_window_focus_object(void* self) {
    return QWindow_FocusObject((QWindow*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, QObject* (*slot)() ```
void q_window_on_focus_object(void* self, QObject* (*slot)()) {
    QWindow_OnFocusObject((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self ```
QObject* q_window_qbase_focus_object(void* self) {
    return QWindow_QBaseFocusObject((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// ``` QWindow* self, QPointF* pos ```
QPointF* q_window_map_to_global(void* self, void* pos) {
    return QWindow_MapToGlobal((QWindow*)self, (QPointF*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// ``` QWindow* self, QPointF* pos ```
QPointF* q_window_map_from_global(void* self, void* pos) {
    return QWindow_MapFromGlobal((QWindow*)self, (QPointF*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
///
/// ``` QWindow* self, QPoint* pos ```
QPoint* q_window_map_to_global_with_pos(void* self, void* pos) {
    return QWindow_MapToGlobalWithPos((QWindow*)self, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
///
/// ``` QWindow* self, QPoint* pos ```
QPoint* q_window_map_from_global_with_pos(void* self, void* pos) {
    return QWindow_MapFromGlobalWithPos((QWindow*)self, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#cursor)
///
/// ``` QWindow* self ```
QCursor* q_window_cursor(void* self) {
    return QWindow_Cursor((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setCursor)
///
/// ``` QWindow* self, QCursor* cursor ```
void q_window_set_cursor(void* self, void* cursor) {
    QWindow_SetCursor((QWindow*)self, (QCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
///
/// ``` QWindow* self ```
void q_window_unset_cursor(void* self) {
    QWindow_UnsetCursor((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
///
/// ``` uintptr_t id ```
QWindow* q_window_from_win_id(uintptr_t id) {
    return QWindow_FromWinId(id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resolveInterface)
///
/// ``` QWindow* self, const char* name, int revision ```
void* q_window_resolve_interface(void* self, const char* name, int revision) {
    return QWindow_ResolveInterface((QWindow*)self, name, revision);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void* (*slot)(QWindow*, const char*, int) ```
void q_window_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int)) {
    QWindow_OnResolveInterface((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, const char* name, int revision ```
void* q_window_qbase_resolve_interface(void* self, const char* name, int revision) {
    return QWindow_QBaseResolveInterface((QWindow*)self, name, revision);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
///
/// ``` QWindow* self ```
void q_window_request_activate(void* self) {
    QWindow_RequestActivate((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setVisible)
///
/// ``` QWindow* self, bool visible ```
void q_window_set_visible(void* self, bool visible) {
    QWindow_SetVisible((QWindow*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#show)
///
/// ``` QWindow* self ```
void q_window_show(void* self) {
    QWindow_Show((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hide)
///
/// ``` QWindow* self ```
void q_window_hide(void* self) {
    QWindow_Hide((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
///
/// ``` QWindow* self ```
void q_window_show_minimized(void* self) {
    QWindow_ShowMinimized((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
///
/// ``` QWindow* self ```
void q_window_show_maximized(void* self) {
    QWindow_ShowMaximized((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
///
/// ``` QWindow* self ```
void q_window_show_full_screen(void* self) {
    QWindow_ShowFullScreen((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showNormal)
///
/// ``` QWindow* self ```
void q_window_show_normal(void* self) {
    QWindow_ShowNormal((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#close)
///
/// ``` QWindow* self ```
bool q_window_close(void* self) {
    return QWindow_Close((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#raise)
///
/// ``` QWindow* self ```
void q_window_raise(void* self) {
    QWindow_Raise((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#lower)
///
/// ``` QWindow* self ```
void q_window_lower(void* self) {
    QWindow_Lower((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
///
/// ``` QWindow* self, int edges ```
bool q_window_start_system_resize(void* self, int64_t edges) {
    return QWindow_StartSystemResize((QWindow*)self, edges);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
///
/// ``` QWindow* self ```
bool q_window_start_system_move(void* self) {
    return QWindow_StartSystemMove((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setTitle)
///
/// ``` QWindow* self, const char* title ```
void q_window_set_title(void* self, const char* title) {
    QWindow_SetTitle((QWindow*)self, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setX)
///
/// ``` QWindow* self, int arg ```
void q_window_set_x(void* self, int arg) {
    QWindow_SetX((QWindow*)self, arg);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setY)
///
/// ``` QWindow* self, int arg ```
void q_window_set_y(void* self, int arg) {
    QWindow_SetY((QWindow*)self, arg);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setWidth)
///
/// ``` QWindow* self, int arg ```
void q_window_set_width(void* self, int arg) {
    QWindow_SetWidth((QWindow*)self, arg);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setHeight)
///
/// ``` QWindow* self, int arg ```
void q_window_set_height(void* self, int arg) {
    QWindow_SetHeight((QWindow*)self, arg);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// ``` QWindow* self, int posx, int posy, int w, int h ```
void q_window_set_geometry(void* self, int posx, int posy, int w, int h) {
    QWindow_SetGeometry((QWindow*)self, posx, posy, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
///
/// ``` QWindow* self, QRect* rect ```
void q_window_set_geometry_with_rect(void* self, void* rect) {
    QWindow_SetGeometryWithRect((QWindow*)self, (QRect*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
///
/// ``` QWindow* self, int w ```
void q_window_set_minimum_width(void* self, int w) {
    QWindow_SetMinimumWidth((QWindow*)self, w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
///
/// ``` QWindow* self, int h ```
void q_window_set_minimum_height(void* self, int h) {
    QWindow_SetMinimumHeight((QWindow*)self, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
///
/// ``` QWindow* self, int w ```
void q_window_set_maximum_width(void* self, int w) {
    QWindow_SetMaximumWidth((QWindow*)self, w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
///
/// ``` QWindow* self, int h ```
void q_window_set_maximum_height(void* self, int h) {
    QWindow_SetMaximumHeight((QWindow*)self, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#alert)
///
/// ``` QWindow* self, int msec ```
void q_window_alert(void* self, int msec) {
    QWindow_Alert((QWindow*)self, msec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
///
/// ``` QWindow* self ```
void q_window_request_update(void* self) {
    QWindow_RequestUpdate((QWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
///
/// ``` QWindow* self, QScreen* screen ```
void q_window_screen_changed(void* self, void* screen) {
    QWindow_ScreenChanged((QWindow*)self, (QScreen*)screen);
}

/// ``` QWindow* self, void (*slot)(QWindow*, QScreen*) ```
void q_window_on_screen_changed(void* self, void (*slot)(void*, void*)) {
    QWindow_Connect_ScreenChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
///
/// ``` QWindow* self, enum Qt__WindowModality modality ```
void q_window_modality_changed(void* self, int64_t modality) {
    QWindow_ModalityChanged((QWindow*)self, modality);
}

/// ``` QWindow* self, void (*slot)(QWindow*, enum Qt__WindowModality) ```
void q_window_on_modality_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_ModalityChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
///
/// ``` QWindow* self, enum Qt__WindowState windowState ```
void q_window_window_state_changed(void* self, int64_t windowState) {
    QWindow_WindowStateChanged((QWindow*)self, windowState);
}

/// ``` QWindow* self, void (*slot)(QWindow*, enum Qt__WindowState) ```
void q_window_on_window_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_WindowStateChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
///
/// ``` QWindow* self, const char* title ```
void q_window_window_title_changed(void* self, const char* title) {
    QWindow_WindowTitleChanged((QWindow*)self, qstring(title));
}

/// ``` QWindow* self, void (*slot)(QWindow*, const char*) ```
void q_window_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWindow_Connect_WindowTitleChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#xChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_x_changed(void* self, int arg) {
    QWindow_XChanged((QWindow*)self, arg);
}

/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_x_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_XChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#yChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_y_changed(void* self, int arg) {
    QWindow_YChanged((QWindow*)self, arg);
}

/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_y_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_YChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_width_changed(void* self, int arg) {
    QWindow_WidthChanged((QWindow*)self, arg);
}

/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_width_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_WidthChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_height_changed(void* self, int arg) {
    QWindow_HeightChanged((QWindow*)self, arg);
}

/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_height_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_HeightChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_minimum_width_changed(void* self, int arg) {
    QWindow_MinimumWidthChanged((QWindow*)self, arg);
}

/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_minimum_width_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MinimumWidthChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_minimum_height_changed(void* self, int arg) {
    QWindow_MinimumHeightChanged((QWindow*)self, arg);
}

/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_minimum_height_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MinimumHeightChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_maximum_width_changed(void* self, int arg) {
    QWindow_MaximumWidthChanged((QWindow*)self, arg);
}

/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_maximum_width_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MaximumWidthChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
///
/// ``` QWindow* self, int arg ```
void q_window_maximum_height_changed(void* self, int arg) {
    QWindow_MaximumHeightChanged((QWindow*)self, arg);
}

/// ``` QWindow* self, void (*slot)(QWindow*, int) ```
void q_window_on_maximum_height_changed(void* self, void (*slot)(void*, int)) {
    QWindow_Connect_MaximumHeightChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
///
/// ``` QWindow* self, bool arg ```
void q_window_visible_changed(void* self, bool arg) {
    QWindow_VisibleChanged((QWindow*)self, arg);
}

/// ``` QWindow* self, void (*slot)(QWindow*, bool) ```
void q_window_on_visible_changed(void* self, void (*slot)(void*, bool)) {
    QWindow_Connect_VisibleChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
///
/// ``` QWindow* self, enum QWindow__Visibility visibility ```
void q_window_visibility_changed(void* self, int64_t visibility) {
    QWindow_VisibilityChanged((QWindow*)self, visibility);
}

/// ``` QWindow* self, void (*slot)(QWindow*, enum QWindow__Visibility) ```
void q_window_on_visibility_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_VisibilityChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
///
/// ``` QWindow* self ```
void q_window_active_changed(void* self) {
    QWindow_ActiveChanged((QWindow*)self);
}

/// ``` QWindow* self, void (*slot)(QWindow*) ```
void q_window_on_active_changed(void* self, void (*slot)(void*)) {
    QWindow_Connect_ActiveChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
///
/// ``` QWindow* self, enum Qt__ScreenOrientation orientation ```
void q_window_content_orientation_changed(void* self, int64_t orientation) {
    QWindow_ContentOrientationChanged((QWindow*)self, orientation);
}

/// ``` QWindow* self, void (*slot)(QWindow*, enum Qt__ScreenOrientation) ```
void q_window_on_content_orientation_changed(void* self, void (*slot)(void*, int64_t)) {
    QWindow_Connect_ContentOrientationChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
///
/// ``` QWindow* self, QObject* object ```
void q_window_focus_object_changed(void* self, void* object) {
    QWindow_FocusObjectChanged((QWindow*)self, (QObject*)object);
}

/// ``` QWindow* self, void (*slot)(QWindow*, QObject*) ```
void q_window_on_focus_object_changed(void* self, void (*slot)(void*, void*)) {
    QWindow_Connect_FocusObjectChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
///
/// ``` QWindow* self, double opacity ```
void q_window_opacity_changed(void* self, double opacity) {
    QWindow_OpacityChanged((QWindow*)self, opacity);
}

/// ``` QWindow* self, void (*slot)(QWindow*, double) ```
void q_window_on_opacity_changed(void* self, void (*slot)(void*, double)) {
    QWindow_Connect_OpacityChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
///
/// ``` QWindow* self, QWindow* transientParent ```
void q_window_transient_parent_changed(void* self, void* transientParent) {
    QWindow_TransientParentChanged((QWindow*)self, (QWindow*)transientParent);
}

/// ``` QWindow* self, void (*slot)(QWindow*, QWindow*) ```
void q_window_on_transient_parent_changed(void* self, void (*slot)(void*, void*)) {
    QWindow_Connect_TransientParentChanged((QWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#exposeEvent)
///
/// ``` QWindow* self, QExposeEvent* param1 ```
void q_window_expose_event(void* self, void* param1) {
    QWindow_ExposeEvent((QWindow*)self, (QExposeEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QExposeEvent*) ```
void q_window_on_expose_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnExposeEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QExposeEvent* param1 ```
void q_window_qbase_expose_event(void* self, void* param1) {
    QWindow_QBaseExposeEvent((QWindow*)self, (QExposeEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#resizeEvent)
///
/// ``` QWindow* self, QResizeEvent* param1 ```
void q_window_resize_event(void* self, void* param1) {
    QWindow_ResizeEvent((QWindow*)self, (QResizeEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QResizeEvent*) ```
void q_window_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnResizeEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QResizeEvent* param1 ```
void q_window_qbase_resize_event(void* self, void* param1) {
    QWindow_QBaseResizeEvent((QWindow*)self, (QResizeEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#paintEvent)
///
/// ``` QWindow* self, QPaintEvent* param1 ```
void q_window_paint_event(void* self, void* param1) {
    QWindow_PaintEvent((QWindow*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QPaintEvent*) ```
void q_window_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnPaintEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QPaintEvent* param1 ```
void q_window_qbase_paint_event(void* self, void* param1) {
    QWindow_QBasePaintEvent((QWindow*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#moveEvent)
///
/// ``` QWindow* self, QMoveEvent* param1 ```
void q_window_move_event(void* self, void* param1) {
    QWindow_MoveEvent((QWindow*)self, (QMoveEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QMoveEvent*) ```
void q_window_on_move_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnMoveEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QMoveEvent* param1 ```
void q_window_qbase_move_event(void* self, void* param1) {
    QWindow_QBaseMoveEvent((QWindow*)self, (QMoveEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusInEvent)
///
/// ``` QWindow* self, QFocusEvent* param1 ```
void q_window_focus_in_event(void* self, void* param1) {
    QWindow_FocusInEvent((QWindow*)self, (QFocusEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QFocusEvent*) ```
void q_window_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnFocusInEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QFocusEvent* param1 ```
void q_window_qbase_focus_in_event(void* self, void* param1) {
    QWindow_QBaseFocusInEvent((QWindow*)self, (QFocusEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#focusOutEvent)
///
/// ``` QWindow* self, QFocusEvent* param1 ```
void q_window_focus_out_event(void* self, void* param1) {
    QWindow_FocusOutEvent((QWindow*)self, (QFocusEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QFocusEvent*) ```
void q_window_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnFocusOutEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QFocusEvent* param1 ```
void q_window_qbase_focus_out_event(void* self, void* param1) {
    QWindow_QBaseFocusOutEvent((QWindow*)self, (QFocusEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#showEvent)
///
/// ``` QWindow* self, QShowEvent* param1 ```
void q_window_show_event(void* self, void* param1) {
    QWindow_ShowEvent((QWindow*)self, (QShowEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QShowEvent*) ```
void q_window_on_show_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnShowEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QShowEvent* param1 ```
void q_window_qbase_show_event(void* self, void* param1) {
    QWindow_QBaseShowEvent((QWindow*)self, (QShowEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#hideEvent)
///
/// ``` QWindow* self, QHideEvent* param1 ```
void q_window_hide_event(void* self, void* param1) {
    QWindow_HideEvent((QWindow*)self, (QHideEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QHideEvent*) ```
void q_window_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnHideEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QHideEvent* param1 ```
void q_window_qbase_hide_event(void* self, void* param1) {
    QWindow_QBaseHideEvent((QWindow*)self, (QHideEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#closeEvent)
///
/// ``` QWindow* self, QCloseEvent* param1 ```
void q_window_close_event(void* self, void* param1) {
    QWindow_CloseEvent((QWindow*)self, (QCloseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QCloseEvent*) ```
void q_window_on_close_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnCloseEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QCloseEvent* param1 ```
void q_window_qbase_close_event(void* self, void* param1) {
    QWindow_QBaseCloseEvent((QWindow*)self, (QCloseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#event)
///
/// ``` QWindow* self, QEvent* param1 ```
bool q_window_event(void* self, void* param1) {
    return QWindow_Event((QWindow*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, bool (*slot)(QWindow*, QEvent*) ```
void q_window_on_event(void* self, bool (*slot)(void*, void*)) {
    QWindow_OnEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QEvent* param1 ```
bool q_window_qbase_event(void* self, void* param1) {
    return QWindow_QBaseEvent((QWindow*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyPressEvent)
///
/// ``` QWindow* self, QKeyEvent* param1 ```
void q_window_key_press_event(void* self, void* param1) {
    QWindow_KeyPressEvent((QWindow*)self, (QKeyEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QKeyEvent*) ```
void q_window_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnKeyPressEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QKeyEvent* param1 ```
void q_window_qbase_key_press_event(void* self, void* param1) {
    QWindow_QBaseKeyPressEvent((QWindow*)self, (QKeyEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#keyReleaseEvent)
///
/// ``` QWindow* self, QKeyEvent* param1 ```
void q_window_key_release_event(void* self, void* param1) {
    QWindow_KeyReleaseEvent((QWindow*)self, (QKeyEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QKeyEvent*) ```
void q_window_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnKeyReleaseEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QKeyEvent* param1 ```
void q_window_qbase_key_release_event(void* self, void* param1) {
    QWindow_QBaseKeyReleaseEvent((QWindow*)self, (QKeyEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mousePressEvent)
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_mouse_press_event(void* self, void* param1) {
    QWindow_MousePressEvent((QWindow*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QMouseEvent*) ```
void q_window_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnMousePressEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_qbase_mouse_press_event(void* self, void* param1) {
    QWindow_QBaseMousePressEvent((QWindow*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseReleaseEvent)
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_mouse_release_event(void* self, void* param1) {
    QWindow_MouseReleaseEvent((QWindow*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QMouseEvent*) ```
void q_window_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnMouseReleaseEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_qbase_mouse_release_event(void* self, void* param1) {
    QWindow_QBaseMouseReleaseEvent((QWindow*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseDoubleClickEvent)
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_mouse_double_click_event(void* self, void* param1) {
    QWindow_MouseDoubleClickEvent((QWindow*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QMouseEvent*) ```
void q_window_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnMouseDoubleClickEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_qbase_mouse_double_click_event(void* self, void* param1) {
    QWindow_QBaseMouseDoubleClickEvent((QWindow*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#mouseMoveEvent)
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_mouse_move_event(void* self, void* param1) {
    QWindow_MouseMoveEvent((QWindow*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QMouseEvent*) ```
void q_window_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnMouseMoveEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QMouseEvent* param1 ```
void q_window_qbase_mouse_move_event(void* self, void* param1) {
    QWindow_QBaseMouseMoveEvent((QWindow*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#wheelEvent)
///
/// ``` QWindow* self, QWheelEvent* param1 ```
void q_window_wheel_event(void* self, void* param1) {
    QWindow_WheelEvent((QWindow*)self, (QWheelEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QWheelEvent*) ```
void q_window_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnWheelEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QWheelEvent* param1 ```
void q_window_qbase_wheel_event(void* self, void* param1) {
    QWindow_QBaseWheelEvent((QWindow*)self, (QWheelEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#touchEvent)
///
/// ``` QWindow* self, QTouchEvent* param1 ```
void q_window_touch_event(void* self, void* param1) {
    QWindow_TouchEvent((QWindow*)self, (QTouchEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QTouchEvent*) ```
void q_window_on_touch_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnTouchEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QTouchEvent* param1 ```
void q_window_qbase_touch_event(void* self, void* param1) {
    QWindow_QBaseTouchEvent((QWindow*)self, (QTouchEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#tabletEvent)
///
/// ``` QWindow* self, QTabletEvent* param1 ```
void q_window_tablet_event(void* self, void* param1) {
    QWindow_TabletEvent((QWindow*)self, (QTabletEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QTabletEvent*) ```
void q_window_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnTabletEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, QTabletEvent* param1 ```
void q_window_qbase_tablet_event(void* self, void* param1) {
    QWindow_QBaseTabletEvent((QWindow*)self, (QTabletEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#nativeEvent)
///
/// ``` QWindow* self, const char* eventType, void* message, intptr_t* result ```
bool q_window_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QWindow_NativeEvent((QWindow*)self, qstring(eventType), message, result);
}

/// Allows for overriding the related default method
///
/// ``` QWindow* self, bool (*slot)(QWindow*, const char*, void*, intptr_t*) ```
void q_window_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QWindow_OnNativeEvent((QWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWindow* self, const char* eventType, void* message, intptr_t* result ```
bool q_window_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QWindow_QBaseNativeEvent((QWindow*)self, qstring(eventType), message, result);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_window_tr2(const char* s, const char* c) {
    libqt_string _str = QWindow_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_window_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWindow_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#parent)
///
/// ``` QWindow* self, enum QWindow__AncestorMode mode ```
QWindow* q_window_parent1(void* self, int64_t mode) {
    return QWindow_Parent1((QWindow*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#setFlag)
///
/// ``` QWindow* self, enum Qt__WindowType param1, bool on ```
void q_window_set_flag2(void* self, int64_t param1, bool on) {
    QWindow_SetFlag2((QWindow*)self, param1, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
///
/// ``` QWindow* self, QWindow* child, enum QWindow__AncestorMode mode ```
bool q_window_is_ancestor_of2(void* self, void* child, int64_t mode) {
    return QWindow_IsAncestorOf2((QWindow*)self, (QWindow*)child, mode);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWindow* self ```
const char* q_window_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWindow* self, const char* name ```
void q_window_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWindow* self ```
bool q_window_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWindow* self ```
bool q_window_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWindow* self ```
bool q_window_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWindow* self ```
bool q_window_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWindow* self, bool b ```
bool q_window_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWindow* self ```
QThread* q_window_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWindow* self, QThread* thread ```
void q_window_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWindow* self, int interval ```
int32_t q_window_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWindow* self, int id ```
void q_window_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWindow* self ```
libqt_list /* of QObject* */ q_window_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWindow* self, QObject* filterObj ```
void q_window_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWindow* self, QObject* obj ```
void q_window_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_window_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWindow* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_window_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_window_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_window_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWindow* self ```
void q_window_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWindow* self ```
void q_window_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWindow* self, const char* name, QVariant* value ```
bool q_window_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWindow* self, const char* name ```
QVariant* q_window_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWindow* self ```
const char** q_window_dynamic_property_names(void* self) {
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
/// ``` QWindow* self ```
QBindingStorage* q_window_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWindow* self ```
QBindingStorage* q_window_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWindow* self ```
void q_window_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWindow* self, void (*slot)(QObject*) ```
void q_window_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWindow* self, const char* classname ```
bool q_window_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWindow* self ```
void q_window_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWindow* self, int interval, enum Qt__TimerType timerType ```
int32_t q_window_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_window_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWindow* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_window_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWindow* self, QObject* param1 ```
void q_window_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWindow* self, void (*slot)(QObject*, QObject*) ```
void q_window_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// ``` QWindow* self ```
int64_t q_window_surface_class(void* self) {
    return QSurface_SurfaceClass((QSurface*)self);
}

/// Inherited from QSurface
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// ``` QWindow* self ```
bool q_window_supports_open_g_l(void* self) {
    return QSurface_SupportsOpenGL((QSurface*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, QObject* watched, QEvent* event ```
bool q_window_event_filter(void* self, void* watched, void* event) {
    return QWindow_EventFilter((QWindow*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, QObject* watched, QEvent* event ```
bool q_window_qbase_event_filter(void* self, void* watched, void* event) {
    return QWindow_QBaseEventFilter((QWindow*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, bool (*slot)(QWindow*, QObject*, QEvent*) ```
void q_window_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWindow_OnEventFilter((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, QTimerEvent* event ```
void q_window_timer_event(void* self, void* event) {
    QWindow_TimerEvent((QWindow*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, QTimerEvent* event ```
void q_window_qbase_timer_event(void* self, void* event) {
    QWindow_QBaseTimerEvent((QWindow*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QTimerEvent*) ```
void q_window_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnTimerEvent((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, QChildEvent* event ```
void q_window_child_event(void* self, void* event) {
    QWindow_ChildEvent((QWindow*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, QChildEvent* event ```
void q_window_qbase_child_event(void* self, void* event) {
    QWindow_QBaseChildEvent((QWindow*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QChildEvent*) ```
void q_window_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnChildEvent((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, QEvent* event ```
void q_window_custom_event(void* self, void* event) {
    QWindow_CustomEvent((QWindow*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, QEvent* event ```
void q_window_qbase_custom_event(void* self, void* event) {
    QWindow_QBaseCustomEvent((QWindow*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QEvent*) ```
void q_window_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWindow_OnCustomEvent((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, QMetaMethod* signal ```
void q_window_connect_notify(void* self, void* signal) {
    QWindow_ConnectNotify((QWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, QMetaMethod* signal ```
void q_window_qbase_connect_notify(void* self, void* signal) {
    QWindow_QBaseConnectNotify((QWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QMetaMethod*) ```
void q_window_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWindow_OnConnectNotify((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, QMetaMethod* signal ```
void q_window_disconnect_notify(void* self, void* signal) {
    QWindow_DisconnectNotify((QWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, QMetaMethod* signal ```
void q_window_qbase_disconnect_notify(void* self, void* signal) {
    QWindow_QBaseDisconnectNotify((QWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, void (*slot)(QWindow*, QMetaMethod*) ```
void q_window_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWindow_OnDisconnectNotify((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self ```
QObject* q_window_sender(void* self) {
    return QWindow_Sender((QWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self ```
QObject* q_window_qbase_sender(void* self) {
    return QWindow_QBaseSender((QWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, QObject* (*slot)() ```
void q_window_on_sender(void* self, QObject* (*slot)()) {
    QWindow_OnSender((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self ```
int32_t q_window_sender_signal_index(void* self) {
    return QWindow_SenderSignalIndex((QWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self ```
int32_t q_window_qbase_sender_signal_index(void* self) {
    return QWindow_QBaseSenderSignalIndex((QWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, int32_t (*slot)() ```
void q_window_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWindow_OnSenderSignalIndex((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, const char* signal ```
int32_t q_window_receivers(void* self, const char* signal) {
    return QWindow_Receivers((QWindow*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, const char* signal ```
int32_t q_window_qbase_receivers(void* self, const char* signal) {
    return QWindow_QBaseReceivers((QWindow*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, int32_t (*slot)(QWindow*, const char*) ```
void q_window_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWindow_OnReceivers((QWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWindow* self, QMetaMethod* signal ```
bool q_window_is_signal_connected(void* self, void* signal) {
    return QWindow_IsSignalConnected((QWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWindow* self, QMetaMethod* signal ```
bool q_window_qbase_is_signal_connected(void* self, void* signal) {
    return QWindow_QBaseIsSignalConnected((QWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWindow* self, bool (*slot)(QWindow*, QMetaMethod*) ```
void q_window_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWindow_OnIsSignalConnected((QWindow*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWindow* self ```
void q_window_delete(void* self) {
    QWindow_Delete((QWindow*)(self));
}