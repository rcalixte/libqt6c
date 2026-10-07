#pragma once
#ifndef LIBQMDIAREA_H
#define LIBQMDIAREA_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html)

/// q_mdiarea_new constructs a new QMdiArea object.
///
/// @param parent QWidget*
///
QMdiArea* q_mdiarea_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html)

/// q_mdiarea_new2 constructs a new QMdiArea object.
///
QMdiArea* q_mdiarea_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QMdiArea*
///
const QMetaObject* q_mdiarea_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback const QMetaObject* func(const QMdiArea* self)
///
void q_mdiarea_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QMdiArea*
///
const QMetaObject* q_mdiarea_super_meta_object(const void* self);

/// @param self QMdiArea*
/// @param param1 const char*
///
void* q_mdiarea_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback void* func(QMdiArea* self, const char* param1)
///
void q_mdiarea_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QMdiArea*
/// @param param1 const char*
///
void* q_mdiarea_super_metacast(void* self, const char* param1);

/// @param self QMdiArea*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_mdiarea_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback int32_t func(QMdiArea* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_mdiarea_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QMdiArea*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_mdiarea_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_mdiarea_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#sizeHint)
///
/// @param self const QMdiArea*
///
QSize* q_mdiarea_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback QSize* func(const QMdiArea* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_mdiarea_on_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QMdiArea*
///
QSize* q_mdiarea_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#minimumSizeHint)
///
/// @param self const QMdiArea*
///
QSize* q_mdiarea_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback QSize* func(const QMdiArea* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_mdiarea_on_minimum_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self const QMdiArea*
///
QSize* q_mdiarea_super_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#currentSubWindow)
///
/// @param self const QMdiArea*
///
QMdiSubWindow* q_mdiarea_current_sub_window(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#activeSubWindow)
///
/// @param self const QMdiArea*
///
QMdiSubWindow* q_mdiarea_active_sub_window(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#subWindowList)
///
/// @param self const QMdiArea*
///
/// @return libqt_list of QMdiSubWindow*
///
libqt_list q_mdiarea_sub_window_list(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#addSubWindow)
///
/// @param self QMdiArea*
/// @param widget QWidget*
///
QMdiSubWindow* q_mdiarea_add_sub_window(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#removeSubWindow)
///
/// @param self QMdiArea*
/// @param widget QWidget*
///
void q_mdiarea_remove_sub_window(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#background)
///
/// @param self const QMdiArea*
///
QBrush* q_mdiarea_background(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#setBackground)
///
/// @param self QMdiArea*
/// @param background QBrush*
///
void q_mdiarea_set_background(void* self, const void* background);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#activationOrder)
///
/// @param self const QMdiArea*
///
/// @return enum QMdiArea__WindowOrder
///
int32_t q_mdiarea_activation_order(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#setActivationOrder)
///
/// @param self QMdiArea*
/// @param order enum QMdiArea__WindowOrder
///
void q_mdiarea_set_activation_order(void* self, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#setOption)
///
/// @param self QMdiArea*
/// @param option enum QMdiArea__AreaOption
///
void q_mdiarea_set_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#testOption)
///
/// @param self const QMdiArea*
/// @param opton enum QMdiArea__AreaOption
///
bool q_mdiarea_test_option(const void* self, int32_t opton);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#setViewMode)
///
/// @param self QMdiArea*
/// @param mode enum QMdiArea__ViewMode
///
void q_mdiarea_set_view_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#viewMode)
///
/// @param self const QMdiArea*
///
/// @return enum QMdiArea__ViewMode
///
int32_t q_mdiarea_view_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#documentMode)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_document_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#setDocumentMode)
///
/// @param self QMdiArea*
/// @param enabled bool
///
void q_mdiarea_set_document_mode(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#setTabsClosable)
///
/// @param self QMdiArea*
/// @param closable bool
///
void q_mdiarea_set_tabs_closable(void* self, bool closable);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#tabsClosable)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_tabs_closable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#setTabsMovable)
///
/// @param self QMdiArea*
/// @param movable bool
///
void q_mdiarea_set_tabs_movable(void* self, bool movable);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#tabsMovable)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_tabs_movable(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#setTabShape)
///
/// @param self QMdiArea*
/// @param shape enum QTabWidget__TabShape
///
void q_mdiarea_set_tab_shape(void* self, int32_t shape);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#tabShape)
///
/// @param self const QMdiArea*
///
/// @return enum QTabWidget__TabShape
///
int32_t q_mdiarea_tab_shape(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#setTabPosition)
///
/// @param self QMdiArea*
/// @param position enum QTabWidget__TabPosition
///
void q_mdiarea_set_tab_position(void* self, int32_t position);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#tabPosition)
///
/// @param self const QMdiArea*
///
/// @return enum QTabWidget__TabPosition
///
int32_t q_mdiarea_tab_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#subWindowActivated)
///
/// @param self QMdiArea*
/// @param param1 QMdiSubWindow*
///
void q_mdiarea_sub_window_activated(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#subWindowActivated)
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QMdiSubWindow* param1)
///
void q_mdiarea_on_sub_window_activated(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#setActiveSubWindow)
///
/// @param self QMdiArea*
/// @param window QMdiSubWindow*
///
void q_mdiarea_set_active_sub_window(void* self, void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#tileSubWindows)
///
/// @param self QMdiArea*
///
void q_mdiarea_tile_sub_windows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#cascadeSubWindows)
///
/// @param self QMdiArea*
///
void q_mdiarea_cascade_sub_windows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#closeActiveSubWindow)
///
/// @param self QMdiArea*
///
void q_mdiarea_close_active_sub_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#closeAllSubWindows)
///
/// @param self QMdiArea*
///
void q_mdiarea_close_all_sub_windows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#activateNextSubWindow)
///
/// @param self QMdiArea*
///
void q_mdiarea_activate_next_sub_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#activatePreviousSubWindow)
///
/// @param self QMdiArea*
///
void q_mdiarea_activate_previous_sub_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#setupViewport)
///
/// @param self QMdiArea*
/// @param viewport QWidget*
///
void q_mdiarea_setup_viewport(void* self, void* viewport);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#setupViewport)
///
/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QWidget* viewport)
///
void q_mdiarea_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#setupViewport)
///
/// Base class method implementation
///
/// @param self QMdiArea*
/// @param viewport QWidget*
///
void q_mdiarea_super_setup_viewport(void* self, void* viewport);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#event)
///
/// @param self QMdiArea*
/// @param event QEvent*
///
bool q_mdiarea_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback bool func(QMdiArea* self, QEvent* event)
///
void q_mdiarea_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#event)
///
/// Base class method implementation
///
/// @param self QMdiArea*
/// @param event QEvent*
///
bool q_mdiarea_super_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#eventFilter)
///
/// @param self QMdiArea*
/// @param object QObject*
/// @param event QEvent*
///
bool q_mdiarea_event_filter(void* self, void* object, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback bool func(QMdiArea* self, QObject* object, QEvent* event)
///
void q_mdiarea_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QMdiArea*
/// @param object QObject*
/// @param event QEvent*
///
bool q_mdiarea_super_event_filter(void* self, void* object, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#paintEvent)
///
/// @param self QMdiArea*
/// @param paintEvent QPaintEvent*
///
void q_mdiarea_paint_event(void* self, void* paintEvent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QPaintEvent* paintEvent)
///
void q_mdiarea_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QMdiArea*
/// @param paintEvent QPaintEvent*
///
void q_mdiarea_super_paint_event(void* self, void* paintEvent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#childEvent)
///
/// @param self QMdiArea*
/// @param childEvent QChildEvent*
///
void q_mdiarea_child_event(void* self, void* childEvent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#childEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QChildEvent* childEvent)
///
void q_mdiarea_on_child_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#childEvent)
///
/// Base class method implementation
///
/// @param self QMdiArea*
/// @param childEvent QChildEvent*
///
void q_mdiarea_super_child_event(void* self, void* childEvent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#resizeEvent)
///
/// @param self QMdiArea*
/// @param resizeEvent QResizeEvent*
///
void q_mdiarea_resize_event(void* self, void* resizeEvent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QResizeEvent* resizeEvent)
///
void q_mdiarea_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QMdiArea*
/// @param resizeEvent QResizeEvent*
///
void q_mdiarea_super_resize_event(void* self, void* resizeEvent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#timerEvent)
///
/// @param self QMdiArea*
/// @param timerEvent QTimerEvent*
///
void q_mdiarea_timer_event(void* self, void* timerEvent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QTimerEvent* timerEvent)
///
void q_mdiarea_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QMdiArea*
/// @param timerEvent QTimerEvent*
///
void q_mdiarea_super_timer_event(void* self, void* timerEvent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#showEvent)
///
/// @param self QMdiArea*
/// @param showEvent QShowEvent*
///
void q_mdiarea_show_event(void* self, void* showEvent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QShowEvent* showEvent)
///
void q_mdiarea_on_show_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#showEvent)
///
/// Base class method implementation
///
/// @param self QMdiArea*
/// @param showEvent QShowEvent*
///
void q_mdiarea_super_show_event(void* self, void* showEvent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#viewportEvent)
///
/// @param self QMdiArea*
/// @param event QEvent*
///
bool q_mdiarea_viewport_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#viewportEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback bool func(QMdiArea* self, QEvent* event)
///
void q_mdiarea_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#viewportEvent)
///
/// Base class method implementation
///
/// @param self QMdiArea*
/// @param event QEvent*
///
bool q_mdiarea_super_viewport_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#scrollContentsBy)
///
/// @param self QMdiArea*
/// @param dx int
/// @param dy int
///
void q_mdiarea_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, int dx, int dy)
///
void q_mdiarea_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#scrollContentsBy)
///
/// Base class method implementation
///
/// @param self QMdiArea*
/// @param dx int
/// @param dy int
///
void q_mdiarea_super_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_mdiarea_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_mdiarea_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#subWindowList)
///
/// @param self const QMdiArea*
/// @param order enum QMdiArea__WindowOrder
///
/// @return libqt_list of QMdiSubWindow*
///
libqt_list q_mdiarea_sub_window_list1(const void* self, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#addSubWindow)
///
/// @param self QMdiArea*
/// @param widget QWidget*
/// @param flags flag of enum Qt__WindowType
///
QMdiSubWindow* q_mdiarea_add_sub_window2(void* self, void* widget, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#setOption)
///
/// @param self QMdiArea*
/// @param option enum QMdiArea__AreaOption
/// @param on bool
///
void q_mdiarea_set_option2(void* self, int32_t option, bool on);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self const QMdiArea*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_mdiarea_vertical_scroll_bar_policy(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QMdiArea*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_mdiarea_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self const QMdiArea*
///
QScrollBar* q_mdiarea_vertical_scroll_bar(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QMdiArea*
/// @param scrollbar QScrollBar*
///
void q_mdiarea_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self const QMdiArea*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_mdiarea_horizontal_scroll_bar_policy(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QMdiArea*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_mdiarea_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self const QMdiArea*
///
QScrollBar* q_mdiarea_horizontal_scroll_bar(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QMdiArea*
/// @param scrollbar QScrollBar*
///
void q_mdiarea_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self const QMdiArea*
///
QWidget* q_mdiarea_corner_widget(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QMdiArea*
/// @param widget QWidget*
///
void q_mdiarea_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QMdiArea*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_mdiarea_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QMdiArea*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list q_mdiarea_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self const QMdiArea*
///
QWidget* q_mdiarea_viewport(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QMdiArea*
/// @param widget QWidget*
///
void q_mdiarea_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self const QMdiArea*
///
QSize* q_mdiarea_maximum_viewport_size(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self const QMdiArea*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t q_mdiarea_size_adjust_policy(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QMdiArea*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void q_mdiarea_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_frame_style(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QMdiArea*
/// @param frameStyle int
///
void q_mdiarea_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_frame_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self const QMdiArea*
///
/// @return enum QFrame__Shape
///
int32_t q_mdiarea_frame_shape(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QMdiArea*
/// @param frameShape enum QFrame__Shape
///
void q_mdiarea_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self const QMdiArea*
///
/// @return enum QFrame__Shadow
///
int32_t q_mdiarea_frame_shadow(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QMdiArea*
/// @param frameShadow enum QFrame__Shadow
///
void q_mdiarea_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QMdiArea*
/// @param lineWidth int
///
void q_mdiarea_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_mid_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QMdiArea*
/// @param midLineWidth int
///
void q_mdiarea_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self const QMdiArea*
///
QRect* q_mdiarea_frame_rect(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QMdiArea*
/// @param frameRect QRect*
///
void q_mdiarea_set_frame_rect(void* self, const void* frameRect);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const QMdiArea*
///
QPaintDevice* q_mdiarea_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a QMdiArea object
///
/// @param _qpaintdevice QPaintDevice*
///
QMdiArea* q_mdiarea_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QMdiArea*
///
uintptr_t q_mdiarea_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QMdiArea*
///
void q_mdiarea_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const QMdiArea*
///
uintptr_t q_mdiarea_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QMdiArea*
///
uintptr_t q_mdiarea_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QMdiArea*
///
QStyle* q_mdiarea_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QMdiArea*
/// @param style QStyle*
///
void q_mdiarea_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QMdiArea*
///
/// @return enum Qt__WindowModality
///
int32_t q_mdiarea_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QMdiArea*
/// @param windowModality enum Qt__WindowModality
///
void q_mdiarea_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QMdiArea*
/// @param param1 QWidget*
///
bool q_mdiarea_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QMdiArea*
/// @param enabled bool
///
void q_mdiarea_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QMdiArea*
/// @param disabled bool
///
void q_mdiarea_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QMdiArea*
/// @param windowModified bool
///
void q_mdiarea_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const QMdiArea*
///
QRect* q_mdiarea_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QMdiArea*
///
const QRect* q_mdiarea_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QMdiArea*
///
QRect* q_mdiarea_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QMdiArea*
///
QPoint* q_mdiarea_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QMdiArea*
///
QSize* q_mdiarea_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QMdiArea*
///
QSize* q_mdiarea_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QMdiArea*
///
QRect* q_mdiarea_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QMdiArea*
///
QRect* q_mdiarea_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QMdiArea*
///
QRegion* q_mdiarea_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QMdiArea*
///
QSize* q_mdiarea_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QMdiArea*
///
QSize* q_mdiarea_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QMdiArea*
/// @param minimumSize QSize*
///
void q_mdiarea_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QMdiArea*
/// @param minw int
/// @param minh int
///
void q_mdiarea_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QMdiArea*
/// @param maximumSize QSize*
///
void q_mdiarea_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QMdiArea*
/// @param maxw int
/// @param maxh int
///
void q_mdiarea_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QMdiArea*
/// @param minw int
///
void q_mdiarea_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QMdiArea*
/// @param minh int
///
void q_mdiarea_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QMdiArea*
/// @param maxw int
///
void q_mdiarea_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QMdiArea*
/// @param maxh int
///
void q_mdiarea_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const QMdiArea*
///
QSize* q_mdiarea_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QMdiArea*
/// @param sizeIncrement QSize*
///
void q_mdiarea_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QMdiArea*
/// @param w int
/// @param h int
///
void q_mdiarea_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const QMdiArea*
///
QSize* q_mdiarea_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QMdiArea*
/// @param baseSize QSize*
///
void q_mdiarea_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QMdiArea*
/// @param basew int
/// @param baseh int
///
void q_mdiarea_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QMdiArea*
/// @param fixedSize QSize*
///
void q_mdiarea_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QMdiArea*
/// @param w int
/// @param h int
///
void q_mdiarea_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QMdiArea*
/// @param w int
///
void q_mdiarea_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QMdiArea*
/// @param h int
///
void q_mdiarea_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QMdiArea*
/// @param param1 QPointF*
///
QPointF* q_mdiarea_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QMdiArea*
/// @param param1 QPoint*
///
QPoint* q_mdiarea_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QMdiArea*
/// @param param1 QPointF*
///
QPointF* q_mdiarea_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QMdiArea*
/// @param param1 QPoint*
///
QPoint* q_mdiarea_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QMdiArea*
/// @param param1 QPointF*
///
QPointF* q_mdiarea_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QMdiArea*
/// @param param1 QPoint*
///
QPoint* q_mdiarea_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QMdiArea*
/// @param param1 QPointF*
///
QPointF* q_mdiarea_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QMdiArea*
/// @param param1 QPoint*
///
QPoint* q_mdiarea_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QMdiArea*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_mdiarea_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QMdiArea*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_mdiarea_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QMdiArea*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_mdiarea_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QMdiArea*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_mdiarea_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QMdiArea*
///
QWidget* q_mdiarea_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QMdiArea*
///
QWidget* q_mdiarea_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QMdiArea*
///
QWidget* q_mdiarea_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QMdiArea*
///
const QPalette* q_mdiarea_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QMdiArea*
/// @param palette QPalette*
///
void q_mdiarea_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QMdiArea*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_mdiarea_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const QMdiArea*
///
/// @return enum QPalette__ColorRole
///
int32_t q_mdiarea_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QMdiArea*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_mdiarea_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const QMdiArea*
///
/// @return enum QPalette__ColorRole
///
int32_t q_mdiarea_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QMdiArea*
///
const QFont* q_mdiarea_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QMdiArea*
/// @param font QFont*
///
void q_mdiarea_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QMdiArea*
///
QFontMetrics* q_mdiarea_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QMdiArea*
///
QFontInfo* q_mdiarea_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QMdiArea*
///
QCursor* q_mdiarea_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QMdiArea*
/// @param cursor QCursor*
///
void q_mdiarea_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QMdiArea*
///
void q_mdiarea_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QMdiArea*
/// @param enable bool
///
void q_mdiarea_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QMdiArea*
/// @param enable bool
///
void q_mdiarea_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QMdiArea*
/// @param mask QBitmap*
///
void q_mdiarea_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QMdiArea*
/// @param mask QRegion*
///
void q_mdiarea_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QMdiArea*
///
QRegion* q_mdiarea_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QMdiArea*
///
void q_mdiarea_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiArea*
/// @param target QPaintDevice*
///
void q_mdiarea_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiArea*
/// @param painter QPainter*
///
void q_mdiarea_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QMdiArea*
///
QPixmap* q_mdiarea_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const QMdiArea*
///
QGraphicsEffect* q_mdiarea_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QMdiArea*
/// @param effect QGraphicsEffect*
///
void q_mdiarea_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QMdiArea*
/// @param type enum Qt__GestureType
///
void q_mdiarea_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QMdiArea*
/// @param type enum Qt__GestureType
///
void q_mdiarea_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QMdiArea*
/// @param windowTitle const char*
///
void q_mdiarea_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QMdiArea*
/// @param styleSheet const char*
///
void q_mdiarea_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMdiArea*
///
const char* q_mdiarea_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMdiArea*
///
const char* q_mdiarea_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QMdiArea*
/// @param icon QIcon*
///
void q_mdiarea_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QMdiArea*
///
QIcon* q_mdiarea_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QMdiArea*
/// @param windowIconText const char*
///
void q_mdiarea_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMdiArea*
///
const char* q_mdiarea_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QMdiArea*
/// @param windowRole const char*
///
void q_mdiarea_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMdiArea*
///
const char* q_mdiarea_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QMdiArea*
/// @param filePath const char*
///
void q_mdiarea_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMdiArea*
///
const char* q_mdiarea_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QMdiArea*
/// @param level double
///
void q_mdiarea_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const QMdiArea*
///
double q_mdiarea_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QMdiArea*
/// @param toolTip const char*
///
void q_mdiarea_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMdiArea*
///
const char* q_mdiarea_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QMdiArea*
/// @param msec int
///
void q_mdiarea_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QMdiArea*
/// @param statusTip const char*
///
void q_mdiarea_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMdiArea*
///
const char* q_mdiarea_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QMdiArea*
/// @param whatsThis const char*
///
void q_mdiarea_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMdiArea*
///
const char* q_mdiarea_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMdiArea*
///
const char* q_mdiarea_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QMdiArea*
/// @param name const char*
///
void q_mdiarea_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMdiArea*
///
const char* q_mdiarea_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QMdiArea*
/// @param description const char*
///
void q_mdiarea_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QMdiArea*
/// @param direction enum Qt__LayoutDirection
///
void q_mdiarea_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const QMdiArea*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_mdiarea_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QMdiArea*
///
void q_mdiarea_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QMdiArea*
/// @param locale QLocale*
///
void q_mdiarea_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QMdiArea*
///
QLocale* q_mdiarea_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QMdiArea*
///
void q_mdiarea_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QMdiArea*
///
void q_mdiarea_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QMdiArea*
///
void q_mdiarea_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QMdiArea*
///
void q_mdiarea_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QMdiArea*
/// @param reason enum Qt__FocusReason
///
void q_mdiarea_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const QMdiArea*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_mdiarea_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QMdiArea*
/// @param policy enum Qt__FocusPolicy
///
void q_mdiarea_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_mdiarea_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QMdiArea*
/// @param focusProxy QWidget*
///
void q_mdiarea_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const QMdiArea*
///
QWidget* q_mdiarea_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QMdiArea*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_mdiarea_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QMdiArea*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_mdiarea_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QMdiArea*
///
void q_mdiarea_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QMdiArea*
/// @param param1 QCursor*
///
void q_mdiarea_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QMdiArea*
///
void q_mdiarea_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QMdiArea*
///
void q_mdiarea_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QMdiArea*
///
void q_mdiarea_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QMdiArea*
/// @param key QKeySequence*
///
int32_t q_mdiarea_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QMdiArea*
/// @param id int
///
void q_mdiarea_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QMdiArea*
/// @param id int
///
void q_mdiarea_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QMdiArea*
/// @param id int
///
void q_mdiarea_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_mdiarea_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_mdiarea_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QMdiArea*
/// @param enable bool
///
void q_mdiarea_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const QMdiArea*
///
QGraphicsProxyWidget* q_mdiarea_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMdiArea*
///
void q_mdiarea_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMdiArea*
///
void q_mdiarea_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMdiArea*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_mdiarea_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMdiArea*
/// @param param1 QRect*
///
void q_mdiarea_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMdiArea*
/// @param param1 QRegion*
///
void q_mdiarea_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMdiArea*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_mdiarea_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMdiArea*
/// @param param1 QRect*
///
void q_mdiarea_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMdiArea*
/// @param param1 QRegion*
///
void q_mdiarea_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QMdiArea*
/// @param hidden bool
///
void q_mdiarea_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QMdiArea*
///
void q_mdiarea_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QMdiArea*
///
void q_mdiarea_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QMdiArea*
///
void q_mdiarea_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QMdiArea*
///
void q_mdiarea_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QMdiArea*
///
void q_mdiarea_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QMdiArea*
///
void q_mdiarea_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QMdiArea*
///
bool q_mdiarea_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QMdiArea*
///
void q_mdiarea_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QMdiArea*
///
void q_mdiarea_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QMdiArea*
/// @param param1 QWidget*
///
void q_mdiarea_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QMdiArea*
/// @param x int
/// @param y int
///
void q_mdiarea_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QMdiArea*
/// @param param1 QPoint*
///
void q_mdiarea_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QMdiArea*
/// @param w int
/// @param h int
///
void q_mdiarea_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QMdiArea*
/// @param param1 QSize*
///
void q_mdiarea_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QMdiArea*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_mdiarea_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QMdiArea*
/// @param geometry QRect*
///
void q_mdiarea_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMdiArea*
///
const char* q_mdiarea_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QMdiArea*
/// @param geometry const char*
///
bool q_mdiarea_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QMdiArea*
///
void q_mdiarea_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QMdiArea*
/// @param param1 QWidget*
///
bool q_mdiarea_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QMdiArea*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_mdiarea_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QMdiArea*
/// @param state flag of enum Qt__WindowState
///
void q_mdiarea_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QMdiArea*
/// @param state flag of enum Qt__WindowState
///
void q_mdiarea_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const QMdiArea*
///
QSizePolicy* q_mdiarea_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QMdiArea*
/// @param sizePolicy QSizePolicy*
///
void q_mdiarea_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QMdiArea*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_mdiarea_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const QMdiArea*
///
QRegion* q_mdiarea_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QMdiArea*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_mdiarea_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QMdiArea*
/// @param margins QMargins*
///
void q_mdiarea_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QMdiArea*
///
QMargins* q_mdiarea_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QMdiArea*
///
QRect* q_mdiarea_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QMdiArea*
///
QLayout* q_mdiarea_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QMdiArea*
/// @param layout QLayout*
///
void q_mdiarea_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QMdiArea*
///
void q_mdiarea_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QMdiArea*
/// @param parent QWidget*
///
void q_mdiarea_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QMdiArea*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_mdiarea_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QMdiArea*
/// @param dx int
/// @param dy int
///
void q_mdiarea_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QMdiArea*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_mdiarea_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QMdiArea*
///
QWidget* q_mdiarea_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QMdiArea*
///
QWidget* q_mdiarea_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QMdiArea*
///
QWidget* q_mdiarea_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QMdiArea*
/// @param on bool
///
void q_mdiarea_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMdiArea*
/// @param action QAction*
///
void q_mdiarea_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QMdiArea*
/// @param actions libqt_list of QAction*
///
void q_mdiarea_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QMdiArea*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_mdiarea_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QMdiArea*
/// @param before QAction*
/// @param action QAction*
///
void q_mdiarea_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QMdiArea*
/// @param action QAction*
///
void q_mdiarea_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const QMdiArea*
///
/// @return libqt_list of QAction*
///
libqt_list q_mdiarea_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMdiArea*
/// @param text const char*
///
QAction* q_mdiarea_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMdiArea*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_mdiarea_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMdiArea*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_mdiarea_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMdiArea*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_mdiarea_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QMdiArea*
///
QWidget* q_mdiarea_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QMdiArea*
/// @param type flag of enum Qt__WindowType
///
void q_mdiarea_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QMdiArea*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_mdiarea_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QMdiArea*
/// @param param1 enum Qt__WindowType
///
void q_mdiarea_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QMdiArea*
/// @param type flag of enum Qt__WindowType
///
void q_mdiarea_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QMdiArea*
///
/// @return enum Qt__WindowType
///
int32_t q_mdiarea_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* q_mdiarea_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QMdiArea*
/// @param x int
/// @param y int
///
QWidget* q_mdiarea_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QMdiArea*
/// @param p QPoint*
///
QWidget* q_mdiarea_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QMdiArea*
/// @param p QPointF*
///
QWidget* q_mdiarea_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QMdiArea*
/// @param param1 enum Qt__WidgetAttribute
///
void q_mdiarea_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const QMdiArea*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_mdiarea_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QMdiArea*
///
void q_mdiarea_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QMdiArea*
/// @param child QWidget*
///
bool q_mdiarea_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QMdiArea*
/// @param enabled bool
///
void q_mdiarea_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const QMdiArea*
///
QBackingStore* q_mdiarea_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QMdiArea*
///
QWindow* q_mdiarea_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QMdiArea*
///
QScreen* q_mdiarea_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QMdiArea*
/// @param screen QScreen*
///
void q_mdiarea_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_mdiarea_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QMdiArea*
/// @param title const char*
///
void q_mdiarea_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, const char* title)
///
void q_mdiarea_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QMdiArea*
/// @param icon QIcon*
///
void q_mdiarea_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QIcon* icon)
///
void q_mdiarea_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QMdiArea*
/// @param iconText const char*
///
void q_mdiarea_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, const char* iconText)
///
void q_mdiarea_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QMdiArea*
/// @param pos QPoint*
///
void q_mdiarea_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QPoint* pos)
///
void q_mdiarea_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QMdiArea*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_mdiarea_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QMdiArea*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_mdiarea_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiArea*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_mdiarea_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiArea*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_mdiarea_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiArea*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_mdiarea_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiArea*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_mdiarea_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiArea*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_mdiarea_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMdiArea*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_mdiarea_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QMdiArea*
/// @param rectangle QRect*
///
QPixmap* q_mdiarea_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QMdiArea*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_mdiarea_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QMdiArea*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_mdiarea_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QMdiArea*
/// @param id int
/// @param enable bool
///
void q_mdiarea_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QMdiArea*
/// @param id int
/// @param enable bool
///
void q_mdiarea_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QMdiArea*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_mdiarea_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QMdiArea*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_mdiarea_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_mdiarea_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_mdiarea_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QMdiArea*
///
const char* q_mdiarea_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QMdiArea*
/// @param name const char*
///
void q_mdiarea_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QMdiArea*
/// @param b bool
///
bool q_mdiarea_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QMdiArea*
///
QThread* q_mdiarea_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMdiArea*
/// @param thread QThread*
///
bool q_mdiarea_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMdiArea*
/// @param interval int
///
int32_t q_mdiarea_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMdiArea*
/// @param time int64_t of nanoseconds
///
int32_t q_mdiarea_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMdiArea*
/// @param id int
///
void q_mdiarea_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMdiArea*
/// @param id enum Qt__TimerId
///
void q_mdiarea_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QMdiArea*
///
/// @return libqt_list of QObject*
///
libqt_list q_mdiarea_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QMdiArea*
/// @param filterObj QObject*
///
void q_mdiarea_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QMdiArea*
/// @param obj QObject*
///
void q_mdiarea_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_mdiarea_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_mdiarea_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QMdiArea*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_mdiarea_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_mdiarea_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_mdiarea_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QMdiArea*
/// @param receiver QObject*
///
bool q_mdiarea_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_mdiarea_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QMdiArea*
///
void q_mdiarea_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QMdiArea*
///
void q_mdiarea_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QMdiArea*
/// @param name const char*
/// @param value QVariant*
///
bool q_mdiarea_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QMdiArea*
/// @param name const char*
///
QVariant* q_mdiarea_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QMdiArea*
///
const char** q_mdiarea_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMdiArea*
///
QBindingStorage* q_mdiarea_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QMdiArea*
///
const QBindingStorage* q_mdiarea_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMdiArea*
///
void q_mdiarea_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self)
///
void q_mdiarea_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QMdiArea*
///
QObject* q_mdiarea_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QMdiArea*
/// @param classname const char*
///
bool q_mdiarea_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QMdiArea*
///
void q_mdiarea_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMdiArea*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_mdiarea_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMdiArea*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_mdiarea_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_mdiarea_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_mdiarea_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QMdiArea*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_mdiarea_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QMdiArea*
/// @param signal const char*
///
bool q_mdiarea_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QMdiArea*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_mdiarea_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QMdiArea*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_mdiarea_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QMdiArea*
/// @param receiver QObject*
/// @param member const char*
///
bool q_mdiarea_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMdiArea*
/// @param param1 QObject*
///
void q_mdiarea_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QObject* param1)
///
void q_mdiarea_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QMdiArea*
///
bool q_mdiarea_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QMdiArea*
///
double q_mdiarea_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QMdiArea*
///
double q_mdiarea_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_mdiarea_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_mdiarea_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QMouseEvent*
///
void q_mdiarea_mouse_press_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QMouseEvent*
///
void q_mdiarea_super_mouse_press_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QMouseEvent* param1)
///
void q_mdiarea_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QMouseEvent*
///
void q_mdiarea_mouse_release_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QMouseEvent*
///
void q_mdiarea_super_mouse_release_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QMouseEvent* param1)
///
void q_mdiarea_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QMouseEvent*
///
void q_mdiarea_mouse_double_click_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QMouseEvent*
///
void q_mdiarea_super_mouse_double_click_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QMouseEvent* param1)
///
void q_mdiarea_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QMouseEvent*
///
void q_mdiarea_mouse_move_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QMouseEvent*
///
void q_mdiarea_super_mouse_move_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QMouseEvent* param1)
///
void q_mdiarea_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QWheelEvent*
///
void q_mdiarea_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QWheelEvent*
///
void q_mdiarea_super_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QWheelEvent* param1)
///
void q_mdiarea_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QContextMenuEvent*
///
void q_mdiarea_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QContextMenuEvent*
///
void q_mdiarea_super_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QContextMenuEvent* param1)
///
void q_mdiarea_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QDragEnterEvent*
///
void q_mdiarea_drag_enter_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QDragEnterEvent*
///
void q_mdiarea_super_drag_enter_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QDragEnterEvent* param1)
///
void q_mdiarea_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QDragMoveEvent*
///
void q_mdiarea_drag_move_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QDragMoveEvent*
///
void q_mdiarea_super_drag_move_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QDragMoveEvent* param1)
///
void q_mdiarea_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QDragLeaveEvent*
///
void q_mdiarea_drag_leave_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QDragLeaveEvent*
///
void q_mdiarea_super_drag_leave_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QDragLeaveEvent* param1)
///
void q_mdiarea_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QDropEvent*
///
void q_mdiarea_drop_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QDropEvent*
///
void q_mdiarea_super_drop_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QDropEvent* param1)
///
void q_mdiarea_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QKeyEvent*
///
void q_mdiarea_key_press_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QKeyEvent*
///
void q_mdiarea_super_key_press_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QKeyEvent* param1)
///
void q_mdiarea_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
///
QSize* q_mdiarea_viewport_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
///
QSize* q_mdiarea_super_viewport_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback QSize* func(QMdiArea* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_mdiarea_on_viewport_size_hint(void* self, QSize* (*callback)(const void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QEvent*
///
void q_mdiarea_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QEvent*
///
void q_mdiarea_super_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QEvent* param1)
///
void q_mdiarea_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
/// @param option QStyleOptionFrame*
///
void q_mdiarea_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
/// @param option QStyleOptionFrame*
///
void q_mdiarea_super_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QStyleOptionFrame* option)
///
void q_mdiarea_on_init_style_option(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback int32_t func(QMdiArea* self)
///
void q_mdiarea_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param visible bool
///
void q_mdiarea_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param visible bool
///
void q_mdiarea_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, bool visible)
///
void q_mdiarea_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
/// @param param1 int
///
int32_t q_mdiarea_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
/// @param param1 int
///
int32_t q_mdiarea_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback int32_t func(QMdiArea* self, int param1)
///
void q_mdiarea_on_height_for_width(void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
///
bool q_mdiarea_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
///
bool q_mdiarea_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback bool func(QMdiArea* self)
///
void q_mdiarea_on_has_height_for_width(void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
///
QPaintEngine* q_mdiarea_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
///
QPaintEngine* q_mdiarea_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback QPaintEngine* func(QMdiArea* self)
///
void q_mdiarea_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param event QKeyEvent*
///
void q_mdiarea_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param event QKeyEvent*
///
void q_mdiarea_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QKeyEvent* event)
///
void q_mdiarea_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param event QFocusEvent*
///
void q_mdiarea_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param event QFocusEvent*
///
void q_mdiarea_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QFocusEvent* event)
///
void q_mdiarea_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param event QFocusEvent*
///
void q_mdiarea_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param event QFocusEvent*
///
void q_mdiarea_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QFocusEvent* event)
///
void q_mdiarea_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param event QEnterEvent*
///
void q_mdiarea_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param event QEnterEvent*
///
void q_mdiarea_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QEnterEvent* event)
///
void q_mdiarea_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param event QEvent*
///
void q_mdiarea_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param event QEvent*
///
void q_mdiarea_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QEvent* event)
///
void q_mdiarea_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param event QMoveEvent*
///
void q_mdiarea_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param event QMoveEvent*
///
void q_mdiarea_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QMoveEvent* event)
///
void q_mdiarea_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param event QCloseEvent*
///
void q_mdiarea_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param event QCloseEvent*
///
void q_mdiarea_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QCloseEvent* event)
///
void q_mdiarea_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param event QTabletEvent*
///
void q_mdiarea_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param event QTabletEvent*
///
void q_mdiarea_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QTabletEvent* event)
///
void q_mdiarea_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param event QActionEvent*
///
void q_mdiarea_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param event QActionEvent*
///
void q_mdiarea_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QActionEvent* event)
///
void q_mdiarea_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param event QHideEvent*
///
void q_mdiarea_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param event QHideEvent*
///
void q_mdiarea_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QHideEvent* event)
///
void q_mdiarea_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_mdiarea_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_mdiarea_super_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback bool func(QMdiArea* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_mdiarea_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_mdiarea_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_mdiarea_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback int32_t func(QMdiArea* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_mdiarea_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
/// @param painter QPainter*
///
void q_mdiarea_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
/// @param painter QPainter*
///
void q_mdiarea_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QPainter* painter)
///
void q_mdiarea_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
/// @param offset QPoint*
///
QPaintDevice* q_mdiarea_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
/// @param offset QPoint*
///
QPaintDevice* q_mdiarea_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback QPaintDevice* func(QMdiArea* self, QPoint* offset)
///
void q_mdiarea_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
///
QPainter* q_mdiarea_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
///
QPainter* q_mdiarea_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback QPainter* func(QMdiArea* self)
///
void q_mdiarea_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QInputMethodEvent*
///
void q_mdiarea_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QInputMethodEvent*
///
void q_mdiarea_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QInputMethodEvent* param1)
///
void q_mdiarea_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_mdiarea_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_mdiarea_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback QVariant* func(QMdiArea* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_mdiarea_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param next bool
///
bool q_mdiarea_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param next bool
///
bool q_mdiarea_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback bool func(QMdiArea* self, bool next)
///
void q_mdiarea_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param event QEvent*
///
void q_mdiarea_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param event QEvent*
///
void q_mdiarea_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QEvent* event)
///
void q_mdiarea_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param signal QMetaMethod*
///
void q_mdiarea_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param signal QMetaMethod*
///
void q_mdiarea_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QMetaMethod* signal)
///
void q_mdiarea_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param signal QMetaMethod*
///
void q_mdiarea_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param signal QMetaMethod*
///
void q_mdiarea_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QMetaMethod* signal)
///
void q_mdiarea_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_mdiarea_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_mdiarea_super_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, int left, int top, int right, int bottom)
///
void q_mdiarea_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
///
QMargins* q_mdiarea_viewport_margins(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
///
QMargins* q_mdiarea_super_viewport_margins(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback QMargins* func(QMdiArea* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_mdiarea_on_viewport_margins(void* self, QMargins* (*callback)(const void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QPainter*
///
void q_mdiarea_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
/// @param param1 QPainter*
///
void q_mdiarea_super_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, QPainter* param1)
///
void q_mdiarea_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
///
void q_mdiarea_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
///
void q_mdiarea_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self)
///
void q_mdiarea_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
///
void q_mdiarea_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
///
void q_mdiarea_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self)
///
void q_mdiarea_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
///
void q_mdiarea_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
///
void q_mdiarea_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self)
///
void q_mdiarea_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
///
bool q_mdiarea_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
///
bool q_mdiarea_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback bool func(QMdiArea* self)
///
void q_mdiarea_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMdiArea*
///
bool q_mdiarea_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMdiArea*
///
bool q_mdiarea_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback bool func(QMdiArea* self)
///
void q_mdiarea_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
///
QObject* q_mdiarea_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
///
QObject* q_mdiarea_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback QObject* func(QMdiArea* self)
///
void q_mdiarea_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
///
int32_t q_mdiarea_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback int32_t func(QMdiArea* self)
///
void q_mdiarea_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
/// @param signal const char*
///
int32_t q_mdiarea_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
/// @param signal const char*
///
int32_t q_mdiarea_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback int32_t func(QMdiArea* self, const char* signal)
///
void q_mdiarea_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
/// @param signal QMetaMethod*
///
bool q_mdiarea_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
/// @param signal QMetaMethod*
///
bool q_mdiarea_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback bool func(QMdiArea* self, QMetaMethod* signal)
///
void q_mdiarea_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QMdiArea*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_mdiarea_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QMdiArea*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_mdiarea_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMdiArea*
/// @param callback double func(QMdiArea* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_mdiarea_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMdiArea*
/// @param callback void func(QMdiArea* self, const char* objectName)
///
void q_mdiarea_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#dtor.QMdiArea)
///
/// Delete this object from C++ memory.
///
/// @param self QMdiArea*
///
void q_mdiarea_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#public-types)

typedef enum {
    QMDIAREA_AREAOPTION_DONTMAXIMIZESUBWINDOWONACTIVATION = 1
} QMdiArea__AreaOption;

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#public-types)

typedef enum {
    QMDIAREA_WINDOWORDER_CREATIONORDER = 0,
    QMDIAREA_WINDOWORDER_STACKINGORDER = 1,
    QMDIAREA_WINDOWORDER_ACTIVATIONHISTORYORDER = 2
} QMdiArea__WindowOrder;

/// [Upstream resources](https://doc.qt.io/qt-6/qmdiarea.html#public-types)

typedef enum {
    QMDIAREA_VIEWMODE_SUBWINDOWVIEW = 0,
    QMDIAREA_VIEWMODE_TABBEDVIEW = 1
} QMdiArea__ViewMode;

#endif
