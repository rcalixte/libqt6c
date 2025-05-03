#pragma once
#ifndef SRCQT6C_LIBQMDIAREA_H
#define SRCQT6C_LIBQMDIAREA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractscrollarea.h"
#include "libqaction.h"
#include "libqevent.h"
#include "libqanystringview.h"
#include "libqbackingstore.h"
#include "libqbindingstorage.h"
#include "libqbitmap.h"
#include "libqbrush.h"
#include "libqcursor.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqframe.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsproxywidget.h"
#include "libqicon.h"
#include "libqkeysequence.h"
#include "libqlayout.h"
#include "libqlocale.h"
#include "libqmargins.h"
#include "libqmdisubwindow.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpalette.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqscreen.h"
#include "libqscrollbar.h"
#include "libqsize.h"
#include "libqsizepolicy.h"
#include <string.h>
#include "libqstyle.h"
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

/// https://doc.qt.io/qt-6/qmdiarea.html

/// q_mdiarea_new constructs a new QMdiArea object.
///
/// ``` QWidget* parent ```
QMdiArea* q_mdiarea_new(void* parent);

/// q_mdiarea_new2 constructs a new QMdiArea object.
///
///
QMdiArea* q_mdiarea_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMdiArea* self ```
QMetaObject* q_mdiarea_meta_object(void* self);

/// ``` QMdiArea* self, const char* param1 ```
void* q_mdiarea_metacast(void* self, const char* param1);

/// ``` QMdiArea* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mdiarea_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, int32_t (*slot)(QMdiArea*, enum QMetaObject__Call, int, void*) ```
void q_mdiarea_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QMdiArea* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mdiarea_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mdiarea_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#sizeHint)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_size_hint(void* self);

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, QSize* (*slot)() ```
void q_mdiarea_on_size_hint(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#minimumSizeHint)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_minimum_size_hint(void* self);

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, QSize* (*slot)() ```
void q_mdiarea_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#currentSubWindow)
///
/// ``` QMdiArea* self ```
QMdiSubWindow* q_mdiarea_current_sub_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#activeSubWindow)
///
/// ``` QMdiArea* self ```
QMdiSubWindow* q_mdiarea_active_sub_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#subWindowList)
///
/// ``` QMdiArea* self ```
libqt_list /* of QMdiSubWindow* */ q_mdiarea_sub_window_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#addSubWindow)
///
/// ``` QMdiArea* self, QWidget* widget ```
QMdiSubWindow* q_mdiarea_add_sub_window(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#removeSubWindow)
///
/// ``` QMdiArea* self, QWidget* widget ```
void q_mdiarea_remove_sub_window(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#background)
///
/// ``` QMdiArea* self ```
QBrush* q_mdiarea_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setBackground)
///
/// ``` QMdiArea* self, QBrush* background ```
void q_mdiarea_set_background(void* self, void* background);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#activationOrder)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_activation_order(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setActivationOrder)
///
/// ``` QMdiArea* self, enum QMdiArea__WindowOrder order ```
void q_mdiarea_set_activation_order(void* self, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setOption)
///
/// ``` QMdiArea* self, enum QMdiArea__AreaOption option ```
void q_mdiarea_set_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#testOption)
///
/// ``` QMdiArea* self, enum QMdiArea__AreaOption opton ```
bool q_mdiarea_test_option(void* self, int64_t opton);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setViewMode)
///
/// ``` QMdiArea* self, enum QMdiArea__ViewMode mode ```
void q_mdiarea_set_view_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#viewMode)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_view_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#documentMode)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_document_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setDocumentMode)
///
/// ``` QMdiArea* self, bool enabled ```
void q_mdiarea_set_document_mode(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setTabsClosable)
///
/// ``` QMdiArea* self, bool closable ```
void q_mdiarea_set_tabs_closable(void* self, bool closable);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#tabsClosable)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_tabs_closable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setTabsMovable)
///
/// ``` QMdiArea* self, bool movable ```
void q_mdiarea_set_tabs_movable(void* self, bool movable);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#tabsMovable)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_tabs_movable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setTabShape)
///
/// ``` QMdiArea* self, enum QTabWidget__TabShape shape ```
void q_mdiarea_set_tab_shape(void* self, int64_t shape);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#tabShape)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_tab_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setTabPosition)
///
/// ``` QMdiArea* self, enum QTabWidget__TabPosition position ```
void q_mdiarea_set_tab_position(void* self, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#tabPosition)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_tab_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#subWindowActivated)
///
/// ``` QMdiArea* self, QMdiSubWindow* param1 ```
void q_mdiarea_sub_window_activated(void* self, void* param1);

/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMdiSubWindow*) ```
void q_mdiarea_on_sub_window_activated(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setActiveSubWindow)
///
/// ``` QMdiArea* self, QMdiSubWindow* window ```
void q_mdiarea_set_active_sub_window(void* self, void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#tileSubWindows)
///
/// ``` QMdiArea* self ```
void q_mdiarea_tile_sub_windows(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#cascadeSubWindows)
///
/// ``` QMdiArea* self ```
void q_mdiarea_cascade_sub_windows(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#closeActiveSubWindow)
///
/// ``` QMdiArea* self ```
void q_mdiarea_close_active_sub_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#closeAllSubWindows)
///
/// ``` QMdiArea* self ```
void q_mdiarea_close_all_sub_windows(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#activateNextSubWindow)
///
/// ``` QMdiArea* self ```
void q_mdiarea_activate_next_sub_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#activatePreviousSubWindow)
///
/// ``` QMdiArea* self ```
void q_mdiarea_activate_previous_sub_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setupViewport)
///
/// ``` QMdiArea* self, QWidget* viewport ```
void q_mdiarea_setup_viewport(void* self, void* viewport);

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QWidget*) ```
void q_mdiarea_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiArea* self, QWidget* viewport ```
void q_mdiarea_qbase_setup_viewport(void* self, void* viewport);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#event)
///
/// ``` QMdiArea* self, QEvent* event ```
bool q_mdiarea_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, bool (*slot)(QMdiArea*, QEvent*) ```
void q_mdiarea_on_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiArea* self, QEvent* event ```
bool q_mdiarea_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#eventFilter)
///
/// ``` QMdiArea* self, QObject* object, QEvent* event ```
bool q_mdiarea_event_filter(void* self, void* object, void* event);

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, bool (*slot)(QMdiArea*, QObject*, QEvent*) ```
void q_mdiarea_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QMdiArea* self, QObject* object, QEvent* event ```
bool q_mdiarea_qbase_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#paintEvent)
///
/// ``` QMdiArea* self, QPaintEvent* paintEvent ```
void q_mdiarea_paint_event(void* self, void* paintEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QPaintEvent*) ```
void q_mdiarea_on_paint_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiArea* self, QPaintEvent* paintEvent ```
void q_mdiarea_qbase_paint_event(void* self, void* paintEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#childEvent)
///
/// ``` QMdiArea* self, QChildEvent* childEvent ```
void q_mdiarea_child_event(void* self, void* childEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QChildEvent*) ```
void q_mdiarea_on_child_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiArea* self, QChildEvent* childEvent ```
void q_mdiarea_qbase_child_event(void* self, void* childEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#resizeEvent)
///
/// ``` QMdiArea* self, QResizeEvent* resizeEvent ```
void q_mdiarea_resize_event(void* self, void* resizeEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QResizeEvent*) ```
void q_mdiarea_on_resize_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiArea* self, QResizeEvent* resizeEvent ```
void q_mdiarea_qbase_resize_event(void* self, void* resizeEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#timerEvent)
///
/// ``` QMdiArea* self, QTimerEvent* timerEvent ```
void q_mdiarea_timer_event(void* self, void* timerEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QTimerEvent*) ```
void q_mdiarea_on_timer_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiArea* self, QTimerEvent* timerEvent ```
void q_mdiarea_qbase_timer_event(void* self, void* timerEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#showEvent)
///
/// ``` QMdiArea* self, QShowEvent* showEvent ```
void q_mdiarea_show_event(void* self, void* showEvent);

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QShowEvent*) ```
void q_mdiarea_on_show_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiArea* self, QShowEvent* showEvent ```
void q_mdiarea_qbase_show_event(void* self, void* showEvent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#viewportEvent)
///
/// ``` QMdiArea* self, QEvent* event ```
bool q_mdiarea_viewport_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, bool (*slot)(QMdiArea*, QEvent*) ```
void q_mdiarea_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QMdiArea* self, QEvent* event ```
bool q_mdiarea_qbase_viewport_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#scrollContentsBy)
///
/// ``` QMdiArea* self, int dx, int dy ```
void q_mdiarea_scroll_contents_by(void* self, int dx, int dy);

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, int, int) ```
void q_mdiarea_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// Base class method implementation
///
/// ``` QMdiArea* self, int dx, int dy ```
void q_mdiarea_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mdiarea_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mdiarea_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#subWindowList)
///
/// ``` QMdiArea* self, enum QMdiArea__WindowOrder order ```
libqt_list /* of QMdiSubWindow* */ q_mdiarea_sub_window_list1(void* self, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#addSubWindow)
///
/// ``` QMdiArea* self, QWidget* widget, int flags ```
QMdiSubWindow* q_mdiarea_add_sub_window2(void* self, void* widget, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setOption)
///
/// ``` QMdiArea* self, enum QMdiArea__AreaOption option, bool on ```
void q_mdiarea_set_option2(void* self, int64_t option, bool on);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QMdiArea* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_mdiarea_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QMdiArea* self ```
QScrollBar* q_mdiarea_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QMdiArea* self, QScrollBar* scrollbar ```
void q_mdiarea_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QMdiArea* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_mdiarea_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QMdiArea* self ```
QScrollBar* q_mdiarea_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QMdiArea* self, QScrollBar* scrollbar ```
void q_mdiarea_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QMdiArea* self, QWidget* widget ```
void q_mdiarea_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QMdiArea* self, QWidget* widget, int alignment ```
void q_mdiarea_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QMdiArea* self, int alignment ```
libqt_list /* of QWidget* */ q_mdiarea_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QMdiArea* self, QWidget* widget ```
void q_mdiarea_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QMdiArea* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_mdiarea_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QMdiArea* self, int frameStyle ```
void q_mdiarea_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QMdiArea* self, enum QFrame__Shape frameShape ```
void q_mdiarea_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QMdiArea* self, enum QFrame__Shadow frameShadow ```
void q_mdiarea_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QMdiArea* self, int lineWidth ```
void q_mdiarea_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QMdiArea* self, int midLineWidth ```
void q_mdiarea_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QMdiArea* self ```
QRect* q_mdiarea_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QMdiArea* self, QRect* frameRect ```
void q_mdiarea_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QMdiArea* self ```
uintptr_t q_mdiarea_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QMdiArea* self ```
void q_mdiarea_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QMdiArea* self ```
uintptr_t q_mdiarea_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QMdiArea* self ```
uintptr_t q_mdiarea_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QMdiArea* self ```
QStyle* q_mdiarea_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QMdiArea* self, QStyle* style ```
void q_mdiarea_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QMdiArea* self, enum Qt__WindowModality windowModality ```
void q_mdiarea_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QMdiArea* self, QWidget* param1 ```
bool q_mdiarea_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QMdiArea* self, bool enabled ```
void q_mdiarea_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QMdiArea* self, bool disabled ```
void q_mdiarea_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QMdiArea* self, bool windowModified ```
void q_mdiarea_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QMdiArea* self ```
QRect* q_mdiarea_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QMdiArea* self ```
QRect* q_mdiarea_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QMdiArea* self ```
QRect* q_mdiarea_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QMdiArea* self ```
QPoint* q_mdiarea_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QMdiArea* self ```
QRect* q_mdiarea_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QMdiArea* self ```
QRect* q_mdiarea_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QMdiArea* self ```
QRegion* q_mdiarea_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMdiArea* self, QSize* minimumSize ```
void q_mdiarea_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMdiArea* self, int minw, int minh ```
void q_mdiarea_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMdiArea* self, QSize* maximumSize ```
void q_mdiarea_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMdiArea* self, int maxw, int maxh ```
void q_mdiarea_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QMdiArea* self, int minw ```
void q_mdiarea_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QMdiArea* self, int minh ```
void q_mdiarea_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QMdiArea* self, int maxw ```
void q_mdiarea_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QMdiArea* self, int maxh ```
void q_mdiarea_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMdiArea* self, QSize* sizeIncrement ```
void q_mdiarea_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMdiArea* self, int w, int h ```
void q_mdiarea_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMdiArea* self, QSize* baseSize ```
void q_mdiarea_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMdiArea* self, int basew, int baseh ```
void q_mdiarea_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMdiArea* self, QSize* fixedSize ```
void q_mdiarea_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMdiArea* self, int w, int h ```
void q_mdiarea_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QMdiArea* self, int w ```
void q_mdiarea_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QMdiArea* self, int h ```
void q_mdiarea_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMdiArea* self, QPointF* param1 ```
QPointF* q_mdiarea_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMdiArea* self, QPoint* param1 ```
QPoint* q_mdiarea_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMdiArea* self, QPointF* param1 ```
QPointF* q_mdiarea_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMdiArea* self, QPoint* param1 ```
QPoint* q_mdiarea_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMdiArea* self, QPointF* param1 ```
QPointF* q_mdiarea_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMdiArea* self, QPoint* param1 ```
QPoint* q_mdiarea_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMdiArea* self, QPointF* param1 ```
QPointF* q_mdiarea_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMdiArea* self, QPoint* param1 ```
QPoint* q_mdiarea_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMdiArea* self, QWidget* param1, QPointF* param2 ```
QPointF* q_mdiarea_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMdiArea* self, QWidget* param1, QPoint* param2 ```
QPoint* q_mdiarea_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMdiArea* self, QWidget* param1, QPointF* param2 ```
QPointF* q_mdiarea_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMdiArea* self, QWidget* param1, QPoint* param2 ```
QPoint* q_mdiarea_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QMdiArea* self ```
QPalette* q_mdiarea_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QMdiArea* self, QPalette* palette ```
void q_mdiarea_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QMdiArea* self, enum QPalette__ColorRole backgroundRole ```
void q_mdiarea_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QMdiArea* self, enum QPalette__ColorRole foregroundRole ```
void q_mdiarea_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QMdiArea* self ```
QFont* q_mdiarea_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QMdiArea* self, QFont* font ```
void q_mdiarea_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QMdiArea* self ```
QFontMetrics* q_mdiarea_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QMdiArea* self ```
QFontInfo* q_mdiarea_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QMdiArea* self ```
QCursor* q_mdiarea_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QMdiArea* self, QCursor* cursor ```
void q_mdiarea_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QMdiArea* self ```
void q_mdiarea_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QMdiArea* self, bool enable ```
void q_mdiarea_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QMdiArea* self, bool enable ```
void q_mdiarea_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMdiArea* self, QBitmap* mask ```
void q_mdiarea_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMdiArea* self, QRegion* mask ```
void q_mdiarea_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QMdiArea* self ```
QRegion* q_mdiarea_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QMdiArea* self ```
void q_mdiarea_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPaintDevice* target ```
void q_mdiarea_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPainter* painter ```
void q_mdiarea_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMdiArea* self ```
QPixmap* q_mdiarea_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QMdiArea* self ```
QGraphicsEffect* q_mdiarea_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QMdiArea* self, QGraphicsEffect* effect ```
void q_mdiarea_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMdiArea* self, enum Qt__GestureType typeVal ```
void q_mdiarea_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QMdiArea* self, enum Qt__GestureType typeVal ```
void q_mdiarea_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QMdiArea* self, const char* windowTitle ```
void q_mdiarea_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QMdiArea* self, const char* styleSheet ```
void q_mdiarea_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QMdiArea* self, QIcon* icon ```
void q_mdiarea_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QMdiArea* self ```
QIcon* q_mdiarea_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QMdiArea* self, const char* windowIconText ```
void q_mdiarea_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QMdiArea* self, const char* windowRole ```
void q_mdiarea_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QMdiArea* self, const char* filePath ```
void q_mdiarea_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QMdiArea* self, double level ```
void q_mdiarea_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QMdiArea* self ```
double q_mdiarea_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QMdiArea* self, const char* toolTip ```
void q_mdiarea_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QMdiArea* self, int msec ```
void q_mdiarea_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QMdiArea* self, const char* statusTip ```
void q_mdiarea_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QMdiArea* self, const char* whatsThis ```
void q_mdiarea_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QMdiArea* self, const char* name ```
void q_mdiarea_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QMdiArea* self, const char* description ```
void q_mdiarea_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QMdiArea* self, enum Qt__LayoutDirection direction ```
void q_mdiarea_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QMdiArea* self ```
void q_mdiarea_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QMdiArea* self, QLocale* locale ```
void q_mdiarea_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QMdiArea* self ```
QLocale* q_mdiarea_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QMdiArea* self ```
void q_mdiarea_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMdiArea* self ```
void q_mdiarea_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QMdiArea* self ```
void q_mdiarea_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QMdiArea* self ```
void q_mdiarea_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMdiArea* self, enum Qt__FocusReason reason ```
void q_mdiarea_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QMdiArea* self, enum Qt__FocusPolicy policy ```
void q_mdiarea_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_mdiarea_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QMdiArea* self, QWidget* focusProxy ```
void q_mdiarea_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QMdiArea* self, enum Qt__ContextMenuPolicy policy ```
void q_mdiarea_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMdiArea* self ```
void q_mdiarea_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMdiArea* self, QCursor* param1 ```
void q_mdiarea_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QMdiArea* self ```
void q_mdiarea_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QMdiArea* self ```
void q_mdiarea_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QMdiArea* self ```
void q_mdiarea_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMdiArea* self, QKeySequence* key ```
int32_t q_mdiarea_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QMdiArea* self, int id ```
void q_mdiarea_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMdiArea* self, int id ```
void q_mdiarea_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMdiArea* self, int id ```
void q_mdiarea_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_mdiarea_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_mdiarea_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QMdiArea* self, bool enable ```
void q_mdiarea_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QMdiArea* self ```
QGraphicsProxyWidget* q_mdiarea_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiArea* self ```
void q_mdiarea_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiArea* self ```
void q_mdiarea_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiArea* self, int x, int y, int w, int h ```
void q_mdiarea_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiArea* self, QRect* param1 ```
void q_mdiarea_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiArea* self, QRegion* param1 ```
void q_mdiarea_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiArea* self, int x, int y, int w, int h ```
void q_mdiarea_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiArea* self, QRect* param1 ```
void q_mdiarea_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiArea* self, QRegion* param1 ```
void q_mdiarea_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QMdiArea* self, bool hidden ```
void q_mdiarea_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QMdiArea* self ```
void q_mdiarea_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QMdiArea* self ```
void q_mdiarea_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QMdiArea* self ```
void q_mdiarea_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QMdiArea* self ```
void q_mdiarea_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QMdiArea* self ```
void q_mdiarea_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QMdiArea* self ```
void q_mdiarea_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QMdiArea* self ```
void q_mdiarea_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QMdiArea* self ```
void q_mdiarea_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QMdiArea* self, QWidget* param1 ```
void q_mdiarea_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMdiArea* self, int x, int y ```
void q_mdiarea_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMdiArea* self, QPoint* param1 ```
void q_mdiarea_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMdiArea* self, int w, int h ```
void q_mdiarea_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMdiArea* self, QSize* param1 ```
void q_mdiarea_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMdiArea* self, int x, int y, int w, int h ```
void q_mdiarea_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMdiArea* self, QRect* geometry ```
void q_mdiarea_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QMdiArea* self ```
char* q_mdiarea_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QMdiArea* self, const char* geometry ```
bool q_mdiarea_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QMdiArea* self ```
void q_mdiarea_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QMdiArea* self, QWidget* param1 ```
bool q_mdiarea_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QMdiArea* self, int state ```
void q_mdiarea_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QMdiArea* self, int state ```
void q_mdiarea_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QMdiArea* self ```
QSizePolicy* q_mdiarea_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMdiArea* self, QSizePolicy* sizePolicy ```
void q_mdiarea_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMdiArea* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_mdiarea_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QMdiArea* self ```
QRegion* q_mdiarea_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMdiArea* self, int left, int top, int right, int bottom ```
void q_mdiarea_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMdiArea* self, QMargins* margins ```
void q_mdiarea_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QMdiArea* self ```
QMargins* q_mdiarea_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QMdiArea* self ```
QRect* q_mdiarea_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QMdiArea* self ```
QLayout* q_mdiarea_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QMdiArea* self, QLayout* layout ```
void q_mdiarea_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QMdiArea* self ```
void q_mdiarea_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMdiArea* self, QWidget* parent ```
void q_mdiarea_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMdiArea* self, QWidget* parent, int f ```
void q_mdiarea_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMdiArea* self, int dx, int dy ```
void q_mdiarea_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMdiArea* self, int dx, int dy, QRect* param3 ```
void q_mdiarea_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QMdiArea* self, bool on ```
void q_mdiarea_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiArea* self, QAction* action ```
void q_mdiarea_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QMdiArea* self, QAction* actions[] ```
void q_mdiarea_add_actions(void* self, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QMdiArea* self, QAction* before, QAction* actions[] ```
void q_mdiarea_insert_actions(void* self, void* before, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QMdiArea* self, QAction* before, QAction* action ```
void q_mdiarea_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QMdiArea* self, QAction* action ```
void q_mdiarea_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QMdiArea* self ```
libqt_list /* of QAction* */ q_mdiarea_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiArea* self, const char* text ```
QAction* q_mdiarea_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiArea* self, QIcon* icon, const char* text ```
QAction* q_mdiarea_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiArea* self, const char* text, QKeySequence* shortcut ```
QAction* q_mdiarea_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiArea* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_mdiarea_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QMdiArea* self, int typeVal ```
void q_mdiarea_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMdiArea* self, enum Qt__WindowType param1 ```
void q_mdiarea_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QMdiArea* self, int typeVal ```
void q_mdiarea_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_mdiarea_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMdiArea* self, int x, int y ```
QWidget* q_mdiarea_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMdiArea* self, QPoint* p ```
QWidget* q_mdiarea_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMdiArea* self, enum Qt__WidgetAttribute param1 ```
void q_mdiarea_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QMdiArea* self, enum Qt__WidgetAttribute param1 ```
bool q_mdiarea_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QMdiArea* self ```
void q_mdiarea_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QMdiArea* self, QWidget* child ```
bool q_mdiarea_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QMdiArea* self, bool enabled ```
void q_mdiarea_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QMdiArea* self ```
QBackingStore* q_mdiarea_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QMdiArea* self ```
QWindow* q_mdiarea_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QMdiArea* self ```
QScreen* q_mdiarea_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QMdiArea* self, QScreen* screen ```
void q_mdiarea_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_mdiarea_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QMdiArea* self, const char* title ```
void q_mdiarea_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// ``` QMdiArea* self, void (*slot)(QWidget*, const char*) ```
void q_mdiarea_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QMdiArea* self, QIcon* icon ```
void q_mdiarea_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// ``` QMdiArea* self, void (*slot)(QWidget*, QIcon*) ```
void q_mdiarea_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QMdiArea* self, const char* iconText ```
void q_mdiarea_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// ``` QMdiArea* self, void (*slot)(QWidget*, const char*) ```
void q_mdiarea_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QMdiArea* self, QPoint* pos ```
void q_mdiarea_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// ``` QMdiArea* self, void (*slot)(QWidget*, QPoint*) ```
void q_mdiarea_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QMdiArea* self, int hints ```
void q_mdiarea_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPaintDevice* target, QPoint* targetOffset ```
void q_mdiarea_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_mdiarea_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_mdiarea_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPainter* painter, QPoint* targetOffset ```
void q_mdiarea_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_mdiarea_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_mdiarea_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMdiArea* self, QRect* rectangle ```
QPixmap* q_mdiarea_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMdiArea* self, enum Qt__GestureType typeVal, int flags ```
void q_mdiarea_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMdiArea* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_mdiarea_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMdiArea* self, int id, bool enable ```
void q_mdiarea_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMdiArea* self, int id, bool enable ```
void q_mdiarea_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMdiArea* self, enum Qt__WindowType param1, bool on ```
void q_mdiarea_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMdiArea* self, enum Qt__WidgetAttribute param1, bool on ```
void q_mdiarea_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_mdiarea_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_mdiarea_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMdiArea* self, char* name ```
void q_mdiarea_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMdiArea* self, bool b ```
bool q_mdiarea_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMdiArea* self ```
QThread* q_mdiarea_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMdiArea* self, QThread* thread ```
void q_mdiarea_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMdiArea* self, int interval ```
int32_t q_mdiarea_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMdiArea* self, int id ```
void q_mdiarea_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMdiArea* self ```
libqt_list /* of QObject* */ q_mdiarea_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMdiArea* self, QObject* filterObj ```
void q_mdiarea_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMdiArea* self, QObject* obj ```
void q_mdiarea_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mdiarea_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMdiArea* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mdiarea_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mdiarea_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mdiarea_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMdiArea* self ```
void q_mdiarea_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMdiArea* self ```
void q_mdiarea_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMdiArea* self, const char* name, QVariant* value ```
bool q_mdiarea_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMdiArea* self, const char* name ```
QVariant* q_mdiarea_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMdiArea* self ```
const char** q_mdiarea_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMdiArea* self ```
QBindingStorage* q_mdiarea_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMdiArea* self ```
QBindingStorage* q_mdiarea_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMdiArea* self ```
void q_mdiarea_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QMdiArea* self, void (*slot)(QObject*) ```
void q_mdiarea_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMdiArea* self ```
QObject* q_mdiarea_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMdiArea* self, const char* classname ```
bool q_mdiarea_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMdiArea* self ```
void q_mdiarea_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMdiArea* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mdiarea_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mdiarea_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMdiArea* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mdiarea_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMdiArea* self, QObject* param1 ```
void q_mdiarea_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QMdiArea* self, void (*slot)(QObject*, QObject*) ```
void q_mdiarea_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QMdiArea* self ```
double q_mdiarea_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QMdiArea* self ```
double q_mdiarea_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_mdiarea_device_pixel_ratio_f_scale();

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_mouse_press_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_qbase_mouse_press_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMouseEvent*) ```
void q_mdiarea_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_mouse_release_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_qbase_mouse_release_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMouseEvent*) ```
void q_mdiarea_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_mouse_double_click_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_qbase_mouse_double_click_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMouseEvent*) ```
void q_mdiarea_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_mouse_move_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_qbase_mouse_move_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMouseEvent*) ```
void q_mdiarea_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QWheelEvent* param1 ```
void q_mdiarea_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QWheelEvent* param1 ```
void q_mdiarea_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QWheelEvent*) ```
void q_mdiarea_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QContextMenuEvent* param1 ```
void q_mdiarea_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QContextMenuEvent* param1 ```
void q_mdiarea_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QContextMenuEvent*) ```
void q_mdiarea_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QDragEnterEvent* param1 ```
void q_mdiarea_drag_enter_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QDragEnterEvent* param1 ```
void q_mdiarea_qbase_drag_enter_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QDragEnterEvent*) ```
void q_mdiarea_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QDragMoveEvent* param1 ```
void q_mdiarea_drag_move_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QDragMoveEvent* param1 ```
void q_mdiarea_qbase_drag_move_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QDragMoveEvent*) ```
void q_mdiarea_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QDragLeaveEvent* param1 ```
void q_mdiarea_drag_leave_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QDragLeaveEvent* param1 ```
void q_mdiarea_qbase_drag_leave_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QDragLeaveEvent*) ```
void q_mdiarea_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QDropEvent* param1 ```
void q_mdiarea_drop_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QDropEvent* param1 ```
void q_mdiarea_qbase_drop_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QDropEvent*) ```
void q_mdiarea_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QKeyEvent* param1 ```
void q_mdiarea_key_press_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QKeyEvent* param1 ```
void q_mdiarea_qbase_key_press_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QKeyEvent*) ```
void q_mdiarea_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, QSize* (*slot)() ```
void q_mdiarea_on_viewport_size_hint(void* self, QSize* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QEvent* param1 ```
void q_mdiarea_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QEvent* param1 ```
void q_mdiarea_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QEvent*) ```
void q_mdiarea_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QStyleOptionFrame* option ```
void q_mdiarea_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QStyleOptionFrame* option ```
void q_mdiarea_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QStyleOptionFrame*) ```
void q_mdiarea_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, int32_t (*slot)() ```
void q_mdiarea_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, bool visible ```
void q_mdiarea_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, bool visible ```
void q_mdiarea_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, bool) ```
void q_mdiarea_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, int param1 ```
int32_t q_mdiarea_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, int param1 ```
int32_t q_mdiarea_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, int32_t (*slot)(QMdiArea*, int) ```
void q_mdiarea_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
bool q_mdiarea_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
bool q_mdiarea_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, bool (*slot)() ```
void q_mdiarea_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
QPaintEngine* q_mdiarea_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
QPaintEngine* q_mdiarea_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, QPaintEngine* (*slot)() ```
void q_mdiarea_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QKeyEvent* event ```
void q_mdiarea_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QKeyEvent* event ```
void q_mdiarea_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QKeyEvent*) ```
void q_mdiarea_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QFocusEvent* event ```
void q_mdiarea_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QFocusEvent* event ```
void q_mdiarea_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QFocusEvent*) ```
void q_mdiarea_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QFocusEvent* event ```
void q_mdiarea_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QFocusEvent* event ```
void q_mdiarea_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QFocusEvent*) ```
void q_mdiarea_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QEnterEvent* event ```
void q_mdiarea_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QEnterEvent* event ```
void q_mdiarea_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QEnterEvent*) ```
void q_mdiarea_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QEvent* event ```
void q_mdiarea_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QEvent* event ```
void q_mdiarea_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QEvent*) ```
void q_mdiarea_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMoveEvent* event ```
void q_mdiarea_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMoveEvent* event ```
void q_mdiarea_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMoveEvent*) ```
void q_mdiarea_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QCloseEvent* event ```
void q_mdiarea_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QCloseEvent* event ```
void q_mdiarea_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QCloseEvent*) ```
void q_mdiarea_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QTabletEvent* event ```
void q_mdiarea_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QTabletEvent* event ```
void q_mdiarea_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QTabletEvent*) ```
void q_mdiarea_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QActionEvent* event ```
void q_mdiarea_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QActionEvent* event ```
void q_mdiarea_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QActionEvent*) ```
void q_mdiarea_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QHideEvent* event ```
void q_mdiarea_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QHideEvent* event ```
void q_mdiarea_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QHideEvent*) ```
void q_mdiarea_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, const char* eventType, void* message, intptr_t* result ```
bool q_mdiarea_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, const char* eventType, void* message, intptr_t* result ```
bool q_mdiarea_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, bool (*slot)(QMdiArea*, const char*, void*, intptr_t*) ```
void q_mdiarea_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_mdiarea_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_mdiarea_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, int32_t (*slot)(QMdiArea*, enum QPaintDevice__PaintDeviceMetric) ```
void q_mdiarea_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QPainter* painter ```
void q_mdiarea_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QPainter* painter ```
void q_mdiarea_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QPainter*) ```
void q_mdiarea_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QPoint* offset ```
QPaintDevice* q_mdiarea_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QPoint* offset ```
QPaintDevice* q_mdiarea_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, QPaintDevice* (*slot)(QMdiArea*, QPoint*) ```
void q_mdiarea_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
QPainter* q_mdiarea_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
QPainter* q_mdiarea_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, QPainter* (*slot)() ```
void q_mdiarea_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QInputMethodEvent* param1 ```
void q_mdiarea_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QInputMethodEvent* param1 ```
void q_mdiarea_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QInputMethodEvent*) ```
void q_mdiarea_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_mdiarea_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_mdiarea_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, QVariant* (*slot)(QMdiArea*, enum Qt__InputMethodQuery) ```
void q_mdiarea_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, bool next ```
bool q_mdiarea_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, bool next ```
bool q_mdiarea_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, bool (*slot)(QMdiArea*, bool) ```
void q_mdiarea_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QEvent* event ```
void q_mdiarea_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QEvent* event ```
void q_mdiarea_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QEvent*) ```
void q_mdiarea_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMetaMethod* signal ```
void q_mdiarea_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMetaMethod* signal ```
void q_mdiarea_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMetaMethod*) ```
void q_mdiarea_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMetaMethod* signal ```
void q_mdiarea_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMetaMethod* signal ```
void q_mdiarea_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMetaMethod*) ```
void q_mdiarea_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, int left, int top, int right, int bottom ```
void q_mdiarea_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, int left, int top, int right, int bottom ```
void q_mdiarea_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, int, int, int, int) ```
void q_mdiarea_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
QMargins* q_mdiarea_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
QMargins* q_mdiarea_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, QMargins* (*slot)() ```
void q_mdiarea_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QPainter* param1 ```
void q_mdiarea_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QPainter* param1 ```
void q_mdiarea_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QPainter*) ```
void q_mdiarea_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
void q_mdiarea_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
void q_mdiarea_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)() ```
void q_mdiarea_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
void q_mdiarea_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
void q_mdiarea_qbase_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)() ```
void q_mdiarea_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
void q_mdiarea_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
void q_mdiarea_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)() ```
void q_mdiarea_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
bool q_mdiarea_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
bool q_mdiarea_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, bool (*slot)() ```
void q_mdiarea_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
bool q_mdiarea_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
bool q_mdiarea_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, bool (*slot)() ```
void q_mdiarea_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
QObject* q_mdiarea_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
QObject* q_mdiarea_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, QObject* (*slot)() ```
void q_mdiarea_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, int32_t (*slot)() ```
void q_mdiarea_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, const char* signal ```
int32_t q_mdiarea_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, const char* signal ```
int32_t q_mdiarea_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, int32_t (*slot)(QMdiArea*, const char*) ```
void q_mdiarea_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMetaMethod* signal ```
bool q_mdiarea_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMetaMethod* signal ```
bool q_mdiarea_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, bool (*slot)(QMdiArea*, QMetaMethod*) ```
void q_mdiarea_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QMdiArea* self ```
void q_mdiarea_delete(void* self);

/// https://doc.qt.io/qt-6/qmdiarea.html#types

typedef enum {
    QMDIAREA_AREAOPTION_DONTMAXIMIZESUBWINDOWONACTIVATION = 1
} QMdiArea__AreaOption;

typedef enum {
    QMDIAREA_WINDOWORDER_CREATIONORDER = 0,
    QMDIAREA_WINDOWORDER_STACKINGORDER = 1,
    QMDIAREA_WINDOWORDER_ACTIVATIONHISTORYORDER = 2
} QMdiArea__WindowOrder;

typedef enum {
    QMDIAREA_VIEWMODE_SUBWINDOWVIEW = 0,
    QMDIAREA_VIEWMODE_TABBEDVIEW = 1
} QMdiArea__ViewMode;

#endif
