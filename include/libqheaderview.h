#pragma once
#ifndef SRC_QT6C_LIBQHEADERVIEW_H
#define SRC_QT6C_LIBQHEADERVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html)

/// q_headerview_new constructs a new QHeaderView object.
///
/// @param orientation enum Qt__Orientation
///
QHeaderView* q_headerview_new(int32_t orientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html)

/// q_headerview_new2 constructs a new QHeaderView object.
///
/// @param orientation enum Qt__Orientation
/// @param parent QWidget*
///
QHeaderView* q_headerview_new2(int32_t orientation, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QHeaderView*
///
const QMetaObject* q_headerview_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback const QMetaObject* func()
///
void q_headerview_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QHeaderView*
///
const QMetaObject* q_headerview_qbase_meta_object(void* self);

/// @param self QHeaderView*
/// @param param1 const char*
///
void* q_headerview_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void* func(QHeaderView* self, const char* param1)
///
void q_headerview_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QHeaderView*
/// @param param1 const char*
///
void* q_headerview_qbase_metacast(void* self, const char* param1);

/// @param self QHeaderView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_headerview_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback int32_t func(QHeaderView* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_headerview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QHeaderView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_headerview_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_headerview_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setModel)
///
/// @param self QHeaderView*
/// @param model QAbstractItemModel*
///
void q_headerview_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setModel)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QAbstractItemModel* model)
///
void q_headerview_on_set_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setModel)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param model QAbstractItemModel*
///
void q_headerview_qbase_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#orientation)
///
/// @param self QHeaderView*
///
/// @return enum Qt__Orientation
///
int32_t q_headerview_orientation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#offset)
///
/// @param self QHeaderView*
///
int32_t q_headerview_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#length)
///
/// @param self QHeaderView*
///
int32_t q_headerview_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sizeHint)
///
/// @param self QHeaderView*
///
QSize* q_headerview_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback QSize* func()
///
void q_headerview_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QHeaderView*
///
QSize* q_headerview_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setVisible)
///
/// @param self QHeaderView*
/// @param v bool
///
void q_headerview_set_visible(void* self, bool v);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setVisible)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, bool v)
///
void q_headerview_on_set_visible(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setVisible)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param v bool
///
void q_headerview_qbase_set_visible(void* self, bool v);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeHint)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
int32_t q_headerview_section_size_hint(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualIndexAt)
///
/// @param self QHeaderView*
/// @param position int
///
int32_t q_headerview_visual_index_at(void* self, int position);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
///
/// @param self QHeaderView*
/// @param position int
///
int32_t q_headerview_logical_index_at(void* self, int position);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
///
/// @param self QHeaderView*
/// @param x int
/// @param y int
///
int32_t q_headerview_logical_index_at2(void* self, int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
///
/// @param self QHeaderView*
/// @param pos QPoint*
///
int32_t q_headerview_logical_index_at3(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionSize)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
int32_t q_headerview_section_size(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionPosition)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
int32_t q_headerview_section_position(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionViewportPosition)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
int32_t q_headerview_section_viewport_position(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#moveSection)
///
/// @param self QHeaderView*
/// @param from int
/// @param to int
///
void q_headerview_move_section(void* self, int from, int to);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#swapSections)
///
/// @param self QHeaderView*
/// @param first int
/// @param second int
///
void q_headerview_swap_sections(void* self, int first, int second);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeSection)
///
/// @param self QHeaderView*
/// @param logicalIndex int
/// @param size int
///
void q_headerview_resize_section(void* self, int logicalIndex, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
///
/// @param self QHeaderView*
/// @param mode enum QHeaderView__ResizeMode
///
void q_headerview_resize_sections(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isSectionHidden)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
bool q_headerview_is_section_hidden(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionHidden)
///
/// @param self QHeaderView*
/// @param logicalIndex int
/// @param hide bool
///
void q_headerview_set_section_hidden(void* self, int logicalIndex, bool hide);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#hiddenSectionCount)
///
/// @param self QHeaderView*
///
int32_t q_headerview_hidden_section_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#hideSection)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
void q_headerview_hide_section(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#showSection)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
void q_headerview_show_section(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#count)
///
/// @param self QHeaderView*
///
int32_t q_headerview_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualIndex)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
int32_t q_headerview_visual_index(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#logicalIndex)
///
/// @param self QHeaderView*
/// @param visualIndex int
///
int32_t q_headerview_logical_index(void* self, int visualIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionsMovable)
///
/// @param self QHeaderView*
/// @param movable bool
///
void q_headerview_set_sections_movable(void* self, bool movable);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsMovable)
///
/// @param self QHeaderView*
///
bool q_headerview_sections_movable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setFirstSectionMovable)
///
/// @param self QHeaderView*
/// @param movable bool
///
void q_headerview_set_first_section_movable(void* self, bool movable);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isFirstSectionMovable)
///
/// @param self QHeaderView*
///
bool q_headerview_is_first_section_movable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionsClickable)
///
/// @param self QHeaderView*
/// @param clickable bool
///
void q_headerview_set_sections_clickable(void* self, bool clickable);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsClickable)
///
/// @param self QHeaderView*
///
bool q_headerview_sections_clickable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setHighlightSections)
///
/// @param self QHeaderView*
/// @param highlight bool
///
void q_headerview_set_highlight_sections(void* self, bool highlight);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#highlightSections)
///
/// @param self QHeaderView*
///
bool q_headerview_highlight_sections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionResizeMode)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
/// @return enum QHeaderView__ResizeMode
///
int32_t q_headerview_section_resize_mode(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionResizeMode)
///
/// @param self QHeaderView*
/// @param mode enum QHeaderView__ResizeMode
///
void q_headerview_set_section_resize_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSectionResizeMode)
///
/// @param self QHeaderView*
/// @param logicalIndex int
/// @param mode enum QHeaderView__ResizeMode
///
void q_headerview_set_section_resize_mode2(void* self, int logicalIndex, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setResizeContentsPrecision)
///
/// @param self QHeaderView*
/// @param precision int
///
void q_headerview_set_resize_contents_precision(void* self, int precision);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeContentsPrecision)
///
/// @param self QHeaderView*
///
int32_t q_headerview_resize_contents_precision(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#stretchSectionCount)
///
/// @param self QHeaderView*
///
int32_t q_headerview_stretch_section_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicatorShown)
///
/// @param self QHeaderView*
/// @param show bool
///
void q_headerview_set_sort_indicator_shown(void* self, bool show);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isSortIndicatorShown)
///
/// @param self QHeaderView*
///
bool q_headerview_is_sort_indicator_shown(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicator)
///
/// @param self QHeaderView*
/// @param logicalIndex int
/// @param order enum Qt__SortOrder
///
void q_headerview_set_sort_indicator(void* self, int logicalIndex, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorSection)
///
/// @param self QHeaderView*
///
int32_t q_headerview_sort_indicator_section(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorOrder)
///
/// @param self QHeaderView*
///
/// @return enum Qt__SortOrder
///
int32_t q_headerview_sort_indicator_order(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicatorClearable)
///
/// @param self QHeaderView*
/// @param clearable bool
///
void q_headerview_set_sort_indicator_clearable(void* self, bool clearable);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isSortIndicatorClearable)
///
/// @param self QHeaderView*
///
bool q_headerview_is_sort_indicator_clearable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#stretchLastSection)
///
/// @param self QHeaderView*
///
bool q_headerview_stretch_last_section(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setStretchLastSection)
///
/// @param self QHeaderView*
/// @param stretch bool
///
void q_headerview_set_stretch_last_section(void* self, bool stretch);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#cascadingSectionResizes)
///
/// @param self QHeaderView*
///
bool q_headerview_cascading_section_resizes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setCascadingSectionResizes)
///
/// @param self QHeaderView*
/// @param enable bool
///
void q_headerview_set_cascading_section_resizes(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#defaultSectionSize)
///
/// @param self QHeaderView*
///
int32_t q_headerview_default_section_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setDefaultSectionSize)
///
/// @param self QHeaderView*
/// @param size int
///
void q_headerview_set_default_section_size(void* self, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resetDefaultSectionSize)
///
/// @param self QHeaderView*
///
void q_headerview_reset_default_section_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#minimumSectionSize)
///
/// @param self QHeaderView*
///
int32_t q_headerview_minimum_section_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setMinimumSectionSize)
///
/// @param self QHeaderView*
/// @param size int
///
void q_headerview_set_minimum_section_size(void* self, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#maximumSectionSize)
///
/// @param self QHeaderView*
///
int32_t q_headerview_maximum_section_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setMaximumSectionSize)
///
/// @param self QHeaderView*
/// @param size int
///
void q_headerview_set_maximum_section_size(void* self, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#defaultAlignment)
///
/// @param self QHeaderView*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_headerview_default_alignment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setDefaultAlignment)
///
/// @param self QHeaderView*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_headerview_set_default_alignment(void* self, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#doItemsLayout)
///
/// @param self QHeaderView*
///
void q_headerview_do_items_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#doItemsLayout)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_do_items_layout(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#doItemsLayout)
///
/// Base class method implementation
///
/// @param self QHeaderView*
///
void q_headerview_qbase_do_items_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsMoved)
///
/// @param self QHeaderView*
///
bool q_headerview_sections_moved(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsHidden)
///
/// @param self QHeaderView*
///
bool q_headerview_sections_hidden(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#saveState)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHeaderView*
///
char* q_headerview_save_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#restoreState)
///
/// @param self QHeaderView*
/// @param state const char*
///
bool q_headerview_restore_state(void* self, const char* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#reset)
///
/// @param self QHeaderView*
///
void q_headerview_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#reset)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_reset(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#reset)
///
/// Base class method implementation
///
/// @param self QHeaderView*
///
void q_headerview_qbase_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setOffset)
///
/// @param self QHeaderView*
/// @param offset int
///
void q_headerview_set_offset(void* self, int offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setOffsetToSectionPosition)
///
/// @param self QHeaderView*
/// @param visualIndex int
///
void q_headerview_set_offset_to_section_position(void* self, int visualIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setOffsetToLastSection)
///
/// @param self QHeaderView*
///
void q_headerview_set_offset_to_last_section(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#headerDataChanged)
///
/// @param self QHeaderView*
/// @param orientation enum Qt__Orientation
/// @param logicalFirst int
/// @param logicalLast int
///
void q_headerview_header_data_changed(void* self, int32_t orientation, int logicalFirst, int logicalLast);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionMoved)
///
/// @param self QHeaderView*
/// @param logicalIndex int
/// @param oldVisualIndex int
/// @param newVisualIndex int
///
void q_headerview_section_moved(void* self, int logicalIndex, int oldVisualIndex, int newVisualIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionMoved)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int logicalIndex, int oldVisualIndex, int newVisualIndex)
///
void q_headerview_on_section_moved(void* self, void (*callback)(void*, int, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionResized)
///
/// @param self QHeaderView*
/// @param logicalIndex int
/// @param oldSize int
/// @param newSize int
///
void q_headerview_section_resized(void* self, int logicalIndex, int oldSize, int newSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionResized)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int logicalIndex, int oldSize, int newSize)
///
void q_headerview_on_section_resized(void* self, void (*callback)(void*, int, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionPressed)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
void q_headerview_section_pressed(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionPressed)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int logicalIndex)
///
void q_headerview_on_section_pressed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionClicked)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
void q_headerview_section_clicked(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionClicked)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int logicalIndex)
///
void q_headerview_on_section_clicked(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionEntered)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
void q_headerview_section_entered(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionEntered)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int logicalIndex)
///
void q_headerview_on_section_entered(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionDoubleClicked)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
void q_headerview_section_double_clicked(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionDoubleClicked)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int logicalIndex)
///
void q_headerview_on_section_double_clicked(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionCountChanged)
///
/// @param self QHeaderView*
/// @param oldCount int
/// @param newCount int
///
void q_headerview_section_count_changed(void* self, int oldCount, int newCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionCountChanged)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int oldCount, int newCount)
///
void q_headerview_on_section_count_changed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionHandleDoubleClicked)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
void q_headerview_section_handle_double_clicked(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionHandleDoubleClicked)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int logicalIndex)
///
void q_headerview_on_section_handle_double_clicked(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#geometriesChanged)
///
/// @param self QHeaderView*
///
void q_headerview_geometries_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#geometriesChanged)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self)
///
void q_headerview_on_geometries_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorChanged)
///
/// @param self QHeaderView*
/// @param logicalIndex int
/// @param order enum Qt__SortOrder
///
void q_headerview_sort_indicator_changed(void* self, int logicalIndex, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorChanged)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int logicalIndex, enum Qt__SortOrder order)
///
void q_headerview_on_sort_indicator_changed(void* self, void (*callback)(void*, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorClearableChanged)
///
/// @param self QHeaderView*
/// @param clearable bool
///
void q_headerview_sort_indicator_clearable_changed(void* self, bool clearable);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorClearableChanged)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, bool clearable)
///
void q_headerview_on_sort_indicator_clearable_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateSection)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
void q_headerview_update_section(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateSection)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int logicalIndex)
///
void q_headerview_on_update_section(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateSection)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
void q_headerview_qbase_update_section(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
///
/// @param self QHeaderView*
///
void q_headerview_resize_sections2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_resize_sections2(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
///
/// Base class method implementation
///
/// @param self QHeaderView*
///
void q_headerview_qbase_resize_sections2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsInserted)
///
/// @param self QHeaderView*
/// @param parent QModelIndex*
/// @param logicalFirst int
/// @param logicalLast int
///
void q_headerview_sections_inserted(void* self, void* parent, int logicalFirst, int logicalLast);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsInserted)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QModelIndex* parent, int logicalFirst, int logicalLast)
///
void q_headerview_on_sections_inserted(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsInserted)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param parent QModelIndex*
/// @param logicalFirst int
/// @param logicalLast int
///
void q_headerview_qbase_sections_inserted(void* self, void* parent, int logicalFirst, int logicalLast);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsAboutToBeRemoved)
///
/// @param self QHeaderView*
/// @param parent QModelIndex*
/// @param logicalFirst int
/// @param logicalLast int
///
void q_headerview_sections_about_to_be_removed(void* self, void* parent, int logicalFirst, int logicalLast);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsAboutToBeRemoved)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QModelIndex* parent, int logicalFirst, int logicalLast)
///
void q_headerview_on_sections_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionsAboutToBeRemoved)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param parent QModelIndex*
/// @param logicalFirst int
/// @param logicalLast int
///
void q_headerview_qbase_sections_about_to_be_removed(void* self, void* parent, int logicalFirst, int logicalLast);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initialize)
///
/// @param self QHeaderView*
///
void q_headerview_initialize(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initialize)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_initialize(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initialize)
///
/// Base class method implementation
///
/// @param self QHeaderView*
///
void q_headerview_qbase_initialize(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
///
/// @param self QHeaderView*
///
void q_headerview_initialize_sections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_initialize_sections(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
///
/// Base class method implementation
///
/// @param self QHeaderView*
///
void q_headerview_qbase_initialize_sections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
///
/// @param self QHeaderView*
/// @param start int
/// @param end int
///
void q_headerview_initialize_sections2(void* self, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int start, int end)
///
void q_headerview_on_initialize_sections2(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param start int
/// @param end int
///
void q_headerview_qbase_initialize_sections2(void* self, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#currentChanged)
///
/// @param self QHeaderView*
/// @param current QModelIndex*
/// @param old QModelIndex*
///
void q_headerview_current_changed(void* self, void* current, void* old);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#currentChanged)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QModelIndex* current, QModelIndex* old)
///
void q_headerview_on_current_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#currentChanged)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param current QModelIndex*
/// @param old QModelIndex*
///
void q_headerview_qbase_current_changed(void* self, void* current, void* old);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#event)
///
/// @param self QHeaderView*
/// @param e QEvent*
///
bool q_headerview_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback bool func(QHeaderView* self, QEvent* e)
///
void q_headerview_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#event)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param e QEvent*
///
bool q_headerview_qbase_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#paintEvent)
///
/// @param self QHeaderView*
/// @param e QPaintEvent*
///
void q_headerview_paint_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QPaintEvent* e)
///
void q_headerview_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param e QPaintEvent*
///
void q_headerview_qbase_paint_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mousePressEvent)
///
/// @param self QHeaderView*
/// @param e QMouseEvent*
///
void q_headerview_mouse_press_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QMouseEvent* e)
///
void q_headerview_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param e QMouseEvent*
///
void q_headerview_qbase_mouse_press_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseMoveEvent)
///
/// @param self QHeaderView*
/// @param e QMouseEvent*
///
void q_headerview_mouse_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QMouseEvent* e)
///
void q_headerview_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param e QMouseEvent*
///
void q_headerview_qbase_mouse_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseReleaseEvent)
///
/// @param self QHeaderView*
/// @param e QMouseEvent*
///
void q_headerview_mouse_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QMouseEvent* e)
///
void q_headerview_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param e QMouseEvent*
///
void q_headerview_qbase_mouse_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseDoubleClickEvent)
///
/// @param self QHeaderView*
/// @param e QMouseEvent*
///
void q_headerview_mouse_double_click_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QMouseEvent* e)
///
void q_headerview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param e QMouseEvent*
///
void q_headerview_qbase_mouse_double_click_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#viewportEvent)
///
/// @param self QHeaderView*
/// @param e QEvent*
///
bool q_headerview_viewport_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#viewportEvent)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback bool func(QHeaderView* self, QEvent* e)
///
void q_headerview_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#viewportEvent)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param e QEvent*
///
bool q_headerview_qbase_viewport_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#paintSection)
///
/// @param self QHeaderView*
/// @param painter QPainter*
/// @param rect QRect*
/// @param logicalIndex int
///
void q_headerview_paint_section(void* self, void* painter, void* rect, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#paintSection)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QPainter* painter, QRect* rect, int logicalIndex)
///
void q_headerview_on_paint_section(void* self, void (*callback)(void*, void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#paintSection)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param painter QPainter*
/// @param rect QRect*
/// @param logicalIndex int
///
void q_headerview_qbase_paint_section(void* self, void* painter, void* rect, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeFromContents)
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
QSize* q_headerview_section_size_from_contents(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeFromContents)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback QSize* func(QHeaderView* self, int logicalIndex)
///
void q_headerview_on_section_size_from_contents(void* self, QSize* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeFromContents)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param logicalIndex int
///
QSize* q_headerview_qbase_section_size_from_contents(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#horizontalOffset)
///
/// @param self QHeaderView*
///
int32_t q_headerview_horizontal_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#horizontalOffset)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback int32_t func()
///
void q_headerview_on_horizontal_offset(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#horizontalOffset)
///
/// Base class method implementation
///
/// @param self QHeaderView*
///
int32_t q_headerview_qbase_horizontal_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#verticalOffset)
///
/// @param self QHeaderView*
///
int32_t q_headerview_vertical_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#verticalOffset)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback int32_t func()
///
void q_headerview_on_vertical_offset(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#verticalOffset)
///
/// Base class method implementation
///
/// @param self QHeaderView*
///
int32_t q_headerview_qbase_vertical_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateGeometries)
///
/// @param self QHeaderView*
///
void q_headerview_update_geometries(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateGeometries)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_update_geometries(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#updateGeometries)
///
/// Base class method implementation
///
/// @param self QHeaderView*
///
void q_headerview_qbase_update_geometries(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#scrollContentsBy)
///
/// @param self QHeaderView*
/// @param dx int
/// @param dy int
///
void q_headerview_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int dx, int dy)
///
void q_headerview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#scrollContentsBy)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param dx int
/// @param dy int
///
void q_headerview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#dataChanged)
///
/// @param self QHeaderView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_headerview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#dataChanged)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* )
///
void q_headerview_on_data_changed(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#dataChanged)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_headerview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#rowsInserted)
///
/// @param self QHeaderView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_headerview_rows_inserted(void* self, void* parent, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#rowsInserted)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QModelIndex* parent, int start, int end)
///
void q_headerview_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#rowsInserted)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_headerview_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualRect)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
QRect* q_headerview_visual_rect(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualRect)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback QRect* func(QHeaderView* self, QModelIndex* index)
///
void q_headerview_on_visual_rect(void* self, QRect* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualRect)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
QRect* q_headerview_qbase_visual_rect(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#scrollTo)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
///
void q_headerview_scroll_to(void* self, void* index, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#scrollTo)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint)
///
void q_headerview_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#scrollTo)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
///
void q_headerview_qbase_scroll_to(void* self, void* index, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#indexAt)
///
/// @param self QHeaderView*
/// @param p QPoint*
///
QModelIndex* q_headerview_index_at(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#indexAt)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback QModelIndex* func(QHeaderView* self, QPoint* p)
///
void q_headerview_on_index_at(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#indexAt)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param p QPoint*
///
QModelIndex* q_headerview_qbase_index_at(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isIndexHidden)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
bool q_headerview_is_index_hidden(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isIndexHidden)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback bool func(QHeaderView* self, QModelIndex* index)
///
void q_headerview_on_is_index_hidden(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#isIndexHidden)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
bool q_headerview_qbase_is_index_hidden(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#moveCursor)
///
/// @param self QHeaderView*
/// @param param1 enum QAbstractItemView__CursorAction
/// @param param2 flag of enum Qt__KeyboardModifier
///
QModelIndex* q_headerview_move_cursor(void* self, int32_t param1, int32_t param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#moveCursor)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback QModelIndex* func(QHeaderView* self, enum QAbstractItemView__CursorAction param1, flag of enum Qt__KeyboardModifier param2)
///
void q_headerview_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#moveCursor)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param param1 enum QAbstractItemView__CursorAction
/// @param param2 flag of enum Qt__KeyboardModifier
///
QModelIndex* q_headerview_qbase_move_cursor(void* self, int32_t param1, int32_t param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSelection)
///
/// @param self QHeaderView*
/// @param rect QRect*
/// @param flags flag of enum QItemSelectionModel__SelectionFlag
///
void q_headerview_set_selection(void* self, void* rect, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSelection)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QRect* rect, flag of enum QItemSelectionModel__SelectionFlag flags)
///
void q_headerview_on_set_selection(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#setSelection)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param rect QRect*
/// @param flags flag of enum QItemSelectionModel__SelectionFlag
///
void q_headerview_qbase_set_selection(void* self, void* rect, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualRegionForSelection)
///
/// @param self QHeaderView*
/// @param selection QItemSelection*
///
QRegion* q_headerview_visual_region_for_selection(void* self, void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualRegionForSelection)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback QRegion* func(QHeaderView* self, QItemSelection* selection)
///
void q_headerview_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#visualRegionForSelection)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param selection QItemSelection*
///
QRegion* q_headerview_qbase_visual_region_for_selection(void* self, void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initStyleOptionForIndex)
///
/// @param self QHeaderView*
/// @param option QStyleOptionHeader*
/// @param logicalIndex int
///
void q_headerview_init_style_option_for_index(void* self, void* option, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initStyleOptionForIndex)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QStyleOptionHeader* option, int logicalIndex)
///
void q_headerview_on_init_style_option_for_index(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initStyleOptionForIndex)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param option QStyleOptionHeader*
/// @param logicalIndex int
///
void q_headerview_qbase_init_style_option_for_index(void* self, void* option, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initStyleOption)
///
/// @param self QHeaderView*
/// @param option QStyleOptionHeader*
///
void q_headerview_init_style_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QStyleOptionHeader* option)
///
void q_headerview_on_init_style_option(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self QHeaderView*
/// @param option QStyleOptionHeader*
///
void q_headerview_qbase_init_style_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_headerview_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_headerview_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// @param self QHeaderView*
///
QAbstractItemModel* q_headerview_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// @param self QHeaderView*
///
QItemSelectionModel* q_headerview_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// @param self QHeaderView*
/// @param delegate QAbstractItemDelegate*
///
void q_headerview_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QHeaderView*
///
QAbstractItemDelegate* q_headerview_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// @param self QHeaderView*
/// @param mode enum QAbstractItemView__SelectionMode
///
void q_headerview_set_selection_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// @param self QHeaderView*
///
/// @return enum QAbstractItemView__SelectionMode
///
int32_t q_headerview_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// @param self QHeaderView*
/// @param behavior enum QAbstractItemView__SelectionBehavior
///
void q_headerview_set_selection_behavior(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// @param self QHeaderView*
///
/// @return enum QAbstractItemView__SelectionBehavior
///
int32_t q_headerview_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// @param self QHeaderView*
///
QModelIndex* q_headerview_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// @param self QHeaderView*
///
QModelIndex* q_headerview_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// @param self QHeaderView*
/// @param triggers flag of enum QAbstractItemView__EditTrigger
///
void q_headerview_set_edit_triggers(void* self, int32_t triggers);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// @param self QHeaderView*
///
/// @return flag of enum QAbstractItemView__EditTrigger
///
int32_t q_headerview_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// @param self QHeaderView*
/// @param mode enum QAbstractItemView__ScrollMode
///
void q_headerview_set_vertical_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// @param self QHeaderView*
///
/// @return enum QAbstractItemView__ScrollMode
///
int32_t q_headerview_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// @param self QHeaderView*
///
void q_headerview_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// @param self QHeaderView*
/// @param mode enum QAbstractItemView__ScrollMode
///
void q_headerview_set_horizontal_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// @param self QHeaderView*
///
/// @return enum QAbstractItemView__ScrollMode
///
int32_t q_headerview_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// @param self QHeaderView*
///
void q_headerview_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// @param self QHeaderView*
/// @param enable bool
///
void q_headerview_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// @param self QHeaderView*
///
bool q_headerview_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// @param self QHeaderView*
/// @param margin int
///
void q_headerview_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// @param self QHeaderView*
///
int32_t q_headerview_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// @param self QHeaderView*
/// @param enable bool
///
void q_headerview_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// @param self QHeaderView*
///
bool q_headerview_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// @param self QHeaderView*
/// @param enable bool
///
void q_headerview_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// @param self QHeaderView*
///
bool q_headerview_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// @param self QHeaderView*
/// @param enable bool
///
void q_headerview_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// @param self QHeaderView*
///
bool q_headerview_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// @param self QHeaderView*
/// @param overwrite bool
///
void q_headerview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// @param self QHeaderView*
///
bool q_headerview_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// @param self QHeaderView*
/// @param behavior enum QAbstractItemView__DragDropMode
///
void q_headerview_set_drag_drop_mode(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// @param self QHeaderView*
///
/// @return enum QAbstractItemView__DragDropMode
///
int32_t q_headerview_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// @param self QHeaderView*
/// @param dropAction enum Qt__DropAction
///
void q_headerview_set_default_drop_action(void* self, int32_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// @param self QHeaderView*
///
/// @return enum Qt__DropAction
///
int32_t q_headerview_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// @param self QHeaderView*
/// @param enable bool
///
void q_headerview_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// @param self QHeaderView*
///
bool q_headerview_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// @param self QHeaderView*
/// @param size QSize*
///
void q_headerview_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// @param self QHeaderView*
///
QSize* q_headerview_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// @param self QHeaderView*
/// @param mode enum Qt__TextElideMode
///
void q_headerview_set_text_elide_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// @param self QHeaderView*
///
/// @return enum Qt__TextElideMode
///
int32_t q_headerview_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
QSize* q_headerview_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
void q_headerview_open_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
void q_headerview_close_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
bool q_headerview_is_persistent_editor_open(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
/// @param widget QWidget*
///
void q_headerview_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
QWidget* q_headerview_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// @param self QHeaderView*
/// @param row int
/// @param delegate QAbstractItemDelegate*
///
void q_headerview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// @param self QHeaderView*
/// @param row int
///
QAbstractItemDelegate* q_headerview_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// @param self QHeaderView*
/// @param column int
/// @param delegate QAbstractItemDelegate*
///
void q_headerview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// @param self QHeaderView*
/// @param column int
///
QAbstractItemDelegate* q_headerview_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_headerview_item_delegate2(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
void q_headerview_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// @param self QHeaderView*
///
void q_headerview_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
void q_headerview_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// @param self QHeaderView*
///
void q_headerview_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// @param self QHeaderView*
///
void q_headerview_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
void q_headerview_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
void q_headerview_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QModelIndex* index)
///
void q_headerview_on_pressed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
void q_headerview_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QModelIndex* index)
///
void q_headerview_on_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
void q_headerview_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QModelIndex* index)
///
void q_headerview_on_double_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
void q_headerview_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QModelIndex* index)
///
void q_headerview_on_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
void q_headerview_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QModelIndex* index)
///
void q_headerview_on_entered(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QHeaderView*
///
void q_headerview_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self)
///
void q_headerview_on_viewport_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QHeaderView*
/// @param size QSize*
///
void q_headerview_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QSize* size)
///
void q_headerview_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QHeaderView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_headerview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QHeaderView*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_headerview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QHeaderView*
///
QScrollBar* q_headerview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QHeaderView*
/// @param scrollbar QScrollBar*
///
void q_headerview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QHeaderView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_headerview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QHeaderView*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_headerview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QHeaderView*
///
QScrollBar* q_headerview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QHeaderView*
/// @param scrollbar QScrollBar*
///
void q_headerview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QHeaderView*
///
QWidget* q_headerview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QHeaderView*
/// @param widget QWidget*
///
void q_headerview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QHeaderView*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_headerview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QHeaderView*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list q_headerview_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QHeaderView*
///
QWidget* q_headerview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QHeaderView*
/// @param widget QWidget*
///
void q_headerview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QHeaderView*
///
QSize* q_headerview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QHeaderView*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t q_headerview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QHeaderView*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void q_headerview_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QHeaderView*
///
int32_t q_headerview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QHeaderView*
/// @param frameStyle int
///
void q_headerview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QHeaderView*
///
int32_t q_headerview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QHeaderView*
///
/// @return enum QFrame__Shape
///
int32_t q_headerview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QHeaderView*
/// @param frameShape enum QFrame__Shape
///
void q_headerview_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QHeaderView*
///
/// @return enum QFrame__Shadow
///
int32_t q_headerview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QHeaderView*
/// @param frameShadow enum QFrame__Shadow
///
void q_headerview_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QHeaderView*
///
int32_t q_headerview_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QHeaderView*
/// @param lineWidth int
///
void q_headerview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QHeaderView*
///
int32_t q_headerview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QHeaderView*
/// @param midLineWidth int
///
void q_headerview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QHeaderView*
///
QRect* q_headerview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QHeaderView*
/// @param frameRect QRect*
///
void q_headerview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QHeaderView*
///
uintptr_t q_headerview_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QHeaderView*
///
void q_headerview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QHeaderView*
///
uintptr_t q_headerview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QHeaderView*
///
uintptr_t q_headerview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QHeaderView*
///
QStyle* q_headerview_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QHeaderView*
/// @param style QStyle*
///
void q_headerview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QHeaderView*
///
bool q_headerview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QHeaderView*
///
bool q_headerview_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QHeaderView*
///
bool q_headerview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QHeaderView*
///
/// @return enum Qt__WindowModality
///
int32_t q_headerview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QHeaderView*
/// @param windowModality enum Qt__WindowModality
///
void q_headerview_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QHeaderView*
///
bool q_headerview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QHeaderView*
/// @param param1 QWidget*
///
bool q_headerview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QHeaderView*
/// @param enabled bool
///
void q_headerview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QHeaderView*
/// @param disabled bool
///
void q_headerview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QHeaderView*
/// @param windowModified bool
///
void q_headerview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QHeaderView*
///
QRect* q_headerview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QHeaderView*
///
const QRect* q_headerview_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QHeaderView*
///
QRect* q_headerview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QHeaderView*
///
int32_t q_headerview_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QHeaderView*
///
int32_t q_headerview_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QHeaderView*
///
QPoint* q_headerview_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QHeaderView*
///
QSize* q_headerview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QHeaderView*
///
QSize* q_headerview_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QHeaderView*
///
int32_t q_headerview_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QHeaderView*
///
int32_t q_headerview_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QHeaderView*
///
QRect* q_headerview_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QHeaderView*
///
QRect* q_headerview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QHeaderView*
///
QRegion* q_headerview_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QHeaderView*
///
QSize* q_headerview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QHeaderView*
///
QSize* q_headerview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QHeaderView*
///
int32_t q_headerview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QHeaderView*
///
int32_t q_headerview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QHeaderView*
///
int32_t q_headerview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QHeaderView*
///
int32_t q_headerview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QHeaderView*
/// @param minimumSize QSize*
///
void q_headerview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QHeaderView*
/// @param minw int
/// @param minh int
///
void q_headerview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QHeaderView*
/// @param maximumSize QSize*
///
void q_headerview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QHeaderView*
/// @param maxw int
/// @param maxh int
///
void q_headerview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QHeaderView*
/// @param minw int
///
void q_headerview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QHeaderView*
/// @param minh int
///
void q_headerview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QHeaderView*
/// @param maxw int
///
void q_headerview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QHeaderView*
/// @param maxh int
///
void q_headerview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QHeaderView*
///
QSize* q_headerview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QHeaderView*
/// @param sizeIncrement QSize*
///
void q_headerview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QHeaderView*
/// @param w int
/// @param h int
///
void q_headerview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QHeaderView*
///
QSize* q_headerview_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QHeaderView*
/// @param baseSize QSize*
///
void q_headerview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QHeaderView*
/// @param basew int
/// @param baseh int
///
void q_headerview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QHeaderView*
/// @param fixedSize QSize*
///
void q_headerview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QHeaderView*
/// @param w int
/// @param h int
///
void q_headerview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QHeaderView*
/// @param w int
///
void q_headerview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QHeaderView*
/// @param h int
///
void q_headerview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QHeaderView*
/// @param param1 QPointF*
///
QPointF* q_headerview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QHeaderView*
/// @param param1 QPoint*
///
QPoint* q_headerview_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QHeaderView*
/// @param param1 QPointF*
///
QPointF* q_headerview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QHeaderView*
/// @param param1 QPoint*
///
QPoint* q_headerview_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QHeaderView*
/// @param param1 QPointF*
///
QPointF* q_headerview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QHeaderView*
/// @param param1 QPoint*
///
QPoint* q_headerview_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QHeaderView*
/// @param param1 QPointF*
///
QPointF* q_headerview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QHeaderView*
/// @param param1 QPoint*
///
QPoint* q_headerview_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QHeaderView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_headerview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QHeaderView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_headerview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QHeaderView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_headerview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QHeaderView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_headerview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QHeaderView*
///
QWidget* q_headerview_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QHeaderView*
///
QWidget* q_headerview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QHeaderView*
///
QWidget* q_headerview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QHeaderView*
///
const QPalette* q_headerview_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QHeaderView*
/// @param palette QPalette*
///
void q_headerview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QHeaderView*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_headerview_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QHeaderView*
///
/// @return enum QPalette__ColorRole
///
int32_t q_headerview_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QHeaderView*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_headerview_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QHeaderView*
///
/// @return enum QPalette__ColorRole
///
int32_t q_headerview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QHeaderView*
///
const QFont* q_headerview_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QHeaderView*
/// @param font QFont*
///
void q_headerview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QHeaderView*
///
QFontMetrics* q_headerview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QHeaderView*
///
QFontInfo* q_headerview_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QHeaderView*
///
QCursor* q_headerview_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QHeaderView*
/// @param cursor QCursor*
///
void q_headerview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QHeaderView*
///
void q_headerview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QHeaderView*
/// @param enable bool
///
void q_headerview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QHeaderView*
///
bool q_headerview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QHeaderView*
///
bool q_headerview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QHeaderView*
/// @param enable bool
///
void q_headerview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QHeaderView*
///
bool q_headerview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QHeaderView*
/// @param mask QBitmap*
///
void q_headerview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QHeaderView*
/// @param mask QRegion*
///
void q_headerview_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QHeaderView*
///
QRegion* q_headerview_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QHeaderView*
///
void q_headerview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QHeaderView*
/// @param target QPaintDevice*
///
void q_headerview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QHeaderView*
/// @param painter QPainter*
///
void q_headerview_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QHeaderView*
///
QPixmap* q_headerview_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QHeaderView*
///
QGraphicsEffect* q_headerview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QHeaderView*
/// @param effect QGraphicsEffect*
///
void q_headerview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QHeaderView*
/// @param type enum Qt__GestureType
///
void q_headerview_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QHeaderView*
/// @param type enum Qt__GestureType
///
void q_headerview_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QHeaderView*
/// @param windowTitle const char*
///
void q_headerview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QHeaderView*
/// @param styleSheet const char*
///
void q_headerview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHeaderView*
///
const char* q_headerview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHeaderView*
///
const char* q_headerview_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QHeaderView*
/// @param icon QIcon*
///
void q_headerview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QHeaderView*
///
QIcon* q_headerview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QHeaderView*
/// @param windowIconText const char*
///
void q_headerview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHeaderView*
///
const char* q_headerview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QHeaderView*
/// @param windowRole const char*
///
void q_headerview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHeaderView*
///
const char* q_headerview_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QHeaderView*
/// @param filePath const char*
///
void q_headerview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHeaderView*
///
const char* q_headerview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QHeaderView*
/// @param level double
///
void q_headerview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QHeaderView*
///
double q_headerview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QHeaderView*
///
bool q_headerview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QHeaderView*
/// @param toolTip const char*
///
void q_headerview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHeaderView*
///
const char* q_headerview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QHeaderView*
/// @param msec int
///
void q_headerview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QHeaderView*
///
int32_t q_headerview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QHeaderView*
/// @param statusTip const char*
///
void q_headerview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHeaderView*
///
const char* q_headerview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QHeaderView*
/// @param whatsThis const char*
///
void q_headerview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHeaderView*
///
const char* q_headerview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHeaderView*
///
const char* q_headerview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QHeaderView*
/// @param name const char*
///
void q_headerview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHeaderView*
///
const char* q_headerview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QHeaderView*
/// @param description const char*
///
void q_headerview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QHeaderView*
/// @param direction enum Qt__LayoutDirection
///
void q_headerview_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QHeaderView*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_headerview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QHeaderView*
///
void q_headerview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QHeaderView*
/// @param locale QLocale*
///
void q_headerview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QHeaderView*
///
QLocale* q_headerview_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QHeaderView*
///
void q_headerview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QHeaderView*
///
bool q_headerview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QHeaderView*
///
bool q_headerview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QHeaderView*
///
void q_headerview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QHeaderView*
///
bool q_headerview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QHeaderView*
///
void q_headerview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QHeaderView*
///
void q_headerview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QHeaderView*
/// @param reason enum Qt__FocusReason
///
void q_headerview_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QHeaderView*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_headerview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QHeaderView*
/// @param policy enum Qt__FocusPolicy
///
void q_headerview_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QHeaderView*
///
bool q_headerview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_headerview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QHeaderView*
/// @param focusProxy QWidget*
///
void q_headerview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QHeaderView*
///
QWidget* q_headerview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QHeaderView*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_headerview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QHeaderView*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_headerview_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QHeaderView*
///
void q_headerview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QHeaderView*
/// @param param1 QCursor*
///
void q_headerview_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QHeaderView*
///
void q_headerview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QHeaderView*
///
void q_headerview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QHeaderView*
///
void q_headerview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QHeaderView*
/// @param key QKeySequence*
///
int32_t q_headerview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QHeaderView*
/// @param id int
///
void q_headerview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QHeaderView*
/// @param id int
///
void q_headerview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QHeaderView*
/// @param id int
///
void q_headerview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_headerview_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_headerview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QHeaderView*
///
bool q_headerview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QHeaderView*
/// @param enable bool
///
void q_headerview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QHeaderView*
///
QGraphicsProxyWidget* q_headerview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QHeaderView*
///
void q_headerview_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QHeaderView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_headerview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QHeaderView*
/// @param param1 QRect*
///
void q_headerview_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QHeaderView*
/// @param param1 QRegion*
///
void q_headerview_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QHeaderView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_headerview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QHeaderView*
/// @param param1 QRect*
///
void q_headerview_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QHeaderView*
/// @param param1 QRegion*
///
void q_headerview_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QHeaderView*
/// @param hidden bool
///
void q_headerview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QHeaderView*
///
void q_headerview_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QHeaderView*
///
void q_headerview_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QHeaderView*
///
void q_headerview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QHeaderView*
///
void q_headerview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QHeaderView*
///
void q_headerview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QHeaderView*
///
void q_headerview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QHeaderView*
///
bool q_headerview_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QHeaderView*
///
void q_headerview_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QHeaderView*
///
void q_headerview_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QHeaderView*
/// @param param1 QWidget*
///
void q_headerview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QHeaderView*
/// @param x int
/// @param y int
///
void q_headerview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QHeaderView*
/// @param param1 QPoint*
///
void q_headerview_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QHeaderView*
/// @param w int
/// @param h int
///
void q_headerview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QHeaderView*
/// @param param1 QSize*
///
void q_headerview_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QHeaderView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_headerview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QHeaderView*
/// @param geometry QRect*
///
void q_headerview_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHeaderView*
///
char* q_headerview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QHeaderView*
/// @param geometry const char*
///
bool q_headerview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QHeaderView*
///
void q_headerview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QHeaderView*
///
bool q_headerview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QHeaderView*
/// @param param1 QWidget*
///
bool q_headerview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QHeaderView*
///
bool q_headerview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QHeaderView*
///
bool q_headerview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QHeaderView*
///
bool q_headerview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QHeaderView*
///
bool q_headerview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QHeaderView*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_headerview_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QHeaderView*
/// @param state flag of enum Qt__WindowState
///
void q_headerview_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QHeaderView*
/// @param state flag of enum Qt__WindowState
///
void q_headerview_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QHeaderView*
///
QSizePolicy* q_headerview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QHeaderView*
/// @param sizePolicy QSizePolicy*
///
void q_headerview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QHeaderView*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_headerview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QHeaderView*
///
QRegion* q_headerview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QHeaderView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_headerview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QHeaderView*
/// @param margins QMargins*
///
void q_headerview_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QHeaderView*
///
QMargins* q_headerview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QHeaderView*
///
QRect* q_headerview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QHeaderView*
///
QLayout* q_headerview_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QHeaderView*
/// @param layout QLayout*
///
void q_headerview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QHeaderView*
///
void q_headerview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QHeaderView*
/// @param parent QWidget*
///
void q_headerview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QHeaderView*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_headerview_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QHeaderView*
/// @param dx int
/// @param dy int
///
void q_headerview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QHeaderView*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_headerview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QHeaderView*
///
QWidget* q_headerview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QHeaderView*
///
QWidget* q_headerview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QHeaderView*
///
QWidget* q_headerview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QHeaderView*
///
bool q_headerview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QHeaderView*
/// @param on bool
///
void q_headerview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QHeaderView*
/// @param action QAction*
///
void q_headerview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QHeaderView*
/// @param actions libqt_list of QAction*
///
void q_headerview_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QHeaderView*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_headerview_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QHeaderView*
/// @param before QAction*
/// @param action QAction*
///
void q_headerview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QHeaderView*
/// @param action QAction*
///
void q_headerview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QHeaderView*
///
/// @return libqt_list of QAction*
///
libqt_list q_headerview_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QHeaderView*
/// @param text const char*
///
QAction* q_headerview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QHeaderView*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_headerview_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QHeaderView*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_headerview_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QHeaderView*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_headerview_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QHeaderView*
///
QWidget* q_headerview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QHeaderView*
/// @param type flag of enum Qt__WindowType
///
void q_headerview_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QHeaderView*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_headerview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QHeaderView*
/// @param param1 enum Qt__WindowType
///
void q_headerview_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QHeaderView*
/// @param type flag of enum Qt__WindowType
///
void q_headerview_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QHeaderView*
///
/// @return enum Qt__WindowType
///
int32_t q_headerview_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_headerview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QHeaderView*
/// @param x int
/// @param y int
///
QWidget* q_headerview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QHeaderView*
/// @param p QPoint*
///
QWidget* q_headerview_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QHeaderView*
/// @param p QPointF*
///
QWidget* q_headerview_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QHeaderView*
/// @param param1 enum Qt__WidgetAttribute
///
void q_headerview_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QHeaderView*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_headerview_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QHeaderView*
///
void q_headerview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QHeaderView*
/// @param child QWidget*
///
bool q_headerview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QHeaderView*
///
bool q_headerview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QHeaderView*
/// @param enabled bool
///
void q_headerview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QHeaderView*
///
QBackingStore* q_headerview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QHeaderView*
///
QWindow* q_headerview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QHeaderView*
///
QScreen* q_headerview_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QHeaderView*
/// @param screen QScreen*
///
void q_headerview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_headerview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QHeaderView*
/// @param title const char*
///
void q_headerview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, const char* title)
///
void q_headerview_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QHeaderView*
/// @param icon QIcon*
///
void q_headerview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QIcon* icon)
///
void q_headerview_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QHeaderView*
/// @param iconText const char*
///
void q_headerview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, const char* iconText)
///
void q_headerview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QHeaderView*
/// @param pos QPoint*
///
void q_headerview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QPoint* pos)
///
void q_headerview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QHeaderView*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_headerview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QHeaderView*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_headerview_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QHeaderView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_headerview_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QHeaderView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_headerview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QHeaderView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_headerview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QHeaderView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_headerview_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QHeaderView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_headerview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QHeaderView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_headerview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QHeaderView*
/// @param rectangle QRect*
///
QPixmap* q_headerview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QHeaderView*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_headerview_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QHeaderView*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_headerview_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QHeaderView*
/// @param id int
/// @param enable bool
///
void q_headerview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QHeaderView*
/// @param id int
/// @param enable bool
///
void q_headerview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QHeaderView*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_headerview_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QHeaderView*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_headerview_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_headerview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_headerview_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHeaderView*
///
const char* q_headerview_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QHeaderView*
/// @param name char*
///
void q_headerview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QHeaderView*
///
bool q_headerview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QHeaderView*
///
bool q_headerview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QHeaderView*
///
bool q_headerview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QHeaderView*
///
bool q_headerview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QHeaderView*
/// @param b bool
///
bool q_headerview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QHeaderView*
///
QThread* q_headerview_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHeaderView*
/// @param thread QThread*
///
bool q_headerview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHeaderView*
/// @param interval int
///
int32_t q_headerview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHeaderView*
/// @param time int64_t of nanoseconds
///
int32_t q_headerview_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHeaderView*
/// @param id int
///
void q_headerview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHeaderView*
/// @param id enum Qt__TimerId
///
void q_headerview_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QHeaderView*
///
/// @return libqt_list of QObject*
///
libqt_list q_headerview_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QHeaderView*
/// @param filterObj QObject*
///
void q_headerview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QHeaderView*
/// @param obj QObject*
///
void q_headerview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_headerview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHeaderView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_headerview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_headerview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_headerview_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QHeaderView*
///
void q_headerview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QHeaderView*
///
void q_headerview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QHeaderView*
/// @param name const char*
/// @param value QVariant*
///
bool q_headerview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QHeaderView*
/// @param name const char*
///
QVariant* q_headerview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHeaderView*
///
const char** q_headerview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHeaderView*
///
QBindingStorage* q_headerview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHeaderView*
///
const QBindingStorage* q_headerview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHeaderView*
///
void q_headerview_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self)
///
void q_headerview_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QHeaderView*
///
QObject* q_headerview_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QHeaderView*
/// @param classname const char*
///
bool q_headerview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QHeaderView*
///
void q_headerview_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHeaderView*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_headerview_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHeaderView*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_headerview_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHeaderView*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_headerview_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_headerview_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHeaderView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_headerview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHeaderView*
/// @param param1 QObject*
///
void q_headerview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QObject* param1)
///
void q_headerview_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QHeaderView*
///
bool q_headerview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QHeaderView*
///
int32_t q_headerview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QHeaderView*
///
int32_t q_headerview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QHeaderView*
///
int32_t q_headerview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QHeaderView*
///
int32_t q_headerview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QHeaderView*
///
int32_t q_headerview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QHeaderView*
///
int32_t q_headerview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QHeaderView*
///
double q_headerview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QHeaderView*
///
double q_headerview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QHeaderView*
///
int32_t q_headerview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QHeaderView*
///
int32_t q_headerview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_headerview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_headerview_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param selectionModel QItemSelectionModel*
///
void q_headerview_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param selectionModel QItemSelectionModel*
///
void q_headerview_qbase_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QItemSelectionModel* selectionModel)
///
void q_headerview_on_set_selection_model(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param search const char*
///
void q_headerview_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param search const char*
///
void q_headerview_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, const char* search)
///
void q_headerview_on_keyboard_search(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param row int
///
int32_t q_headerview_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param row int
///
int32_t q_headerview_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback int32_t func(QHeaderView* self, int row)
///
void q_headerview_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param column int
///
int32_t q_headerview_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param column int
///
int32_t q_headerview_qbase_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback int32_t func(QHeaderView* self, int column)
///
void q_headerview_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_headerview_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_headerview_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback QAbstractItemDelegate* func(QHeaderView* self, QModelIndex* index)
///
void q_headerview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_headerview_input_method_query(void* self, int32_t query);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_headerview_qbase_input_method_query(void* self, int32_t query);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback QVariant* func(QHeaderView* self, enum Qt__InputMethodQuery query)
///
void q_headerview_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
void q_headerview_set_root_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param index QModelIndex*
///
void q_headerview_qbase_set_root_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QModelIndex* index)
///
void q_headerview_on_set_root_index(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_qbase_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_select_all(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_headerview_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_headerview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QModelIndex* parent, int start, int end)
///
void q_headerview_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void q_headerview_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void q_headerview_qbase_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QItemSelection* selected, QItemSelection* deselected)
///
void q_headerview_on_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_update_editor_data(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_update_editor_geometries(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param action int
///
void q_headerview_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param action int
///
void q_headerview_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int action)
///
void q_headerview_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param action int
///
void q_headerview_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param action int
///
void q_headerview_qbase_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int action)
///
void q_headerview_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param value int
///
void q_headerview_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param value int
///
void q_headerview_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int value)
///
void q_headerview_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param value int
///
void q_headerview_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param value int
///
void q_headerview_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int value)
///
void q_headerview_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void q_headerview_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void q_headerview_qbase_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
///
void q_headerview_on_close_editor(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param editor QWidget*
///
void q_headerview_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param editor QWidget*
///
void q_headerview_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QWidget* editor)
///
void q_headerview_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param editor QObject*
///
void q_headerview_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param editor QObject*
///
void q_headerview_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QObject* editor)
///
void q_headerview_on_editor_destroyed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_headerview_selected_indexes(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_headerview_qbase_selected_indexes(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback QModelIndex** func()
///
void q_headerview_on_selected_indexes(void* self, QModelIndex** (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
///
bool q_headerview_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
///
bool q_headerview_qbase_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback bool func(QHeaderView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event)
///
void q_headerview_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
///
int32_t q_headerview_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
///
int32_t q_headerview_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback int32_t func(QHeaderView* self, QModelIndex* index, QEvent* event)
///
void q_headerview_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param supportedActions flag of enum Qt__DropAction
///
void q_headerview_start_drag(void* self, int32_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param supportedActions flag of enum Qt__DropAction
///
void q_headerview_qbase_start_drag(void* self, int32_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, flag of enum Qt__DropAction supportedActions)
///
void q_headerview_on_start_drag(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param option QStyleOptionViewItem*
///
void q_headerview_init_view_item_option(void* self, void* option);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param option QStyleOptionViewItem*
///
void q_headerview_qbase_init_view_item_option(void* self, void* option);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QStyleOptionViewItem* option)
///
void q_headerview_on_init_view_item_option(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param next bool
///
bool q_headerview_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param next bool
///
bool q_headerview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback bool func(QHeaderView* self, bool next)
///
void q_headerview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QDragEnterEvent*
///
void q_headerview_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QDragEnterEvent*
///
void q_headerview_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QDragEnterEvent* event)
///
void q_headerview_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QDragMoveEvent*
///
void q_headerview_drag_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QDragMoveEvent*
///
void q_headerview_qbase_drag_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QDragMoveEvent* event)
///
void q_headerview_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QDragLeaveEvent*
///
void q_headerview_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QDragLeaveEvent*
///
void q_headerview_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QDragLeaveEvent* event)
///
void q_headerview_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QDropEvent*
///
void q_headerview_drop_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QDropEvent*
///
void q_headerview_qbase_drop_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QDropEvent* event)
///
void q_headerview_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QFocusEvent*
///
void q_headerview_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QFocusEvent*
///
void q_headerview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QFocusEvent* event)
///
void q_headerview_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QFocusEvent*
///
void q_headerview_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QFocusEvent*
///
void q_headerview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QFocusEvent* event)
///
void q_headerview_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QKeyEvent*
///
void q_headerview_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QKeyEvent*
///
void q_headerview_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QKeyEvent* event)
///
void q_headerview_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QResizeEvent*
///
void q_headerview_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QResizeEvent*
///
void q_headerview_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QResizeEvent* event)
///
void q_headerview_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QTimerEvent*
///
void q_headerview_timer_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QTimerEvent*
///
void q_headerview_qbase_timer_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QTimerEvent* event)
///
void q_headerview_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QInputMethodEvent*
///
void q_headerview_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QInputMethodEvent*
///
void q_headerview_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QInputMethodEvent* event)
///
void q_headerview_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param object QObject*
/// @param event QEvent*
///
bool q_headerview_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param object QObject*
/// @param event QEvent*
///
bool q_headerview_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback bool func(QHeaderView* self, QObject* object, QEvent* event)
///
void q_headerview_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
QSize* q_headerview_viewport_size_hint(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
QSize* q_headerview_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback QSize* func()
///
void q_headerview_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
QSize* q_headerview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
QSize* q_headerview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback QSize* func()
///
void q_headerview_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param viewport QWidget*
///
void q_headerview_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param viewport QWidget*
///
void q_headerview_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QWidget* viewport)
///
void q_headerview_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param param1 QWheelEvent*
///
void q_headerview_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param param1 QWheelEvent*
///
void q_headerview_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QWheelEvent* param1)
///
void q_headerview_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param param1 QContextMenuEvent*
///
void q_headerview_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param param1 QContextMenuEvent*
///
void q_headerview_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QContextMenuEvent* param1)
///
void q_headerview_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param param1 QEvent*
///
void q_headerview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param param1 QEvent*
///
void q_headerview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QEvent* param1)
///
void q_headerview_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
int32_t q_headerview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
int32_t q_headerview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback int32_t func()
///
void q_headerview_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param param1 int
///
int32_t q_headerview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param param1 int
///
int32_t q_headerview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback int32_t func(QHeaderView* self, int param1)
///
void q_headerview_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
bool q_headerview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
bool q_headerview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback bool func()
///
void q_headerview_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
QPaintEngine* q_headerview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
QPaintEngine* q_headerview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback QPaintEngine* func()
///
void q_headerview_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QKeyEvent*
///
void q_headerview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QKeyEvent*
///
void q_headerview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QKeyEvent* event)
///
void q_headerview_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QEnterEvent*
///
void q_headerview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QEnterEvent*
///
void q_headerview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QEnterEvent* event)
///
void q_headerview_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QEvent*
///
void q_headerview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QEvent*
///
void q_headerview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QEvent* event)
///
void q_headerview_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QMoveEvent*
///
void q_headerview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QMoveEvent*
///
void q_headerview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QMoveEvent* event)
///
void q_headerview_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QCloseEvent*
///
void q_headerview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QCloseEvent*
///
void q_headerview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QCloseEvent* event)
///
void q_headerview_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QTabletEvent*
///
void q_headerview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QTabletEvent*
///
void q_headerview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QTabletEvent* event)
///
void q_headerview_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QActionEvent*
///
void q_headerview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QActionEvent*
///
void q_headerview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QActionEvent* event)
///
void q_headerview_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QShowEvent*
///
void q_headerview_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QShowEvent*
///
void q_headerview_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QShowEvent* event)
///
void q_headerview_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QHideEvent*
///
void q_headerview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QHideEvent*
///
void q_headerview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QHideEvent* event)
///
void q_headerview_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_headerview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_headerview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback bool func(QHeaderView* self, const char* eventType, void* message, intptr_t* result)
///
void q_headerview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_headerview_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_headerview_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback int32_t func(QHeaderView* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_headerview_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param painter QPainter*
///
void q_headerview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param painter QPainter*
///
void q_headerview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QPainter* painter)
///
void q_headerview_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param offset QPoint*
///
QPaintDevice* q_headerview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param offset QPoint*
///
QPaintDevice* q_headerview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback QPaintDevice* func(QHeaderView* self, QPoint* offset)
///
void q_headerview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
QPainter* q_headerview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
QPainter* q_headerview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback QPainter* func()
///
void q_headerview_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QChildEvent*
///
void q_headerview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QChildEvent*
///
void q_headerview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QChildEvent* event)
///
void q_headerview_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param event QEvent*
///
void q_headerview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param event QEvent*
///
void q_headerview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QEvent* event)
///
void q_headerview_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param signal QMetaMethod*
///
void q_headerview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param signal QMetaMethod*
///
void q_headerview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QMetaMethod* signal)
///
void q_headerview_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param signal QMetaMethod*
///
void q_headerview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param signal QMetaMethod*
///
void q_headerview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QMetaMethod* signal)
///
void q_headerview_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
/// @return enum QAbstractItemView__State
///
int32_t q_headerview_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
/// @return enum QAbstractItemView__State
///
int32_t q_headerview_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback int32_t func()
///
void q_headerview_on_state(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param state enum QAbstractItemView__State
///
void q_headerview_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param state enum QAbstractItemView__State
///
void q_headerview_qbase_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, enum QAbstractItemView__State state)
///
void q_headerview_on_set_state(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_schedule_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_execute_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param region QRegion*
///
void q_headerview_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param region QRegion*
///
void q_headerview_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QRegion* region)
///
void q_headerview_on_set_dirty_region(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param dx int
/// @param dy int
///
void q_headerview_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param dx int
/// @param dy int
///
void q_headerview_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int dx, int dy)
///
void q_headerview_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
QPoint* q_headerview_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
QPoint* q_headerview_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback QPoint* func()
///
void q_headerview_on_dirty_region_offset(void* self, QPoint* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_start_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_stop_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_do_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
///
int32_t q_headerview_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
///
int32_t q_headerview_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback int32_t func()
///
void q_headerview_on_drop_indicator_position(void* self, int32_t (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_headerview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_headerview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, int left, int top, int right, int bottom)
///
void q_headerview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
QMargins* q_headerview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
QMargins* q_headerview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback QMargins* func()
///
void q_headerview_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param param1 QPainter*
///
void q_headerview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param param1 QPainter*
///
void q_headerview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, QPainter* param1)
///
void q_headerview_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
void q_headerview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback void func()
///
void q_headerview_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
bool q_headerview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
bool q_headerview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback bool func()
///
void q_headerview_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
bool q_headerview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
bool q_headerview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback bool func()
///
void q_headerview_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
QObject* q_headerview_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
QObject* q_headerview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback QObject* func()
///
void q_headerview_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
///
int32_t q_headerview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
///
int32_t q_headerview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback int32_t func()
///
void q_headerview_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param signal const char*
///
int32_t q_headerview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param signal const char*
///
int32_t q_headerview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback int32_t func(QHeaderView* self, const char* signal)
///
void q_headerview_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param signal QMetaMethod*
///
bool q_headerview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param signal QMetaMethod*
///
bool q_headerview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback bool func(QHeaderView* self, QMetaMethod* signal)
///
void q_headerview_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeaderView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_headerview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeaderView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_headerview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeaderView*
/// @param callback double func(QHeaderView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_headerview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QHeaderView*
/// @param callback void func(QHeaderView* self, const char* objectName)
///
void q_headerview_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#dtor.QHeaderView)
///
/// Delete this object from C++ memory.
///
/// @param self QHeaderView*
///
void q_headerview_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheaderview.html#public-types)

typedef enum {
    QHEADERVIEW_RESIZEMODE_INTERACTIVE = 0,
    QHEADERVIEW_RESIZEMODE_STRETCH = 1,
    QHEADERVIEW_RESIZEMODE_FIXED = 2,
    QHEADERVIEW_RESIZEMODE_RESIZETOCONTENTS = 3,
    QHEADERVIEW_RESIZEMODE_CUSTOM = 2
} QHeaderView__ResizeMode;

#endif
