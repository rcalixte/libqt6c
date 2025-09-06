#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSQT6C_LIBKTREEWIDGETSEARCHLINEWIDGET_H
#define SRC_EXTRAS_KITEMVIEWSQT6C_LIBKTREEWIDGETSEARCHLINEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/ktreewidgetsearchlinewidget.html

/// k_treewidgetsearchlinewidget_new constructs a new KTreeWidgetSearchLineWidget object.
///
/// @param parent QWidget*
KTreeWidgetSearchLineWidget* k_treewidgetsearchlinewidget_new(void* parent);

/// k_treewidgetsearchlinewidget_new2 constructs a new KTreeWidgetSearchLineWidget object.
///
KTreeWidgetSearchLineWidget* k_treewidgetsearchlinewidget_new2();

/// k_treewidgetsearchlinewidget_new3 constructs a new KTreeWidgetSearchLineWidget object.
///
/// @param parent QWidget*
/// @param treeWidget QTreeWidget*
KTreeWidgetSearchLineWidget* k_treewidgetsearchlinewidget_new3(void* parent, void* treeWidget);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTreeWidgetSearchLineWidget*
const QMetaObject* k_treewidgetsearchlinewidget_meta_object(void* self);

/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 const char*
void* k_treewidgetsearchlinewidget_metacast(void* self, const char* param1);

