#pragma once
#ifndef SRC_QT6C_LIBQSTACKEDLAYOUT_H
#define SRC_QT6C_LIBQSTACKEDLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html)

/// q_stackedlayout_new constructs a new QStackedLayout object.
///
/// @param parent QWidget*
///
QStackedLayout* q_stackedlayout_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html)

/// q_stackedlayout_new2 constructs a new QStackedLayout object.
///
QStackedLayout* q_stackedlayout_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html)

/// q_stackedlayout_new3 constructs a new QStackedLayout object.
///
/// @param parentLayout QLayout*
///
QStackedLayout* q_stackedlayout_new3(void* parentLayout);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QStackedLayout*
///
const QMetaObject* q_stackedlayout_meta_object(void* self);

/// @param self QStackedLayout*
/// @param param1 const char*
///
void* q_stackedlayout_metacast(void* self, const char* param1);

/// @param self QStackedLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_stackedlayout_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QStackedLayout*
/// @param callback int32_t func(QStackedLayout* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_stackedlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QStackedLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_stackedlayout_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_stackedlayout_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#addWidget)
///
/// @param self QStackedLayout*
/// @param w QWidget*
///
int32_t q_stackedlayout_add_widget(void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#insertWidget)
///
/// @param self QStackedLayout*
/// @param index int
/// @param w QWidget*
///
int32_t q_stackedlayout_insert_widget(void* self, int index, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#currentWidget)
///
/// @param self QStackedLayout*
///
QWidget* q_stackedlayout_current_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#currentIndex)
///
/// @param self QStackedLayout*
///
int32_t q_stackedlayout_current_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#widget)
///
/// @param self QStackedLayout*
/// @param param1 int
///
QWidget* q_stackedlayout_widget(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#count)
///
/// @param self QStackedLayout*
///
int32_t q_stackedlayout_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QStackedLayout*
/// @param callback int32_t func()
///
void q_stackedlayout_on_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#count)
///
/// Base class method implementation
///
/// @param self QStackedLayout*
///
int32_t q_stackedlayout_qbase_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#stackingMode)
///
/// @param self QStackedLayout*
///
/// @return enum QStackedLayout__StackingMode
///
int32_t q_stackedlayout_stacking_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setStackingMode)
///
/// @param self QStackedLayout*
/// @param stackingMode enum QStackedLayout__StackingMode
///
void q_stackedlayout_set_stacking_mode(void* self, int32_t stackingMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#addItem)
///
/// @param self QStackedLayout*
/// @param item QLayoutItem*
///
void q_stackedlayout_add_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#addItem)
///
/// Allows for overriding the related default method
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, QLayoutItem* item)
///
void q_stackedlayout_on_add_item(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#addItem)
///
/// Base class method implementation
///
/// @param self QStackedLayout*
/// @param item QLayoutItem*
///
void q_stackedlayout_qbase_add_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#sizeHint)
///
/// @param self QStackedLayout*
///
QSize* q_stackedlayout_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QStackedLayout*
/// @param callback QSize* func()
///
void q_stackedlayout_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QStackedLayout*
///
QSize* q_stackedlayout_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#minimumSize)
///
/// @param self QStackedLayout*
///
QSize* q_stackedlayout_minimum_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self QStackedLayout*
/// @param callback QSize* func()
///
void q_stackedlayout_on_minimum_size(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#minimumSize)
///
/// Base class method implementation
///
/// @param self QStackedLayout*
///
QSize* q_stackedlayout_qbase_minimum_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#itemAt)
///
/// @param self QStackedLayout*
/// @param param1 int
///
QLayoutItem* q_stackedlayout_item_at(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#itemAt)
///
/// Allows for overriding the related default method
///
/// @param self QStackedLayout*
/// @param callback QLayoutItem* func(QStackedLayout* self, int param1)
///
void q_stackedlayout_on_item_at(void* self, QLayoutItem* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#itemAt)
///
/// Base class method implementation
///
/// @param self QStackedLayout*
/// @param param1 int
///
QLayoutItem* q_stackedlayout_qbase_item_at(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#takeAt)
///
/// @param self QStackedLayout*
/// @param param1 int
///
QLayoutItem* q_stackedlayout_take_at(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#takeAt)
///
/// Allows for overriding the related default method
///
/// @param self QStackedLayout*
/// @param callback QLayoutItem* func(QStackedLayout* self, int param1)
///
void q_stackedlayout_on_take_at(void* self, QLayoutItem* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#takeAt)
///
/// Base class method implementation
///
/// @param self QStackedLayout*
/// @param param1 int
///
QLayoutItem* q_stackedlayout_qbase_take_at(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setGeometry)
///
/// @param self QStackedLayout*
/// @param rect QRect*
///
void q_stackedlayout_set_geometry(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, QRect* rect)
///
void q_stackedlayout_on_set_geometry(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QStackedLayout*
/// @param rect QRect*
///
void q_stackedlayout_qbase_set_geometry(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#hasHeightForWidth)
///
/// @param self QStackedLayout*
///
bool q_stackedlayout_has_height_for_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QStackedLayout*
/// @param callback bool func()
///
void q_stackedlayout_on_has_height_for_width(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// @param self QStackedLayout*
///
bool q_stackedlayout_qbase_has_height_for_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#heightForWidth)
///
/// @param self QStackedLayout*
/// @param width int
///
int32_t q_stackedlayout_height_for_width(void* self, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QStackedLayout*
/// @param callback int32_t func(QStackedLayout* self, int width)
///
void q_stackedlayout_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self QStackedLayout*
/// @param width int
///
int32_t q_stackedlayout_qbase_height_for_width(void* self, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#widgetRemoved)
///
/// @param self QStackedLayout*
/// @param index int
///
void q_stackedlayout_widget_removed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#widgetRemoved)
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, int index)
///
void q_stackedlayout_on_widget_removed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#currentChanged)
///
/// @param self QStackedLayout*
/// @param index int
///
void q_stackedlayout_current_changed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#currentChanged)
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, int index)
///
void q_stackedlayout_on_current_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setCurrentIndex)
///
/// @param self QStackedLayout*
/// @param index int
///
void q_stackedlayout_set_current_index(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#setCurrentWidget)
///
/// @param self QStackedLayout*
/// @param w QWidget*
///
void q_stackedlayout_set_current_widget(void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_stackedlayout_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_stackedlayout_tr3(const char* s, const char* c, int n);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QStackedLayout*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_stackedlayout_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
///
/// @param self QStackedLayout*
/// @param margins QMargins*
///
void q_stackedlayout_set_contents_margins2(void* self, void* margins);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
///
/// @param self QStackedLayout*
///
void q_stackedlayout_unset_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
///
/// @param self QStackedLayout*
/// @param left int*
/// @param top int*
/// @param right int*
/// @param bottom int*
///
void q_stackedlayout_get_contents_margins(void* self, int* left, int* top, int* right, int* bottom);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
///
/// @param self QStackedLayout*
///
QMargins* q_stackedlayout_contents_margins(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
///
/// @param self QStackedLayout*
///
QRect* q_stackedlayout_contents_rect(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QStackedLayout*
/// @param w QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
bool q_stackedlayout_set_alignment(void* self, void* w, int32_t alignment);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
///
/// @param self QStackedLayout*
/// @param l QLayout*
/// @param alignment flag of enum Qt__AlignmentFlag
///
bool q_stackedlayout_set_alignment2(void* self, void* l, int32_t alignment);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
///
/// @param self QStackedLayout*
/// @param sizeConstraint enum QLayout__SizeConstraint
///
void q_stackedlayout_set_size_constraint(void* self, int32_t sizeConstraint);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
///
/// @param self QStackedLayout*
///
/// @return enum QLayout__SizeConstraint
///
int32_t q_stackedlayout_size_constraint(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
///
/// @param self QStackedLayout*
/// @param w QWidget*
///
void q_stackedlayout_set_menu_bar(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
///
/// @param self QStackedLayout*
///
QWidget* q_stackedlayout_menu_bar(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
///
/// @param self QStackedLayout*
///
QWidget* q_stackedlayout_parent_widget(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
///
/// @param self QStackedLayout*
///
bool q_stackedlayout_activate(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
///
/// @param self QStackedLayout*
///
void q_stackedlayout_update(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
///
/// @param self QStackedLayout*
/// @param w QWidget*
///
void q_stackedlayout_remove_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeItem)
///
/// @param self QStackedLayout*
/// @param param1 QLayoutItem*
///
void q_stackedlayout_remove_item(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// @param self QStackedLayout*
/// @param param1 QLayoutItem*
///
int32_t q_stackedlayout_index_of2(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self QStackedLayout*
/// @param callback int32_t func(QStackedLayout* self, QLayoutItem* param1)
///
void q_stackedlayout_on_index_of2(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Base class method implementation
///
/// @param self QStackedLayout*
/// @param param1 QLayoutItem*
///
int32_t q_stackedlayout_qbase_index_of2(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
///
/// @param self QStackedLayout*
/// @param w int
///
int32_t q_stackedlayout_total_minimum_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
///
/// @param self QStackedLayout*
/// @param w int
///
int32_t q_stackedlayout_total_height_for_width(void* self, int w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
///
/// @param self QStackedLayout*
///
QSize* q_stackedlayout_total_minimum_size(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
///
/// @param self QStackedLayout*
///
QSize* q_stackedlayout_total_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
///
/// @param self QStackedLayout*
///
QSize* q_stackedlayout_total_size_hint(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
///
/// @param self QStackedLayout*
/// @param enabled bool
///
void q_stackedlayout_set_enabled(void* self, bool enabled);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
///
/// @param self QStackedLayout*
///
bool q_stackedlayout_is_enabled(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
///
/// @param w QWidget*
/// @param s QSize*
///
QSize* q_stackedlayout_closest_acceptable_size(void* w, void* s);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QStackedLayout*
///
const char* q_stackedlayout_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QStackedLayout*
/// @param name char*
///
void q_stackedlayout_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QStackedLayout*
///
bool q_stackedlayout_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QStackedLayout*
///
bool q_stackedlayout_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QStackedLayout*
///
bool q_stackedlayout_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QStackedLayout*
///
bool q_stackedlayout_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QStackedLayout*
/// @param b bool
///
bool q_stackedlayout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QStackedLayout*
///
QThread* q_stackedlayout_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStackedLayout*
/// @param thread QThread*
///
bool q_stackedlayout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStackedLayout*
/// @param interval int
///
int32_t q_stackedlayout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStackedLayout*
/// @param id int
///
void q_stackedlayout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStackedLayout*
/// @param id enum Qt__TimerId
///
void q_stackedlayout_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QStackedLayout*
///
/// @return libqt_list of QObject*
///
libqt_list q_stackedlayout_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QStackedLayout*
/// @param parent QObject*
///
void q_stackedlayout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QStackedLayout*
/// @param filterObj QObject*
///
void q_stackedlayout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QStackedLayout*
/// @param obj QObject*
///
void q_stackedlayout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_stackedlayout_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStackedLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_stackedlayout_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_stackedlayout_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_stackedlayout_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QStackedLayout*
///
void q_stackedlayout_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QStackedLayout*
///
void q_stackedlayout_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QStackedLayout*
/// @param name const char*
/// @param value QVariant*
///
bool q_stackedlayout_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QStackedLayout*
/// @param name const char*
///
QVariant* q_stackedlayout_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QStackedLayout*
///
const char** q_stackedlayout_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStackedLayout*
///
QBindingStorage* q_stackedlayout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStackedLayout*
///
const QBindingStorage* q_stackedlayout_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStackedLayout*
///
void q_stackedlayout_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self)
///
void q_stackedlayout_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QStackedLayout*
///
QObject* q_stackedlayout_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QStackedLayout*
/// @param classname const char*
///
bool q_stackedlayout_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QStackedLayout*
///
void q_stackedlayout_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStackedLayout*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_stackedlayout_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStackedLayout*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_stackedlayout_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_stackedlayout_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStackedLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_stackedlayout_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStackedLayout*
/// @param param1 QObject*
///
void q_stackedlayout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, QObject* param1)
///
void q_stackedlayout_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
///
/// @param self QStackedLayout*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_stackedlayout_alignment(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#spacing)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
///
int32_t q_stackedlayout_spacing(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#spacing)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
///
int32_t q_stackedlayout_qbase_spacing(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#spacing)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback int32_t func()
///
void q_stackedlayout_on_spacing(void* self, int32_t (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param spacing int
///
void q_stackedlayout_set_spacing(void* self, int spacing);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param spacing int
///
void q_stackedlayout_qbase_set_spacing(void* self, int spacing);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, int spacing)
///
void q_stackedlayout_on_set_spacing(void* self, void (*callback)(void*, int));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#invalidate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
///
void q_stackedlayout_invalidate(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#invalidate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
///
void q_stackedlayout_qbase_invalidate(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#invalidate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback void func()
///
void q_stackedlayout_on_invalidate(void* self, void (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
///
QRect* q_stackedlayout_geometry(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
///
QRect* q_stackedlayout_qbase_geometry(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback QRect* func()
///
void q_stackedlayout_on_geometry(void* self, QRect* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_stackedlayout_expanding_directions(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
///
/// @return flag of enum Qt__Orientation
///
int32_t q_stackedlayout_qbase_expanding_directions(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback int32_t func()
///
void q_stackedlayout_on_expanding_directions(void* self, int32_t (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
///
QSize* q_stackedlayout_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
///
QSize* q_stackedlayout_qbase_maximum_size(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback QSize* func()
///
void q_stackedlayout_on_maximum_size(void* self, QSize* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param param1 QWidget*
///
int32_t q_stackedlayout_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param param1 QWidget*
///
int32_t q_stackedlayout_qbase_index_of(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback int32_t func(QStackedLayout* self, QWidget* param1)
///
void q_stackedlayout_on_index_of(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
///
bool q_stackedlayout_is_empty(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
///
bool q_stackedlayout_qbase_is_empty(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback bool func()
///
void q_stackedlayout_on_is_empty(void* self, bool (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_stackedlayout_control_types(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
///
/// @return flag of enum QSizePolicy__ControlType
///
int32_t q_stackedlayout_qbase_control_types(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback int32_t func()
///
void q_stackedlayout_on_control_types(void* self, int32_t (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
///
QLayoutItem* q_stackedlayout_replace_widget(void* self, void* from, void* to, int32_t options);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param from QWidget*
/// @param to QWidget*
/// @param options flag of enum Qt__FindChildOption
///
QLayoutItem* q_stackedlayout_qbase_replace_widget(void* self, void* from, void* to, int32_t options);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback QLayoutItem* func(QStackedLayout* self, QWidget* from, QWidget* to, flag of enum Qt__FindChildOption options)
///
void q_stackedlayout_on_replace_widget(void* self, QLayoutItem* (*callback)(void*, void*, void*, int32_t));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
///
QLayout* q_stackedlayout_layout(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
///
QLayout* q_stackedlayout_qbase_layout(void* self);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback QLayout* func()
///
void q_stackedlayout_on_layout(void* self, QLayout* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param e QChildEvent*
///
void q_stackedlayout_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param e QChildEvent*
///
void q_stackedlayout_qbase_child_event(void* self, void* e);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, QChildEvent* e)
///
void q_stackedlayout_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param event QEvent*
///
bool q_stackedlayout_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param event QEvent*
///
bool q_stackedlayout_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback bool func(QStackedLayout* self, QEvent* event)
///
void q_stackedlayout_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_stackedlayout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_stackedlayout_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback bool func(QStackedLayout* self, QObject* watched, QEvent* event)
///
void q_stackedlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param event QTimerEvent*
///
void q_stackedlayout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param event QTimerEvent*
///
void q_stackedlayout_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, QTimerEvent* event)
///
void q_stackedlayout_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param event QEvent*
///
void q_stackedlayout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param event QEvent*
///
void q_stackedlayout_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, QEvent* event)
///
void q_stackedlayout_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param signal QMetaMethod*
///
void q_stackedlayout_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param signal QMetaMethod*
///
void q_stackedlayout_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, QMetaMethod* signal)
///
void q_stackedlayout_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param signal QMetaMethod*
///
void q_stackedlayout_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param signal QMetaMethod*
///
void q_stackedlayout_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, QMetaMethod* signal)
///
void q_stackedlayout_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param param1 int
///
int32_t q_stackedlayout_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param param1 int
///
int32_t q_stackedlayout_qbase_minimum_height_for_width(void* self, int param1);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback int32_t func(QStackedLayout* self, int param1)
///
void q_stackedlayout_on_minimum_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
///
QSpacerItem* q_stackedlayout_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
///
QSpacerItem* q_stackedlayout_qbase_spacer_item(void* self);

/// Inherited from QLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback QSpacerItem* func()
///
void q_stackedlayout_on_spacer_item(void* self, QSpacerItem* (*callback)());

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param param1 QEvent*
///
void q_stackedlayout_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param param1 QEvent*
///
void q_stackedlayout_qbase_widget_event(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, QEvent* param1)
///
void q_stackedlayout_on_widget_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param l QLayout*
///
void q_stackedlayout_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param l QLayout*
///
void q_stackedlayout_qbase_add_child_layout(void* self, void* l);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, QLayout* l)
///
void q_stackedlayout_on_add_child_layout(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param w QWidget*
///
void q_stackedlayout_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param w QWidget*
///
void q_stackedlayout_qbase_add_child_widget(void* self, void* w);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, QWidget* w)
///
void q_stackedlayout_on_add_child_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param layout QLayout*
///
bool q_stackedlayout_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param layout QLayout*
///
bool q_stackedlayout_qbase_adopt_layout(void* self, void* layout);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback bool func(QStackedLayout* self, QLayout* layout)
///
void q_stackedlayout_on_adopt_layout(void* self, bool (*callback)(void*, void*));

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param param1 QRect*
///
QRect* q_stackedlayout_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param param1 QRect*
///
QRect* q_stackedlayout_qbase_alignment_rect(void* self, void* param1);

/// Inherited from QLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback QRect* func(QStackedLayout* self, QRect* param1)
///
void q_stackedlayout_on_alignment_rect(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
///
QObject* q_stackedlayout_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
///
QObject* q_stackedlayout_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback QObject* func()
///
void q_stackedlayout_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
///
int32_t q_stackedlayout_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
///
int32_t q_stackedlayout_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback int32_t func()
///
void q_stackedlayout_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param signal const char*
///
int32_t q_stackedlayout_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param signal const char*
///
int32_t q_stackedlayout_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback int32_t func(QStackedLayout* self, const char* signal)
///
void q_stackedlayout_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStackedLayout*
/// @param signal QMetaMethod*
///
bool q_stackedlayout_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param signal QMetaMethod*
///
bool q_stackedlayout_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStackedLayout*
/// @param callback bool func(QStackedLayout* self, QMetaMethod* signal)
///
void q_stackedlayout_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QStackedLayout*
/// @param callback void func(QStackedLayout* self, const char* objectName)
///
void q_stackedlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#dtor.QStackedLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QStackedLayout*
///
void q_stackedlayout_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstackedlayout.html#public-types)

typedef enum {
    QSTACKEDLAYOUT_STACKINGMODE_STACKONE = 0,
    QSTACKEDLAYOUT_STACKINGMODE_STACKALL = 1
} QStackedLayout__StackingMode;

#endif
