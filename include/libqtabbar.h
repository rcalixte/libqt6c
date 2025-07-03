#pragma once
#ifndef SRCQT6C_LIBQTABBAR_H
#define SRCQT6C_LIBQTABBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqcolor.h"
#include "libqicon.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyleoption.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qtabbar.html

/// q_tabbar_new constructs a new QTabBar object.
///
/// ``` QWidget* parent ```
QTabBar* q_tabbar_new(void* parent);

/// q_tabbar_new2 constructs a new QTabBar object.
///
///
QTabBar* q_tabbar_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTabBar* self ```
const QMetaObject* q_tabbar_meta_object(void* self);

/// ``` QTabBar* self, const char* param1 ```
void* q_tabbar_metacast(void* self, const char* param1);

/// ``` QTabBar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tabbar_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTabBar* self, int32_t (*slot)(QTabBar*, enum QMetaObject__Call, int, void*) ```
void q_tabbar_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTabBar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tabbar_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_tabbar_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#shape)
///
/// ``` QTabBar* self ```
int64_t q_tabbar_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setShape)
///
/// ``` QTabBar* self, enum QTabBar__Shape shape ```
void q_tabbar_set_shape(void* self, int64_t shape);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#addTab)
///
/// ``` QTabBar* self, const char* text ```
int32_t q_tabbar_add_tab(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#addTab)
///
/// ``` QTabBar* self, QIcon* icon, const char* text ```
int32_t q_tabbar_add_tab2(void* self, void* icon, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#insertTab)
///
/// ``` QTabBar* self, int index, const char* text ```
int32_t q_tabbar_insert_tab(void* self, int index, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#insertTab)
///
/// ``` QTabBar* self, int index, QIcon* icon, const char* text ```
int32_t q_tabbar_insert_tab2(void* self, int index, void* icon, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#removeTab)
///
/// ``` QTabBar* self, int index ```
void q_tabbar_remove_tab(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#moveTab)
///
/// ``` QTabBar* self, int from, int to ```
void q_tabbar_move_tab(void* self, int from, int to);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#isTabEnabled)
///
/// ``` QTabBar* self, int index ```
bool q_tabbar_is_tab_enabled(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabEnabled)
///
/// ``` QTabBar* self, int index, bool enabled ```
void q_tabbar_set_tab_enabled(void* self, int index, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#isTabVisible)
///
/// ``` QTabBar* self, int index ```
bool q_tabbar_is_tab_visible(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabVisible)
///
/// ``` QTabBar* self, int index, bool visible ```
void q_tabbar_set_tab_visible(void* self, int index, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabText)
///
/// ``` QTabBar* self, int index ```
const char* q_tabbar_tab_text(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabText)
///
/// ``` QTabBar* self, int index, const char* text ```
void q_tabbar_set_tab_text(void* self, int index, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabTextColor)
///
/// ``` QTabBar* self, int index ```
QColor* q_tabbar_tab_text_color(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabTextColor)
///
/// ``` QTabBar* self, int index, QColor* color ```
void q_tabbar_set_tab_text_color(void* self, int index, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabIcon)
///
/// ``` QTabBar* self, int index ```
QIcon* q_tabbar_tab_icon(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabIcon)
///
/// ``` QTabBar* self, int index, QIcon* icon ```
void q_tabbar_set_tab_icon(void* self, int index, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#elideMode)
///
/// ``` QTabBar* self ```
int64_t q_tabbar_elide_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setElideMode)
///
/// ``` QTabBar* self, enum Qt__TextElideMode mode ```
void q_tabbar_set_elide_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabToolTip)
///
/// ``` QTabBar* self, int index, const char* tip ```
void q_tabbar_set_tab_tool_tip(void* self, int index, const char* tip);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabToolTip)
///
/// ``` QTabBar* self, int index ```
const char* q_tabbar_tab_tool_tip(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabWhatsThis)
///
/// ``` QTabBar* self, int index, const char* text ```
void q_tabbar_set_tab_whats_this(void* self, int index, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabWhatsThis)
///
/// ``` QTabBar* self, int index ```
const char* q_tabbar_tab_whats_this(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabData)
///
/// ``` QTabBar* self, int index, QVariant* data ```
void q_tabbar_set_tab_data(void* self, int index, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabData)
///
/// ``` QTabBar* self, int index ```
QVariant* q_tabbar_tab_data(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabRect)
///
/// ``` QTabBar* self, int index ```
QRect* q_tabbar_tab_rect(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabAt)
///
/// ``` QTabBar* self, QPoint* pos ```
int32_t q_tabbar_tab_at(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#currentIndex)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_current_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#count)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#sizeHint)
///
/// ``` QTabBar* self ```
QSize* q_tabbar_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, QSize* (*slot)() ```
void q_tabbar_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QTabBar* self ```
QSize* q_tabbar_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#minimumSizeHint)
///
/// ``` QTabBar* self ```
QSize* q_tabbar_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, QSize* (*slot)() ```
void q_tabbar_on_minimum_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#minimumSizeHint)
///
/// Base class method implementation
///
/// ``` QTabBar* self ```
QSize* q_tabbar_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setDrawBase)
///
/// ``` QTabBar* self, bool drawTheBase ```
void q_tabbar_set_draw_base(void* self, bool drawTheBase);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#drawBase)
///
/// ``` QTabBar* self ```
bool q_tabbar_draw_base(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#iconSize)
///
/// ``` QTabBar* self ```
QSize* q_tabbar_icon_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setIconSize)
///
/// ``` QTabBar* self, QSize* size ```
void q_tabbar_set_icon_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#usesScrollButtons)
///
/// ``` QTabBar* self ```
bool q_tabbar_uses_scroll_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setUsesScrollButtons)
///
/// ``` QTabBar* self, bool useButtons ```
void q_tabbar_set_uses_scroll_buttons(void* self, bool useButtons);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabsClosable)
///
/// ``` QTabBar* self ```
bool q_tabbar_tabs_closable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabsClosable)
///
/// ``` QTabBar* self, bool closable ```
void q_tabbar_set_tabs_closable(void* self, bool closable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setTabButton)
///
/// ``` QTabBar* self, int index, enum QTabBar__ButtonPosition position, QWidget* widget ```
void q_tabbar_set_tab_button(void* self, int index, int64_t position, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabButton)
///
/// ``` QTabBar* self, int index, enum QTabBar__ButtonPosition position ```
QWidget* q_tabbar_tab_button(void* self, int index, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#selectionBehaviorOnRemove)
///
/// ``` QTabBar* self ```
int64_t q_tabbar_selection_behavior_on_remove(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setSelectionBehaviorOnRemove)
///
/// ``` QTabBar* self, enum QTabBar__SelectionBehavior behavior ```
void q_tabbar_set_selection_behavior_on_remove(void* self, int64_t behavior);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#expanding)
///
/// ``` QTabBar* self ```
bool q_tabbar_expanding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setExpanding)
///
/// ``` QTabBar* self, bool enabled ```
void q_tabbar_set_expanding(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#isMovable)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_movable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setMovable)
///
/// ``` QTabBar* self, bool movable ```
void q_tabbar_set_movable(void* self, bool movable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#documentMode)
///
/// ``` QTabBar* self ```
bool q_tabbar_document_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setDocumentMode)
///
/// ``` QTabBar* self, bool set ```
void q_tabbar_set_document_mode(void* self, bool set);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#autoHide)
///
/// ``` QTabBar* self ```
bool q_tabbar_auto_hide(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setAutoHide)
///
/// ``` QTabBar* self, bool hide ```
void q_tabbar_set_auto_hide(void* self, bool hide);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#changeCurrentOnDrag)
///
/// ``` QTabBar* self ```
bool q_tabbar_change_current_on_drag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setChangeCurrentOnDrag)
///
/// ``` QTabBar* self, bool change ```
void q_tabbar_set_change_current_on_drag(void* self, bool change);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#accessibleTabName)
///
/// ``` QTabBar* self, int index ```
const char* q_tabbar_accessible_tab_name(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setAccessibleTabName)
///
/// ``` QTabBar* self, int index, const char* name ```
void q_tabbar_set_accessible_tab_name(void* self, int index, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#setCurrentIndex)
///
/// ``` QTabBar* self, int index ```
void q_tabbar_set_current_index(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#currentChanged)
///
/// ``` QTabBar* self, int index ```
void q_tabbar_current_changed(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#currentChanged)
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, int) ```
void q_tabbar_on_current_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabCloseRequested)
///
/// ``` QTabBar* self, int index ```
void q_tabbar_tab_close_requested(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabCloseRequested)
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, int) ```
void q_tabbar_on_tab_close_requested(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabMoved)
///
/// ``` QTabBar* self, int from, int to ```
void q_tabbar_tab_moved(void* self, int from, int to);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabMoved)
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, int, int) ```
void q_tabbar_on_tab_moved(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabBarClicked)
///
/// ``` QTabBar* self, int index ```
void q_tabbar_tab_bar_clicked(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabBarClicked)
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, int) ```
void q_tabbar_on_tab_bar_clicked(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabBarDoubleClicked)
///
/// ``` QTabBar* self, int index ```
void q_tabbar_tab_bar_double_clicked(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabBarDoubleClicked)
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, int) ```
void q_tabbar_on_tab_bar_double_clicked(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabSizeHint)
///
/// ``` QTabBar* self, int index ```
QSize* q_tabbar_tab_size_hint(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabSizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, QSize* (*slot)(QTabBar*, int) ```
void q_tabbar_on_tab_size_hint(void* self, QSize* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabSizeHint)
///
/// Base class method implementation
///
/// ``` QTabBar* self, int index ```
QSize* q_tabbar_qbase_tab_size_hint(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#minimumTabSizeHint)
///
/// ``` QTabBar* self, int index ```
QSize* q_tabbar_minimum_tab_size_hint(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#minimumTabSizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, QSize* (*slot)(QTabBar*, int) ```
void q_tabbar_on_minimum_tab_size_hint(void* self, QSize* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#minimumTabSizeHint)
///
/// Base class method implementation
///
/// ``` QTabBar* self, int index ```
QSize* q_tabbar_qbase_minimum_tab_size_hint(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabInserted)
///
/// ``` QTabBar* self, int index ```
void q_tabbar_tab_inserted(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabInserted)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, int) ```
void q_tabbar_on_tab_inserted(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabInserted)
///
/// Base class method implementation
///
/// ``` QTabBar* self, int index ```
void q_tabbar_qbase_tab_inserted(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabRemoved)
///
/// ``` QTabBar* self, int index ```
void q_tabbar_tab_removed(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabRemoved)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, int) ```
void q_tabbar_on_tab_removed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabRemoved)
///
/// Base class method implementation
///
/// ``` QTabBar* self, int index ```
void q_tabbar_qbase_tab_removed(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabLayoutChange)
///
/// ``` QTabBar* self ```
void q_tabbar_tab_layout_change(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabLayoutChange)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)() ```
void q_tabbar_on_tab_layout_change(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#tabLayoutChange)
///
/// Base class method implementation
///
/// ``` QTabBar* self ```
void q_tabbar_qbase_tab_layout_change(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#event)
///
/// ``` QTabBar* self, QEvent* param1 ```
bool q_tabbar_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, bool (*slot)(QTabBar*, QEvent*) ```
void q_tabbar_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#event)
///
/// Base class method implementation
///
/// ``` QTabBar* self, QEvent* param1 ```
bool q_tabbar_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#resizeEvent)
///
/// ``` QTabBar* self, QResizeEvent* param1 ```
void q_tabbar_resize_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QResizeEvent*) ```
void q_tabbar_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QTabBar* self, QResizeEvent* param1 ```
void q_tabbar_qbase_resize_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#showEvent)
///
/// ``` QTabBar* self, QShowEvent* param1 ```
void q_tabbar_show_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#showEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QShowEvent*) ```
void q_tabbar_on_show_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#showEvent)
///
/// Base class method implementation
///
/// ``` QTabBar* self, QShowEvent* param1 ```
void q_tabbar_qbase_show_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#hideEvent)
///
/// ``` QTabBar* self, QHideEvent* param1 ```
void q_tabbar_hide_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QHideEvent*) ```
void q_tabbar_on_hide_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#hideEvent)
///
/// Base class method implementation
///
/// ``` QTabBar* self, QHideEvent* param1 ```
void q_tabbar_qbase_hide_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#paintEvent)
///
/// ``` QTabBar* self, QPaintEvent* param1 ```
void q_tabbar_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QPaintEvent*) ```
void q_tabbar_on_paint_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#paintEvent)
///
/// Base class method implementation
///
/// ``` QTabBar* self, QPaintEvent* param1 ```
void q_tabbar_qbase_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mousePressEvent)
///
/// ``` QTabBar* self, QMouseEvent* param1 ```
void q_tabbar_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QMouseEvent*) ```
void q_tabbar_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QTabBar* self, QMouseEvent* param1 ```
void q_tabbar_qbase_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseMoveEvent)
///
/// ``` QTabBar* self, QMouseEvent* param1 ```
void q_tabbar_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QMouseEvent*) ```
void q_tabbar_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// ``` QTabBar* self, QMouseEvent* param1 ```
void q_tabbar_qbase_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseReleaseEvent)
///
/// ``` QTabBar* self, QMouseEvent* param1 ```
void q_tabbar_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QMouseEvent*) ```
void q_tabbar_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QTabBar* self, QMouseEvent* param1 ```
void q_tabbar_qbase_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseDoubleClickEvent)
///
/// ``` QTabBar* self, QMouseEvent* param1 ```
void q_tabbar_mouse_double_click_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QMouseEvent*) ```
void q_tabbar_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// ``` QTabBar* self, QMouseEvent* param1 ```
void q_tabbar_qbase_mouse_double_click_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#wheelEvent)
///
/// ``` QTabBar* self, QWheelEvent* event ```
void q_tabbar_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QWheelEvent*) ```
void q_tabbar_on_wheel_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#wheelEvent)
///
/// Base class method implementation
///
/// ``` QTabBar* self, QWheelEvent* event ```
void q_tabbar_qbase_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#keyPressEvent)
///
/// ``` QTabBar* self, QKeyEvent* param1 ```
void q_tabbar_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QKeyEvent*) ```
void q_tabbar_on_key_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#keyPressEvent)
///
/// Base class method implementation
///
/// ``` QTabBar* self, QKeyEvent* param1 ```
void q_tabbar_qbase_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#changeEvent)
///
/// ``` QTabBar* self, QEvent* param1 ```
void q_tabbar_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QEvent*) ```
void q_tabbar_on_change_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#changeEvent)
///
/// Base class method implementation
///
/// ``` QTabBar* self, QEvent* param1 ```
void q_tabbar_qbase_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#timerEvent)
///
/// ``` QTabBar* self, QTimerEvent* event ```
void q_tabbar_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QTimerEvent*) ```
void q_tabbar_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QTabBar* self, QTimerEvent* event ```
void q_tabbar_qbase_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#initStyleOption)
///
/// ``` QTabBar* self, QStyleOptionTab* option, int tabIndex ```
void q_tabbar_init_style_option(void* self, void* option, int tabIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QStyleOptionTab*, int) ```
void q_tabbar_on_init_style_option(void* self, void (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#initStyleOption)
///
/// Base class method implementation
///
/// ``` QTabBar* self, QStyleOptionTab* option, int tabIndex ```
void q_tabbar_qbase_init_style_option(void* self, void* option, int tabIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_tabbar_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_tabbar_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QTabBar* self ```
uintptr_t q_tabbar_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QTabBar* self ```
void q_tabbar_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QTabBar* self ```
uintptr_t q_tabbar_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QTabBar* self ```
uintptr_t q_tabbar_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QTabBar* self ```
QStyle* q_tabbar_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QTabBar* self, QStyle* style ```
void q_tabbar_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QTabBar* self ```
int64_t q_tabbar_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QTabBar* self, enum Qt__WindowModality windowModality ```
void q_tabbar_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QTabBar* self, QWidget* param1 ```
bool q_tabbar_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QTabBar* self, bool enabled ```
void q_tabbar_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QTabBar* self, bool disabled ```
void q_tabbar_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QTabBar* self, bool windowModified ```
void q_tabbar_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QTabBar* self ```
QRect* q_tabbar_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QTabBar* self ```
const QRect* q_tabbar_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QTabBar* self ```
QRect* q_tabbar_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QTabBar* self ```
QPoint* q_tabbar_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QTabBar* self ```
QSize* q_tabbar_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QTabBar* self ```
QSize* q_tabbar_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QTabBar* self ```
QRect* q_tabbar_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QTabBar* self ```
QRect* q_tabbar_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QTabBar* self ```
QRegion* q_tabbar_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QTabBar* self ```
QSize* q_tabbar_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QTabBar* self ```
QSize* q_tabbar_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTabBar* self, QSize* minimumSize ```
void q_tabbar_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTabBar* self, int minw, int minh ```
void q_tabbar_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTabBar* self, QSize* maximumSize ```
void q_tabbar_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTabBar* self, int maxw, int maxh ```
void q_tabbar_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QTabBar* self, int minw ```
void q_tabbar_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QTabBar* self, int minh ```
void q_tabbar_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QTabBar* self, int maxw ```
void q_tabbar_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QTabBar* self, int maxh ```
void q_tabbar_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QTabBar* self ```
QSize* q_tabbar_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTabBar* self, QSize* sizeIncrement ```
void q_tabbar_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTabBar* self, int w, int h ```
void q_tabbar_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QTabBar* self ```
QSize* q_tabbar_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTabBar* self, QSize* baseSize ```
void q_tabbar_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTabBar* self, int basew, int baseh ```
void q_tabbar_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTabBar* self, QSize* fixedSize ```
void q_tabbar_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTabBar* self, int w, int h ```
void q_tabbar_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QTabBar* self, int w ```
void q_tabbar_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QTabBar* self, int h ```
void q_tabbar_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTabBar* self, QPointF* param1 ```
QPointF* q_tabbar_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTabBar* self, QPoint* param1 ```
QPoint* q_tabbar_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTabBar* self, QPointF* param1 ```
QPointF* q_tabbar_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTabBar* self, QPoint* param1 ```
QPoint* q_tabbar_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTabBar* self, QPointF* param1 ```
QPointF* q_tabbar_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTabBar* self, QPoint* param1 ```
QPoint* q_tabbar_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTabBar* self, QPointF* param1 ```
QPointF* q_tabbar_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTabBar* self, QPoint* param1 ```
QPoint* q_tabbar_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTabBar* self, QWidget* param1, QPointF* param2 ```
QPointF* q_tabbar_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTabBar* self, QWidget* param1, QPoint* param2 ```
QPoint* q_tabbar_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTabBar* self, QWidget* param1, QPointF* param2 ```
QPointF* q_tabbar_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTabBar* self, QWidget* param1, QPoint* param2 ```
QPoint* q_tabbar_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QTabBar* self ```
QWidget* q_tabbar_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QTabBar* self ```
QWidget* q_tabbar_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QTabBar* self ```
QWidget* q_tabbar_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QTabBar* self ```
const QPalette* q_tabbar_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QTabBar* self, QPalette* palette ```
void q_tabbar_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QTabBar* self, enum QPalette__ColorRole backgroundRole ```
void q_tabbar_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QTabBar* self ```
int64_t q_tabbar_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QTabBar* self, enum QPalette__ColorRole foregroundRole ```
void q_tabbar_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QTabBar* self ```
int64_t q_tabbar_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QTabBar* self ```
const QFont* q_tabbar_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QTabBar* self, QFont* font ```
void q_tabbar_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QTabBar* self ```
QFontMetrics* q_tabbar_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QTabBar* self ```
QFontInfo* q_tabbar_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QTabBar* self ```
QCursor* q_tabbar_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QTabBar* self, QCursor* cursor ```
void q_tabbar_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QTabBar* self ```
void q_tabbar_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QTabBar* self, bool enable ```
void q_tabbar_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QTabBar* self ```
bool q_tabbar_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QTabBar* self ```
bool q_tabbar_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QTabBar* self, bool enable ```
void q_tabbar_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QTabBar* self ```
bool q_tabbar_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTabBar* self, QBitmap* mask ```
void q_tabbar_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTabBar* self, QRegion* mask ```
void q_tabbar_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QTabBar* self ```
QRegion* q_tabbar_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QTabBar* self ```
void q_tabbar_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabBar* self, QPaintDevice* target ```
void q_tabbar_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabBar* self, QPainter* painter ```
void q_tabbar_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTabBar* self ```
QPixmap* q_tabbar_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QTabBar* self ```
QGraphicsEffect* q_tabbar_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QTabBar* self, QGraphicsEffect* effect ```
void q_tabbar_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTabBar* self, enum Qt__GestureType typeVal ```
void q_tabbar_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QTabBar* self, enum Qt__GestureType typeVal ```
void q_tabbar_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QTabBar* self, const char* windowTitle ```
void q_tabbar_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QTabBar* self, const char* styleSheet ```
void q_tabbar_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QTabBar* self ```
const char* q_tabbar_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QTabBar* self ```
const char* q_tabbar_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QTabBar* self, QIcon* icon ```
void q_tabbar_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QTabBar* self ```
QIcon* q_tabbar_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QTabBar* self, const char* windowIconText ```
void q_tabbar_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QTabBar* self ```
const char* q_tabbar_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QTabBar* self, const char* windowRole ```
void q_tabbar_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QTabBar* self ```
const char* q_tabbar_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QTabBar* self, const char* filePath ```
void q_tabbar_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QTabBar* self ```
const char* q_tabbar_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QTabBar* self, double level ```
void q_tabbar_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QTabBar* self ```
double q_tabbar_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QTabBar* self, const char* toolTip ```
void q_tabbar_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QTabBar* self ```
const char* q_tabbar_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QTabBar* self, int msec ```
void q_tabbar_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QTabBar* self, const char* statusTip ```
void q_tabbar_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QTabBar* self ```
const char* q_tabbar_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QTabBar* self, const char* whatsThis ```
void q_tabbar_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QTabBar* self ```
const char* q_tabbar_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QTabBar* self ```
const char* q_tabbar_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QTabBar* self, const char* name ```
void q_tabbar_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QTabBar* self ```
const char* q_tabbar_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QTabBar* self, const char* description ```
void q_tabbar_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QTabBar* self, enum Qt__LayoutDirection direction ```
void q_tabbar_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QTabBar* self ```
int64_t q_tabbar_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QTabBar* self ```
void q_tabbar_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QTabBar* self, QLocale* locale ```
void q_tabbar_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QTabBar* self ```
QLocale* q_tabbar_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QTabBar* self ```
void q_tabbar_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTabBar* self ```
void q_tabbar_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QTabBar* self ```
void q_tabbar_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QTabBar* self ```
void q_tabbar_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTabBar* self, enum Qt__FocusReason reason ```
void q_tabbar_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QTabBar* self ```
int64_t q_tabbar_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QTabBar* self, enum Qt__FocusPolicy policy ```
void q_tabbar_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QTabBar* self ```
bool q_tabbar_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_tabbar_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QTabBar* self, QWidget* focusProxy ```
void q_tabbar_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QTabBar* self ```
QWidget* q_tabbar_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QTabBar* self ```
int64_t q_tabbar_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QTabBar* self, enum Qt__ContextMenuPolicy policy ```
void q_tabbar_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTabBar* self ```
void q_tabbar_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTabBar* self, QCursor* param1 ```
void q_tabbar_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QTabBar* self ```
void q_tabbar_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QTabBar* self ```
void q_tabbar_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QTabBar* self ```
void q_tabbar_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTabBar* self, QKeySequence* key ```
int32_t q_tabbar_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QTabBar* self, int id ```
void q_tabbar_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTabBar* self, int id ```
void q_tabbar_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTabBar* self, int id ```
void q_tabbar_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_tabbar_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_tabbar_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QTabBar* self ```
bool q_tabbar_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QTabBar* self, bool enable ```
void q_tabbar_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QTabBar* self ```
QGraphicsProxyWidget* q_tabbar_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTabBar* self ```
void q_tabbar_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTabBar* self ```
void q_tabbar_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTabBar* self, int x, int y, int w, int h ```
void q_tabbar_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTabBar* self, QRect* param1 ```
void q_tabbar_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTabBar* self, QRegion* param1 ```
void q_tabbar_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTabBar* self, int x, int y, int w, int h ```
void q_tabbar_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTabBar* self, QRect* param1 ```
void q_tabbar_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTabBar* self, QRegion* param1 ```
void q_tabbar_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QTabBar* self, bool hidden ```
void q_tabbar_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QTabBar* self ```
void q_tabbar_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QTabBar* self ```
void q_tabbar_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QTabBar* self ```
void q_tabbar_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QTabBar* self ```
void q_tabbar_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QTabBar* self ```
void q_tabbar_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QTabBar* self ```
void q_tabbar_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QTabBar* self ```
bool q_tabbar_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QTabBar* self ```
void q_tabbar_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QTabBar* self ```
void q_tabbar_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QTabBar* self, QWidget* param1 ```
void q_tabbar_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTabBar* self, int x, int y ```
void q_tabbar_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTabBar* self, QPoint* param1 ```
void q_tabbar_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTabBar* self, int w, int h ```
void q_tabbar_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTabBar* self, QSize* param1 ```
void q_tabbar_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTabBar* self, int x, int y, int w, int h ```
void q_tabbar_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTabBar* self, QRect* geometry ```
void q_tabbar_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QTabBar* self ```
char* q_tabbar_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QTabBar* self, const char* geometry ```
bool q_tabbar_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QTabBar* self ```
void q_tabbar_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QTabBar* self, QWidget* param1 ```
bool q_tabbar_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QTabBar* self ```
int64_t q_tabbar_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QTabBar* self, int state ```
void q_tabbar_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QTabBar* self, int state ```
void q_tabbar_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QTabBar* self ```
QSizePolicy* q_tabbar_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTabBar* self, QSizePolicy* sizePolicy ```
void q_tabbar_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTabBar* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_tabbar_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QTabBar* self ```
QRegion* q_tabbar_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTabBar* self, int left, int top, int right, int bottom ```
void q_tabbar_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTabBar* self, QMargins* margins ```
void q_tabbar_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QTabBar* self ```
QMargins* q_tabbar_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QTabBar* self ```
QRect* q_tabbar_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QTabBar* self ```
QLayout* q_tabbar_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QTabBar* self, QLayout* layout ```
void q_tabbar_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QTabBar* self ```
void q_tabbar_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTabBar* self, QWidget* parent ```
void q_tabbar_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTabBar* self, QWidget* parent, int f ```
void q_tabbar_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTabBar* self, int dx, int dy ```
void q_tabbar_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTabBar* self, int dx, int dy, QRect* param3 ```
void q_tabbar_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QTabBar* self ```
QWidget* q_tabbar_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QTabBar* self ```
QWidget* q_tabbar_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QTabBar* self ```
QWidget* q_tabbar_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QTabBar* self ```
bool q_tabbar_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QTabBar* self, bool on ```
void q_tabbar_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTabBar* self, QAction* action ```
void q_tabbar_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QTabBar* self, libqt_list /* of QAction* */ actions ```
void q_tabbar_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QTabBar* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_tabbar_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QTabBar* self, QAction* before, QAction* action ```
void q_tabbar_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QTabBar* self, QAction* action ```
void q_tabbar_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QTabBar* self ```
libqt_list /* of QAction* */ q_tabbar_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTabBar* self, const char* text ```
QAction* q_tabbar_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTabBar* self, QIcon* icon, const char* text ```
QAction* q_tabbar_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTabBar* self, const char* text, QKeySequence* shortcut ```
QAction* q_tabbar_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTabBar* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_tabbar_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QTabBar* self ```
QWidget* q_tabbar_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QTabBar* self, int typeVal ```
void q_tabbar_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QTabBar* self ```
int64_t q_tabbar_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTabBar* self, enum Qt__WindowType param1 ```
void q_tabbar_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QTabBar* self, int typeVal ```
void q_tabbar_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QTabBar* self ```
int64_t q_tabbar_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_tabbar_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTabBar* self, int x, int y ```
QWidget* q_tabbar_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTabBar* self, QPoint* p ```
QWidget* q_tabbar_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTabBar* self, enum Qt__WidgetAttribute param1 ```
void q_tabbar_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QTabBar* self, enum Qt__WidgetAttribute param1 ```
bool q_tabbar_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QTabBar* self ```
void q_tabbar_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QTabBar* self, QWidget* child ```
bool q_tabbar_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QTabBar* self ```
bool q_tabbar_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QTabBar* self, bool enabled ```
void q_tabbar_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QTabBar* self ```
QBackingStore* q_tabbar_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QTabBar* self ```
QWindow* q_tabbar_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QTabBar* self ```
QScreen* q_tabbar_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QTabBar* self, QScreen* screen ```
void q_tabbar_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_tabbar_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTabBar* self, const char* title ```
void q_tabbar_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTabBar* self, void (*slot)(QWidget*, const char*) ```
void q_tabbar_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTabBar* self, QIcon* icon ```
void q_tabbar_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTabBar* self, void (*slot)(QWidget*, QIcon*) ```
void q_tabbar_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTabBar* self, const char* iconText ```
void q_tabbar_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTabBar* self, void (*slot)(QWidget*, const char*) ```
void q_tabbar_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTabBar* self, QPoint* pos ```
void q_tabbar_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTabBar* self, void (*slot)(QWidget*, QPoint*) ```
void q_tabbar_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QTabBar* self ```
int64_t q_tabbar_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QTabBar* self, int hints ```
void q_tabbar_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabBar* self, QPaintDevice* target, QPoint* targetOffset ```
void q_tabbar_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabBar* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_tabbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabBar* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_tabbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabBar* self, QPainter* painter, QPoint* targetOffset ```
void q_tabbar_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabBar* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_tabbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabBar* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_tabbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTabBar* self, QRect* rectangle ```
QPixmap* q_tabbar_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTabBar* self, enum Qt__GestureType typeVal, int flags ```
void q_tabbar_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTabBar* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_tabbar_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTabBar* self, int id, bool enable ```
void q_tabbar_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTabBar* self, int id, bool enable ```
void q_tabbar_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTabBar* self, enum Qt__WindowType param1, bool on ```
void q_tabbar_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTabBar* self, enum Qt__WidgetAttribute param1, bool on ```
void q_tabbar_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_tabbar_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_tabbar_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTabBar* self ```
const char* q_tabbar_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTabBar* self, char* name ```
void q_tabbar_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTabBar* self ```
bool q_tabbar_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTabBar* self ```
bool q_tabbar_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTabBar* self, bool b ```
bool q_tabbar_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTabBar* self ```
QThread* q_tabbar_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTabBar* self, QThread* thread ```
void q_tabbar_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTabBar* self, int interval ```
int32_t q_tabbar_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTabBar* self, int id ```
void q_tabbar_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTabBar* self ```
libqt_list /* of QObject* */ q_tabbar_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTabBar* self, QObject* filterObj ```
void q_tabbar_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTabBar* self, QObject* obj ```
void q_tabbar_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_tabbar_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTabBar* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_tabbar_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_tabbar_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_tabbar_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTabBar* self ```
void q_tabbar_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTabBar* self ```
void q_tabbar_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTabBar* self, const char* name, QVariant* value ```
bool q_tabbar_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTabBar* self, const char* name ```
QVariant* q_tabbar_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTabBar* self ```
const char** q_tabbar_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTabBar* self ```
QBindingStorage* q_tabbar_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTabBar* self ```
const QBindingStorage* q_tabbar_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTabBar* self ```
void q_tabbar_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTabBar* self, void (*slot)(QObject*) ```
void q_tabbar_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTabBar* self ```
QObject* q_tabbar_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTabBar* self, const char* classname ```
bool q_tabbar_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTabBar* self ```
void q_tabbar_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTabBar* self, int interval, enum Qt__TimerType timerType ```
int32_t q_tabbar_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tabbar_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTabBar* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tabbar_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTabBar* self, QObject* param1 ```
void q_tabbar_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTabBar* self, void (*slot)(QObject*, QObject*) ```
void q_tabbar_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QTabBar* self ```
bool q_tabbar_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QTabBar* self ```
double q_tabbar_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QTabBar* self ```
double q_tabbar_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QTabBar* self ```
int32_t q_tabbar_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_tabbar_device_pixel_ratio_f_scale();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self ```
int32_t q_tabbar_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self ```
int32_t q_tabbar_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, int32_t (*slot)() ```
void q_tabbar_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, bool visible ```
void q_tabbar_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, bool visible ```
void q_tabbar_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, bool) ```
void q_tabbar_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, int param1 ```
int32_t q_tabbar_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, int param1 ```
int32_t q_tabbar_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, int32_t (*slot)(QTabBar*, int) ```
void q_tabbar_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self ```
bool q_tabbar_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self ```
bool q_tabbar_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, bool (*slot)() ```
void q_tabbar_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self ```
QPaintEngine* q_tabbar_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self ```
QPaintEngine* q_tabbar_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, QPaintEngine* (*slot)() ```
void q_tabbar_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QKeyEvent* event ```
void q_tabbar_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QKeyEvent* event ```
void q_tabbar_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QKeyEvent*) ```
void q_tabbar_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QFocusEvent* event ```
void q_tabbar_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QFocusEvent* event ```
void q_tabbar_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QFocusEvent*) ```
void q_tabbar_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QFocusEvent* event ```
void q_tabbar_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QFocusEvent* event ```
void q_tabbar_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QFocusEvent*) ```
void q_tabbar_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QEnterEvent* event ```
void q_tabbar_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QEnterEvent* event ```
void q_tabbar_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QEnterEvent*) ```
void q_tabbar_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QEvent* event ```
void q_tabbar_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QEvent* event ```
void q_tabbar_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QEvent*) ```
void q_tabbar_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QMoveEvent* event ```
void q_tabbar_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QMoveEvent* event ```
void q_tabbar_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QMoveEvent*) ```
void q_tabbar_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QCloseEvent* event ```
void q_tabbar_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QCloseEvent* event ```
void q_tabbar_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QCloseEvent*) ```
void q_tabbar_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QContextMenuEvent* event ```
void q_tabbar_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QContextMenuEvent* event ```
void q_tabbar_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QContextMenuEvent*) ```
void q_tabbar_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QTabletEvent* event ```
void q_tabbar_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QTabletEvent* event ```
void q_tabbar_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QTabletEvent*) ```
void q_tabbar_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QActionEvent* event ```
void q_tabbar_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QActionEvent* event ```
void q_tabbar_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QActionEvent*) ```
void q_tabbar_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QDragEnterEvent* event ```
void q_tabbar_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QDragEnterEvent* event ```
void q_tabbar_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QDragEnterEvent*) ```
void q_tabbar_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QDragMoveEvent* event ```
void q_tabbar_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QDragMoveEvent* event ```
void q_tabbar_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QDragMoveEvent*) ```
void q_tabbar_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QDragLeaveEvent* event ```
void q_tabbar_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QDragLeaveEvent* event ```
void q_tabbar_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QDragLeaveEvent*) ```
void q_tabbar_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QDropEvent* event ```
void q_tabbar_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QDropEvent* event ```
void q_tabbar_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QDropEvent*) ```
void q_tabbar_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, const char* eventType, void* message, intptr_t* result ```
bool q_tabbar_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, const char* eventType, void* message, intptr_t* result ```
bool q_tabbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, bool (*slot)(QTabBar*, const char*, void*, intptr_t*) ```
void q_tabbar_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_tabbar_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_tabbar_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, int32_t (*slot)(QTabBar*, enum QPaintDevice__PaintDeviceMetric) ```
void q_tabbar_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QPainter* painter ```
void q_tabbar_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QPainter* painter ```
void q_tabbar_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QPainter*) ```
void q_tabbar_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QPoint* offset ```
QPaintDevice* q_tabbar_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QPoint* offset ```
QPaintDevice* q_tabbar_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, QPaintDevice* (*slot)(QTabBar*, QPoint*) ```
void q_tabbar_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self ```
QPainter* q_tabbar_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self ```
QPainter* q_tabbar_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, QPainter* (*slot)() ```
void q_tabbar_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QInputMethodEvent* param1 ```
void q_tabbar_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QInputMethodEvent* param1 ```
void q_tabbar_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QInputMethodEvent*) ```
void q_tabbar_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_tabbar_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_tabbar_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, QVariant* (*slot)(QTabBar*, enum Qt__InputMethodQuery) ```
void q_tabbar_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, bool next ```
bool q_tabbar_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, bool next ```
bool q_tabbar_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, bool (*slot)(QTabBar*, bool) ```
void q_tabbar_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QObject* watched, QEvent* event ```
bool q_tabbar_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QObject* watched, QEvent* event ```
bool q_tabbar_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, bool (*slot)(QTabBar*, QObject*, QEvent*) ```
void q_tabbar_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QChildEvent* event ```
void q_tabbar_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QChildEvent* event ```
void q_tabbar_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QChildEvent*) ```
void q_tabbar_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QEvent* event ```
void q_tabbar_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QEvent* event ```
void q_tabbar_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QEvent*) ```
void q_tabbar_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QMetaMethod* signal ```
void q_tabbar_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QMetaMethod* signal ```
void q_tabbar_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QMetaMethod*) ```
void q_tabbar_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QMetaMethod* signal ```
void q_tabbar_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QMetaMethod* signal ```
void q_tabbar_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)(QTabBar*, QMetaMethod*) ```
void q_tabbar_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self ```
void q_tabbar_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self ```
void q_tabbar_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)() ```
void q_tabbar_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self ```
void q_tabbar_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self ```
void q_tabbar_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)() ```
void q_tabbar_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self ```
void q_tabbar_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self ```
void q_tabbar_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, void (*slot)() ```
void q_tabbar_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self ```
bool q_tabbar_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self ```
bool q_tabbar_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, bool (*slot)() ```
void q_tabbar_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self ```
bool q_tabbar_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self ```
bool q_tabbar_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, bool (*slot)() ```
void q_tabbar_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self ```
QObject* q_tabbar_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self ```
QObject* q_tabbar_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, QObject* (*slot)() ```
void q_tabbar_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self ```
int32_t q_tabbar_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self ```
int32_t q_tabbar_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, int32_t (*slot)() ```
void q_tabbar_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, const char* signal ```
int32_t q_tabbar_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, const char* signal ```
int32_t q_tabbar_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, int32_t (*slot)(QTabBar*, const char*) ```
void q_tabbar_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabBar* self, QMetaMethod* signal ```
bool q_tabbar_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabBar* self, QMetaMethod* signal ```
bool q_tabbar_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabBar* self, bool (*slot)(QTabBar*, QMetaMethod*) ```
void q_tabbar_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTabBar* self, void (*slot)(QObject*, const char*) ```
void q_tabbar_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtabbar.html#dtor.QTabBar)
///
/// Delete this object from C++ memory.
///
/// ``` QTabBar* self ```
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
