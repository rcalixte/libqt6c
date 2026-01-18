#pragma once
#ifndef SRC_QT6C_LIBQABSTRACTSCROLLAREA_H
#define SRC_QT6C_LIBQABSTRACTSCROLLAREA_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html)

/// q_abstractscrollarea_new constructs a new QAbstractScrollArea object.
///
/// @param parent QWidget*
///
QAbstractScrollArea* q_abstractscrollarea_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html)

/// q_abstractscrollarea_new2 constructs a new QAbstractScrollArea object.
///
QAbstractScrollArea* q_abstractscrollarea_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAbstractScrollArea*
///
const QMetaObject* q_abstractscrollarea_meta_object(void* self);

/// @param self QAbstractScrollArea*
/// @param param1 const char*
///
void* q_abstractscrollarea_metacast(void* self, const char* param1);

/// @param self QAbstractScrollArea*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractscrollarea_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback int32_t func(QAbstractScrollArea* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_abstractscrollarea_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractscrollarea_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstractscrollarea_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QAbstractScrollArea*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_abstractscrollarea_vertical_scroll_bar_policy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QAbstractScrollArea*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_abstractscrollarea_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QAbstractScrollArea*
///
QScrollBar* q_abstractscrollarea_vertical_scroll_bar(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QAbstractScrollArea*
/// @param scrollbar QScrollBar*
///
void q_abstractscrollarea_set_vertical_scroll_bar(void* self, void* scrollbar);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QAbstractScrollArea*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_abstractscrollarea_horizontal_scroll_bar_policy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QAbstractScrollArea*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_abstractscrollarea_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QAbstractScrollArea*
///
QScrollBar* q_abstractscrollarea_horizontal_scroll_bar(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QAbstractScrollArea*
/// @param scrollbar QScrollBar*
///
void q_abstractscrollarea_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QAbstractScrollArea*
///
QWidget* q_abstractscrollarea_corner_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QAbstractScrollArea*
/// @param widget QWidget*
///
void q_abstractscrollarea_set_corner_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QAbstractScrollArea*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_abstractscrollarea_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QAbstractScrollArea*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list q_abstractscrollarea_scroll_bar_widgets(void* self, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QAbstractScrollArea*
///
QWidget* q_abstractscrollarea_viewport(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QAbstractScrollArea*
/// @param widget QWidget*
///
void q_abstractscrollarea_set_viewport(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QAbstractScrollArea*
///
QSize* q_abstractscrollarea_maximum_viewport_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// @param self QAbstractScrollArea*
///
QSize* q_abstractscrollarea_minimum_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback QSize* func()
///
void q_abstractscrollarea_on_minimum_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
///
QSize* q_abstractscrollarea_qbase_minimum_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// @param self QAbstractScrollArea*
///
QSize* q_abstractscrollarea_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback QSize* func()
///
void q_abstractscrollarea_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
///
QSize* q_abstractscrollarea_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// @param self QAbstractScrollArea*
/// @param viewport QWidget*
///
void q_abstractscrollarea_setup_viewport(void* self, void* viewport);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QWidget* viewport)
///
void q_abstractscrollarea_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param viewport QWidget*
///
void q_abstractscrollarea_qbase_setup_viewport(void* self, void* viewport);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QAbstractScrollArea*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t q_abstractscrollarea_size_adjust_policy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QAbstractScrollArea*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void q_abstractscrollarea_set_size_adjust_policy(void* self, int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// @param self QAbstractScrollArea*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_abstractscrollarea_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, int left, int top, int right, int bottom)
///
void q_abstractscrollarea_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_abstractscrollarea_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// @param self QAbstractScrollArea*
/// @param margins QMargins*
///
void q_abstractscrollarea_set_viewport_margins2(void* self, void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QMargins* margins)
///
void q_abstractscrollarea_on_set_viewport_margins2(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param margins QMargins*
///
void q_abstractscrollarea_qbase_set_viewport_margins2(void* self, void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// @param self QAbstractScrollArea*
///
QMargins* q_abstractscrollarea_viewport_margins(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback QMargins* func()
///
void q_abstractscrollarea_on_viewport_margins(void* self, QMargins* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
///
QMargins* q_abstractscrollarea_qbase_viewport_margins(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// @param self QAbstractScrollArea*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_abstractscrollarea_event_filter(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback bool func(QAbstractScrollArea* self, QObject* param1, QEvent* param2)
///
void q_abstractscrollarea_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_abstractscrollarea_qbase_event_filter(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#event)
///
/// @param self QAbstractScrollArea*
/// @param param1 QEvent*
///
bool q_abstractscrollarea_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback bool func(QAbstractScrollArea* self, QEvent* param1)
///
void q_abstractscrollarea_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#event)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QEvent*
///
bool q_abstractscrollarea_qbase_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QEvent*
///
bool q_abstractscrollarea_viewport_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback bool func(QAbstractScrollArea* self, QEvent* param1)
///
void q_abstractscrollarea_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QEvent*
///
bool q_abstractscrollarea_qbase_viewport_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#resizeEvent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QResizeEvent*
///
void q_abstractscrollarea_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QResizeEvent* param1)
///
void q_abstractscrollarea_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QResizeEvent*
///
void q_abstractscrollarea_qbase_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QPaintEvent*
///
void q_abstractscrollarea_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QPaintEvent* param1)
///
void q_abstractscrollarea_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QPaintEvent*
///
void q_abstractscrollarea_qbase_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mousePressEvent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QMouseEvent*
///
void q_abstractscrollarea_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QMouseEvent* param1)
///
void q_abstractscrollarea_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QMouseEvent*
///
void q_abstractscrollarea_qbase_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseReleaseEvent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QMouseEvent*
///
void q_abstractscrollarea_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QMouseEvent* param1)
///
void q_abstractscrollarea_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QMouseEvent*
///
void q_abstractscrollarea_qbase_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseDoubleClickEvent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QMouseEvent*
///
void q_abstractscrollarea_mouse_double_click_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QMouseEvent* param1)
///
void q_abstractscrollarea_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QMouseEvent*
///
void q_abstractscrollarea_qbase_mouse_double_click_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseMoveEvent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QMouseEvent*
///
void q_abstractscrollarea_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QMouseEvent* param1)
///
void q_abstractscrollarea_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QMouseEvent*
///
void q_abstractscrollarea_qbase_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QWheelEvent*
///
void q_abstractscrollarea_wheel_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QWheelEvent* param1)
///
void q_abstractscrollarea_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QWheelEvent*
///
void q_abstractscrollarea_qbase_wheel_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QContextMenuEvent*
///
void q_abstractscrollarea_context_menu_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QContextMenuEvent* param1)
///
void q_abstractscrollarea_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QContextMenuEvent*
///
void q_abstractscrollarea_qbase_context_menu_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragEnterEvent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QDragEnterEvent*
///
void q_abstractscrollarea_drag_enter_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QDragEnterEvent* param1)
///
void q_abstractscrollarea_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QDragEnterEvent*
///
void q_abstractscrollarea_qbase_drag_enter_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragMoveEvent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QDragMoveEvent*
///
void q_abstractscrollarea_drag_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QDragMoveEvent* param1)
///
void q_abstractscrollarea_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QDragMoveEvent*
///
void q_abstractscrollarea_qbase_drag_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragLeaveEvent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QDragLeaveEvent*
///
void q_abstractscrollarea_drag_leave_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QDragLeaveEvent* param1)
///
void q_abstractscrollarea_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QDragLeaveEvent*
///
void q_abstractscrollarea_qbase_drag_leave_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dropEvent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QDropEvent*
///
void q_abstractscrollarea_drop_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QDropEvent* param1)
///
void q_abstractscrollarea_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QDropEvent*
///
void q_abstractscrollarea_qbase_drop_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#keyPressEvent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QKeyEvent*
///
void q_abstractscrollarea_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QKeyEvent* param1)
///
void q_abstractscrollarea_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param param1 QKeyEvent*
///
void q_abstractscrollarea_qbase_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollContentsBy)
///
/// @param self QAbstractScrollArea*
/// @param dx int
/// @param dy int
///
void q_abstractscrollarea_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, int dx, int dy)
///
void q_abstractscrollarea_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollContentsBy)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
/// @param dx int
/// @param dy int
///
void q_abstractscrollarea_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// @param self QAbstractScrollArea*
///
QSize* q_abstractscrollarea_viewport_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractScrollArea*
/// @param callback QSize* func()
///
void q_abstractscrollarea_on_viewport_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Base class method implementation
///
/// @param self QAbstractScrollArea*
///
QSize* q_abstractscrollarea_qbase_viewport_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstractscrollarea_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstractscrollarea_tr3(const char* s, const char* c, int n);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QAbstractScrollArea*
/// @param frameStyle int
///
void q_abstractscrollarea_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QAbstractScrollArea*
///
/// @return enum QFrame__Shape
///
int32_t q_abstractscrollarea_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QAbstractScrollArea*
/// @param frameShape enum QFrame__Shape
///
void q_abstractscrollarea_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QAbstractScrollArea*
///
/// @return enum QFrame__Shadow
///
int32_t q_abstractscrollarea_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QAbstractScrollArea*
/// @param frameShadow enum QFrame__Shadow
///
void q_abstractscrollarea_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QAbstractScrollArea*
/// @param lineWidth int
///
void q_abstractscrollarea_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QAbstractScrollArea*
/// @param midLineWidth int
///
void q_abstractscrollarea_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QAbstractScrollArea*
///
QRect* q_abstractscrollarea_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QAbstractScrollArea*
/// @param frameRect QRect*
///
void q_abstractscrollarea_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QAbstractScrollArea*
///
uintptr_t q_abstractscrollarea_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QAbstractScrollArea*
///
uintptr_t q_abstractscrollarea_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QAbstractScrollArea*
///
uintptr_t q_abstractscrollarea_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QAbstractScrollArea*
///
QStyle* q_abstractscrollarea_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QAbstractScrollArea*
/// @param style QStyle*
///
void q_abstractscrollarea_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QAbstractScrollArea*
///
/// @return enum Qt__WindowModality
///
int32_t q_abstractscrollarea_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QAbstractScrollArea*
/// @param windowModality enum Qt__WindowModality
///
void q_abstractscrollarea_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QAbstractScrollArea*
/// @param param1 QWidget*
///
bool q_abstractscrollarea_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QAbstractScrollArea*
/// @param enabled bool
///
void q_abstractscrollarea_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QAbstractScrollArea*
/// @param disabled bool
///
void q_abstractscrollarea_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QAbstractScrollArea*
/// @param windowModified bool
///
void q_abstractscrollarea_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QAbstractScrollArea*
///
QRect* q_abstractscrollarea_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QAbstractScrollArea*
///
const QRect* q_abstractscrollarea_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QAbstractScrollArea*
///
QRect* q_abstractscrollarea_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QAbstractScrollArea*
///
QPoint* q_abstractscrollarea_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QAbstractScrollArea*
///
QSize* q_abstractscrollarea_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QAbstractScrollArea*
///
QSize* q_abstractscrollarea_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QAbstractScrollArea*
///
QRect* q_abstractscrollarea_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QAbstractScrollArea*
///
QRect* q_abstractscrollarea_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QAbstractScrollArea*
///
QRegion* q_abstractscrollarea_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QAbstractScrollArea*
///
QSize* q_abstractscrollarea_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QAbstractScrollArea*
///
QSize* q_abstractscrollarea_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QAbstractScrollArea*
/// @param minimumSize QSize*
///
void q_abstractscrollarea_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QAbstractScrollArea*
/// @param minw int
/// @param minh int
///
void q_abstractscrollarea_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QAbstractScrollArea*
/// @param maximumSize QSize*
///
void q_abstractscrollarea_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QAbstractScrollArea*
/// @param maxw int
/// @param maxh int
///
void q_abstractscrollarea_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QAbstractScrollArea*
/// @param minw int
///
void q_abstractscrollarea_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QAbstractScrollArea*
/// @param minh int
///
void q_abstractscrollarea_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QAbstractScrollArea*
/// @param maxw int
///
void q_abstractscrollarea_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QAbstractScrollArea*
/// @param maxh int
///
void q_abstractscrollarea_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QAbstractScrollArea*
///
QSize* q_abstractscrollarea_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QAbstractScrollArea*
/// @param sizeIncrement QSize*
///
void q_abstractscrollarea_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QAbstractScrollArea*
/// @param w int
/// @param h int
///
void q_abstractscrollarea_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QAbstractScrollArea*
///
QSize* q_abstractscrollarea_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QAbstractScrollArea*
/// @param baseSize QSize*
///
void q_abstractscrollarea_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QAbstractScrollArea*
/// @param basew int
/// @param baseh int
///
void q_abstractscrollarea_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QAbstractScrollArea*
/// @param fixedSize QSize*
///
void q_abstractscrollarea_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QAbstractScrollArea*
/// @param w int
/// @param h int
///
void q_abstractscrollarea_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QAbstractScrollArea*
/// @param w int
///
void q_abstractscrollarea_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QAbstractScrollArea*
/// @param h int
///
void q_abstractscrollarea_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QAbstractScrollArea*
/// @param param1 QPointF*
///
QPointF* q_abstractscrollarea_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QAbstractScrollArea*
/// @param param1 QPoint*
///
QPoint* q_abstractscrollarea_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QAbstractScrollArea*
/// @param param1 QPointF*
///
QPointF* q_abstractscrollarea_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QAbstractScrollArea*
/// @param param1 QPoint*
///
QPoint* q_abstractscrollarea_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QPointF*
///
QPointF* q_abstractscrollarea_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QPoint*
///
QPoint* q_abstractscrollarea_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QPointF*
///
QPointF* q_abstractscrollarea_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QAbstractScrollArea*
/// @param param1 QPoint*
///
QPoint* q_abstractscrollarea_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QAbstractScrollArea*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_abstractscrollarea_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QAbstractScrollArea*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_abstractscrollarea_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QAbstractScrollArea*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_abstractscrollarea_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QAbstractScrollArea*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_abstractscrollarea_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QAbstractScrollArea*
///
QWidget* q_abstractscrollarea_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QAbstractScrollArea*
///
QWidget* q_abstractscrollarea_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QAbstractScrollArea*
///
QWidget* q_abstractscrollarea_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QAbstractScrollArea*
///
const QPalette* q_abstractscrollarea_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QAbstractScrollArea*
/// @param palette QPalette*
///
void q_abstractscrollarea_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QAbstractScrollArea*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_abstractscrollarea_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QAbstractScrollArea*
///
/// @return enum QPalette__ColorRole
///
int32_t q_abstractscrollarea_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QAbstractScrollArea*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_abstractscrollarea_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QAbstractScrollArea*
///
/// @return enum QPalette__ColorRole
///
int32_t q_abstractscrollarea_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QAbstractScrollArea*
///
const QFont* q_abstractscrollarea_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QAbstractScrollArea*
/// @param font QFont*
///
void q_abstractscrollarea_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QAbstractScrollArea*
///
QFontMetrics* q_abstractscrollarea_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QAbstractScrollArea*
///
QFontInfo* q_abstractscrollarea_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QAbstractScrollArea*
///
QCursor* q_abstractscrollarea_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QAbstractScrollArea*
/// @param cursor QCursor*
///
void q_abstractscrollarea_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QAbstractScrollArea*
/// @param enable bool
///
void q_abstractscrollarea_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QAbstractScrollArea*
/// @param enable bool
///
void q_abstractscrollarea_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QAbstractScrollArea*
/// @param mask QBitmap*
///
void q_abstractscrollarea_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QAbstractScrollArea*
/// @param mask QRegion*
///
void q_abstractscrollarea_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QAbstractScrollArea*
///
QRegion* q_abstractscrollarea_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractScrollArea*
/// @param target QPaintDevice*
///
void q_abstractscrollarea_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractScrollArea*
/// @param painter QPainter*
///
void q_abstractscrollarea_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QAbstractScrollArea*
///
QPixmap* q_abstractscrollarea_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QAbstractScrollArea*
///
QGraphicsEffect* q_abstractscrollarea_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QAbstractScrollArea*
/// @param effect QGraphicsEffect*
///
void q_abstractscrollarea_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QAbstractScrollArea*
/// @param type enum Qt__GestureType
///
void q_abstractscrollarea_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QAbstractScrollArea*
/// @param type enum Qt__GestureType
///
void q_abstractscrollarea_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QAbstractScrollArea*
/// @param windowTitle const char*
///
void q_abstractscrollarea_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QAbstractScrollArea*
/// @param styleSheet const char*
///
void q_abstractscrollarea_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractScrollArea*
///
const char* q_abstractscrollarea_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractScrollArea*
///
const char* q_abstractscrollarea_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QAbstractScrollArea*
/// @param icon QIcon*
///
void q_abstractscrollarea_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QAbstractScrollArea*
///
QIcon* q_abstractscrollarea_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QAbstractScrollArea*
/// @param windowIconText const char*
///
void q_abstractscrollarea_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractScrollArea*
///
const char* q_abstractscrollarea_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QAbstractScrollArea*
/// @param windowRole const char*
///
void q_abstractscrollarea_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractScrollArea*
///
const char* q_abstractscrollarea_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QAbstractScrollArea*
/// @param filePath const char*
///
void q_abstractscrollarea_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractScrollArea*
///
const char* q_abstractscrollarea_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QAbstractScrollArea*
/// @param level double
///
void q_abstractscrollarea_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QAbstractScrollArea*
///
double q_abstractscrollarea_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QAbstractScrollArea*
/// @param toolTip const char*
///
void q_abstractscrollarea_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractScrollArea*
///
const char* q_abstractscrollarea_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QAbstractScrollArea*
/// @param msec int
///
void q_abstractscrollarea_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QAbstractScrollArea*
/// @param statusTip const char*
///
void q_abstractscrollarea_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractScrollArea*
///
const char* q_abstractscrollarea_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QAbstractScrollArea*
/// @param whatsThis const char*
///
void q_abstractscrollarea_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractScrollArea*
///
const char* q_abstractscrollarea_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractScrollArea*
///
const char* q_abstractscrollarea_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QAbstractScrollArea*
/// @param name const char*
///
void q_abstractscrollarea_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractScrollArea*
///
const char* q_abstractscrollarea_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QAbstractScrollArea*
/// @param description const char*
///
void q_abstractscrollarea_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QAbstractScrollArea*
/// @param direction enum Qt__LayoutDirection
///
void q_abstractscrollarea_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QAbstractScrollArea*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_abstractscrollarea_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QAbstractScrollArea*
/// @param locale QLocale*
///
void q_abstractscrollarea_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QAbstractScrollArea*
///
QLocale* q_abstractscrollarea_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QAbstractScrollArea*
/// @param reason enum Qt__FocusReason
///
void q_abstractscrollarea_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QAbstractScrollArea*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_abstractscrollarea_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QAbstractScrollArea*
/// @param policy enum Qt__FocusPolicy
///
void q_abstractscrollarea_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_abstractscrollarea_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QAbstractScrollArea*
/// @param focusProxy QWidget*
///
void q_abstractscrollarea_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QAbstractScrollArea*
///
QWidget* q_abstractscrollarea_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QAbstractScrollArea*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_abstractscrollarea_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QAbstractScrollArea*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_abstractscrollarea_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QAbstractScrollArea*
/// @param param1 QCursor*
///
void q_abstractscrollarea_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QAbstractScrollArea*
/// @param key QKeySequence*
///
int32_t q_abstractscrollarea_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QAbstractScrollArea*
/// @param id int
///
void q_abstractscrollarea_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QAbstractScrollArea*
/// @param id int
///
void q_abstractscrollarea_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QAbstractScrollArea*
/// @param id int
///
void q_abstractscrollarea_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_abstractscrollarea_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_abstractscrollarea_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QAbstractScrollArea*
/// @param enable bool
///
void q_abstractscrollarea_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QAbstractScrollArea*
///
QGraphicsProxyWidget* q_abstractscrollarea_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractScrollArea*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_abstractscrollarea_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractScrollArea*
/// @param param1 QRect*
///
void q_abstractscrollarea_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractScrollArea*
/// @param param1 QRegion*
///
void q_abstractscrollarea_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractScrollArea*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_abstractscrollarea_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractScrollArea*
/// @param param1 QRect*
///
void q_abstractscrollarea_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractScrollArea*
/// @param param1 QRegion*
///
void q_abstractscrollarea_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QAbstractScrollArea*
/// @param hidden bool
///
void q_abstractscrollarea_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QAbstractScrollArea*
/// @param param1 QWidget*
///
void q_abstractscrollarea_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QAbstractScrollArea*
/// @param x int
/// @param y int
///
void q_abstractscrollarea_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QAbstractScrollArea*
/// @param param1 QPoint*
///
void q_abstractscrollarea_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QAbstractScrollArea*
/// @param w int
/// @param h int
///
void q_abstractscrollarea_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QAbstractScrollArea*
/// @param param1 QSize*
///
void q_abstractscrollarea_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QAbstractScrollArea*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_abstractscrollarea_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QAbstractScrollArea*
/// @param geometry QRect*
///
void q_abstractscrollarea_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractScrollArea*
///
char* q_abstractscrollarea_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QAbstractScrollArea*
/// @param geometry const char*
///
bool q_abstractscrollarea_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QAbstractScrollArea*
/// @param param1 QWidget*
///
bool q_abstractscrollarea_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QAbstractScrollArea*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_abstractscrollarea_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QAbstractScrollArea*
/// @param state flag of enum Qt__WindowState
///
void q_abstractscrollarea_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QAbstractScrollArea*
/// @param state flag of enum Qt__WindowState
///
void q_abstractscrollarea_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QAbstractScrollArea*
///
QSizePolicy* q_abstractscrollarea_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QAbstractScrollArea*
/// @param sizePolicy QSizePolicy*
///
void q_abstractscrollarea_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QAbstractScrollArea*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_abstractscrollarea_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QAbstractScrollArea*
///
QRegion* q_abstractscrollarea_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QAbstractScrollArea*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_abstractscrollarea_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QAbstractScrollArea*
/// @param margins QMargins*
///
void q_abstractscrollarea_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QAbstractScrollArea*
///
QMargins* q_abstractscrollarea_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QAbstractScrollArea*
///
QRect* q_abstractscrollarea_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QAbstractScrollArea*
///
QLayout* q_abstractscrollarea_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QAbstractScrollArea*
/// @param layout QLayout*
///
void q_abstractscrollarea_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QAbstractScrollArea*
/// @param parent QWidget*
///
void q_abstractscrollarea_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QAbstractScrollArea*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_abstractscrollarea_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QAbstractScrollArea*
/// @param dx int
/// @param dy int
///
void q_abstractscrollarea_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QAbstractScrollArea*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_abstractscrollarea_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QAbstractScrollArea*
///
QWidget* q_abstractscrollarea_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QAbstractScrollArea*
///
QWidget* q_abstractscrollarea_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QAbstractScrollArea*
///
QWidget* q_abstractscrollarea_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QAbstractScrollArea*
/// @param on bool
///
void q_abstractscrollarea_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractScrollArea*
/// @param action QAction*
///
void q_abstractscrollarea_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QAbstractScrollArea*
/// @param actions libqt_list of QAction*
///
void q_abstractscrollarea_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QAbstractScrollArea*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_abstractscrollarea_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QAbstractScrollArea*
/// @param before QAction*
/// @param action QAction*
///
void q_abstractscrollarea_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QAbstractScrollArea*
/// @param action QAction*
///
void q_abstractscrollarea_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QAbstractScrollArea*
///
/// @return libqt_list of QAction*
///
libqt_list q_abstractscrollarea_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractScrollArea*
/// @param text const char*
///
QAction* q_abstractscrollarea_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractScrollArea*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_abstractscrollarea_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractScrollArea*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_abstractscrollarea_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractScrollArea*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_abstractscrollarea_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QAbstractScrollArea*
///
QWidget* q_abstractscrollarea_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QAbstractScrollArea*
/// @param type flag of enum Qt__WindowType
///
void q_abstractscrollarea_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QAbstractScrollArea*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_abstractscrollarea_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QAbstractScrollArea*
/// @param param1 enum Qt__WindowType
///
void q_abstractscrollarea_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QAbstractScrollArea*
/// @param type flag of enum Qt__WindowType
///
void q_abstractscrollarea_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QAbstractScrollArea*
///
/// @return enum Qt__WindowType
///
int32_t q_abstractscrollarea_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_abstractscrollarea_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QAbstractScrollArea*
/// @param x int
/// @param y int
///
QWidget* q_abstractscrollarea_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QAbstractScrollArea*
/// @param p QPoint*
///
QWidget* q_abstractscrollarea_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QAbstractScrollArea*
/// @param p QPointF*
///
QWidget* q_abstractscrollarea_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QAbstractScrollArea*
/// @param param1 enum Qt__WidgetAttribute
///
void q_abstractscrollarea_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QAbstractScrollArea*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_abstractscrollarea_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QAbstractScrollArea*
/// @param child QWidget*
///
bool q_abstractscrollarea_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QAbstractScrollArea*
/// @param enabled bool
///
void q_abstractscrollarea_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QAbstractScrollArea*
///
QBackingStore* q_abstractscrollarea_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QAbstractScrollArea*
///
QWindow* q_abstractscrollarea_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QAbstractScrollArea*
///
QScreen* q_abstractscrollarea_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QAbstractScrollArea*
/// @param screen QScreen*
///
void q_abstractscrollarea_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_abstractscrollarea_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QAbstractScrollArea*
/// @param title const char*
///
void q_abstractscrollarea_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, const char* title)
///
void q_abstractscrollarea_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QAbstractScrollArea*
/// @param icon QIcon*
///
void q_abstractscrollarea_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QIcon* icon)
///
void q_abstractscrollarea_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QAbstractScrollArea*
/// @param iconText const char*
///
void q_abstractscrollarea_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, const char* iconText)
///
void q_abstractscrollarea_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QAbstractScrollArea*
/// @param pos QPoint*
///
void q_abstractscrollarea_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QPoint* pos)
///
void q_abstractscrollarea_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QAbstractScrollArea*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_abstractscrollarea_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QAbstractScrollArea*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_abstractscrollarea_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractScrollArea*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_abstractscrollarea_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractScrollArea*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_abstractscrollarea_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractScrollArea*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_abstractscrollarea_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractScrollArea*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_abstractscrollarea_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractScrollArea*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_abstractscrollarea_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractScrollArea*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_abstractscrollarea_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QAbstractScrollArea*
/// @param rectangle QRect*
///
QPixmap* q_abstractscrollarea_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QAbstractScrollArea*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_abstractscrollarea_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QAbstractScrollArea*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_abstractscrollarea_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QAbstractScrollArea*
/// @param id int
/// @param enable bool
///
void q_abstractscrollarea_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QAbstractScrollArea*
/// @param id int
/// @param enable bool
///
void q_abstractscrollarea_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QAbstractScrollArea*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_abstractscrollarea_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QAbstractScrollArea*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_abstractscrollarea_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_abstractscrollarea_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_abstractscrollarea_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractScrollArea*
///
const char* q_abstractscrollarea_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractScrollArea*
/// @param name char*
///
void q_abstractscrollarea_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractScrollArea*
/// @param b bool
///
bool q_abstractscrollarea_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAbstractScrollArea*
///
QThread* q_abstractscrollarea_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractScrollArea*
/// @param thread QThread*
///
bool q_abstractscrollarea_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractScrollArea*
/// @param interval int
///
int32_t q_abstractscrollarea_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractScrollArea*
/// @param id int
///
void q_abstractscrollarea_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractScrollArea*
/// @param id enum Qt__TimerId
///
void q_abstractscrollarea_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAbstractScrollArea*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstractscrollarea_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractScrollArea*
/// @param filterObj QObject*
///
void q_abstractscrollarea_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractScrollArea*
/// @param obj QObject*
///
void q_abstractscrollarea_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstractscrollarea_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractScrollArea*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstractscrollarea_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstractscrollarea_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstractscrollarea_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractScrollArea*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstractscrollarea_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractScrollArea*
/// @param name const char*
///
QVariant* q_abstractscrollarea_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractScrollArea*
///
const char** q_abstractscrollarea_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractScrollArea*
///
QBindingStorage* q_abstractscrollarea_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractScrollArea*
///
const QBindingStorage* q_abstractscrollarea_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self)
///
void q_abstractscrollarea_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAbstractScrollArea*
///
QObject* q_abstractscrollarea_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAbstractScrollArea*
/// @param classname const char*
///
bool q_abstractscrollarea_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractScrollArea*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_abstractscrollarea_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractScrollArea*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractscrollarea_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_abstractscrollarea_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractScrollArea*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractscrollarea_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractScrollArea*
/// @param param1 QObject*
///
void q_abstractscrollarea_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QObject* param1)
///
void q_abstractscrollarea_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QAbstractScrollArea*
///
double q_abstractscrollarea_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QAbstractScrollArea*
///
double q_abstractscrollarea_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_abstractscrollarea_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_abstractscrollarea_encode_metric_f(int32_t metric, double value);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param param1 QEvent*
///
void q_abstractscrollarea_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param param1 QEvent*
///
void q_abstractscrollarea_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QEvent* param1)
///
void q_abstractscrollarea_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param option QStyleOptionFrame*
///
void q_abstractscrollarea_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param option QStyleOptionFrame*
///
void q_abstractscrollarea_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QStyleOptionFrame* option)
///
void q_abstractscrollarea_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback int32_t func()
///
void q_abstractscrollarea_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param visible bool
///
void q_abstractscrollarea_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param visible bool
///
void q_abstractscrollarea_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, bool visible)
///
void q_abstractscrollarea_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param param1 int
///
int32_t q_abstractscrollarea_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param param1 int
///
int32_t q_abstractscrollarea_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback int32_t func(QAbstractScrollArea* self, int param1)
///
void q_abstractscrollarea_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback bool func()
///
void q_abstractscrollarea_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
///
QPaintEngine* q_abstractscrollarea_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
///
QPaintEngine* q_abstractscrollarea_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback QPaintEngine* func()
///
void q_abstractscrollarea_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QKeyEvent*
///
void q_abstractscrollarea_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QKeyEvent*
///
void q_abstractscrollarea_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QKeyEvent* event)
///
void q_abstractscrollarea_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QFocusEvent*
///
void q_abstractscrollarea_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QFocusEvent*
///
void q_abstractscrollarea_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QFocusEvent* event)
///
void q_abstractscrollarea_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QFocusEvent*
///
void q_abstractscrollarea_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QFocusEvent*
///
void q_abstractscrollarea_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QFocusEvent* event)
///
void q_abstractscrollarea_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QEnterEvent*
///
void q_abstractscrollarea_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QEnterEvent*
///
void q_abstractscrollarea_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QEnterEvent* event)
///
void q_abstractscrollarea_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QEvent*
///
void q_abstractscrollarea_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QEvent*
///
void q_abstractscrollarea_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QEvent* event)
///
void q_abstractscrollarea_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QMoveEvent*
///
void q_abstractscrollarea_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QMoveEvent*
///
void q_abstractscrollarea_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QMoveEvent* event)
///
void q_abstractscrollarea_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QCloseEvent*
///
void q_abstractscrollarea_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QCloseEvent*
///
void q_abstractscrollarea_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QCloseEvent* event)
///
void q_abstractscrollarea_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QTabletEvent*
///
void q_abstractscrollarea_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QTabletEvent*
///
void q_abstractscrollarea_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QTabletEvent* event)
///
void q_abstractscrollarea_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QActionEvent*
///
void q_abstractscrollarea_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QActionEvent*
///
void q_abstractscrollarea_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QActionEvent* event)
///
void q_abstractscrollarea_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QShowEvent*
///
void q_abstractscrollarea_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QShowEvent*
///
void q_abstractscrollarea_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QShowEvent* event)
///
void q_abstractscrollarea_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QHideEvent*
///
void q_abstractscrollarea_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QHideEvent*
///
void q_abstractscrollarea_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QHideEvent* event)
///
void q_abstractscrollarea_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_abstractscrollarea_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_abstractscrollarea_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback bool func(QAbstractScrollArea* self, const char* eventType, void* message, intptr_t* result)
///
void q_abstractscrollarea_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_abstractscrollarea_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_abstractscrollarea_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback int32_t func(QAbstractScrollArea* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_abstractscrollarea_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param painter QPainter*
///
void q_abstractscrollarea_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param painter QPainter*
///
void q_abstractscrollarea_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QPainter* painter)
///
void q_abstractscrollarea_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param offset QPoint*
///
QPaintDevice* q_abstractscrollarea_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param offset QPoint*
///
QPaintDevice* q_abstractscrollarea_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback QPaintDevice* func(QAbstractScrollArea* self, QPoint* offset)
///
void q_abstractscrollarea_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
///
QPainter* q_abstractscrollarea_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
///
QPainter* q_abstractscrollarea_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback QPainter* func()
///
void q_abstractscrollarea_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param param1 QInputMethodEvent*
///
void q_abstractscrollarea_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param param1 QInputMethodEvent*
///
void q_abstractscrollarea_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QInputMethodEvent* param1)
///
void q_abstractscrollarea_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_abstractscrollarea_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_abstractscrollarea_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback QVariant* func(QAbstractScrollArea* self, enum Qt__InputMethodQuery param1)
///
void q_abstractscrollarea_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param next bool
///
bool q_abstractscrollarea_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param next bool
///
bool q_abstractscrollarea_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback bool func(QAbstractScrollArea* self, bool next)
///
void q_abstractscrollarea_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QTimerEvent*
///
void q_abstractscrollarea_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QTimerEvent*
///
void q_abstractscrollarea_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QTimerEvent* event)
///
void q_abstractscrollarea_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QChildEvent*
///
void q_abstractscrollarea_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QChildEvent*
///
void q_abstractscrollarea_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QChildEvent* event)
///
void q_abstractscrollarea_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QEvent*
///
void q_abstractscrollarea_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param event QEvent*
///
void q_abstractscrollarea_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QEvent* event)
///
void q_abstractscrollarea_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param signal QMetaMethod*
///
void q_abstractscrollarea_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param signal QMetaMethod*
///
void q_abstractscrollarea_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QMetaMethod* signal)
///
void q_abstractscrollarea_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param signal QMetaMethod*
///
void q_abstractscrollarea_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param signal QMetaMethod*
///
void q_abstractscrollarea_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QMetaMethod* signal)
///
void q_abstractscrollarea_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param param1 QPainter*
///
void q_abstractscrollarea_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param param1 QPainter*
///
void q_abstractscrollarea_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, QPainter* param1)
///
void q_abstractscrollarea_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func()
///
void q_abstractscrollarea_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func()
///
void q_abstractscrollarea_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback void func()
///
void q_abstractscrollarea_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback bool func()
///
void q_abstractscrollarea_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
///
bool q_abstractscrollarea_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback bool func()
///
void q_abstractscrollarea_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
///
QObject* q_abstractscrollarea_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
///
QObject* q_abstractscrollarea_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback QObject* func()
///
void q_abstractscrollarea_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
///
int32_t q_abstractscrollarea_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback int32_t func()
///
void q_abstractscrollarea_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param signal const char*
///
int32_t q_abstractscrollarea_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param signal const char*
///
int32_t q_abstractscrollarea_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback int32_t func(QAbstractScrollArea* self, const char* signal)
///
void q_abstractscrollarea_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param signal QMetaMethod*
///
bool q_abstractscrollarea_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param signal QMetaMethod*
///
bool q_abstractscrollarea_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback bool func(QAbstractScrollArea* self, QMetaMethod* signal)
///
void q_abstractscrollarea_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_abstractscrollarea_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_abstractscrollarea_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractScrollArea*
/// @param callback double func(QAbstractScrollArea* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_abstractscrollarea_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractScrollArea*
/// @param callback void func(QAbstractScrollArea* self, const char* objectName)
///
void q_abstractscrollarea_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dtor.QAbstractScrollArea)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractScrollArea*
///
void q_abstractscrollarea_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#public-types)

typedef enum {
    QABSTRACTSCROLLAREA_SIZEADJUSTPOLICY_ADJUSTIGNORED = 0,
    QABSTRACTSCROLLAREA_SIZEADJUSTPOLICY_ADJUSTTOCONTENTSONFIRSTSHOW = 1,
    QABSTRACTSCROLLAREA_SIZEADJUSTPOLICY_ADJUSTTOCONTENTS = 2
} QAbstractScrollArea__SizeAdjustPolicy;

#endif
