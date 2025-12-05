#pragma once
#ifndef SRC_QT6C_LIBQTABWIDGET_H
#define SRC_QT6C_LIBQTABWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html)

/// q_tabwidget_new constructs a new QTabWidget object.
///
/// @param parent QWidget*
///
QTabWidget* q_tabwidget_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html)

/// q_tabwidget_new2 constructs a new QTabWidget object.
///
QTabWidget* q_tabwidget_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTabWidget*
///
const QMetaObject* q_tabwidget_meta_object(void* self);

/// @param self QTabWidget*
/// @param param1 const char*
///
void* q_tabwidget_metacast(void* self, const char* param1);

/// @param self QTabWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_tabwidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback int32_t func(QTabWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_tabwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTabWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_tabwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_tabwidget_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#addTab)
///
/// @param self QTabWidget*
/// @param widget QWidget*
/// @param param2 const char*
///
int32_t q_tabwidget_add_tab(void* self, void* widget, const char* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#addTab)
///
/// @param self QTabWidget*
/// @param widget QWidget*
/// @param icon QIcon*
/// @param label const char*
///
int32_t q_tabwidget_add_tab2(void* self, void* widget, void* icon, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#insertTab)
///
/// @param self QTabWidget*
/// @param index int
/// @param widget QWidget*
/// @param param3 const char*
///
int32_t q_tabwidget_insert_tab(void* self, int index, void* widget, const char* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#insertTab)
///
/// @param self QTabWidget*
/// @param index int
/// @param widget QWidget*
/// @param icon QIcon*
/// @param label const char*
///
int32_t q_tabwidget_insert_tab2(void* self, int index, void* widget, void* icon, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#removeTab)
///
/// @param self QTabWidget*
/// @param index int
///
void q_tabwidget_remove_tab(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#isTabEnabled)
///
/// @param self QTabWidget*
/// @param index int
///
bool q_tabwidget_is_tab_enabled(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setTabEnabled)
///
/// @param self QTabWidget*
/// @param index int
/// @param enabled bool
///
void q_tabwidget_set_tab_enabled(void* self, int index, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#isTabVisible)
///
/// @param self QTabWidget*
/// @param index int
///
bool q_tabwidget_is_tab_visible(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setTabVisible)
///
/// @param self QTabWidget*
/// @param index int
/// @param visible bool
///
void q_tabwidget_set_tab_visible(void* self, int index, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
/// @param index int
///
const char* q_tabwidget_tab_text(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setTabText)
///
/// @param self QTabWidget*
/// @param index int
/// @param text const char*
///
void q_tabwidget_set_tab_text(void* self, int index, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabIcon)
///
/// @param self QTabWidget*
/// @param index int
///
QIcon* q_tabwidget_tab_icon(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setTabIcon)
///
/// @param self QTabWidget*
/// @param index int
/// @param icon QIcon*
///
void q_tabwidget_set_tab_icon(void* self, int index, void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setTabToolTip)
///
/// @param self QTabWidget*
/// @param index int
/// @param tip const char*
///
void q_tabwidget_set_tab_tool_tip(void* self, int index, const char* tip);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabToolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
/// @param index int
///
const char* q_tabwidget_tab_tool_tip(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setTabWhatsThis)
///
/// @param self QTabWidget*
/// @param index int
/// @param text const char*
///
void q_tabwidget_set_tab_whats_this(void* self, int index, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabWhatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
/// @param index int
///
const char* q_tabwidget_tab_whats_this(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#currentIndex)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_current_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#currentWidget)
///
/// @param self QTabWidget*
///
QWidget* q_tabwidget_current_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#widget)
///
/// @param self QTabWidget*
/// @param index int
///
QWidget* q_tabwidget_widget(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#indexOf)
///
/// @param self QTabWidget*
/// @param widget QWidget*
///
int32_t q_tabwidget_index_of(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#count)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabPosition)
///
/// @param self QTabWidget*
///
/// @return enum QTabWidget__TabPosition
///
int32_t q_tabwidget_tab_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setTabPosition)
///
/// @param self QTabWidget*
/// @param position enum QTabWidget__TabPosition
///
void q_tabwidget_set_tab_position(void* self, int32_t position);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabsClosable)
///
/// @param self QTabWidget*
///
bool q_tabwidget_tabs_closable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setTabsClosable)
///
/// @param self QTabWidget*
/// @param closeable bool
///
void q_tabwidget_set_tabs_closable(void* self, bool closeable);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#isMovable)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_movable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setMovable)
///
/// @param self QTabWidget*
/// @param movable bool
///
void q_tabwidget_set_movable(void* self, bool movable);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabShape)
///
/// @param self QTabWidget*
///
/// @return enum QTabWidget__TabShape
///
int32_t q_tabwidget_tab_shape(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setTabShape)
///
/// @param self QTabWidget*
/// @param s enum QTabWidget__TabShape
///
void q_tabwidget_set_tab_shape(void* self, int32_t s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#sizeHint)
///
/// @param self QTabWidget*
///
QSize* q_tabwidget_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback QSize* func()
///
void q_tabwidget_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QTabWidget*
///
QSize* q_tabwidget_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#minimumSizeHint)
///
/// @param self QTabWidget*
///
QSize* q_tabwidget_minimum_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback QSize* func()
///
void q_tabwidget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self QTabWidget*
///
QSize* q_tabwidget_qbase_minimum_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#heightForWidth)
///
/// @param self QTabWidget*
/// @param width int
///
int32_t q_tabwidget_height_for_width(void* self, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback int32_t func(QTabWidget* self, int width)
///
void q_tabwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self QTabWidget*
/// @param width int
///
int32_t q_tabwidget_qbase_height_for_width(void* self, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#hasHeightForWidth)
///
/// @param self QTabWidget*
///
bool q_tabwidget_has_height_for_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback bool func()
///
void q_tabwidget_on_has_height_for_width(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// @param self QTabWidget*
///
bool q_tabwidget_qbase_has_height_for_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setCornerWidget)
///
/// @param self QTabWidget*
/// @param w QWidget*
///
void q_tabwidget_set_corner_widget(void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#cornerWidget)
///
/// @param self QTabWidget*
///
QWidget* q_tabwidget_corner_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#elideMode)
///
/// @param self QTabWidget*
///
/// @return enum Qt__TextElideMode
///
int32_t q_tabwidget_elide_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setElideMode)
///
/// @param self QTabWidget*
/// @param mode enum Qt__TextElideMode
///
void q_tabwidget_set_elide_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#iconSize)
///
/// @param self QTabWidget*
///
QSize* q_tabwidget_icon_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setIconSize)
///
/// @param self QTabWidget*
/// @param size QSize*
///
void q_tabwidget_set_icon_size(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#usesScrollButtons)
///
/// @param self QTabWidget*
///
bool q_tabwidget_uses_scroll_buttons(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setUsesScrollButtons)
///
/// @param self QTabWidget*
/// @param useButtons bool
///
void q_tabwidget_set_uses_scroll_buttons(void* self, bool useButtons);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#documentMode)
///
/// @param self QTabWidget*
///
bool q_tabwidget_document_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setDocumentMode)
///
/// @param self QTabWidget*
/// @param set bool
///
void q_tabwidget_set_document_mode(void* self, bool set);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabBarAutoHide)
///
/// @param self QTabWidget*
///
bool q_tabwidget_tab_bar_auto_hide(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setTabBarAutoHide)
///
/// @param self QTabWidget*
/// @param enabled bool
///
void q_tabwidget_set_tab_bar_auto_hide(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#clear)
///
/// @param self QTabWidget*
///
void q_tabwidget_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabBar)
///
/// @param self QTabWidget*
///
QTabBar* q_tabwidget_tab_bar(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setCurrentIndex)
///
/// @param self QTabWidget*
/// @param index int
///
void q_tabwidget_set_current_index(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setCurrentWidget)
///
/// @param self QTabWidget*
/// @param widget QWidget*
///
void q_tabwidget_set_current_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#currentChanged)
///
/// @param self QTabWidget*
/// @param index int
///
void q_tabwidget_current_changed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#currentChanged)
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, int index)
///
void q_tabwidget_on_current_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabCloseRequested)
///
/// @param self QTabWidget*
/// @param index int
///
void q_tabwidget_tab_close_requested(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabCloseRequested)
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, int index)
///
void q_tabwidget_on_tab_close_requested(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabBarClicked)
///
/// @param self QTabWidget*
/// @param index int
///
void q_tabwidget_tab_bar_clicked(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabBarClicked)
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, int index)
///
void q_tabwidget_on_tab_bar_clicked(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabBarDoubleClicked)
///
/// @param self QTabWidget*
/// @param index int
///
void q_tabwidget_tab_bar_double_clicked(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabBarDoubleClicked)
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, int index)
///
void q_tabwidget_on_tab_bar_double_clicked(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabInserted)
///
/// @param self QTabWidget*
/// @param index int
///
void q_tabwidget_tab_inserted(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabInserted)
///
/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, int index)
///
void q_tabwidget_on_tab_inserted(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabInserted)
///
/// Base class method implementation
///
/// @param self QTabWidget*
/// @param index int
///
void q_tabwidget_qbase_tab_inserted(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabRemoved)
///
/// @param self QTabWidget*
/// @param index int
///
void q_tabwidget_tab_removed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabRemoved)
///
/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, int index)
///
void q_tabwidget_on_tab_removed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#tabRemoved)
///
/// Base class method implementation
///
/// @param self QTabWidget*
/// @param index int
///
void q_tabwidget_qbase_tab_removed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#showEvent)
///
/// @param self QTabWidget*
/// @param param1 QShowEvent*
///
void q_tabwidget_show_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QShowEvent* param1)
///
void q_tabwidget_on_show_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#showEvent)
///
/// Base class method implementation
///
/// @param self QTabWidget*
/// @param param1 QShowEvent*
///
void q_tabwidget_qbase_show_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#resizeEvent)
///
/// @param self QTabWidget*
/// @param param1 QResizeEvent*
///
void q_tabwidget_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QResizeEvent* param1)
///
void q_tabwidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QTabWidget*
/// @param param1 QResizeEvent*
///
void q_tabwidget_qbase_resize_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#keyPressEvent)
///
/// @param self QTabWidget*
/// @param param1 QKeyEvent*
///
void q_tabwidget_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QKeyEvent* param1)
///
void q_tabwidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QTabWidget*
/// @param param1 QKeyEvent*
///
void q_tabwidget_qbase_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#paintEvent)
///
/// @param self QTabWidget*
/// @param param1 QPaintEvent*
///
void q_tabwidget_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QPaintEvent* param1)
///
void q_tabwidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QTabWidget*
/// @param param1 QPaintEvent*
///
void q_tabwidget_qbase_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setTabBar)
///
/// @param self QTabWidget*
/// @param tabBar QTabBar*
///
void q_tabwidget_set_tab_bar(void* self, void* tabBar);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setTabBar)
///
/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QTabBar* tabBar)
///
void q_tabwidget_on_set_tab_bar(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setTabBar)
///
/// Base class method implementation
///
/// @param self QTabWidget*
/// @param tabBar QTabBar*
///
void q_tabwidget_qbase_set_tab_bar(void* self, void* tabBar);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#changeEvent)
///
/// @param self QTabWidget*
/// @param param1 QEvent*
///
void q_tabwidget_change_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QEvent* param1)
///
void q_tabwidget_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QTabWidget*
/// @param param1 QEvent*
///
void q_tabwidget_qbase_change_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#event)
///
/// @param self QTabWidget*
/// @param param1 QEvent*
///
bool q_tabwidget_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback bool func(QTabWidget* self, QEvent* param1)
///
void q_tabwidget_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#event)
///
/// Base class method implementation
///
/// @param self QTabWidget*
/// @param param1 QEvent*
///
bool q_tabwidget_qbase_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#initStyleOption)
///
/// @param self QTabWidget*
/// @param option QStyleOptionTabWidgetFrame*
///
void q_tabwidget_init_style_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QStyleOptionTabWidgetFrame* option)
///
void q_tabwidget_on_init_style_option(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self QTabWidget*
/// @param option QStyleOptionTabWidgetFrame*
///
void q_tabwidget_qbase_init_style_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_tabwidget_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_tabwidget_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#setCornerWidget)
///
/// @param self QTabWidget*
/// @param w QWidget*
/// @param corner enum Qt__Corner
///
void q_tabwidget_set_corner_widget2(void* self, void* w, int32_t corner);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#cornerWidget)
///
/// @param self QTabWidget*
/// @param corner enum Qt__Corner
///
QWidget* q_tabwidget_corner_widget1(void* self, int32_t corner);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QTabWidget*
///
uintptr_t q_tabwidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QTabWidget*
///
void q_tabwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QTabWidget*
///
uintptr_t q_tabwidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QTabWidget*
///
uintptr_t q_tabwidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QTabWidget*
///
QStyle* q_tabwidget_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QTabWidget*
/// @param style QStyle*
///
void q_tabwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QTabWidget*
///
/// @return enum Qt__WindowModality
///
int32_t q_tabwidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QTabWidget*
/// @param windowModality enum Qt__WindowModality
///
void q_tabwidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QTabWidget*
/// @param param1 QWidget*
///
bool q_tabwidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QTabWidget*
/// @param enabled bool
///
void q_tabwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QTabWidget*
/// @param disabled bool
///
void q_tabwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QTabWidget*
/// @param windowModified bool
///
void q_tabwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QTabWidget*
///
QRect* q_tabwidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QTabWidget*
///
const QRect* q_tabwidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QTabWidget*
///
QRect* q_tabwidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QTabWidget*
///
QPoint* q_tabwidget_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QTabWidget*
///
QSize* q_tabwidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QTabWidget*
///
QSize* q_tabwidget_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QTabWidget*
///
QRect* q_tabwidget_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QTabWidget*
///
QRect* q_tabwidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QTabWidget*
///
QRegion* q_tabwidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QTabWidget*
///
QSize* q_tabwidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QTabWidget*
///
QSize* q_tabwidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTabWidget*
/// @param minimumSize QSize*
///
void q_tabwidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTabWidget*
/// @param minw int
/// @param minh int
///
void q_tabwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTabWidget*
/// @param maximumSize QSize*
///
void q_tabwidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTabWidget*
/// @param maxw int
/// @param maxh int
///
void q_tabwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QTabWidget*
/// @param minw int
///
void q_tabwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QTabWidget*
/// @param minh int
///
void q_tabwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QTabWidget*
/// @param maxw int
///
void q_tabwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QTabWidget*
/// @param maxh int
///
void q_tabwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QTabWidget*
///
QSize* q_tabwidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTabWidget*
/// @param sizeIncrement QSize*
///
void q_tabwidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTabWidget*
/// @param w int
/// @param h int
///
void q_tabwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QTabWidget*
///
QSize* q_tabwidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTabWidget*
/// @param baseSize QSize*
///
void q_tabwidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTabWidget*
/// @param basew int
/// @param baseh int
///
void q_tabwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTabWidget*
/// @param fixedSize QSize*
///
void q_tabwidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTabWidget*
/// @param w int
/// @param h int
///
void q_tabwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QTabWidget*
/// @param w int
///
void q_tabwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QTabWidget*
/// @param h int
///
void q_tabwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTabWidget*
/// @param param1 QPointF*
///
QPointF* q_tabwidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTabWidget*
/// @param param1 QPoint*
///
QPoint* q_tabwidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTabWidget*
/// @param param1 QPointF*
///
QPointF* q_tabwidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTabWidget*
/// @param param1 QPoint*
///
QPoint* q_tabwidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTabWidget*
/// @param param1 QPointF*
///
QPointF* q_tabwidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTabWidget*
/// @param param1 QPoint*
///
QPoint* q_tabwidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTabWidget*
/// @param param1 QPointF*
///
QPointF* q_tabwidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTabWidget*
/// @param param1 QPoint*
///
QPoint* q_tabwidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTabWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_tabwidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTabWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_tabwidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTabWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_tabwidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTabWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_tabwidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QTabWidget*
///
QWidget* q_tabwidget_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QTabWidget*
///
QWidget* q_tabwidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QTabWidget*
///
QWidget* q_tabwidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QTabWidget*
///
const QPalette* q_tabwidget_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QTabWidget*
/// @param palette QPalette*
///
void q_tabwidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QTabWidget*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_tabwidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QTabWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t q_tabwidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QTabWidget*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_tabwidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QTabWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t q_tabwidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QTabWidget*
///
const QFont* q_tabwidget_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QTabWidget*
/// @param font QFont*
///
void q_tabwidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QTabWidget*
///
QFontMetrics* q_tabwidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QTabWidget*
///
QFontInfo* q_tabwidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QTabWidget*
///
QCursor* q_tabwidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QTabWidget*
/// @param cursor QCursor*
///
void q_tabwidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QTabWidget*
///
void q_tabwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QTabWidget*
/// @param enable bool
///
void q_tabwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QTabWidget*
///
bool q_tabwidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QTabWidget*
///
bool q_tabwidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QTabWidget*
/// @param enable bool
///
void q_tabwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QTabWidget*
///
bool q_tabwidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTabWidget*
/// @param mask QBitmap*
///
void q_tabwidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTabWidget*
/// @param mask QRegion*
///
void q_tabwidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QTabWidget*
///
QRegion* q_tabwidget_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QTabWidget*
///
void q_tabwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabWidget*
/// @param target QPaintDevice*
///
void q_tabwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabWidget*
/// @param painter QPainter*
///
void q_tabwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTabWidget*
///
QPixmap* q_tabwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QTabWidget*
///
QGraphicsEffect* q_tabwidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QTabWidget*
/// @param effect QGraphicsEffect*
///
void q_tabwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTabWidget*
/// @param type enum Qt__GestureType
///
void q_tabwidget_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QTabWidget*
/// @param type enum Qt__GestureType
///
void q_tabwidget_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QTabWidget*
/// @param windowTitle const char*
///
void q_tabwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QTabWidget*
/// @param styleSheet const char*
///
void q_tabwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
///
const char* q_tabwidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
///
const char* q_tabwidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QTabWidget*
/// @param icon QIcon*
///
void q_tabwidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QTabWidget*
///
QIcon* q_tabwidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QTabWidget*
/// @param windowIconText const char*
///
void q_tabwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
///
const char* q_tabwidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QTabWidget*
/// @param windowRole const char*
///
void q_tabwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
///
const char* q_tabwidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QTabWidget*
/// @param filePath const char*
///
void q_tabwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
///
const char* q_tabwidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QTabWidget*
/// @param level double
///
void q_tabwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QTabWidget*
///
double q_tabwidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QTabWidget*
/// @param toolTip const char*
///
void q_tabwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
///
const char* q_tabwidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QTabWidget*
/// @param msec int
///
void q_tabwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QTabWidget*
/// @param statusTip const char*
///
void q_tabwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
///
const char* q_tabwidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QTabWidget*
/// @param whatsThis const char*
///
void q_tabwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
///
const char* q_tabwidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
///
const char* q_tabwidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QTabWidget*
/// @param name const char*
///
void q_tabwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
///
const char* q_tabwidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QTabWidget*
/// @param description const char*
///
void q_tabwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QTabWidget*
/// @param direction enum Qt__LayoutDirection
///
void q_tabwidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QTabWidget*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_tabwidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QTabWidget*
///
void q_tabwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QTabWidget*
/// @param locale QLocale*
///
void q_tabwidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QTabWidget*
///
QLocale* q_tabwidget_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QTabWidget*
///
void q_tabwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTabWidget*
///
void q_tabwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QTabWidget*
///
void q_tabwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QTabWidget*
///
void q_tabwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTabWidget*
/// @param reason enum Qt__FocusReason
///
void q_tabwidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QTabWidget*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_tabwidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QTabWidget*
/// @param policy enum Qt__FocusPolicy
///
void q_tabwidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QTabWidget*
///
bool q_tabwidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_tabwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QTabWidget*
/// @param focusProxy QWidget*
///
void q_tabwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QTabWidget*
///
QWidget* q_tabwidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QTabWidget*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_tabwidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QTabWidget*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_tabwidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTabWidget*
///
void q_tabwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTabWidget*
/// @param param1 QCursor*
///
void q_tabwidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QTabWidget*
///
void q_tabwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QTabWidget*
///
void q_tabwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QTabWidget*
///
void q_tabwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTabWidget*
/// @param key QKeySequence*
///
int32_t q_tabwidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QTabWidget*
/// @param id int
///
void q_tabwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTabWidget*
/// @param id int
///
void q_tabwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTabWidget*
/// @param id int
///
void q_tabwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_tabwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_tabwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QTabWidget*
///
bool q_tabwidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QTabWidget*
/// @param enable bool
///
void q_tabwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QTabWidget*
///
QGraphicsProxyWidget* q_tabwidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTabWidget*
///
void q_tabwidget_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTabWidget*
///
void q_tabwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTabWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_tabwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTabWidget*
/// @param param1 QRect*
///
void q_tabwidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTabWidget*
/// @param param1 QRegion*
///
void q_tabwidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTabWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_tabwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTabWidget*
/// @param param1 QRect*
///
void q_tabwidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTabWidget*
/// @param param1 QRegion*
///
void q_tabwidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QTabWidget*
/// @param hidden bool
///
void q_tabwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QTabWidget*
///
void q_tabwidget_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QTabWidget*
///
void q_tabwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QTabWidget*
///
void q_tabwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QTabWidget*
///
void q_tabwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QTabWidget*
///
void q_tabwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QTabWidget*
///
void q_tabwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QTabWidget*
///
bool q_tabwidget_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QTabWidget*
///
void q_tabwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QTabWidget*
///
void q_tabwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QTabWidget*
/// @param param1 QWidget*
///
void q_tabwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTabWidget*
/// @param x int
/// @param y int
///
void q_tabwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTabWidget*
/// @param param1 QPoint*
///
void q_tabwidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTabWidget*
/// @param w int
/// @param h int
///
void q_tabwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTabWidget*
/// @param param1 QSize*
///
void q_tabwidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTabWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_tabwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTabWidget*
/// @param geometry QRect*
///
void q_tabwidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
///
char* q_tabwidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QTabWidget*
/// @param geometry const char*
///
bool q_tabwidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QTabWidget*
///
void q_tabwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QTabWidget*
/// @param param1 QWidget*
///
bool q_tabwidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QTabWidget*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_tabwidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QTabWidget*
/// @param state flag of enum Qt__WindowState
///
void q_tabwidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QTabWidget*
/// @param state flag of enum Qt__WindowState
///
void q_tabwidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QTabWidget*
///
QSizePolicy* q_tabwidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTabWidget*
/// @param sizePolicy QSizePolicy*
///
void q_tabwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTabWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_tabwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QTabWidget*
///
QRegion* q_tabwidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTabWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_tabwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTabWidget*
/// @param margins QMargins*
///
void q_tabwidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QTabWidget*
///
QMargins* q_tabwidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QTabWidget*
///
QRect* q_tabwidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QTabWidget*
///
QLayout* q_tabwidget_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QTabWidget*
/// @param layout QLayout*
///
void q_tabwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QTabWidget*
///
void q_tabwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTabWidget*
/// @param parent QWidget*
///
void q_tabwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTabWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_tabwidget_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTabWidget*
/// @param dx int
/// @param dy int
///
void q_tabwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTabWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_tabwidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QTabWidget*
///
QWidget* q_tabwidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QTabWidget*
///
QWidget* q_tabwidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QTabWidget*
///
QWidget* q_tabwidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QTabWidget*
///
bool q_tabwidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QTabWidget*
/// @param on bool
///
void q_tabwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTabWidget*
/// @param action QAction*
///
void q_tabwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QTabWidget*
/// @param actions libqt_list /* of QAction* */
///
void q_tabwidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QTabWidget*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
///
void q_tabwidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QTabWidget*
/// @param before QAction*
/// @param action QAction*
///
void q_tabwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QTabWidget*
/// @param action QAction*
///
void q_tabwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QTabWidget*
///
libqt_list /* of QAction* */ q_tabwidget_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTabWidget*
/// @param text const char*
///
QAction* q_tabwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTabWidget*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_tabwidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTabWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_tabwidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTabWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_tabwidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QTabWidget*
///
QWidget* q_tabwidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QTabWidget*
/// @param type flag of enum Qt__WindowType
///
void q_tabwidget_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QTabWidget*
///
/// @return flag of enum Qt__WindowType
///
int64_t q_tabwidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTabWidget*
/// @param param1 enum Qt__WindowType
///
void q_tabwidget_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QTabWidget*
/// @param type flag of enum Qt__WindowType
///
void q_tabwidget_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QTabWidget*
///
/// @return enum Qt__WindowType
///
int64_t q_tabwidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_tabwidget_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTabWidget*
/// @param x int
/// @param y int
///
QWidget* q_tabwidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTabWidget*
/// @param p QPoint*
///
QWidget* q_tabwidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTabWidget*
/// @param p QPointF*
///
QWidget* q_tabwidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTabWidget*
/// @param param1 enum Qt__WidgetAttribute
///
void q_tabwidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QTabWidget*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_tabwidget_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QTabWidget*
///
void q_tabwidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QTabWidget*
/// @param child QWidget*
///
bool q_tabwidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QTabWidget*
///
bool q_tabwidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QTabWidget*
/// @param enabled bool
///
void q_tabwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QTabWidget*
///
QBackingStore* q_tabwidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QTabWidget*
///
QWindow* q_tabwidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QTabWidget*
///
QScreen* q_tabwidget_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QTabWidget*
/// @param screen QScreen*
///
void q_tabwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_tabwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTabWidget*
/// @param title const char*
///
void q_tabwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, const char* title)
///
void q_tabwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTabWidget*
/// @param icon QIcon*
///
void q_tabwidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QIcon* icon)
///
void q_tabwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTabWidget*
/// @param iconText const char*
///
void q_tabwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, const char* iconText)
///
void q_tabwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTabWidget*
/// @param pos QPoint*
///
void q_tabwidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QPoint* pos)
///
void q_tabwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QTabWidget*
///
/// @return flag of enum Qt__InputMethodHint
///
int64_t q_tabwidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QTabWidget*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_tabwidget_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_tabwidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_tabwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_tabwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_tabwidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_tabwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTabWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_tabwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTabWidget*
/// @param rectangle QRect*
///
QPixmap* q_tabwidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTabWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_tabwidget_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTabWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_tabwidget_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTabWidget*
/// @param id int
/// @param enable bool
///
void q_tabwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTabWidget*
/// @param id int
/// @param enable bool
///
void q_tabwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTabWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_tabwidget_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTabWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_tabwidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_tabwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_tabwidget_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
///
const char* q_tabwidget_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTabWidget*
/// @param name char*
///
void q_tabwidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTabWidget*
///
bool q_tabwidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTabWidget*
///
bool q_tabwidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTabWidget*
/// @param b bool
///
bool q_tabwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTabWidget*
///
QThread* q_tabwidget_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTabWidget*
/// @param thread QThread*
///
bool q_tabwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTabWidget*
/// @param interval int
///
int32_t q_tabwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTabWidget*
/// @param id int
///
void q_tabwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTabWidget*
/// @param id enum Qt__TimerId
///
void q_tabwidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTabWidget*
///
libqt_list /* of QObject* */ q_tabwidget_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTabWidget*
/// @param filterObj QObject*
///
void q_tabwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTabWidget*
/// @param obj QObject*
///
void q_tabwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_tabwidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTabWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_tabwidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_tabwidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_tabwidget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTabWidget*
///
void q_tabwidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTabWidget*
///
void q_tabwidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTabWidget*
/// @param name const char*
/// @param value QVariant*
///
bool q_tabwidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTabWidget*
/// @param name const char*
///
QVariant* q_tabwidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTabWidget*
///
const char** q_tabwidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTabWidget*
///
QBindingStorage* q_tabwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTabWidget*
///
const QBindingStorage* q_tabwidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTabWidget*
///
void q_tabwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self)
///
void q_tabwidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTabWidget*
///
QObject* q_tabwidget_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTabWidget*
/// @param classname const char*
///
bool q_tabwidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTabWidget*
///
void q_tabwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTabWidget*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_tabwidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTabWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_tabwidget_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_tabwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTabWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_tabwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTabWidget*
/// @param param1 QObject*
///
void q_tabwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QObject* param1)
///
void q_tabwidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QTabWidget*
///
bool q_tabwidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QTabWidget*
///
double q_tabwidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QTabWidget*
///
double q_tabwidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_tabwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_tabwidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback int32_t func()
///
void q_tabwidget_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param visible bool
///
void q_tabwidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param visible bool
///
void q_tabwidget_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, bool visible)
///
void q_tabwidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
///
QPaintEngine* q_tabwidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
///
QPaintEngine* q_tabwidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback QPaintEngine* func()
///
void q_tabwidget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QMouseEvent*
///
void q_tabwidget_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QMouseEvent*
///
void q_tabwidget_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QMouseEvent* event)
///
void q_tabwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QMouseEvent*
///
void q_tabwidget_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QMouseEvent*
///
void q_tabwidget_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QMouseEvent* event)
///
void q_tabwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QMouseEvent*
///
void q_tabwidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QMouseEvent*
///
void q_tabwidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QMouseEvent* event)
///
void q_tabwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QMouseEvent*
///
void q_tabwidget_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QMouseEvent*
///
void q_tabwidget_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QMouseEvent* event)
///
void q_tabwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QWheelEvent*
///
void q_tabwidget_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QWheelEvent*
///
void q_tabwidget_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QWheelEvent* event)
///
void q_tabwidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QKeyEvent*
///
void q_tabwidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QKeyEvent*
///
void q_tabwidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QKeyEvent* event)
///
void q_tabwidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QFocusEvent*
///
void q_tabwidget_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QFocusEvent*
///
void q_tabwidget_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QFocusEvent* event)
///
void q_tabwidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QFocusEvent*
///
void q_tabwidget_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QFocusEvent*
///
void q_tabwidget_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QFocusEvent* event)
///
void q_tabwidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QEnterEvent*
///
void q_tabwidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QEnterEvent*
///
void q_tabwidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QEnterEvent* event)
///
void q_tabwidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QEvent*
///
void q_tabwidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QEvent*
///
void q_tabwidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QEvent* event)
///
void q_tabwidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QMoveEvent*
///
void q_tabwidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QMoveEvent*
///
void q_tabwidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QMoveEvent* event)
///
void q_tabwidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QCloseEvent*
///
void q_tabwidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QCloseEvent*
///
void q_tabwidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QCloseEvent* event)
///
void q_tabwidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QContextMenuEvent*
///
void q_tabwidget_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QContextMenuEvent*
///
void q_tabwidget_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QContextMenuEvent* event)
///
void q_tabwidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QTabletEvent*
///
void q_tabwidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QTabletEvent*
///
void q_tabwidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QTabletEvent* event)
///
void q_tabwidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QActionEvent*
///
void q_tabwidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QActionEvent*
///
void q_tabwidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QActionEvent* event)
///
void q_tabwidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QDragEnterEvent*
///
void q_tabwidget_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QDragEnterEvent*
///
void q_tabwidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QDragEnterEvent* event)
///
void q_tabwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QDragMoveEvent*
///
void q_tabwidget_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QDragMoveEvent*
///
void q_tabwidget_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QDragMoveEvent* event)
///
void q_tabwidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QDragLeaveEvent*
///
void q_tabwidget_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QDragLeaveEvent*
///
void q_tabwidget_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QDragLeaveEvent* event)
///
void q_tabwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QDropEvent*
///
void q_tabwidget_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QDropEvent*
///
void q_tabwidget_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QDropEvent* event)
///
void q_tabwidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QHideEvent*
///
void q_tabwidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QHideEvent*
///
void q_tabwidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QHideEvent* event)
///
void q_tabwidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_tabwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_tabwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback bool func(QTabWidget* self, const char* eventType, void* message, intptr_t* result)
///
void q_tabwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_tabwidget_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_tabwidget_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback int32_t func(QTabWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_tabwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param painter QPainter*
///
void q_tabwidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param painter QPainter*
///
void q_tabwidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QPainter* painter)
///
void q_tabwidget_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param offset QPoint*
///
QPaintDevice* q_tabwidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param offset QPoint*
///
QPaintDevice* q_tabwidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback QPaintDevice* func(QTabWidget* self, QPoint* offset)
///
void q_tabwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
///
QPainter* q_tabwidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
///
QPainter* q_tabwidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback QPainter* func()
///
void q_tabwidget_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param param1 QInputMethodEvent*
///
void q_tabwidget_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param param1 QInputMethodEvent*
///
void q_tabwidget_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QInputMethodEvent* param1)
///
void q_tabwidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_tabwidget_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_tabwidget_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback QVariant* func(QTabWidget* self, enum Qt__InputMethodQuery param1)
///
void q_tabwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param next bool
///
bool q_tabwidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param next bool
///
bool q_tabwidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback bool func(QTabWidget* self, bool next)
///
void q_tabwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_tabwidget_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_tabwidget_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback bool func(QTabWidget* self, QObject* watched, QEvent* event)
///
void q_tabwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QTimerEvent*
///
void q_tabwidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QTimerEvent*
///
void q_tabwidget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QTimerEvent* event)
///
void q_tabwidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QChildEvent*
///
void q_tabwidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QChildEvent*
///
void q_tabwidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QChildEvent* event)
///
void q_tabwidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param event QEvent*
///
void q_tabwidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param event QEvent*
///
void q_tabwidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QEvent* event)
///
void q_tabwidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param signal QMetaMethod*
///
void q_tabwidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param signal QMetaMethod*
///
void q_tabwidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QMetaMethod* signal)
///
void q_tabwidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param signal QMetaMethod*
///
void q_tabwidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param signal QMetaMethod*
///
void q_tabwidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, QMetaMethod* signal)
///
void q_tabwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
///
void q_tabwidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
///
void q_tabwidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func()
///
void q_tabwidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
///
void q_tabwidget_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
///
void q_tabwidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func()
///
void q_tabwidget_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
///
void q_tabwidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
///
void q_tabwidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback void func()
///
void q_tabwidget_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
///
bool q_tabwidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
///
bool q_tabwidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback bool func()
///
void q_tabwidget_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
///
bool q_tabwidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
///
bool q_tabwidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback bool func()
///
void q_tabwidget_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
///
QObject* q_tabwidget_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
///
QObject* q_tabwidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback QObject* func()
///
void q_tabwidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
///
int32_t q_tabwidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback int32_t func()
///
void q_tabwidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param signal const char*
///
int32_t q_tabwidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param signal const char*
///
int32_t q_tabwidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback int32_t func(QTabWidget* self, const char* signal)
///
void q_tabwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param signal QMetaMethod*
///
bool q_tabwidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param signal QMetaMethod*
///
bool q_tabwidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback bool func(QTabWidget* self, QMetaMethod* signal)
///
void q_tabwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTabWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_tabwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTabWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_tabwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTabWidget*
/// @param callback double func(QTabWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_tabwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTabWidget*
/// @param callback void func(QTabWidget* self, const char* objectName)
///
void q_tabwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#dtor.QTabWidget)
///
/// Delete this object from C++ memory.
///
/// @param self QTabWidget*
///
void q_tabwidget_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#public-types)

typedef enum {
    QTABWIDGET_TABPOSITION_NORTH = 0,
    QTABWIDGET_TABPOSITION_SOUTH = 1,
    QTABWIDGET_TABPOSITION_WEST = 2,
    QTABWIDGET_TABPOSITION_EAST = 3
} QTabWidget__TabPosition;

/// [Upstream resources](https://doc.qt.io/qt-6/qtabwidget.html#public-types)

typedef enum {
    QTABWIDGET_TABSHAPE_ROUNDED = 0,
    QTABWIDGET_TABSHAPE_TRIANGULAR = 1
} QTabWidget__TabShape;

#endif
