#pragma once
#ifndef SRCQT6C_LIBQTABBAR_H
#define SRCQT6C_LIBQTABBAR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtabbar.html

/// q_tabbar_new constructs a new QTabBar object.
///
/// @param parent QWidget*
QTabBar* q_tabbar_new(void* parent);

/// q_tabbar_new2 constructs a new QTabBar object.
///
QTabBar* q_tabbar_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTabBar*
const QMetaObject* q_tabbar_meta_object(void* self);

/// @param self QTabBar*
/// @param param1 const char*
void* q_tabbar_metacast(void* self, const char* param1);

/// @param self QTabBar*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_tabbar_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback int32_t func(QTabBar* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_tabbar_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTabBar*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_tabbar_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_tabbar_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#shape)
///
/// @param self QTabBar*
///
/// @return enum QTabBar__Shape
int32_t q_tabbar_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setShape)
///
/// @param self QTabBar*
/// @param shape enum QTabBar__Shape
void q_tabbar_set_shape(void* self, int32_t shape);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#addTab)
///
/// @param self QTabBar*
/// @param text const char*
int32_t q_tabbar_add_tab(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#addTab)
///
/// @param self QTabBar*
/// @param icon QIcon*
/// @param text const char*
int32_t q_tabbar_add_tab2(void* self, void* icon, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#insertTab)
///
/// @param self QTabBar*
/// @param index int
/// @param text const char*
int32_t q_tabbar_insert_tab(void* self, int index, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#insertTab)
///
/// @param self QTabBar*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
int32_t q_tabbar_insert_tab2(void* self, int index, void* icon, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#removeTab)
///
/// @param self QTabBar*
/// @param index int
void q_tabbar_remove_tab(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#moveTab)
///
/// @param self QTabBar*
/// @param from int
/// @param to int
void q_tabbar_move_tab(void* self, int from, int to);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#isTabEnabled)
///
/// @param self QTabBar*
/// @param index int
bool q_tabbar_is_tab_enabled(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabEnabled)
///
/// @param self QTabBar*
/// @param index int
/// @param enabled bool
void q_tabbar_set_tab_enabled(void* self, int index, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#isTabVisible)
///
/// @param self QTabBar*
/// @param index int
bool q_tabbar_is_tab_visible(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabVisible)
///
/// @param self QTabBar*
/// @param index int
/// @param visible bool
void q_tabbar_set_tab_visible(void* self, int index, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
/// @param index int
const char* q_tabbar_tab_text(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabText)
///
/// @param self QTabBar*
/// @param index int
/// @param text const char*
void q_tabbar_set_tab_text(void* self, int index, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabTextColor)
///
/// @param self QTabBar*
/// @param index int
QColor* q_tabbar_tab_text_color(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabTextColor)
///
/// @param self QTabBar*
/// @param index int
/// @param color QColor*
void q_tabbar_set_tab_text_color(void* self, int index, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabIcon)
///
/// @param self QTabBar*
/// @param index int
QIcon* q_tabbar_tab_icon(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabIcon)
///
/// @param self QTabBar*
/// @param index int
/// @param icon QIcon*
void q_tabbar_set_tab_icon(void* self, int index, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#elideMode)
///
/// @param self QTabBar*
///
/// @return enum Qt__TextElideMode
int32_t q_tabbar_elide_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setElideMode)
///
/// @param self QTabBar*
/// @param mode enum Qt__TextElideMode
void q_tabbar_set_elide_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabToolTip)
///
/// @param self QTabBar*
/// @param index int
/// @param tip const char*
void q_tabbar_set_tab_tool_tip(void* self, int index, const char* tip);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabToolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
/// @param index int
const char* q_tabbar_tab_tool_tip(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabWhatsThis)
///
/// @param self QTabBar*
/// @param index int
/// @param text const char*
void q_tabbar_set_tab_whats_this(void* self, int index, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabWhatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
/// @param index int
const char* q_tabbar_tab_whats_this(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabData)
///
/// @param self QTabBar*
/// @param index int
/// @param data QVariant*
void q_tabbar_set_tab_data(void* self, int index, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabData)
///
/// @param self QTabBar*
/// @param index int
QVariant* q_tabbar_tab_data(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabRect)
///
/// @param self QTabBar*
/// @param index int
QRect* q_tabbar_tab_rect(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabAt)
///
/// @param self QTabBar*
/// @param pos QPoint*
int32_t q_tabbar_tab_at(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#currentIndex)
///
/// @param self QTabBar*
int32_t q_tabbar_current_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#count)
///
/// @param self QTabBar*
int32_t q_tabbar_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#sizeHint)
///
/// @param self QTabBar*
QSize* q_tabbar_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback QSize* func()
void q_tabbar_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QTabBar*
QSize* q_tabbar_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#minimumSizeHint)
///
/// @param self QTabBar*
QSize* q_tabbar_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback QSize* func()
void q_tabbar_on_minimum_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self QTabBar*
QSize* q_tabbar_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setDrawBase)
///
/// @param self QTabBar*
/// @param drawTheBase bool
void q_tabbar_set_draw_base(void* self, bool drawTheBase);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#drawBase)
///
/// @param self QTabBar*
bool q_tabbar_draw_base(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#iconSize)
///
/// @param self QTabBar*
QSize* q_tabbar_icon_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setIconSize)
///
/// @param self QTabBar*
/// @param size QSize*
void q_tabbar_set_icon_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#usesScrollButtons)
///
/// @param self QTabBar*
bool q_tabbar_uses_scroll_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setUsesScrollButtons)
///
/// @param self QTabBar*
/// @param useButtons bool
void q_tabbar_set_uses_scroll_buttons(void* self, bool useButtons);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabsClosable)
///
/// @param self QTabBar*
bool q_tabbar_tabs_closable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabsClosable)
///
/// @param self QTabBar*
/// @param closable bool
void q_tabbar_set_tabs_closable(void* self, bool closable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabButton)
///
/// @param self QTabBar*
/// @param index int
/// @param position enum QTabBar__ButtonPosition
/// @param widget QWidget*
void q_tabbar_set_tab_button(void* self, int index, int32_t position, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabButton)
///
/// @param self QTabBar*
/// @param index int
/// @param position enum QTabBar__ButtonPosition
QWidget* q_tabbar_tab_button(void* self, int index, int32_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#selectionBehaviorOnRemove)
///
/// @param self QTabBar*
///
/// @return enum QTabBar__SelectionBehavior
int32_t q_tabbar_selection_behavior_on_remove(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setSelectionBehaviorOnRemove)
///
/// @param self QTabBar*
/// @param behavior enum QTabBar__SelectionBehavior
void q_tabbar_set_selection_behavior_on_remove(void* self, int32_t behavior);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#expanding)
///
/// @param self QTabBar*
bool q_tabbar_expanding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setExpanding)
///
/// @param self QTabBar*
/// @param enabled bool
void q_tabbar_set_expanding(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#isMovable)
///
/// @param self QTabBar*
bool q_tabbar_is_movable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setMovable)
///
/// @param self QTabBar*
/// @param movable bool
void q_tabbar_set_movable(void* self, bool movable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#documentMode)
///
/// @param self QTabBar*
bool q_tabbar_document_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setDocumentMode)
///
/// @param self QTabBar*
/// @param set bool
void q_tabbar_set_document_mode(void* self, bool set);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#autoHide)
///
/// @param self QTabBar*
bool q_tabbar_auto_hide(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setAutoHide)
///
/// @param self QTabBar*
/// @param hide bool
void q_tabbar_set_auto_hide(void* self, bool hide);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#changeCurrentOnDrag)
///
/// @param self QTabBar*
bool q_tabbar_change_current_on_drag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setChangeCurrentOnDrag)
///
/// @param self QTabBar*
/// @param change bool
void q_tabbar_set_change_current_on_drag(void* self, bool change);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#accessibleTabName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
/// @param index int
const char* q_tabbar_accessible_tab_name(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setAccessibleTabName)
///
/// @param self QTabBar*
/// @param index int
/// @param name const char*
void q_tabbar_set_accessible_tab_name(void* self, int index, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setCurrentIndex)
///
/// @param self QTabBar*
/// @param index int
void q_tabbar_set_current_index(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#currentChanged)
///
/// @param self QTabBar*
/// @param index int
void q_tabbar_current_changed(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#currentChanged)
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, int index)
void q_tabbar_on_current_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabCloseRequested)
///
/// @param self QTabBar*
/// @param index int
void q_tabbar_tab_close_requested(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabCloseRequested)
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, int index)
void q_tabbar_on_tab_close_requested(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabMoved)
///
/// @param self QTabBar*
/// @param from int
/// @param to int
void q_tabbar_tab_moved(void* self, int from, int to);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabMoved)
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, int from, int to)
void q_tabbar_on_tab_moved(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabBarClicked)
///
/// @param self QTabBar*
/// @param index int
void q_tabbar_tab_bar_clicked(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabBarClicked)
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, int index)
void q_tabbar_on_tab_bar_clicked(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabBarDoubleClicked)
///
/// @param self QTabBar*
/// @param index int
void q_tabbar_tab_bar_double_clicked(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabBarDoubleClicked)
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, int index)
void q_tabbar_on_tab_bar_double_clicked(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabSizeHint)
///
/// @param self QTabBar*
/// @param index int
QSize* q_tabbar_tab_size_hint(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback QSize* func(QTabBar* self, int index)
void q_tabbar_on_tab_size_hint(void* self, QSize* (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabSizeHint)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param index int
QSize* q_tabbar_qbase_tab_size_hint(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#minimumTabSizeHint)
///
/// @param self QTabBar*
/// @param index int
QSize* q_tabbar_minimum_tab_size_hint(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#minimumTabSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback QSize* func(QTabBar* self, int index)
void q_tabbar_on_minimum_tab_size_hint(void* self, QSize* (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#minimumTabSizeHint)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param index int
QSize* q_tabbar_qbase_minimum_tab_size_hint(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabInserted)
///
/// @param self QTabBar*
/// @param index int
void q_tabbar_tab_inserted(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabInserted)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, int index)
void q_tabbar_on_tab_inserted(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabInserted)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param index int
void q_tabbar_qbase_tab_inserted(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabRemoved)
///
/// @param self QTabBar*
/// @param index int
void q_tabbar_tab_removed(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabRemoved)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, int index)
void q_tabbar_on_tab_removed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabRemoved)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param index int
void q_tabbar_qbase_tab_removed(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabLayoutChange)
///
/// @param self QTabBar*
void q_tabbar_tab_layout_change(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabLayoutChange)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func()
void q_tabbar_on_tab_layout_change(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabLayoutChange)
///
/// Base class method implementation
///
/// @param self QTabBar*
void q_tabbar_qbase_tab_layout_change(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#event)
///
/// @param self QTabBar*
/// @param param1 QEvent*
bool q_tabbar_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback bool func(QTabBar* self, QEvent* param1)
void q_tabbar_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#event)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param param1 QEvent*
bool q_tabbar_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#resizeEvent)
///
/// @param self QTabBar*
/// @param param1 QResizeEvent*
void q_tabbar_resize_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QResizeEvent* param1)
void q_tabbar_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param param1 QResizeEvent*
void q_tabbar_qbase_resize_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#showEvent)
///
/// @param self QTabBar*
/// @param param1 QShowEvent*
void q_tabbar_show_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QShowEvent* param1)
void q_tabbar_on_show_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#showEvent)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param param1 QShowEvent*
void q_tabbar_qbase_show_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#hideEvent)
///
/// @param self QTabBar*
/// @param param1 QHideEvent*
void q_tabbar_hide_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QHideEvent* param1)
void q_tabbar_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#hideEvent)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param param1 QHideEvent*
void q_tabbar_qbase_hide_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#paintEvent)
///
/// @param self QTabBar*
/// @param param1 QPaintEvent*
void q_tabbar_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QPaintEvent* param1)
void q_tabbar_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param param1 QPaintEvent*
void q_tabbar_qbase_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mousePressEvent)
///
/// @param self QTabBar*
/// @param param1 QMouseEvent*
void q_tabbar_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QMouseEvent* param1)
void q_tabbar_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param param1 QMouseEvent*
void q_tabbar_qbase_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseMoveEvent)
///
/// @param self QTabBar*
/// @param param1 QMouseEvent*
void q_tabbar_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QMouseEvent* param1)
void q_tabbar_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param param1 QMouseEvent*
void q_tabbar_qbase_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseReleaseEvent)
///
/// @param self QTabBar*
/// @param param1 QMouseEvent*
void q_tabbar_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QMouseEvent* param1)
void q_tabbar_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param param1 QMouseEvent*
void q_tabbar_qbase_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseDoubleClickEvent)
///
/// @param self QTabBar*
/// @param param1 QMouseEvent*
void q_tabbar_mouse_double_click_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QMouseEvent* param1)
void q_tabbar_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param param1 QMouseEvent*
void q_tabbar_qbase_mouse_double_click_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#wheelEvent)
///
/// @param self QTabBar*
/// @param event QWheelEvent*
void q_tabbar_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QWheelEvent* event)
void q_tabbar_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param event QWheelEvent*
void q_tabbar_qbase_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#keyPressEvent)
///
/// @param self QTabBar*
/// @param param1 QKeyEvent*
void q_tabbar_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QKeyEvent* param1)
void q_tabbar_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param param1 QKeyEvent*
void q_tabbar_qbase_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#changeEvent)
///
/// @param self QTabBar*
/// @param param1 QEvent*
void q_tabbar_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QEvent* param1)
void q_tabbar_on_change_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param param1 QEvent*
void q_tabbar_qbase_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#timerEvent)
///
/// @param self QTabBar*
/// @param event QTimerEvent*
void q_tabbar_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QTimerEvent* event)
void q_tabbar_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param event QTimerEvent*
void q_tabbar_qbase_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#initStyleOption)
///
/// @param self QTabBar*
/// @param option QStyleOptionTab*
/// @param tabIndex int
void q_tabbar_init_style_option(void* self, void* option, int tabIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QStyleOptionTab* option, int tabIndex)
void q_tabbar_on_init_style_option(void* self, void (*callback)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self QTabBar*
/// @param option QStyleOptionTab*
/// @param tabIndex int
void q_tabbar_qbase_init_style_option(void* self, void* option, int tabIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_tabbar_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_tabbar_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QTabBar*
uintptr_t q_tabbar_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QTabBar*
void q_tabbar_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QTabBar*
uintptr_t q_tabbar_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QTabBar*
uintptr_t q_tabbar_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QTabBar*
QStyle* q_tabbar_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QTabBar*
/// @param style QStyle*
void q_tabbar_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QTabBar*
bool q_tabbar_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QTabBar*
bool q_tabbar_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QTabBar*
bool q_tabbar_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QTabBar*
///
/// @return enum Qt__WindowModality
int32_t q_tabbar_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QTabBar*
/// @param windowModality enum Qt__WindowModality
void q_tabbar_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QTabBar*
bool q_tabbar_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QTabBar*
/// @param param1 QWidget*
bool q_tabbar_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QTabBar*
/// @param enabled bool
void q_tabbar_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QTabBar*
/// @param disabled bool
void q_tabbar_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QTabBar*
/// @param windowModified bool
void q_tabbar_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QTabBar*
QRect* q_tabbar_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QTabBar*
const QRect* q_tabbar_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QTabBar*
QRect* q_tabbar_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QTabBar*
int32_t q_tabbar_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QTabBar*
int32_t q_tabbar_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QTabBar*
QPoint* q_tabbar_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QTabBar*
QSize* q_tabbar_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QTabBar*
QSize* q_tabbar_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QTabBar*
int32_t q_tabbar_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QTabBar*
int32_t q_tabbar_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QTabBar*
QRect* q_tabbar_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QTabBar*
QRect* q_tabbar_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QTabBar*
QRegion* q_tabbar_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QTabBar*
QSize* q_tabbar_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QTabBar*
QSize* q_tabbar_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QTabBar*
int32_t q_tabbar_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QTabBar*
int32_t q_tabbar_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QTabBar*
int32_t q_tabbar_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QTabBar*
int32_t q_tabbar_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTabBar*
/// @param minimumSize QSize*
void q_tabbar_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTabBar*
/// @param minw int
/// @param minh int
void q_tabbar_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTabBar*
/// @param maximumSize QSize*
void q_tabbar_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTabBar*
/// @param maxw int
/// @param maxh int
void q_tabbar_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QTabBar*
/// @param minw int
void q_tabbar_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QTabBar*
/// @param minh int
void q_tabbar_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QTabBar*
/// @param maxw int
void q_tabbar_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QTabBar*
/// @param maxh int
void q_tabbar_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QTabBar*
QSize* q_tabbar_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTabBar*
/// @param sizeIncrement QSize*
void q_tabbar_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTabBar*
/// @param w int
/// @param h int
void q_tabbar_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QTabBar*
QSize* q_tabbar_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTabBar*
/// @param baseSize QSize*
void q_tabbar_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTabBar*
/// @param basew int
/// @param baseh int
void q_tabbar_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTabBar*
/// @param fixedSize QSize*
void q_tabbar_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTabBar*
/// @param w int
/// @param h int
void q_tabbar_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QTabBar*
/// @param w int
void q_tabbar_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QTabBar*
/// @param h int
void q_tabbar_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTabBar*
/// @param param1 QPointF*
QPointF* q_tabbar_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTabBar*
/// @param param1 QPoint*
QPoint* q_tabbar_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTabBar*
/// @param param1 QPointF*
QPointF* q_tabbar_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTabBar*
/// @param param1 QPoint*
QPoint* q_tabbar_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTabBar*
/// @param param1 QPointF*
QPointF* q_tabbar_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTabBar*
/// @param param1 QPoint*
QPoint* q_tabbar_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTabBar*
/// @param param1 QPointF*
QPointF* q_tabbar_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTabBar*
/// @param param1 QPoint*
QPoint* q_tabbar_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTabBar*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_tabbar_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTabBar*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_tabbar_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTabBar*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_tabbar_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTabBar*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_tabbar_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QTabBar*
QWidget* q_tabbar_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QTabBar*
QWidget* q_tabbar_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QTabBar*
QWidget* q_tabbar_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QTabBar*
const QPalette* q_tabbar_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QTabBar*
/// @param palette QPalette*
void q_tabbar_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QTabBar*
/// @param backgroundRole enum QPalette__ColorRole
void q_tabbar_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QTabBar*
///
/// @return enum QPalette__ColorRole
int32_t q_tabbar_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QTabBar*
/// @param foregroundRole enum QPalette__ColorRole
void q_tabbar_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QTabBar*
///
/// @return enum QPalette__ColorRole
int32_t q_tabbar_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QTabBar*
const QFont* q_tabbar_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QTabBar*
/// @param font QFont*
void q_tabbar_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QTabBar*
QFontMetrics* q_tabbar_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QTabBar*
QFontInfo* q_tabbar_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QTabBar*
QCursor* q_tabbar_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QTabBar*
/// @param cursor QCursor*
void q_tabbar_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QTabBar*
void q_tabbar_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QTabBar*
/// @param enable bool
void q_tabbar_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QTabBar*
bool q_tabbar_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QTabBar*
bool q_tabbar_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QTabBar*
/// @param enable bool
void q_tabbar_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QTabBar*
bool q_tabbar_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTabBar*
/// @param mask QBitmap*
void q_tabbar_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTabBar*
/// @param mask QRegion*
void q_tabbar_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QTabBar*
QRegion* q_tabbar_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QTabBar*
void q_tabbar_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabBar*
/// @param target QPaintDevice*
void q_tabbar_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabBar*
/// @param painter QPainter*
void q_tabbar_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTabBar*
QPixmap* q_tabbar_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QTabBar*
QGraphicsEffect* q_tabbar_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QTabBar*
/// @param effect QGraphicsEffect*
void q_tabbar_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTabBar*
/// @param typeVal enum Qt__GestureType
void q_tabbar_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QTabBar*
/// @param typeVal enum Qt__GestureType
void q_tabbar_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QTabBar*
/// @param windowTitle const char*
void q_tabbar_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QTabBar*
/// @param styleSheet const char*
void q_tabbar_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
const char* q_tabbar_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
const char* q_tabbar_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QTabBar*
/// @param icon QIcon*
void q_tabbar_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QTabBar*
QIcon* q_tabbar_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QTabBar*
/// @param windowIconText const char*
void q_tabbar_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
const char* q_tabbar_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QTabBar*
/// @param windowRole const char*
void q_tabbar_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
const char* q_tabbar_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QTabBar*
/// @param filePath const char*
void q_tabbar_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
const char* q_tabbar_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QTabBar*
/// @param level double
void q_tabbar_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QTabBar*
double q_tabbar_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QTabBar*
bool q_tabbar_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QTabBar*
/// @param toolTip const char*
void q_tabbar_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
const char* q_tabbar_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QTabBar*
/// @param msec int
void q_tabbar_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QTabBar*
int32_t q_tabbar_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QTabBar*
/// @param statusTip const char*
void q_tabbar_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
const char* q_tabbar_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QTabBar*
/// @param whatsThis const char*
void q_tabbar_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
const char* q_tabbar_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
const char* q_tabbar_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QTabBar*
/// @param name const char*
void q_tabbar_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
const char* q_tabbar_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QTabBar*
/// @param description const char*
void q_tabbar_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QTabBar*
/// @param direction enum Qt__LayoutDirection
void q_tabbar_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QTabBar*
///
/// @return enum Qt__LayoutDirection
int32_t q_tabbar_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QTabBar*
void q_tabbar_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QTabBar*
/// @param locale QLocale*
void q_tabbar_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QTabBar*
QLocale* q_tabbar_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QTabBar*
void q_tabbar_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QTabBar*
bool q_tabbar_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QTabBar*
bool q_tabbar_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTabBar*
void q_tabbar_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QTabBar*
bool q_tabbar_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QTabBar*
void q_tabbar_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QTabBar*
void q_tabbar_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTabBar*
/// @param reason enum Qt__FocusReason
void q_tabbar_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QTabBar*
///
/// @return enum Qt__FocusPolicy
int32_t q_tabbar_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QTabBar*
/// @param policy enum Qt__FocusPolicy
void q_tabbar_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QTabBar*
bool q_tabbar_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_tabbar_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QTabBar*
/// @param focusProxy QWidget*
void q_tabbar_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QTabBar*
QWidget* q_tabbar_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QTabBar*
///
/// @return enum Qt__ContextMenuPolicy
int32_t q_tabbar_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QTabBar*
/// @param policy enum Qt__ContextMenuPolicy
void q_tabbar_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTabBar*
void q_tabbar_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTabBar*
/// @param param1 QCursor*
void q_tabbar_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QTabBar*
void q_tabbar_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QTabBar*
void q_tabbar_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QTabBar*
void q_tabbar_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTabBar*
/// @param key QKeySequence*
int32_t q_tabbar_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QTabBar*
/// @param id int
void q_tabbar_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTabBar*
/// @param id int
void q_tabbar_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTabBar*
/// @param id int
void q_tabbar_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_tabbar_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_tabbar_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QTabBar*
bool q_tabbar_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QTabBar*
/// @param enable bool
void q_tabbar_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QTabBar*
QGraphicsProxyWidget* q_tabbar_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTabBar*
void q_tabbar_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTabBar*
void q_tabbar_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTabBar*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_tabbar_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTabBar*
/// @param param1 QRect*
void q_tabbar_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTabBar*
/// @param param1 QRegion*
void q_tabbar_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTabBar*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_tabbar_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTabBar*
/// @param param1 QRect*
void q_tabbar_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTabBar*
/// @param param1 QRegion*
void q_tabbar_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QTabBar*
/// @param hidden bool
void q_tabbar_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QTabBar*
void q_tabbar_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QTabBar*
void q_tabbar_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QTabBar*
void q_tabbar_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QTabBar*
void q_tabbar_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QTabBar*
void q_tabbar_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QTabBar*
void q_tabbar_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QTabBar*
bool q_tabbar_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QTabBar*
void q_tabbar_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QTabBar*
void q_tabbar_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QTabBar*
/// @param param1 QWidget*
void q_tabbar_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTabBar*
/// @param x int
/// @param y int
void q_tabbar_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTabBar*
/// @param param1 QPoint*
void q_tabbar_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTabBar*
/// @param w int
/// @param h int
void q_tabbar_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTabBar*
/// @param param1 QSize*
void q_tabbar_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTabBar*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_tabbar_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTabBar*
/// @param geometry QRect*
void q_tabbar_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
char* q_tabbar_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QTabBar*
/// @param geometry const char*
bool q_tabbar_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QTabBar*
void q_tabbar_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QTabBar*
bool q_tabbar_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QTabBar*
/// @param param1 QWidget*
bool q_tabbar_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QTabBar*
bool q_tabbar_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QTabBar*
bool q_tabbar_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QTabBar*
bool q_tabbar_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QTabBar*
bool q_tabbar_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QTabBar*
///
/// @return flag of enum Qt__WindowState
int64_t q_tabbar_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QTabBar*
/// @param state flag of enum Qt__WindowState
void q_tabbar_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QTabBar*
/// @param state flag of enum Qt__WindowState
void q_tabbar_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QTabBar*
QSizePolicy* q_tabbar_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTabBar*
/// @param sizePolicy QSizePolicy*
void q_tabbar_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTabBar*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_tabbar_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QTabBar*
QRegion* q_tabbar_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTabBar*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_tabbar_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTabBar*
/// @param margins QMargins*
void q_tabbar_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QTabBar*
QMargins* q_tabbar_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QTabBar*
QRect* q_tabbar_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QTabBar*
QLayout* q_tabbar_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QTabBar*
/// @param layout QLayout*
void q_tabbar_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QTabBar*
void q_tabbar_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTabBar*
/// @param parent QWidget*
void q_tabbar_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTabBar*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_tabbar_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTabBar*
/// @param dx int
/// @param dy int
void q_tabbar_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTabBar*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_tabbar_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QTabBar*
QWidget* q_tabbar_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QTabBar*
QWidget* q_tabbar_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QTabBar*
QWidget* q_tabbar_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QTabBar*
bool q_tabbar_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QTabBar*
/// @param on bool
void q_tabbar_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTabBar*
/// @param action QAction*
void q_tabbar_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QTabBar*
/// @param actions libqt_list /* of QAction* */
void q_tabbar_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QTabBar*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_tabbar_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QTabBar*
/// @param before QAction*
/// @param action QAction*
void q_tabbar_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QTabBar*
/// @param action QAction*
void q_tabbar_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QTabBar*
libqt_list /* of QAction* */ q_tabbar_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTabBar*
/// @param text const char*
QAction* q_tabbar_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTabBar*
/// @param icon QIcon*
/// @param text const char*
QAction* q_tabbar_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTabBar*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_tabbar_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTabBar*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_tabbar_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QTabBar*
QWidget* q_tabbar_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QTabBar*
/// @param typeVal flag of enum Qt__WindowType
void q_tabbar_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QTabBar*
///
/// @return flag of enum Qt__WindowType
int64_t q_tabbar_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTabBar*
/// @param param1 enum Qt__WindowType
void q_tabbar_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QTabBar*
/// @param typeVal flag of enum Qt__WindowType
void q_tabbar_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QTabBar*
///
/// @return enum Qt__WindowType
int64_t q_tabbar_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_tabbar_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTabBar*
/// @param x int
/// @param y int
QWidget* q_tabbar_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTabBar*
/// @param p QPoint*
QWidget* q_tabbar_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTabBar*
/// @param p QPointF*
QWidget* q_tabbar_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTabBar*
/// @param param1 enum Qt__WidgetAttribute
void q_tabbar_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QTabBar*
/// @param param1 enum Qt__WidgetAttribute
bool q_tabbar_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QTabBar*
void q_tabbar_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QTabBar*
/// @param child QWidget*
bool q_tabbar_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QTabBar*
bool q_tabbar_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QTabBar*
/// @param enabled bool
void q_tabbar_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QTabBar*
QBackingStore* q_tabbar_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QTabBar*
QWindow* q_tabbar_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QTabBar*
QScreen* q_tabbar_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QTabBar*
/// @param screen QScreen*
void q_tabbar_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_tabbar_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTabBar*
/// @param title const char*
void q_tabbar_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, const char* title)
void q_tabbar_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTabBar*
/// @param icon QIcon*
void q_tabbar_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QIcon* icon)
void q_tabbar_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTabBar*
/// @param iconText const char*
void q_tabbar_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, const char* iconText)
void q_tabbar_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTabBar*
/// @param pos QPoint*
void q_tabbar_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QPoint* pos)
void q_tabbar_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QTabBar*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_tabbar_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QTabBar*
/// @param hints flag of enum Qt__InputMethodHint
void q_tabbar_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabBar*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_tabbar_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabBar*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_tabbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabBar*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_tabbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabBar*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_tabbar_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabBar*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_tabbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabBar*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_tabbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTabBar*
/// @param rectangle QRect*
QPixmap* q_tabbar_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTabBar*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_tabbar_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTabBar*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_tabbar_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTabBar*
/// @param id int
/// @param enable bool
void q_tabbar_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTabBar*
/// @param id int
/// @param enable bool
void q_tabbar_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTabBar*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_tabbar_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTabBar*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_tabbar_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_tabbar_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_tabbar_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
const char* q_tabbar_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTabBar*
/// @param name char*
void q_tabbar_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTabBar*
bool q_tabbar_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTabBar*
bool q_tabbar_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTabBar*
bool q_tabbar_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTabBar*
bool q_tabbar_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTabBar*
/// @param b bool
bool q_tabbar_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTabBar*
QThread* q_tabbar_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTabBar*
/// @param thread QThread*
bool q_tabbar_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTabBar*
/// @param interval int
int32_t q_tabbar_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTabBar*
/// @param id int
void q_tabbar_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTabBar*
/// @param id enum Qt__TimerId
void q_tabbar_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTabBar*
libqt_list /* of QObject* */ q_tabbar_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTabBar*
/// @param filterObj QObject*
void q_tabbar_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTabBar*
/// @param obj QObject*
void q_tabbar_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_tabbar_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTabBar*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_tabbar_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_tabbar_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_tabbar_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTabBar*
void q_tabbar_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTabBar*
void q_tabbar_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTabBar*
/// @param name const char*
/// @param value QVariant*
bool q_tabbar_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTabBar*
/// @param name const char*
QVariant* q_tabbar_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabBar*
const char** q_tabbar_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTabBar*
QBindingStorage* q_tabbar_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTabBar*
const QBindingStorage* q_tabbar_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTabBar*
void q_tabbar_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self)
void q_tabbar_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTabBar*
QObject* q_tabbar_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTabBar*
/// @param classname const char*
bool q_tabbar_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTabBar*
void q_tabbar_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTabBar*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_tabbar_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTabBar*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_tabbar_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_tabbar_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTabBar*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_tabbar_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTabBar*
/// @param param1 QObject*
void q_tabbar_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QObject* param1)
void q_tabbar_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QTabBar*
bool q_tabbar_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QTabBar*
int32_t q_tabbar_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QTabBar*
int32_t q_tabbar_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QTabBar*
int32_t q_tabbar_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QTabBar*
int32_t q_tabbar_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QTabBar*
int32_t q_tabbar_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QTabBar*
int32_t q_tabbar_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QTabBar*
double q_tabbar_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QTabBar*
double q_tabbar_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QTabBar*
int32_t q_tabbar_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QTabBar*
int32_t q_tabbar_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_tabbar_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_tabbar_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
int32_t q_tabbar_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
int32_t q_tabbar_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback int32_t func()
void q_tabbar_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param visible bool
void q_tabbar_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param visible bool
void q_tabbar_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, bool visible)
void q_tabbar_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param param1 int
int32_t q_tabbar_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param param1 int
int32_t q_tabbar_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback int32_t func(QTabBar* self, int param1)
void q_tabbar_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
bool q_tabbar_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
bool q_tabbar_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback bool func()
void q_tabbar_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
QPaintEngine* q_tabbar_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
QPaintEngine* q_tabbar_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback QPaintEngine* func()
void q_tabbar_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QKeyEvent*
void q_tabbar_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QKeyEvent*
void q_tabbar_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QKeyEvent* event)
void q_tabbar_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QFocusEvent*
void q_tabbar_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QFocusEvent*
void q_tabbar_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QFocusEvent* event)
void q_tabbar_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QFocusEvent*
void q_tabbar_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QFocusEvent*
void q_tabbar_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QFocusEvent* event)
void q_tabbar_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QEnterEvent*
void q_tabbar_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QEnterEvent*
void q_tabbar_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QEnterEvent* event)
void q_tabbar_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QEvent*
void q_tabbar_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QEvent*
void q_tabbar_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QEvent* event)
void q_tabbar_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QMoveEvent*
void q_tabbar_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QMoveEvent*
void q_tabbar_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QMoveEvent* event)
void q_tabbar_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QCloseEvent*
void q_tabbar_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QCloseEvent*
void q_tabbar_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QCloseEvent* event)
void q_tabbar_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QContextMenuEvent*
void q_tabbar_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QContextMenuEvent*
void q_tabbar_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QContextMenuEvent* event)
void q_tabbar_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QTabletEvent*
void q_tabbar_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QTabletEvent*
void q_tabbar_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QTabletEvent* event)
void q_tabbar_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QActionEvent*
void q_tabbar_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QActionEvent*
void q_tabbar_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QActionEvent* event)
void q_tabbar_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QDragEnterEvent*
void q_tabbar_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QDragEnterEvent*
void q_tabbar_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QDragEnterEvent* event)
void q_tabbar_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QDragMoveEvent*
void q_tabbar_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QDragMoveEvent*
void q_tabbar_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QDragMoveEvent* event)
void q_tabbar_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QDragLeaveEvent*
void q_tabbar_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QDragLeaveEvent*
void q_tabbar_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QDragLeaveEvent* event)
void q_tabbar_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QDropEvent*
void q_tabbar_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QDropEvent*
void q_tabbar_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QDropEvent* event)
void q_tabbar_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_tabbar_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_tabbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback bool func(QTabBar* self, const char* eventType, void* message, intptr_t* result)
void q_tabbar_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_tabbar_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_tabbar_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback int32_t func(QTabBar* self, enum QPaintDevice__PaintDeviceMetric param1)
void q_tabbar_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param painter QPainter*
void q_tabbar_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param painter QPainter*
void q_tabbar_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QPainter* painter)
void q_tabbar_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param offset QPoint*
QPaintDevice* q_tabbar_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param offset QPoint*
QPaintDevice* q_tabbar_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback QPaintDevice* func(QTabBar* self, QPoint* offset)
void q_tabbar_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
QPainter* q_tabbar_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
QPainter* q_tabbar_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback QPainter* func()
void q_tabbar_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param param1 QInputMethodEvent*
void q_tabbar_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param param1 QInputMethodEvent*
void q_tabbar_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QInputMethodEvent* param1)
void q_tabbar_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_tabbar_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_tabbar_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback QVariant* func(QTabBar* self, enum Qt__InputMethodQuery param1)
void q_tabbar_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param next bool
bool q_tabbar_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param next bool
bool q_tabbar_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback bool func(QTabBar* self, bool next)
void q_tabbar_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param watched QObject*
/// @param event QEvent*
bool q_tabbar_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param watched QObject*
/// @param event QEvent*
bool q_tabbar_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback bool func(QTabBar* self, QObject* watched, QEvent* event)
void q_tabbar_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QChildEvent*
void q_tabbar_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QChildEvent*
void q_tabbar_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QChildEvent* event)
void q_tabbar_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param event QEvent*
void q_tabbar_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param event QEvent*
void q_tabbar_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QEvent* event)
void q_tabbar_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param signal QMetaMethod*
void q_tabbar_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param signal QMetaMethod*
void q_tabbar_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QMetaMethod* signal)
void q_tabbar_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param signal QMetaMethod*
void q_tabbar_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param signal QMetaMethod*
void q_tabbar_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, QMetaMethod* signal)
void q_tabbar_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
void q_tabbar_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
void q_tabbar_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func()
void q_tabbar_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
void q_tabbar_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
void q_tabbar_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func()
void q_tabbar_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
void q_tabbar_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
void q_tabbar_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback void func()
void q_tabbar_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
bool q_tabbar_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
bool q_tabbar_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback bool func()
void q_tabbar_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
bool q_tabbar_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
bool q_tabbar_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback bool func()
void q_tabbar_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
QObject* q_tabbar_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
QObject* q_tabbar_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback QObject* func()
void q_tabbar_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
int32_t q_tabbar_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
int32_t q_tabbar_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback int32_t func()
void q_tabbar_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param signal const char*
int32_t q_tabbar_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param signal const char*
int32_t q_tabbar_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback int32_t func(QTabBar* self, const char* signal)
void q_tabbar_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param signal QMetaMethod*
bool q_tabbar_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param signal QMetaMethod*
bool q_tabbar_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback bool func(QTabBar* self, QMetaMethod* signal)
void q_tabbar_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabBar*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_tabbar_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabBar*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_tabbar_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabBar*
/// @param callback double func(QTabBar* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_tabbar_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTabBar*
/// @param callback void func(QTabBar* self, const char* objectName)
void q_tabbar_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#dtor.QTabBar)
///
/// Delete this object from C++ memory.
///
/// @param self QTabBar*
void q_tabbar_delete(void* self);

