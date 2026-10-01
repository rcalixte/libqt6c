#pragma once
#ifndef QUICK_LIBQQUICKWIDGET_H
#define QUICK_LIBQQUICKWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html)

/// q_quickwidget_new constructs a new QQuickWidget object.
///
/// @param parent QWidget*
///
QQuickWidget* q_quickwidget_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html)

/// q_quickwidget_new2 constructs a new QQuickWidget object.
///
QQuickWidget* q_quickwidget_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html)

/// q_quickwidget_new3 constructs a new QQuickWidget object.
///
/// @param engine QQmlEngine*
/// @param parent QWidget*
///
QQuickWidget* q_quickwidget_new3(void* engine, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html)

/// q_quickwidget_new4 constructs a new QQuickWidget object.
///
/// @param source QUrl*
///
QQuickWidget* q_quickwidget_new4(const void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html)

/// q_quickwidget_new5 constructs a new QQuickWidget object.
///
/// @param source QUrl*
/// @param parent QWidget*
///
QQuickWidget* q_quickwidget_new5(const void* source, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QQuickWidget*
///
const QMetaObject* q_quickwidget_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback const QMetaObject* func(const QQuickWidget* self)
///
void q_quickwidget_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QQuickWidget*
///
const QMetaObject* q_quickwidget_super_meta_object(const void* self);

/// @param self QQuickWidget*
/// @param param1 const char*
///
void* q_quickwidget_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void* func(QQuickWidget* self, const char* param1)
///
void q_quickwidget_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 const char*
///
void* q_quickwidget_super_metacast(void* self, const char* param1);

/// @param self QQuickWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickwidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback int32_t func(QQuickWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quickwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickwidget_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickwidget_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#source)
///
/// @param self const QQuickWidget*
///
QUrl* q_quickwidget_source(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#engine)
///
/// @param self const QQuickWidget*
///
QQmlEngine* q_quickwidget_engine(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#rootContext)
///
/// @param self const QQuickWidget*
///
QQmlContext* q_quickwidget_root_context(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#rootObject)
///
/// @param self const QQuickWidget*
///
QQuickItem* q_quickwidget_root_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#resizeMode)
///
/// @param self const QQuickWidget*
///
/// @return enum QQuickWidget__ResizeMode
///
int32_t q_quickwidget_resize_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#setResizeMode)
///
/// @param self QQuickWidget*
/// @param resizeMode enum QQuickWidget__ResizeMode
///
void q_quickwidget_set_resize_mode(void* self, int32_t resizeMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#status)
///
/// @param self const QQuickWidget*
///
/// @return enum QQuickWidget__Status
///
int32_t q_quickwidget_status(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#errors)
///
/// @param self const QQuickWidget*
///
/// @return libqt_list of QQmlError*
///
libqt_list q_quickwidget_errors(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#sizeHint)
///
/// @param self const QQuickWidget*
///
QSize* q_quickwidget_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback QSize* func(const QQuickWidget* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickwidget_on_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QQuickWidget*
///
QSize* q_quickwidget_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#initialSize)
///
/// @param self const QQuickWidget*
///
QSize* q_quickwidget_initial_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#setFormat)
///
/// @param self QQuickWidget*
/// @param format QSurfaceFormat*
///
void q_quickwidget_set_format(void* self, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#format)
///
/// @param self const QQuickWidget*
///
QSurfaceFormat* q_quickwidget_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#grabFramebuffer)
///
/// @param self const QQuickWidget*
///
QImage* q_quickwidget_grab_framebuffer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#setClearColor)
///
/// @param self QQuickWidget*
/// @param color QColor*
///
void q_quickwidget_set_clear_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#quickWindow)
///
/// @param self const QQuickWidget*
///
QQuickWindow* q_quickwidget_quick_window(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#setSource)
///
/// @param self QQuickWidget*
/// @param source QUrl*
///
void q_quickwidget_set_source(void* self, const void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#setContent)
///
/// @param self QQuickWidget*
/// @param url QUrl*
/// @param component QQmlComponent*
/// @param item QObject*
///
void q_quickwidget_set_content(void* self, const void* url, void* component, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#statusChanged)
///
/// @param self QQuickWidget*
/// @param param1 enum QQuickWidget__Status
///
void q_quickwidget_status_changed(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#statusChanged)
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, enum QQuickWidget__Status param1)
///
void q_quickwidget_on_status_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#sceneGraphError)
///
/// @param self QQuickWidget*
/// @param error enum QQuickWindow__SceneGraphError
/// @param message const char*
///
void q_quickwidget_scene_graph_error(void* self, int32_t error, const char* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#sceneGraphError)
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, enum QQuickWindow__SceneGraphError error, const char* message)
///
void q_quickwidget_on_scene_graph_error(void* self, void (*callback)(void*, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#resizeEvent)
///
/// @param self QQuickWidget*
/// @param param1 QResizeEvent*
///
void q_quickwidget_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QResizeEvent* param1)
///
void q_quickwidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QResizeEvent*
///
void q_quickwidget_super_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#timerEvent)
///
/// @param self QQuickWidget*
/// @param param1 QTimerEvent*
///
void q_quickwidget_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QTimerEvent* param1)
///
void q_quickwidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QTimerEvent*
///
void q_quickwidget_super_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#keyPressEvent)
///
/// @param self QQuickWidget*
/// @param param1 QKeyEvent*
///
void q_quickwidget_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QKeyEvent* param1)
///
void q_quickwidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QKeyEvent*
///
void q_quickwidget_super_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#keyReleaseEvent)
///
/// @param self QQuickWidget*
/// @param param1 QKeyEvent*
///
void q_quickwidget_key_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QKeyEvent* param1)
///
void q_quickwidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QKeyEvent*
///
void q_quickwidget_super_key_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#mousePressEvent)
///
/// @param self QQuickWidget*
/// @param param1 QMouseEvent*
///
void q_quickwidget_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QMouseEvent* param1)
///
void q_quickwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QMouseEvent*
///
void q_quickwidget_super_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#mouseReleaseEvent)
///
/// @param self QQuickWidget*
/// @param param1 QMouseEvent*
///
void q_quickwidget_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QMouseEvent* param1)
///
void q_quickwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QMouseEvent*
///
void q_quickwidget_super_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#mouseMoveEvent)
///
/// @param self QQuickWidget*
/// @param param1 QMouseEvent*
///
void q_quickwidget_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QMouseEvent* param1)
///
void q_quickwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QMouseEvent*
///
void q_quickwidget_super_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#mouseDoubleClickEvent)
///
/// @param self QQuickWidget*
/// @param param1 QMouseEvent*
///
void q_quickwidget_mouse_double_click_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QMouseEvent* param1)
///
void q_quickwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QMouseEvent*
///
void q_quickwidget_super_mouse_double_click_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#showEvent)
///
/// @param self QQuickWidget*
/// @param param1 QShowEvent*
///
void q_quickwidget_show_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QShowEvent* param1)
///
void q_quickwidget_on_show_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#showEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QShowEvent*
///
void q_quickwidget_super_show_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#hideEvent)
///
/// @param self QQuickWidget*
/// @param param1 QHideEvent*
///
void q_quickwidget_hide_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QHideEvent* param1)
///
void q_quickwidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#hideEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QHideEvent*
///
void q_quickwidget_super_hide_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#focusInEvent)
///
/// @param self QQuickWidget*
/// @param event QFocusEvent*
///
void q_quickwidget_focus_in_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QFocusEvent* event)
///
void q_quickwidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param event QFocusEvent*
///
void q_quickwidget_super_focus_in_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#focusOutEvent)
///
/// @param self QQuickWidget*
/// @param event QFocusEvent*
///
void q_quickwidget_focus_out_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QFocusEvent* event)
///
void q_quickwidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param event QFocusEvent*
///
void q_quickwidget_super_focus_out_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#wheelEvent)
///
/// @param self QQuickWidget*
/// @param param1 QWheelEvent*
///
void q_quickwidget_wheel_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QWheelEvent* param1)
///
void q_quickwidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QWheelEvent*
///
void q_quickwidget_super_wheel_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#dragEnterEvent)
///
/// @param self QQuickWidget*
/// @param param1 QDragEnterEvent*
///
void q_quickwidget_drag_enter_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QDragEnterEvent* param1)
///
void q_quickwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QDragEnterEvent*
///
void q_quickwidget_super_drag_enter_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#dragMoveEvent)
///
/// @param self QQuickWidget*
/// @param param1 QDragMoveEvent*
///
void q_quickwidget_drag_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QDragMoveEvent* param1)
///
void q_quickwidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QDragMoveEvent*
///
void q_quickwidget_super_drag_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#dragLeaveEvent)
///
/// @param self QQuickWidget*
/// @param param1 QDragLeaveEvent*
///
void q_quickwidget_drag_leave_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QDragLeaveEvent* param1)
///
void q_quickwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QDragLeaveEvent*
///
void q_quickwidget_super_drag_leave_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#dropEvent)
///
/// @param self QQuickWidget*
/// @param param1 QDropEvent*
///
void q_quickwidget_drop_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QDropEvent* param1)
///
void q_quickwidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QDropEvent*
///
void q_quickwidget_super_drop_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#event)
///
/// @param self QQuickWidget*
/// @param param1 QEvent*
///
bool q_quickwidget_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback bool func(QQuickWidget* self, QEvent* param1)
///
void q_quickwidget_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#event)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param param1 QEvent*
///
bool q_quickwidget_super_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#paintEvent)
///
/// @param self QQuickWidget*
/// @param event QPaintEvent*
///
void q_quickwidget_paint_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QPaintEvent* event)
///
void q_quickwidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param event QPaintEvent*
///
void q_quickwidget_super_paint_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#focusNextPrevChild)
///
/// @param self QQuickWidget*
/// @param next bool
///
bool q_quickwidget_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// @param self QQuickWidget*
/// @param callback bool func(QQuickWidget* self, bool next)
///
void q_quickwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// @param self QQuickWidget*
/// @param next bool
///
bool q_quickwidget_super_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickwidget_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quickwidget_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const QQuickWidget*
///
QPaintDevice* q_quickwidget_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a QQuickWidget object
///
/// @param _qpaintdevice QPaintDevice*
///
QQuickWidget* q_quickwidget_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QQuickWidget*
///
uintptr_t q_quickwidget_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QQuickWidget*
///
void q_quickwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const QQuickWidget*
///
uintptr_t q_quickwidget_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QQuickWidget*
///
uintptr_t q_quickwidget_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QQuickWidget*
///
QStyle* q_quickwidget_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QQuickWidget*
/// @param style QStyle*
///
void q_quickwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QQuickWidget*
///
/// @return enum Qt__WindowModality
///
int32_t q_quickwidget_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QQuickWidget*
/// @param windowModality enum Qt__WindowModality
///
void q_quickwidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QQuickWidget*
/// @param param1 QWidget*
///
bool q_quickwidget_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QQuickWidget*
/// @param enabled bool
///
void q_quickwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QQuickWidget*
/// @param disabled bool
///
void q_quickwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QQuickWidget*
/// @param windowModified bool
///
void q_quickwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const QQuickWidget*
///
QRect* q_quickwidget_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QQuickWidget*
///
const QRect* q_quickwidget_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QQuickWidget*
///
QRect* q_quickwidget_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QQuickWidget*
///
QPoint* q_quickwidget_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QQuickWidget*
///
QSize* q_quickwidget_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QQuickWidget*
///
QSize* q_quickwidget_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QQuickWidget*
///
QRect* q_quickwidget_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QQuickWidget*
///
QRect* q_quickwidget_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QQuickWidget*
///
QRegion* q_quickwidget_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QQuickWidget*
///
QSize* q_quickwidget_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QQuickWidget*
///
QSize* q_quickwidget_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QQuickWidget*
/// @param minimumSize QSize*
///
void q_quickwidget_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QQuickWidget*
/// @param minw int
/// @param minh int
///
void q_quickwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QQuickWidget*
/// @param maximumSize QSize*
///
void q_quickwidget_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QQuickWidget*
/// @param maxw int
/// @param maxh int
///
void q_quickwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QQuickWidget*
/// @param minw int
///
void q_quickwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QQuickWidget*
/// @param minh int
///
void q_quickwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QQuickWidget*
/// @param maxw int
///
void q_quickwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QQuickWidget*
/// @param maxh int
///
void q_quickwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const QQuickWidget*
///
QSize* q_quickwidget_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QQuickWidget*
/// @param sizeIncrement QSize*
///
void q_quickwidget_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QQuickWidget*
/// @param w int
/// @param h int
///
void q_quickwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const QQuickWidget*
///
QSize* q_quickwidget_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QQuickWidget*
/// @param baseSize QSize*
///
void q_quickwidget_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QQuickWidget*
/// @param basew int
/// @param baseh int
///
void q_quickwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QQuickWidget*
/// @param fixedSize QSize*
///
void q_quickwidget_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QQuickWidget*
/// @param w int
/// @param h int
///
void q_quickwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QQuickWidget*
/// @param w int
///
void q_quickwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QQuickWidget*
/// @param h int
///
void q_quickwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QQuickWidget*
/// @param param1 QPointF*
///
QPointF* q_quickwidget_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QQuickWidget*
/// @param param1 QPoint*
///
QPoint* q_quickwidget_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QQuickWidget*
/// @param param1 QPointF*
///
QPointF* q_quickwidget_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QQuickWidget*
/// @param param1 QPoint*
///
QPoint* q_quickwidget_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QQuickWidget*
/// @param param1 QPointF*
///
QPointF* q_quickwidget_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QQuickWidget*
/// @param param1 QPoint*
///
QPoint* q_quickwidget_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QQuickWidget*
/// @param param1 QPointF*
///
QPointF* q_quickwidget_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QQuickWidget*
/// @param param1 QPoint*
///
QPoint* q_quickwidget_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QQuickWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_quickwidget_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QQuickWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_quickwidget_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QQuickWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_quickwidget_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QQuickWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_quickwidget_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QQuickWidget*
///
QWidget* q_quickwidget_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QQuickWidget*
///
QWidget* q_quickwidget_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QQuickWidget*
///
QWidget* q_quickwidget_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QQuickWidget*
///
const QPalette* q_quickwidget_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QQuickWidget*
/// @param palette QPalette*
///
void q_quickwidget_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QQuickWidget*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_quickwidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const QQuickWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t q_quickwidget_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QQuickWidget*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_quickwidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const QQuickWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t q_quickwidget_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QQuickWidget*
///
const QFont* q_quickwidget_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QQuickWidget*
/// @param font QFont*
///
void q_quickwidget_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QQuickWidget*
///
QFontMetrics* q_quickwidget_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QQuickWidget*
///
QFontInfo* q_quickwidget_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QQuickWidget*
///
QCursor* q_quickwidget_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QQuickWidget*
/// @param cursor QCursor*
///
void q_quickwidget_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QQuickWidget*
///
void q_quickwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QQuickWidget*
/// @param enable bool
///
void q_quickwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QQuickWidget*
/// @param enable bool
///
void q_quickwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QQuickWidget*
/// @param mask QBitmap*
///
void q_quickwidget_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QQuickWidget*
/// @param mask QRegion*
///
void q_quickwidget_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QQuickWidget*
///
QRegion* q_quickwidget_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QQuickWidget*
///
void q_quickwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QQuickWidget*
/// @param target QPaintDevice*
///
void q_quickwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QQuickWidget*
/// @param painter QPainter*
///
void q_quickwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QQuickWidget*
///
QPixmap* q_quickwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const QQuickWidget*
///
QGraphicsEffect* q_quickwidget_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QQuickWidget*
/// @param effect QGraphicsEffect*
///
void q_quickwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QQuickWidget*
/// @param type enum Qt__GestureType
///
void q_quickwidget_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QQuickWidget*
/// @param type enum Qt__GestureType
///
void q_quickwidget_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QQuickWidget*
/// @param windowTitle const char*
///
void q_quickwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QQuickWidget*
/// @param styleSheet const char*
///
void q_quickwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWidget*
///
const char* q_quickwidget_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWidget*
///
const char* q_quickwidget_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QQuickWidget*
/// @param icon QIcon*
///
void q_quickwidget_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QQuickWidget*
///
QIcon* q_quickwidget_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QQuickWidget*
/// @param windowIconText const char*
///
void q_quickwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWidget*
///
const char* q_quickwidget_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QQuickWidget*
/// @param windowRole const char*
///
void q_quickwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWidget*
///
const char* q_quickwidget_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QQuickWidget*
/// @param filePath const char*
///
void q_quickwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWidget*
///
const char* q_quickwidget_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QQuickWidget*
/// @param level double
///
void q_quickwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const QQuickWidget*
///
double q_quickwidget_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QQuickWidget*
/// @param toolTip const char*
///
void q_quickwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWidget*
///
const char* q_quickwidget_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QQuickWidget*
/// @param msec int
///
void q_quickwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QQuickWidget*
/// @param statusTip const char*
///
void q_quickwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWidget*
///
const char* q_quickwidget_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QQuickWidget*
/// @param whatsThis const char*
///
void q_quickwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWidget*
///
const char* q_quickwidget_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWidget*
///
const char* q_quickwidget_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QQuickWidget*
/// @param name const char*
///
void q_quickwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWidget*
///
const char* q_quickwidget_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QQuickWidget*
/// @param description const char*
///
void q_quickwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QQuickWidget*
/// @param direction enum Qt__LayoutDirection
///
void q_quickwidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const QQuickWidget*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_quickwidget_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QQuickWidget*
///
void q_quickwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QQuickWidget*
/// @param locale QLocale*
///
void q_quickwidget_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QQuickWidget*
///
QLocale* q_quickwidget_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QQuickWidget*
///
void q_quickwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QQuickWidget*
///
void q_quickwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QQuickWidget*
///
void q_quickwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QQuickWidget*
///
void q_quickwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QQuickWidget*
/// @param reason enum Qt__FocusReason
///
void q_quickwidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const QQuickWidget*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_quickwidget_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QQuickWidget*
/// @param policy enum Qt__FocusPolicy
///
void q_quickwidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_quickwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QQuickWidget*
/// @param focusProxy QWidget*
///
void q_quickwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const QQuickWidget*
///
QWidget* q_quickwidget_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QQuickWidget*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_quickwidget_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QQuickWidget*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_quickwidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QQuickWidget*
///
void q_quickwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QQuickWidget*
/// @param param1 QCursor*
///
void q_quickwidget_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QQuickWidget*
///
void q_quickwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QQuickWidget*
///
void q_quickwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QQuickWidget*
///
void q_quickwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QQuickWidget*
/// @param key QKeySequence*
///
int32_t q_quickwidget_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QQuickWidget*
/// @param id int
///
void q_quickwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QQuickWidget*
/// @param id int
///
void q_quickwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QQuickWidget*
/// @param id int
///
void q_quickwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_quickwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_quickwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QQuickWidget*
/// @param enable bool
///
void q_quickwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const QQuickWidget*
///
QGraphicsProxyWidget* q_quickwidget_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QQuickWidget*
///
void q_quickwidget_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QQuickWidget*
///
void q_quickwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QQuickWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_quickwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QQuickWidget*
/// @param param1 QRect*
///
void q_quickwidget_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QQuickWidget*
/// @param param1 QRegion*
///
void q_quickwidget_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QQuickWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_quickwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QQuickWidget*
/// @param param1 QRect*
///
void q_quickwidget_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QQuickWidget*
/// @param param1 QRegion*
///
void q_quickwidget_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QQuickWidget*
/// @param hidden bool
///
void q_quickwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QQuickWidget*
///
void q_quickwidget_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QQuickWidget*
///
void q_quickwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QQuickWidget*
///
void q_quickwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QQuickWidget*
///
void q_quickwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QQuickWidget*
///
void q_quickwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QQuickWidget*
///
void q_quickwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QQuickWidget*
///
bool q_quickwidget_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QQuickWidget*
///
void q_quickwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QQuickWidget*
///
void q_quickwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QQuickWidget*
/// @param param1 QWidget*
///
void q_quickwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QQuickWidget*
/// @param x int
/// @param y int
///
void q_quickwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QQuickWidget*
/// @param param1 QPoint*
///
void q_quickwidget_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QQuickWidget*
/// @param w int
/// @param h int
///
void q_quickwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QQuickWidget*
/// @param param1 QSize*
///
void q_quickwidget_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QQuickWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_quickwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QQuickWidget*
/// @param geometry QRect*
///
void q_quickwidget_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQuickWidget*
///
char* q_quickwidget_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QQuickWidget*
/// @param geometry char*
///
bool q_quickwidget_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QQuickWidget*
///
void q_quickwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QQuickWidget*
/// @param param1 QWidget*
///
bool q_quickwidget_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QQuickWidget*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_quickwidget_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QQuickWidget*
/// @param state flag of enum Qt__WindowState
///
void q_quickwidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QQuickWidget*
/// @param state flag of enum Qt__WindowState
///
void q_quickwidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const QQuickWidget*
///
QSizePolicy* q_quickwidget_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QQuickWidget*
/// @param sizePolicy QSizePolicy*
///
void q_quickwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QQuickWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_quickwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const QQuickWidget*
///
QRegion* q_quickwidget_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QQuickWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_quickwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QQuickWidget*
/// @param margins QMargins*
///
void q_quickwidget_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QQuickWidget*
///
QMargins* q_quickwidget_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QQuickWidget*
///
QRect* q_quickwidget_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QQuickWidget*
///
QLayout* q_quickwidget_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QQuickWidget*
/// @param layout QLayout*
///
void q_quickwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QQuickWidget*
///
void q_quickwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QQuickWidget*
/// @param parent QWidget*
///
void q_quickwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QQuickWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_quickwidget_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QQuickWidget*
/// @param dx int
/// @param dy int
///
void q_quickwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QQuickWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_quickwidget_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QQuickWidget*
///
QWidget* q_quickwidget_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QQuickWidget*
///
QWidget* q_quickwidget_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QQuickWidget*
///
QWidget* q_quickwidget_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QQuickWidget*
/// @param on bool
///
void q_quickwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QQuickWidget*
/// @param action QAction*
///
void q_quickwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QQuickWidget*
/// @param actions libqt_list of QAction*
///
void q_quickwidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QQuickWidget*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_quickwidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QQuickWidget*
/// @param before QAction*
/// @param action QAction*
///
void q_quickwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QQuickWidget*
/// @param action QAction*
///
void q_quickwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const QQuickWidget*
///
/// @return libqt_list of QAction*
///
libqt_list q_quickwidget_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QQuickWidget*
/// @param text const char*
///
QAction* q_quickwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QQuickWidget*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_quickwidget_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QQuickWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_quickwidget_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QQuickWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_quickwidget_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QQuickWidget*
///
QWidget* q_quickwidget_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QQuickWidget*
/// @param type flag of enum Qt__WindowType
///
void q_quickwidget_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QQuickWidget*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_quickwidget_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QQuickWidget*
/// @param param1 enum Qt__WindowType
///
void q_quickwidget_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QQuickWidget*
/// @param type flag of enum Qt__WindowType
///
void q_quickwidget_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QQuickWidget*
///
/// @return enum Qt__WindowType
///
int32_t q_quickwidget_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* q_quickwidget_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QQuickWidget*
/// @param x int
/// @param y int
///
QWidget* q_quickwidget_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QQuickWidget*
/// @param p QPoint*
///
QWidget* q_quickwidget_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QQuickWidget*
/// @param p QPointF*
///
QWidget* q_quickwidget_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QQuickWidget*
/// @param param1 enum Qt__WidgetAttribute
///
void q_quickwidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const QQuickWidget*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_quickwidget_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QQuickWidget*
///
void q_quickwidget_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QQuickWidget*
/// @param child QWidget*
///
bool q_quickwidget_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QQuickWidget*
/// @param enabled bool
///
void q_quickwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const QQuickWidget*
///
QBackingStore* q_quickwidget_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QQuickWidget*
///
QWindow* q_quickwidget_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QQuickWidget*
///
QScreen* q_quickwidget_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QQuickWidget*
/// @param screen QScreen*
///
void q_quickwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_quickwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QQuickWidget*
/// @param title const char*
///
void q_quickwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, const char* title)
///
void q_quickwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QQuickWidget*
/// @param icon QIcon*
///
void q_quickwidget_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QIcon* icon)
///
void q_quickwidget_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QQuickWidget*
/// @param iconText const char*
///
void q_quickwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, const char* iconText)
///
void q_quickwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QQuickWidget*
/// @param pos QPoint*
///
void q_quickwidget_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QPoint* pos)
///
void q_quickwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QQuickWidget*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_quickwidget_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QQuickWidget*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_quickwidget_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QQuickWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_quickwidget_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QQuickWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_quickwidget_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QQuickWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_quickwidget_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QQuickWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_quickwidget_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QQuickWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_quickwidget_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QQuickWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_quickwidget_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QQuickWidget*
/// @param rectangle QRect*
///
QPixmap* q_quickwidget_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QQuickWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_quickwidget_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QQuickWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_quickwidget_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QQuickWidget*
/// @param id int
/// @param enable bool
///
void q_quickwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QQuickWidget*
/// @param id int
/// @param enable bool
///
void q_quickwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QQuickWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_quickwidget_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QQuickWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_quickwidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_quickwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_quickwidget_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuickWidget*
///
const char* q_quickwidget_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickWidget*
/// @param name const char*
///
void q_quickwidget_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickWidget*
/// @param b bool
///
bool q_quickwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QQuickWidget*
///
QThread* q_quickwidget_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickWidget*
/// @param thread QThread*
///
bool q_quickwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWidget*
/// @param interval int
///
int32_t q_quickwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWidget*
/// @param time int64_t of nanoseconds
///
int32_t q_quickwidget_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickWidget*
/// @param id int
///
void q_quickwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickWidget*
/// @param id enum Qt__TimerId
///
void q_quickwidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QQuickWidget*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickwidget_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickWidget*
/// @param filterObj QObject*
///
void q_quickwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickWidget*
/// @param obj QObject*
///
void q_quickwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickwidget_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickwidget_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQuickWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickwidget_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickwidget_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickwidget_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWidget*
/// @param receiver QObject*
///
bool q_quickwidget_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickwidget_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QQuickWidget*
///
void q_quickwidget_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QQuickWidget*
///
void q_quickwidget_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickWidget*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickwidget_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QQuickWidget*
/// @param name const char*
///
QVariant* q_quickwidget_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQuickWidget*
///
const char** q_quickwidget_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickWidget*
///
QBindingStorage* q_quickwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QQuickWidget*
///
const QBindingStorage* q_quickwidget_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWidget*
///
void q_quickwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self)
///
void q_quickwidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QQuickWidget*
///
QObject* q_quickwidget_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QQuickWidget*
/// @param classname const char*
///
bool q_quickwidget_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickWidget*
///
void q_quickwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickwidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickWidget*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickwidget_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickwidget_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickwidget_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQuickWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickwidget_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWidget*
/// @param signal const char*
///
bool q_quickwidget_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWidget*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickwidget_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWidget*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickwidget_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuickWidget*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickwidget_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWidget*
/// @param param1 QObject*
///
void q_quickwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QObject* param1)
///
void q_quickwidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QQuickWidget*
///
double q_quickwidget_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QQuickWidget*
///
double q_quickwidget_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_quickwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_quickwidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback int32_t func(QQuickWidget* self)
///
void q_quickwidget_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param visible bool
///
void q_quickwidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param visible bool
///
void q_quickwidget_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, bool visible)
///
void q_quickwidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
///
QSize* q_quickwidget_minimum_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
///
QSize* q_quickwidget_super_minimum_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback QSize* func(QQuickWidget* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickwidget_on_minimum_size_hint(void* self, QSize* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
/// @param param1 int
///
int32_t q_quickwidget_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
/// @param param1 int
///
int32_t q_quickwidget_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback int32_t func(QQuickWidget* self, int param1)
///
void q_quickwidget_on_height_for_width(void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
///
bool q_quickwidget_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback bool func(QQuickWidget* self)
///
void q_quickwidget_on_has_height_for_width(void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
///
QPaintEngine* q_quickwidget_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
///
QPaintEngine* q_quickwidget_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback QPaintEngine* func(QQuickWidget* self)
///
void q_quickwidget_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QEnterEvent*
///
void q_quickwidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QEnterEvent*
///
void q_quickwidget_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QEnterEvent* event)
///
void q_quickwidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QEvent*
///
void q_quickwidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QEvent*
///
void q_quickwidget_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QEvent* event)
///
void q_quickwidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QMoveEvent*
///
void q_quickwidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QMoveEvent*
///
void q_quickwidget_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QMoveEvent* event)
///
void q_quickwidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QCloseEvent*
///
void q_quickwidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QCloseEvent*
///
void q_quickwidget_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QCloseEvent* event)
///
void q_quickwidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QContextMenuEvent*
///
void q_quickwidget_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QContextMenuEvent*
///
void q_quickwidget_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QContextMenuEvent* event)
///
void q_quickwidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QTabletEvent*
///
void q_quickwidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QTabletEvent*
///
void q_quickwidget_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QTabletEvent* event)
///
void q_quickwidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QActionEvent*
///
void q_quickwidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QActionEvent*
///
void q_quickwidget_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QActionEvent* event)
///
void q_quickwidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_quickwidget_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_quickwidget_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback bool func(QQuickWidget* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_quickwidget_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param param1 QEvent*
///
void q_quickwidget_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param param1 QEvent*
///
void q_quickwidget_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QEvent* param1)
///
void q_quickwidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_quickwidget_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_quickwidget_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback int32_t func(QQuickWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_quickwidget_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
/// @param painter QPainter*
///
void q_quickwidget_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
/// @param painter QPainter*
///
void q_quickwidget_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QPainter* painter)
///
void q_quickwidget_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
/// @param offset QPoint*
///
QPaintDevice* q_quickwidget_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
/// @param offset QPoint*
///
QPaintDevice* q_quickwidget_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback QPaintDevice* func(QQuickWidget* self, QPoint* offset)
///
void q_quickwidget_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
///
QPainter* q_quickwidget_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
///
QPainter* q_quickwidget_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback QPainter* func(QQuickWidget* self)
///
void q_quickwidget_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param param1 QInputMethodEvent*
///
void q_quickwidget_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param param1 QInputMethodEvent*
///
void q_quickwidget_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QInputMethodEvent* param1)
///
void q_quickwidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_quickwidget_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_quickwidget_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback QVariant* func(QQuickWidget* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickwidget_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickwidget_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickwidget_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback bool func(QQuickWidget* self, QObject* watched, QEvent* event)
///
void q_quickwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QChildEvent*
///
void q_quickwidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QChildEvent*
///
void q_quickwidget_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QChildEvent* event)
///
void q_quickwidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QEvent*
///
void q_quickwidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param event QEvent*
///
void q_quickwidget_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QEvent* event)
///
void q_quickwidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param signal QMetaMethod*
///
void q_quickwidget_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param signal QMetaMethod*
///
void q_quickwidget_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QMetaMethod* signal)
///
void q_quickwidget_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
/// @param signal QMetaMethod*
///
void q_quickwidget_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param signal QMetaMethod*
///
void q_quickwidget_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, QMetaMethod* signal)
///
void q_quickwidget_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
///
void q_quickwidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
///
void q_quickwidget_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self)
///
void q_quickwidget_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
///
void q_quickwidget_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
///
void q_quickwidget_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self)
///
void q_quickwidget_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
///
void q_quickwidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
///
void q_quickwidget_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self)
///
void q_quickwidget_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
///
bool q_quickwidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
///
bool q_quickwidget_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback bool func(QQuickWidget* self)
///
void q_quickwidget_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickWidget*
///
bool q_quickwidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickWidget*
///
bool q_quickwidget_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback bool func(QQuickWidget* self)
///
void q_quickwidget_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
///
QObject* q_quickwidget_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
///
QObject* q_quickwidget_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback QObject* func(QQuickWidget* self)
///
void q_quickwidget_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
///
int32_t q_quickwidget_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback int32_t func(QQuickWidget* self)
///
void q_quickwidget_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
/// @param signal const char*
///
int32_t q_quickwidget_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
/// @param signal const char*
///
int32_t q_quickwidget_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback int32_t func(QQuickWidget* self, const char* signal)
///
void q_quickwidget_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
/// @param signal QMetaMethod*
///
bool q_quickwidget_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
/// @param signal QMetaMethod*
///
bool q_quickwidget_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback bool func(QQuickWidget* self, QMetaMethod* signal)
///
void q_quickwidget_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuickWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_quickwidget_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuickWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_quickwidget_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickWidget*
/// @param callback double func(QQuickWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_quickwidget_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickWidget*
/// @param callback void func(QQuickWidget* self, const char* objectName)
///
void q_quickwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#dtor.QQuickWidget)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickWidget*
///
void q_quickwidget_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#public-types)

typedef enum {
    QQUICKWIDGET_RESIZEMODE_SIZEVIEWTOROOTOBJECT = 0,
    QQUICKWIDGET_RESIZEMODE_SIZEROOTOBJECTTOVIEW = 1
} QQuickWidget__ResizeMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qquickwidget.html#public-types)

typedef enum {
    QQUICKWIDGET_STATUS_NULL = 0,
    QQUICKWIDGET_STATUS_READY = 1,
    QQUICKWIDGET_STATUS_LOADING = 2,
    QQUICKWIDGET_STATUS_ERROR = 3
} QQuickWidget__Status;

#endif