/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_treewidgetsearchlinewidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback int32_t func(KTreeWidgetSearchLineWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_treewidgetsearchlinewidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_treewidgetsearchlinewidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_treewidgetsearchlinewidget_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/ktreewidgetsearchlinewidget.html#searchLine)
///
/// @param self KTreeWidgetSearchLineWidget*
KTreeWidgetSearchLine* k_treewidgetsearchlinewidget_search_line(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktreewidgetsearchlinewidget.html#createWidgets)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_create_widgets(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktreewidgetsearchlinewidget.html#createWidgets)
///
/// Allows for overriding the related default method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func()
void k_treewidgetsearchlinewidget_on_create_widgets(void* self, void (*callback)());

/// [Qt documentation](https://api-staging.kde.org/ktreewidgetsearchlinewidget.html#createWidgets)
///
/// Base class method implementation
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_qbase_create_widgets(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktreewidgetsearchlinewidget.html#createSearchLine)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param treeWidget QTreeWidget*
KTreeWidgetSearchLine* k_treewidgetsearchlinewidget_create_search_line(void* self, void* treeWidget);

/// [Qt documentation](https://api-staging.kde.org/ktreewidgetsearchlinewidget.html#createSearchLine)
///
/// Allows for overriding the related default method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback KTreeWidgetSearchLine* func(KTreeWidgetSearchLineWidget* self, QTreeWidget* treeWidget)
void k_treewidgetsearchlinewidget_on_create_search_line(void* self, KTreeWidgetSearchLine* (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktreewidgetsearchlinewidget.html#createSearchLine)
///
/// Base class method implementation
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param treeWidget QTreeWidget*
KTreeWidgetSearchLine* k_treewidgetsearchlinewidget_qbase_create_search_line(void* self, void* treeWidget);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_treewidgetsearchlinewidget_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_treewidgetsearchlinewidget_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KTreeWidgetSearchLineWidget*
uintptr_t k_treewidgetsearchlinewidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KTreeWidgetSearchLineWidget*
uintptr_t k_treewidgetsearchlinewidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KTreeWidgetSearchLineWidget*
uintptr_t k_treewidgetsearchlinewidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KTreeWidgetSearchLineWidget*
QStyle* k_treewidgetsearchlinewidget_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param style QStyle*
void k_treewidgetsearchlinewidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KTreeWidgetSearchLineWidget*
///
/// @return enum Qt__WindowModality
int32_t k_treewidgetsearchlinewidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param windowModality enum Qt__WindowModality
void k_treewidgetsearchlinewidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QWidget*
bool k_treewidgetsearchlinewidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param enabled bool
void k_treewidgetsearchlinewidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param disabled bool
void k_treewidgetsearchlinewidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param windowModified bool
void k_treewidgetsearchlinewidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KTreeWidgetSearchLineWidget*
QRect* k_treewidgetsearchlinewidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KTreeWidgetSearchLineWidget*
const QRect* k_treewidgetsearchlinewidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KTreeWidgetSearchLineWidget*
QRect* k_treewidgetsearchlinewidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KTreeWidgetSearchLineWidget*
QPoint* k_treewidgetsearchlinewidget_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KTreeWidgetSearchLineWidget*
QSize* k_treewidgetsearchlinewidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KTreeWidgetSearchLineWidget*
QSize* k_treewidgetsearchlinewidget_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KTreeWidgetSearchLineWidget*
QRect* k_treewidgetsearchlinewidget_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KTreeWidgetSearchLineWidget*
QRect* k_treewidgetsearchlinewidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KTreeWidgetSearchLineWidget*
QRegion* k_treewidgetsearchlinewidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KTreeWidgetSearchLineWidget*
QSize* k_treewidgetsearchlinewidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KTreeWidgetSearchLineWidget*
QSize* k_treewidgetsearchlinewidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param minimumSize QSize*
void k_treewidgetsearchlinewidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param minw int
/// @param minh int
void k_treewidgetsearchlinewidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param maximumSize QSize*
void k_treewidgetsearchlinewidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param maxw int
/// @param maxh int
void k_treewidgetsearchlinewidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param minw int
void k_treewidgetsearchlinewidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param minh int
void k_treewidgetsearchlinewidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param maxw int
void k_treewidgetsearchlinewidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param maxh int
void k_treewidgetsearchlinewidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KTreeWidgetSearchLineWidget*
QSize* k_treewidgetsearchlinewidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param sizeIncrement QSize*
void k_treewidgetsearchlinewidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param w int
/// @param h int
void k_treewidgetsearchlinewidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KTreeWidgetSearchLineWidget*
QSize* k_treewidgetsearchlinewidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param baseSize QSize*
void k_treewidgetsearchlinewidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param basew int
/// @param baseh int
void k_treewidgetsearchlinewidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param fixedSize QSize*
void k_treewidgetsearchlinewidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param w int
/// @param h int
void k_treewidgetsearchlinewidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param w int
void k_treewidgetsearchlinewidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param h int
void k_treewidgetsearchlinewidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QPointF*
QPointF* k_treewidgetsearchlinewidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QPoint*
QPoint* k_treewidgetsearchlinewidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QPointF*
QPointF* k_treewidgetsearchlinewidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QPoint*
QPoint* k_treewidgetsearchlinewidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QPointF*
QPointF* k_treewidgetsearchlinewidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QPoint*
QPoint* k_treewidgetsearchlinewidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QPointF*
QPointF* k_treewidgetsearchlinewidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QPoint*
QPoint* k_treewidgetsearchlinewidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_treewidgetsearchlinewidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_treewidgetsearchlinewidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_treewidgetsearchlinewidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_treewidgetsearchlinewidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KTreeWidgetSearchLineWidget*
QWidget* k_treewidgetsearchlinewidget_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KTreeWidgetSearchLineWidget*
QWidget* k_treewidgetsearchlinewidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KTreeWidgetSearchLineWidget*
QWidget* k_treewidgetsearchlinewidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KTreeWidgetSearchLineWidget*
const QPalette* k_treewidgetsearchlinewidget_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param palette QPalette*
void k_treewidgetsearchlinewidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param backgroundRole enum QPalette__ColorRole
void k_treewidgetsearchlinewidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KTreeWidgetSearchLineWidget*
///
/// @return enum QPalette__ColorRole
int32_t k_treewidgetsearchlinewidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param foregroundRole enum QPalette__ColorRole
void k_treewidgetsearchlinewidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KTreeWidgetSearchLineWidget*
///
/// @return enum QPalette__ColorRole
int32_t k_treewidgetsearchlinewidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KTreeWidgetSearchLineWidget*
const QFont* k_treewidgetsearchlinewidget_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param font QFont*
void k_treewidgetsearchlinewidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KTreeWidgetSearchLineWidget*
QFontMetrics* k_treewidgetsearchlinewidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KTreeWidgetSearchLineWidget*
QFontInfo* k_treewidgetsearchlinewidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KTreeWidgetSearchLineWidget*
QCursor* k_treewidgetsearchlinewidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param cursor QCursor*
void k_treewidgetsearchlinewidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param enable bool
void k_treewidgetsearchlinewidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param enable bool
void k_treewidgetsearchlinewidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param mask QBitmap*
void k_treewidgetsearchlinewidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param mask QRegion*
void k_treewidgetsearchlinewidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KTreeWidgetSearchLineWidget*
QRegion* k_treewidgetsearchlinewidget_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param target QPaintDevice*
void k_treewidgetsearchlinewidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param painter QPainter*
void k_treewidgetsearchlinewidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KTreeWidgetSearchLineWidget*
QPixmap* k_treewidgetsearchlinewidget_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KTreeWidgetSearchLineWidget*
QGraphicsEffect* k_treewidgetsearchlinewidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param effect QGraphicsEffect*
void k_treewidgetsearchlinewidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param typeVal enum Qt__GestureType
void k_treewidgetsearchlinewidget_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param typeVal enum Qt__GestureType
void k_treewidgetsearchlinewidget_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param windowTitle const char*
void k_treewidgetsearchlinewidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param styleSheet const char*
void k_treewidgetsearchlinewidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLineWidget*
const char* k_treewidgetsearchlinewidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLineWidget*
const char* k_treewidgetsearchlinewidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param icon QIcon*
void k_treewidgetsearchlinewidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KTreeWidgetSearchLineWidget*
QIcon* k_treewidgetsearchlinewidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param windowIconText const char*
void k_treewidgetsearchlinewidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLineWidget*
const char* k_treewidgetsearchlinewidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param windowRole const char*
void k_treewidgetsearchlinewidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLineWidget*
const char* k_treewidgetsearchlinewidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param filePath const char*
void k_treewidgetsearchlinewidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLineWidget*
const char* k_treewidgetsearchlinewidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param level double
void k_treewidgetsearchlinewidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KTreeWidgetSearchLineWidget*
double k_treewidgetsearchlinewidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param toolTip const char*
void k_treewidgetsearchlinewidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLineWidget*
const char* k_treewidgetsearchlinewidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param msec int
void k_treewidgetsearchlinewidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param statusTip const char*
void k_treewidgetsearchlinewidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLineWidget*
const char* k_treewidgetsearchlinewidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param whatsThis const char*
void k_treewidgetsearchlinewidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLineWidget*
const char* k_treewidgetsearchlinewidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLineWidget*
const char* k_treewidgetsearchlinewidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param name const char*
void k_treewidgetsearchlinewidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLineWidget*
const char* k_treewidgetsearchlinewidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param description const char*
void k_treewidgetsearchlinewidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param direction enum Qt__LayoutDirection
void k_treewidgetsearchlinewidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KTreeWidgetSearchLineWidget*
///
/// @return enum Qt__LayoutDirection
int32_t k_treewidgetsearchlinewidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param locale QLocale*
void k_treewidgetsearchlinewidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KTreeWidgetSearchLineWidget*
QLocale* k_treewidgetsearchlinewidget_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param reason enum Qt__FocusReason
void k_treewidgetsearchlinewidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KTreeWidgetSearchLineWidget*
///
/// @return enum Qt__FocusPolicy
int32_t k_treewidgetsearchlinewidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param policy enum Qt__FocusPolicy
void k_treewidgetsearchlinewidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_treewidgetsearchlinewidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param focusProxy QWidget*
void k_treewidgetsearchlinewidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KTreeWidgetSearchLineWidget*
QWidget* k_treewidgetsearchlinewidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KTreeWidgetSearchLineWidget*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_treewidgetsearchlinewidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param policy enum Qt__ContextMenuPolicy
void k_treewidgetsearchlinewidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QCursor*
void k_treewidgetsearchlinewidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param key QKeySequence*
int32_t k_treewidgetsearchlinewidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param id int
void k_treewidgetsearchlinewidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param id int
void k_treewidgetsearchlinewidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param id int
void k_treewidgetsearchlinewidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_treewidgetsearchlinewidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_treewidgetsearchlinewidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param enable bool
void k_treewidgetsearchlinewidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KTreeWidgetSearchLineWidget*
QGraphicsProxyWidget* k_treewidgetsearchlinewidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_treewidgetsearchlinewidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QRect*
void k_treewidgetsearchlinewidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QRegion*
void k_treewidgetsearchlinewidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_treewidgetsearchlinewidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QRect*
void k_treewidgetsearchlinewidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QRegion*
void k_treewidgetsearchlinewidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param hidden bool
void k_treewidgetsearchlinewidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QWidget*
void k_treewidgetsearchlinewidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param x int
/// @param y int
void k_treewidgetsearchlinewidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QPoint*
void k_treewidgetsearchlinewidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param w int
/// @param h int
void k_treewidgetsearchlinewidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QSize*
void k_treewidgetsearchlinewidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_treewidgetsearchlinewidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param geometry QRect*
void k_treewidgetsearchlinewidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLineWidget*
char* k_treewidgetsearchlinewidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param geometry const char*
bool k_treewidgetsearchlinewidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QWidget*
bool k_treewidgetsearchlinewidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KTreeWidgetSearchLineWidget*
///
/// @return flag of enum Qt__WindowState
int32_t k_treewidgetsearchlinewidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param state flag of enum Qt__WindowState
void k_treewidgetsearchlinewidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param state flag of enum Qt__WindowState
void k_treewidgetsearchlinewidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KTreeWidgetSearchLineWidget*
QSizePolicy* k_treewidgetsearchlinewidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param sizePolicy QSizePolicy*
void k_treewidgetsearchlinewidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_treewidgetsearchlinewidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KTreeWidgetSearchLineWidget*
QRegion* k_treewidgetsearchlinewidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_treewidgetsearchlinewidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param margins QMargins*
void k_treewidgetsearchlinewidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KTreeWidgetSearchLineWidget*
QMargins* k_treewidgetsearchlinewidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KTreeWidgetSearchLineWidget*
QRect* k_treewidgetsearchlinewidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KTreeWidgetSearchLineWidget*
QLayout* k_treewidgetsearchlinewidget_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param layout QLayout*
void k_treewidgetsearchlinewidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param parent QWidget*
void k_treewidgetsearchlinewidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_treewidgetsearchlinewidget_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param dx int
/// @param dy int
void k_treewidgetsearchlinewidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_treewidgetsearchlinewidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KTreeWidgetSearchLineWidget*
QWidget* k_treewidgetsearchlinewidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KTreeWidgetSearchLineWidget*
QWidget* k_treewidgetsearchlinewidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KTreeWidgetSearchLineWidget*
QWidget* k_treewidgetsearchlinewidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param on bool
void k_treewidgetsearchlinewidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param action QAction*
void k_treewidgetsearchlinewidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param actions libqt_list /* of QAction* */
void k_treewidgetsearchlinewidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_treewidgetsearchlinewidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param before QAction*
/// @param action QAction*
void k_treewidgetsearchlinewidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param action QAction*
void k_treewidgetsearchlinewidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KTreeWidgetSearchLineWidget*
libqt_list /* of QAction* */ k_treewidgetsearchlinewidget_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param text const char*
QAction* k_treewidgetsearchlinewidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param icon QIcon*
/// @param text const char*
QAction* k_treewidgetsearchlinewidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_treewidgetsearchlinewidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_treewidgetsearchlinewidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KTreeWidgetSearchLineWidget*
QWidget* k_treewidgetsearchlinewidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param typeVal flag of enum Qt__WindowType
void k_treewidgetsearchlinewidget_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KTreeWidgetSearchLineWidget*
///
/// @return flag of enum Qt__WindowType
int64_t k_treewidgetsearchlinewidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 enum Qt__WindowType
void k_treewidgetsearchlinewidget_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param typeVal flag of enum Qt__WindowType
void k_treewidgetsearchlinewidget_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KTreeWidgetSearchLineWidget*
///
/// @return enum Qt__WindowType
int64_t k_treewidgetsearchlinewidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_treewidgetsearchlinewidget_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param x int
/// @param y int
QWidget* k_treewidgetsearchlinewidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param p QPoint*
QWidget* k_treewidgetsearchlinewidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param p QPointF*
QWidget* k_treewidgetsearchlinewidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 enum Qt__WidgetAttribute
void k_treewidgetsearchlinewidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 enum Qt__WidgetAttribute
bool k_treewidgetsearchlinewidget_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param child QWidget*
bool k_treewidgetsearchlinewidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param enabled bool
void k_treewidgetsearchlinewidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KTreeWidgetSearchLineWidget*
QBackingStore* k_treewidgetsearchlinewidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KTreeWidgetSearchLineWidget*
QWindow* k_treewidgetsearchlinewidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KTreeWidgetSearchLineWidget*
QScreen* k_treewidgetsearchlinewidget_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param screen QScreen*
void k_treewidgetsearchlinewidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_treewidgetsearchlinewidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param title const char*
void k_treewidgetsearchlinewidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, const char* title)
void k_treewidgetsearchlinewidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param icon QIcon*
void k_treewidgetsearchlinewidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QIcon* icon)
void k_treewidgetsearchlinewidget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param iconText const char*
void k_treewidgetsearchlinewidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, const char* iconText)
void k_treewidgetsearchlinewidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param pos QPoint*
void k_treewidgetsearchlinewidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QPoint* pos)
void k_treewidgetsearchlinewidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KTreeWidgetSearchLineWidget*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_treewidgetsearchlinewidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param hints flag of enum Qt__InputMethodHint
void k_treewidgetsearchlinewidget_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_treewidgetsearchlinewidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_treewidgetsearchlinewidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_treewidgetsearchlinewidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_treewidgetsearchlinewidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_treewidgetsearchlinewidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_treewidgetsearchlinewidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param rectangle QRect*
QPixmap* k_treewidgetsearchlinewidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_treewidgetsearchlinewidget_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_treewidgetsearchlinewidget_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param id int
/// @param enable bool
void k_treewidgetsearchlinewidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param id int
/// @param enable bool
void k_treewidgetsearchlinewidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_treewidgetsearchlinewidget_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_treewidgetsearchlinewidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_treewidgetsearchlinewidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_treewidgetsearchlinewidget_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLineWidget*
const char* k_treewidgetsearchlinewidget_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param name char*
void k_treewidgetsearchlinewidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param b bool
bool k_treewidgetsearchlinewidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTreeWidgetSearchLineWidget*
QThread* k_treewidgetsearchlinewidget_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param thread QThread*
bool k_treewidgetsearchlinewidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param interval int
int32_t k_treewidgetsearchlinewidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param id int
void k_treewidgetsearchlinewidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param id enum Qt__TimerId
void k_treewidgetsearchlinewidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTreeWidgetSearchLineWidget*
libqt_list /* of QObject* */ k_treewidgetsearchlinewidget_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param filterObj QObject*
void k_treewidgetsearchlinewidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param obj QObject*
void k_treewidgetsearchlinewidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_treewidgetsearchlinewidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_treewidgetsearchlinewidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_treewidgetsearchlinewidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_treewidgetsearchlinewidget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param name const char*
/// @param value QVariant*
bool k_treewidgetsearchlinewidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param name const char*
QVariant* k_treewidgetsearchlinewidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLineWidget*
const char** k_treewidgetsearchlinewidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTreeWidgetSearchLineWidget*
QBindingStorage* k_treewidgetsearchlinewidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTreeWidgetSearchLineWidget*
const QBindingStorage* k_treewidgetsearchlinewidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self)
void k_treewidgetsearchlinewidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTreeWidgetSearchLineWidget*
QObject* k_treewidgetsearchlinewidget_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param classname const char*
bool k_treewidgetsearchlinewidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_treewidgetsearchlinewidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_treewidgetsearchlinewidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_treewidgetsearchlinewidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_treewidgetsearchlinewidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QObject*
void k_treewidgetsearchlinewidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QObject* param1)
void k_treewidgetsearchlinewidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KTreeWidgetSearchLineWidget*
double k_treewidgetsearchlinewidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KTreeWidgetSearchLineWidget*
double k_treewidgetsearchlinewidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_treewidgetsearchlinewidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_treewidgetsearchlinewidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback int32_t func()
void k_treewidgetsearchlinewidget_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param visible bool
void k_treewidgetsearchlinewidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param visible bool
void k_treewidgetsearchlinewidget_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, bool visible)
void k_treewidgetsearchlinewidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
QSize* k_treewidgetsearchlinewidget_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
QSize* k_treewidgetsearchlinewidget_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback QSize* func()
void k_treewidgetsearchlinewidget_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
QSize* k_treewidgetsearchlinewidget_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
QSize* k_treewidgetsearchlinewidget_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback QSize* func()
void k_treewidgetsearchlinewidget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 int
int32_t k_treewidgetsearchlinewidget_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 int
int32_t k_treewidgetsearchlinewidget_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback int32_t func(KTreeWidgetSearchLineWidget* self, int param1)
void k_treewidgetsearchlinewidget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback bool func()
void k_treewidgetsearchlinewidget_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
QPaintEngine* k_treewidgetsearchlinewidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
QPaintEngine* k_treewidgetsearchlinewidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback QPaintEngine* func()
void k_treewidgetsearchlinewidget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QEvent*
bool k_treewidgetsearchlinewidget_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QEvent*
bool k_treewidgetsearchlinewidget_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback bool func(KTreeWidgetSearchLineWidget* self, QEvent* event)
void k_treewidgetsearchlinewidget_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QMouseEvent*
void k_treewidgetsearchlinewidget_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QMouseEvent*
void k_treewidgetsearchlinewidget_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QMouseEvent* event)
void k_treewidgetsearchlinewidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QMouseEvent*
void k_treewidgetsearchlinewidget_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QMouseEvent*
void k_treewidgetsearchlinewidget_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QMouseEvent* event)
void k_treewidgetsearchlinewidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QMouseEvent*
void k_treewidgetsearchlinewidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QMouseEvent*
void k_treewidgetsearchlinewidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QMouseEvent* event)
void k_treewidgetsearchlinewidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QMouseEvent*
void k_treewidgetsearchlinewidget_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QMouseEvent*
void k_treewidgetsearchlinewidget_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QMouseEvent* event)
void k_treewidgetsearchlinewidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QWheelEvent*
void k_treewidgetsearchlinewidget_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QWheelEvent*
void k_treewidgetsearchlinewidget_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QWheelEvent* event)
void k_treewidgetsearchlinewidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QKeyEvent*
void k_treewidgetsearchlinewidget_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QKeyEvent*
void k_treewidgetsearchlinewidget_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QKeyEvent* event)
void k_treewidgetsearchlinewidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QKeyEvent*
void k_treewidgetsearchlinewidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QKeyEvent*
void k_treewidgetsearchlinewidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QKeyEvent* event)
void k_treewidgetsearchlinewidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QFocusEvent*
void k_treewidgetsearchlinewidget_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QFocusEvent*
void k_treewidgetsearchlinewidget_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QFocusEvent* event)
void k_treewidgetsearchlinewidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QFocusEvent*
void k_treewidgetsearchlinewidget_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QFocusEvent*
void k_treewidgetsearchlinewidget_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QFocusEvent* event)
void k_treewidgetsearchlinewidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QEnterEvent*
void k_treewidgetsearchlinewidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QEnterEvent*
void k_treewidgetsearchlinewidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QEnterEvent* event)
void k_treewidgetsearchlinewidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QEvent*
void k_treewidgetsearchlinewidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QEvent*
void k_treewidgetsearchlinewidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QEvent* event)
void k_treewidgetsearchlinewidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QPaintEvent*
void k_treewidgetsearchlinewidget_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QPaintEvent*
void k_treewidgetsearchlinewidget_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QPaintEvent* event)
void k_treewidgetsearchlinewidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QMoveEvent*
void k_treewidgetsearchlinewidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QMoveEvent*
void k_treewidgetsearchlinewidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QMoveEvent* event)
void k_treewidgetsearchlinewidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QResizeEvent*
void k_treewidgetsearchlinewidget_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QResizeEvent*
void k_treewidgetsearchlinewidget_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QResizeEvent* event)
void k_treewidgetsearchlinewidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QCloseEvent*
void k_treewidgetsearchlinewidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QCloseEvent*
void k_treewidgetsearchlinewidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QCloseEvent* event)
void k_treewidgetsearchlinewidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QContextMenuEvent*
void k_treewidgetsearchlinewidget_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QContextMenuEvent*
void k_treewidgetsearchlinewidget_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QContextMenuEvent* event)
void k_treewidgetsearchlinewidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QTabletEvent*
void k_treewidgetsearchlinewidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QTabletEvent*
void k_treewidgetsearchlinewidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QTabletEvent* event)
void k_treewidgetsearchlinewidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QActionEvent*
void k_treewidgetsearchlinewidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QActionEvent*
void k_treewidgetsearchlinewidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QActionEvent* event)
void k_treewidgetsearchlinewidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QDragEnterEvent*
void k_treewidgetsearchlinewidget_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QDragEnterEvent*
void k_treewidgetsearchlinewidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QDragEnterEvent* event)
void k_treewidgetsearchlinewidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QDragMoveEvent*
void k_treewidgetsearchlinewidget_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QDragMoveEvent*
void k_treewidgetsearchlinewidget_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QDragMoveEvent* event)
void k_treewidgetsearchlinewidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QDragLeaveEvent*
void k_treewidgetsearchlinewidget_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QDragLeaveEvent*
void k_treewidgetsearchlinewidget_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QDragLeaveEvent* event)
void k_treewidgetsearchlinewidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QDropEvent*
void k_treewidgetsearchlinewidget_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QDropEvent*
void k_treewidgetsearchlinewidget_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QDropEvent* event)
void k_treewidgetsearchlinewidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QShowEvent*
void k_treewidgetsearchlinewidget_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QShowEvent*
void k_treewidgetsearchlinewidget_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QShowEvent* event)
void k_treewidgetsearchlinewidget_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QHideEvent*
void k_treewidgetsearchlinewidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QHideEvent*
void k_treewidgetsearchlinewidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QHideEvent* event)
void k_treewidgetsearchlinewidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_treewidgetsearchlinewidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_treewidgetsearchlinewidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback bool func(KTreeWidgetSearchLineWidget* self, const char* eventType, void* message, intptr_t* result)
void k_treewidgetsearchlinewidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QEvent*
void k_treewidgetsearchlinewidget_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QEvent*
void k_treewidgetsearchlinewidget_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QEvent* param1)
void k_treewidgetsearchlinewidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_treewidgetsearchlinewidget_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_treewidgetsearchlinewidget_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback int32_t func(KTreeWidgetSearchLineWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_treewidgetsearchlinewidget_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param painter QPainter*
void k_treewidgetsearchlinewidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param painter QPainter*
void k_treewidgetsearchlinewidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QPainter* painter)
void k_treewidgetsearchlinewidget_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param offset QPoint*
QPaintDevice* k_treewidgetsearchlinewidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param offset QPoint*
QPaintDevice* k_treewidgetsearchlinewidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback QPaintDevice* func(KTreeWidgetSearchLineWidget* self, QPoint* offset)
void k_treewidgetsearchlinewidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
QPainter* k_treewidgetsearchlinewidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
QPainter* k_treewidgetsearchlinewidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback QPainter* func()
void k_treewidgetsearchlinewidget_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QInputMethodEvent*
void k_treewidgetsearchlinewidget_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 QInputMethodEvent*
void k_treewidgetsearchlinewidget_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QInputMethodEvent* param1)
void k_treewidgetsearchlinewidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_treewidgetsearchlinewidget_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_treewidgetsearchlinewidget_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback QVariant* func(KTreeWidgetSearchLineWidget* self, enum Qt__InputMethodQuery param1)
void k_treewidgetsearchlinewidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param next bool
bool k_treewidgetsearchlinewidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param next bool
bool k_treewidgetsearchlinewidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback bool func(KTreeWidgetSearchLineWidget* self, bool next)
void k_treewidgetsearchlinewidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param watched QObject*
/// @param event QEvent*
bool k_treewidgetsearchlinewidget_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param watched QObject*
/// @param event QEvent*
bool k_treewidgetsearchlinewidget_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback bool func(KTreeWidgetSearchLineWidget* self, QObject* watched, QEvent* event)
void k_treewidgetsearchlinewidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QTimerEvent*
void k_treewidgetsearchlinewidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QTimerEvent*
void k_treewidgetsearchlinewidget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QTimerEvent* event)
void k_treewidgetsearchlinewidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QChildEvent*
void k_treewidgetsearchlinewidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QChildEvent*
void k_treewidgetsearchlinewidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QChildEvent* event)
void k_treewidgetsearchlinewidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QEvent*
void k_treewidgetsearchlinewidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param event QEvent*
void k_treewidgetsearchlinewidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QEvent* event)
void k_treewidgetsearchlinewidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param signal QMetaMethod*
void k_treewidgetsearchlinewidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param signal QMetaMethod*
void k_treewidgetsearchlinewidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QMetaMethod* signal)
void k_treewidgetsearchlinewidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param signal QMetaMethod*
void k_treewidgetsearchlinewidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param signal QMetaMethod*
void k_treewidgetsearchlinewidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, QMetaMethod* signal)
void k_treewidgetsearchlinewidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func()
void k_treewidgetsearchlinewidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func()
void k_treewidgetsearchlinewidget_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func()
void k_treewidgetsearchlinewidget_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback bool func()
void k_treewidgetsearchlinewidget_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
bool k_treewidgetsearchlinewidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback bool func()
void k_treewidgetsearchlinewidget_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
QObject* k_treewidgetsearchlinewidget_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
QObject* k_treewidgetsearchlinewidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback QObject* func()
void k_treewidgetsearchlinewidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
int32_t k_treewidgetsearchlinewidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback int32_t func()
void k_treewidgetsearchlinewidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param signal const char*
int32_t k_treewidgetsearchlinewidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param signal const char*
int32_t k_treewidgetsearchlinewidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback int32_t func(KTreeWidgetSearchLineWidget* self, const char* signal)
void k_treewidgetsearchlinewidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param signal QMetaMethod*
bool k_treewidgetsearchlinewidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param signal QMetaMethod*
bool k_treewidgetsearchlinewidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback bool func(KTreeWidgetSearchLineWidget* self, QMetaMethod* signal)
void k_treewidgetsearchlinewidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_treewidgetsearchlinewidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_treewidgetsearchlinewidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback double func(KTreeWidgetSearchLineWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_treewidgetsearchlinewidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTreeWidgetSearchLineWidget*
/// @param callback void func(KTreeWidgetSearchLineWidget* self, const char* objectName)
void k_treewidgetsearchlinewidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/ktreewidgetsearchlinewidget.html#dtor.KTreeWidgetSearchLineWidget)
///
/// Delete this object from C++ memory.
///
/// @param self KTreeWidgetSearchLineWidget*
void k_treewidgetsearchlinewidget_delete(void* self);

#endif