/// https://doc.qt.io/qt-6/qtabbar.html#types

typedef enum {
    QTABBAR_SHAPE_ROUNDEDNORTH = 0,
    QTABBAR_SHAPE_ROUNDEDSOUTH = 1,
    QTABBAR_SHAPE_ROUNDEDWEST = 2,
    QTABBAR_SHAPE_ROUNDEDEAST = 3,
    QTABBAR_SHAPE_TRIANGULARNORTH = 4,
    QTABBAR_SHAPE_TRIANGULARSOUTH = 5,
    QTABBAR_SHAPE_TRIANGULARWEST = 6,
    QTABBAR_SHAPE_TRIANGULAREAST = 7
} QTabBar__Shape;

typedef enum {
    QTABBAR_BUTTONPOSITION_LEFTSIDE = 0,
    QTABBAR_BUTTONPOSITION_RIGHTSIDE = 1
} QTabBar__ButtonPosition;

typedef enum {
    QTABBAR_SELECTIONBEHAVIOR_SELECTLEFTTAB = 0,
    QTABBAR_SELECTIONBEHAVIOR_SELECTRIGHTTAB = 1,
    QTABBAR_SELECTIONBEHAVIOR_SELECTPREVIOUSTAB = 2
} QTabBar__SelectionBehavior;

#endif
