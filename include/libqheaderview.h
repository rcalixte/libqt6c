#pragma once
#ifndef SRCQT6C_LIBQHEADERVIEW_H
#define SRCQT6C_LIBQHEADERVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemdelegate.h"
#include "libqabstractitemmodel.h"
#include "libqabstractitemview.h"
#include "libqabstractscrollarea.h"
#include "libqevent.h"
#include "libqframe.h"
#include "libqitemselectionmodel.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyleoption.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qheaderview.html

/// q_headerview_new constructs a new QHeaderView object.
///
/// ``` enum Qt__Orientation orientation ```
QHeaderView* q_headerview_new(int64_t orientation);

/// q_headerview_new2 constructs a new QHeaderView object.
///
/// ``` enum Qt__Orientation orientation, QWidget* parent ```
QHeaderView* q_headerview_new2(int64_t orientation, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHeaderView* self ```
const QMetaObject* q_headerview_meta_object(void* self);

/// ``` QHeaderView* self, const char* param1 ```
void* q_headerview_metacast(void* self, const char* param1);

/// ``` QHeaderView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_headerview_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, int32_t (*slot)(QHeaderView*, enum QMetaObject__Call, int, void*) ```
void q_headerview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QHeaderView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_headerview_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_headerview_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setModel)
///
/// ``` QHeaderView* self, QAbstractItemModel* model ```
void q_headerview_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setModel)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QAbstractItemModel*) ```
void q_headerview_on_set_model(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setModel)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QAbstractItemModel* model ```
void q_headerview_qbase_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#orientation)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#offset)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#length)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sizeHint)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, QSize* (*slot)() ```
void q_headerview_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QHeaderView* self ```
QSize* q_headerview_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setVisible)
///
/// ``` QHeaderView* self, bool v ```
void q_headerview_set_visible(void* self, bool v);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setVisible)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, bool) ```
void q_headerview_on_set_visible(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setVisible)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, bool v ```
void q_headerview_qbase_set_visible(void* self, bool v);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeHint)
///
/// ``` QHeaderView* self, int logicalIndex ```
int32_t q_headerview_section_size_hint(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#visualIndexAt)
///
/// ``` QHeaderView* self, int position ```
int32_t q_headerview_visual_index_at(void* self, int position);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
///
/// ``` QHeaderView* self, int position ```
int32_t q_headerview_logical_index_at(void* self, int position);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
///
/// ``` QHeaderView* self, int x, int y ```
int32_t q_headerview_logical_index_at2(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
///
/// ``` QHeaderView* self, QPoint* pos ```
int32_t q_headerview_logical_index_at_with_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionSize)
///
/// ``` QHeaderView* self, int logicalIndex ```
int32_t q_headerview_section_size(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionPosition)
///
/// ``` QHeaderView* self, int logicalIndex ```
int32_t q_headerview_section_position(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionViewportPosition)
///
/// ``` QHeaderView* self, int logicalIndex ```
int32_t q_headerview_section_viewport_position(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#moveSection)
///
/// ``` QHeaderView* self, int from, int to ```
void q_headerview_move_section(void* self, int from, int to);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#swapSections)
///
/// ``` QHeaderView* self, int first, int second ```
void q_headerview_swap_sections(void* self, int first, int second);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#resizeSection)
///
/// ``` QHeaderView* self, int logicalIndex, int size ```
void q_headerview_resize_section(void* self, int logicalIndex, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
///
/// ``` QHeaderView* self, enum QHeaderView__ResizeMode mode ```
void q_headerview_resize_sections(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#isSectionHidden)
///
/// ``` QHeaderView* self, int logicalIndex ```
bool q_headerview_is_section_hidden(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSectionHidden)
///
/// ``` QHeaderView* self, int logicalIndex, bool hide ```
void q_headerview_set_section_hidden(void* self, int logicalIndex, bool hide);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#hiddenSectionCount)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_hidden_section_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#hideSection)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_hide_section(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#showSection)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_show_section(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#count)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#visualIndex)
///
/// ``` QHeaderView* self, int logicalIndex ```
int32_t q_headerview_visual_index(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#logicalIndex)
///
/// ``` QHeaderView* self, int visualIndex ```
int32_t q_headerview_logical_index(void* self, int visualIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSectionsMovable)
///
/// ``` QHeaderView* self, bool movable ```
void q_headerview_set_sections_movable(void* self, bool movable);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsMovable)
///
/// ``` QHeaderView* self ```
bool q_headerview_sections_movable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setFirstSectionMovable)
///
/// ``` QHeaderView* self, bool movable ```
void q_headerview_set_first_section_movable(void* self, bool movable);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#isFirstSectionMovable)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_first_section_movable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSectionsClickable)
///
/// ``` QHeaderView* self, bool clickable ```
void q_headerview_set_sections_clickable(void* self, bool clickable);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsClickable)
///
/// ``` QHeaderView* self ```
bool q_headerview_sections_clickable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setHighlightSections)
///
/// ``` QHeaderView* self, bool highlight ```
void q_headerview_set_highlight_sections(void* self, bool highlight);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#highlightSections)
///
/// ``` QHeaderView* self ```
bool q_headerview_highlight_sections(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionResizeMode)
///
/// ``` QHeaderView* self, int logicalIndex ```
int64_t q_headerview_section_resize_mode(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSectionResizeMode)
///
/// ``` QHeaderView* self, enum QHeaderView__ResizeMode mode ```
void q_headerview_set_section_resize_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSectionResizeMode)
///
/// ``` QHeaderView* self, int logicalIndex, enum QHeaderView__ResizeMode mode ```
void q_headerview_set_section_resize_mode2(void* self, int logicalIndex, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setResizeContentsPrecision)
///
/// ``` QHeaderView* self, int precision ```
void q_headerview_set_resize_contents_precision(void* self, int precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#resizeContentsPrecision)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_resize_contents_precision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#stretchSectionCount)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_stretch_section_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicatorShown)
///
/// ``` QHeaderView* self, bool show ```
void q_headerview_set_sort_indicator_shown(void* self, bool show);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#isSortIndicatorShown)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_sort_indicator_shown(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicator)
///
/// ``` QHeaderView* self, int logicalIndex, enum Qt__SortOrder order ```
void q_headerview_set_sort_indicator(void* self, int logicalIndex, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorSection)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_sort_indicator_section(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorOrder)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_sort_indicator_order(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicatorClearable)
///
/// ``` QHeaderView* self, bool clearable ```
void q_headerview_set_sort_indicator_clearable(void* self, bool clearable);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#isSortIndicatorClearable)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_sort_indicator_clearable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#stretchLastSection)
///
/// ``` QHeaderView* self ```
bool q_headerview_stretch_last_section(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setStretchLastSection)
///
/// ``` QHeaderView* self, bool stretch ```
void q_headerview_set_stretch_last_section(void* self, bool stretch);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#cascadingSectionResizes)
///
/// ``` QHeaderView* self ```
bool q_headerview_cascading_section_resizes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setCascadingSectionResizes)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_cascading_section_resizes(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#defaultSectionSize)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_default_section_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setDefaultSectionSize)
///
/// ``` QHeaderView* self, int size ```
void q_headerview_set_default_section_size(void* self, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#resetDefaultSectionSize)
///
/// ``` QHeaderView* self ```
void q_headerview_reset_default_section_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#minimumSectionSize)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_minimum_section_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setMinimumSectionSize)
///
/// ``` QHeaderView* self, int size ```
void q_headerview_set_minimum_section_size(void* self, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#maximumSectionSize)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_maximum_section_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setMaximumSectionSize)
///
/// ``` QHeaderView* self, int size ```
void q_headerview_set_maximum_section_size(void* self, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#defaultAlignment)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_default_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setDefaultAlignment)
///
/// ``` QHeaderView* self, int alignment ```
void q_headerview_set_default_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#doItemsLayout)
///
/// ``` QHeaderView* self ```
void q_headerview_do_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#doItemsLayout)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_do_items_layout(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#doItemsLayout)
///
/// Base class method implementation
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_do_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsMoved)
///
/// ``` QHeaderView* self ```
bool q_headerview_sections_moved(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsHidden)
///
/// ``` QHeaderView* self ```
bool q_headerview_sections_hidden(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#saveState)
///
/// ``` QHeaderView* self ```
char* q_headerview_save_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#restoreState)
///
/// ``` QHeaderView* self, const char* state ```
bool q_headerview_restore_state(void* self, const char* state);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#reset)
///
/// ``` QHeaderView* self ```
void q_headerview_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#reset)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_reset(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#reset)
///
/// Base class method implementation
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setOffset)
///
/// ``` QHeaderView* self, int offset ```
void q_headerview_set_offset(void* self, int offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setOffsetToSectionPosition)
///
/// ``` QHeaderView* self, int visualIndex ```
void q_headerview_set_offset_to_section_position(void* self, int visualIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setOffsetToLastSection)
///
/// ``` QHeaderView* self ```
void q_headerview_set_offset_to_last_section(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#headerDataChanged)
///
/// ``` QHeaderView* self, enum Qt__Orientation orientation, int logicalFirst, int logicalLast ```
void q_headerview_header_data_changed(void* self, int64_t orientation, int logicalFirst, int logicalLast);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionMoved)
///
/// ``` QHeaderView* self, int logicalIndex, int oldVisualIndex, int newVisualIndex ```
void q_headerview_section_moved(void* self, int logicalIndex, int oldVisualIndex, int newVisualIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionMoved)
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, int, int) ```
void q_headerview_on_section_moved(void* self, void (*slot)(void*, int, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionResized)
///
/// ``` QHeaderView* self, int logicalIndex, int oldSize, int newSize ```
void q_headerview_section_resized(void* self, int logicalIndex, int oldSize, int newSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionResized)
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, int, int) ```
void q_headerview_on_section_resized(void* self, void (*slot)(void*, int, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionPressed)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_section_pressed(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionPressed)
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_section_pressed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionClicked)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_section_clicked(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionClicked)
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_section_clicked(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionEntered)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_section_entered(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionEntered)
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_section_entered(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionDoubleClicked)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_section_double_clicked(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionDoubleClicked)
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_section_double_clicked(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionCountChanged)
///
/// ``` QHeaderView* self, int oldCount, int newCount ```
void q_headerview_section_count_changed(void* self, int oldCount, int newCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionCountChanged)
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, int) ```
void q_headerview_on_section_count_changed(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionHandleDoubleClicked)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_section_handle_double_clicked(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionHandleDoubleClicked)
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_section_handle_double_clicked(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#geometriesChanged)
///
/// ``` QHeaderView* self ```
void q_headerview_geometries_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#geometriesChanged)
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*) ```
void q_headerview_on_geometries_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorChanged)
///
/// ``` QHeaderView* self, int logicalIndex, enum Qt__SortOrder order ```
void q_headerview_sort_indicator_changed(void* self, int logicalIndex, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorChanged)
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, enum Qt__SortOrder) ```
void q_headerview_on_sort_indicator_changed(void* self, void (*slot)(void*, int, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorClearableChanged)
///
/// ``` QHeaderView* self, bool clearable ```
void q_headerview_sort_indicator_clearable_changed(void* self, bool clearable);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorClearableChanged)
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, bool) ```
void q_headerview_on_sort_indicator_clearable_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#updateSection)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_update_section(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#updateSection)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_update_section(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#updateSection)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_qbase_update_section(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
///
/// ``` QHeaderView* self ```
void q_headerview_resize_sections2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_resize_sections2(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
///
/// Base class method implementation
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_resize_sections2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsInserted)
///
/// ``` QHeaderView* self, QModelIndex* parent, int logicalFirst, int logicalLast ```
void q_headerview_sections_inserted(void* self, void* parent, int logicalFirst, int logicalLast);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsInserted)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*, int, int) ```
void q_headerview_on_sections_inserted(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsInserted)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* parent, int logicalFirst, int logicalLast ```
void q_headerview_qbase_sections_inserted(void* self, void* parent, int logicalFirst, int logicalLast);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsAboutToBeRemoved)
///
/// ``` QHeaderView* self, QModelIndex* parent, int logicalFirst, int logicalLast ```
void q_headerview_sections_about_to_be_removed(void* self, void* parent, int logicalFirst, int logicalLast);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsAboutToBeRemoved)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*, int, int) ```
void q_headerview_on_sections_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsAboutToBeRemoved)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* parent, int logicalFirst, int logicalLast ```
void q_headerview_qbase_sections_about_to_be_removed(void* self, void* parent, int logicalFirst, int logicalLast);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initialize)
///
/// ``` QHeaderView* self ```
void q_headerview_initialize(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initialize)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_initialize(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initialize)
///
/// Base class method implementation
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_initialize(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
///
/// ``` QHeaderView* self ```
void q_headerview_initialize_sections(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_initialize_sections(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
///
/// Base class method implementation
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_initialize_sections(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
///
/// ``` QHeaderView* self, int start, int end ```
void q_headerview_initialize_sections2(void* self, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, int) ```
void q_headerview_on_initialize_sections2(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, int start, int end ```
void q_headerview_qbase_initialize_sections2(void* self, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#currentChanged)
///
/// ``` QHeaderView* self, QModelIndex* current, QModelIndex* old ```
void q_headerview_current_changed(void* self, void* current, void* old);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#currentChanged)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*, QModelIndex*) ```
void q_headerview_on_current_changed(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#currentChanged)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* current, QModelIndex* old ```
void q_headerview_qbase_current_changed(void* self, void* current, void* old);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#event)
///
/// ``` QHeaderView* self, QEvent* e ```
bool q_headerview_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, QEvent*) ```
void q_headerview_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#event)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QEvent* e ```
bool q_headerview_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#paintEvent)
///
/// ``` QHeaderView* self, QPaintEvent* e ```
void q_headerview_paint_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QPaintEvent*) ```
void q_headerview_on_paint_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#paintEvent)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QPaintEvent* e ```
void q_headerview_qbase_paint_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mousePressEvent)
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_mouse_press_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QMouseEvent*) ```
void q_headerview_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_qbase_mouse_press_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mouseMoveEvent)
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_mouse_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QMouseEvent*) ```
void q_headerview_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_qbase_mouse_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mouseReleaseEvent)
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_mouse_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QMouseEvent*) ```
void q_headerview_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_qbase_mouse_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mouseDoubleClickEvent)
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_mouse_double_click_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QMouseEvent*) ```
void q_headerview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_qbase_mouse_double_click_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#viewportEvent)
///
/// ``` QHeaderView* self, QEvent* e ```
bool q_headerview_viewport_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#viewportEvent)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, QEvent*) ```
void q_headerview_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#viewportEvent)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QEvent* e ```
bool q_headerview_qbase_viewport_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#paintSection)
///
/// ``` QHeaderView* self, QPainter* painter, QRect* rect, int logicalIndex ```
void q_headerview_paint_section(void* self, void* painter, void* rect, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#paintSection)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QPainter*, QRect*, int) ```
void q_headerview_on_paint_section(void* self, void (*slot)(void*, void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#paintSection)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QPainter* painter, QRect* rect, int logicalIndex ```
void q_headerview_qbase_paint_section(void* self, void* painter, void* rect, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeFromContents)
///
/// ``` QHeaderView* self, int logicalIndex ```
QSize* q_headerview_section_size_from_contents(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeFromContents)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, QSize* (*slot)(QHeaderView*, int) ```
void q_headerview_on_section_size_from_contents(void* self, QSize* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeFromContents)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, int logicalIndex ```
QSize* q_headerview_qbase_section_size_from_contents(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#horizontalOffset)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_horizontal_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#horizontalOffset)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, int32_t (*slot)() ```
void q_headerview_on_horizontal_offset(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#horizontalOffset)
///
/// Base class method implementation
///
/// ``` QHeaderView* self ```
int32_t q_headerview_qbase_horizontal_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#verticalOffset)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_vertical_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#verticalOffset)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, int32_t (*slot)() ```
void q_headerview_on_vertical_offset(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#verticalOffset)
///
/// Base class method implementation
///
/// ``` QHeaderView* self ```
int32_t q_headerview_qbase_vertical_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#updateGeometries)
///
/// ``` QHeaderView* self ```
void q_headerview_update_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#updateGeometries)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_update_geometries(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#updateGeometries)
///
/// Base class method implementation
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_update_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#scrollContentsBy)
///
/// ``` QHeaderView* self, int dx, int dy ```
void q_headerview_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, int) ```
void q_headerview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#scrollContentsBy)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, int dx, int dy ```
void q_headerview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#dataChanged)
///
/// ``` QHeaderView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_headerview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#dataChanged)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*, QModelIndex*, libqt_list /* of int */ roles ) ```
void q_headerview_on_data_changed(void* self, void (*slot)(void*, void*, void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#dataChanged)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_headerview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#rowsInserted)
///
/// ``` QHeaderView* self, QModelIndex* parent, int start, int end ```
void q_headerview_rows_inserted(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#rowsInserted)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*, int, int) ```
void q_headerview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#rowsInserted)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* parent, int start, int end ```
void q_headerview_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#visualRect)
///
/// ``` QHeaderView* self, QModelIndex* index ```
QRect* q_headerview_visual_rect(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#visualRect)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, QRect* (*slot)(QHeaderView*, QModelIndex*) ```
void q_headerview_on_visual_rect(void* self, QRect* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#visualRect)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* index ```
QRect* q_headerview_qbase_visual_rect(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#scrollTo)
///
/// ``` QHeaderView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_headerview_scroll_to(void* self, void* index, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#scrollTo)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_headerview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#scrollTo)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_headerview_qbase_scroll_to(void* self, void* index, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#indexAt)
///
/// ``` QHeaderView* self, QPoint* p ```
QModelIndex* q_headerview_index_at(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#indexAt)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, QModelIndex* (*slot)(QHeaderView*, QPoint*) ```
void q_headerview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#indexAt)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QPoint* p ```
QModelIndex* q_headerview_qbase_index_at(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#isIndexHidden)
///
/// ``` QHeaderView* self, QModelIndex* index ```
bool q_headerview_is_index_hidden(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#isIndexHidden)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, QModelIndex*) ```
void q_headerview_on_is_index_hidden(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#isIndexHidden)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* index ```
bool q_headerview_qbase_is_index_hidden(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#moveCursor)
///
/// ``` QHeaderView* self, enum QAbstractItemView__CursorAction param1, int param2 ```
QModelIndex* q_headerview_move_cursor(void* self, int64_t param1, int64_t param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#moveCursor)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, QModelIndex* (*slot)(QHeaderView*, enum QAbstractItemView__CursorAction, int) ```
void q_headerview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#moveCursor)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, enum QAbstractItemView__CursorAction param1, int param2 ```
QModelIndex* q_headerview_qbase_move_cursor(void* self, int64_t param1, int64_t param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSelection)
///
/// ``` QHeaderView* self, QRect* rect, int flags ```
void q_headerview_set_selection(void* self, void* rect, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSelection)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QRect*, int) ```
void q_headerview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSelection)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QRect* rect, int flags ```
void q_headerview_qbase_set_selection(void* self, void* rect, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#visualRegionForSelection)
///
/// ``` QHeaderView* self, QItemSelection* selection ```
QRegion* q_headerview_visual_region_for_selection(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#visualRegionForSelection)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, QRegion* (*slot)(QHeaderView*, QItemSelection*) ```
void q_headerview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#visualRegionForSelection)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QItemSelection* selection ```
QRegion* q_headerview_qbase_visual_region_for_selection(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initStyleOptionForIndex)
///
/// ``` QHeaderView* self, QStyleOptionHeader* option, int logicalIndex ```
void q_headerview_init_style_option_for_index(void* self, void* option, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initStyleOptionForIndex)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QStyleOptionHeader*, int) ```
void q_headerview_on_init_style_option_for_index(void* self, void (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initStyleOptionForIndex)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QStyleOptionHeader* option, int logicalIndex ```
void q_headerview_qbase_init_style_option_for_index(void* self, void* option, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initStyleOption)
///
/// ``` QHeaderView* self, QStyleOptionHeader* option ```
void q_headerview_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QStyleOptionHeader*) ```
void q_headerview_on_init_style_option(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initStyleOption)
///
/// Base class method implementation
///
/// ``` QHeaderView* self, QStyleOptionHeader* option ```
void q_headerview_qbase_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_headerview_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_headerview_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QHeaderView* self ```
QAbstractItemModel* q_headerview_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QHeaderView* self ```
QItemSelectionModel* q_headerview_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QHeaderView* self, QAbstractItemDelegate* delegate ```
void q_headerview_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QHeaderView* self ```
QAbstractItemDelegate* q_headerview_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QHeaderView* self, enum QAbstractItemView__SelectionMode mode ```
void q_headerview_set_selection_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QHeaderView* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_headerview_set_selection_behavior(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QHeaderView* self ```
QModelIndex* q_headerview_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QHeaderView* self ```
QModelIndex* q_headerview_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QHeaderView* self, int triggers ```
void q_headerview_set_edit_triggers(void* self, int64_t triggers);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QHeaderView* self, enum QAbstractItemView__ScrollMode mode ```
void q_headerview_set_vertical_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QHeaderView* self ```
void q_headerview_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QHeaderView* self, enum QAbstractItemView__ScrollMode mode ```
void q_headerview_set_horizontal_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QHeaderView* self ```
void q_headerview_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QHeaderView* self ```
bool q_headerview_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QHeaderView* self, int margin ```
void q_headerview_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QHeaderView* self ```
bool q_headerview_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QHeaderView* self ```
bool q_headerview_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QHeaderView* self ```
bool q_headerview_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QHeaderView* self, bool overwrite ```
void q_headerview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QHeaderView* self ```
bool q_headerview_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QHeaderView* self, enum QAbstractItemView__DragDropMode behavior ```
void q_headerview_set_drag_drop_mode(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QHeaderView* self, enum Qt__DropAction dropAction ```
void q_headerview_set_default_drop_action(void* self, int64_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QHeaderView* self ```
bool q_headerview_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QHeaderView* self, QSize* size ```
void q_headerview_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QHeaderView* self, enum Qt__TextElideMode mode ```
void q_headerview_set_text_elide_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QHeaderView* self, QModelIndex* index ```
QSize* q_headerview_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_open_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_close_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// ``` QHeaderView* self, QModelIndex* index ```
bool q_headerview_is_persistent_editor_open(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QHeaderView* self, QModelIndex* index, QWidget* widget ```
void q_headerview_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QHeaderView* self, QModelIndex* index ```
QWidget* q_headerview_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QHeaderView* self, int row, QAbstractItemDelegate* delegate ```
void q_headerview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QHeaderView* self, int row ```
QAbstractItemDelegate* q_headerview_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QHeaderView* self, int column, QAbstractItemDelegate* delegate ```
void q_headerview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QHeaderView* self, int column ```
QAbstractItemDelegate* q_headerview_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QHeaderView* self, QModelIndex* index ```
QAbstractItemDelegate* q_headerview_item_delegate_with_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QHeaderView* self ```
void q_headerview_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QHeaderView* self ```
void q_headerview_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QHeaderView* self ```
void q_headerview_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QHeaderView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_headerview_on_pressed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QHeaderView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_headerview_on_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QHeaderView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_headerview_on_double_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QHeaderView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_headerview_on_activated(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QHeaderView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_headerview_on_entered(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QHeaderView* self ```
void q_headerview_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QHeaderView* self, void (*slot)(QAbstractItemView*) ```
void q_headerview_on_viewport_entered(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QHeaderView* self, QSize* size ```
void q_headerview_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QHeaderView* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_headerview_on_icon_size_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QHeaderView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_headerview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QHeaderView* self ```
QScrollBar* q_headerview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QHeaderView* self, QScrollBar* scrollbar ```
void q_headerview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QHeaderView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_headerview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QHeaderView* self ```
QScrollBar* q_headerview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QHeaderView* self, QScrollBar* scrollbar ```
void q_headerview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QHeaderView* self, QWidget* widget ```
void q_headerview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QHeaderView* self, QWidget* widget, int alignment ```
void q_headerview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QHeaderView* self, int alignment ```
libqt_list /* of QWidget* */ q_headerview_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QHeaderView* self, QWidget* widget ```
void q_headerview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QHeaderView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_headerview_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QHeaderView* self, int frameStyle ```
void q_headerview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QHeaderView* self, enum QFrame__Shape frameShape ```
void q_headerview_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QHeaderView* self, enum QFrame__Shadow frameShadow ```
void q_headerview_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QHeaderView* self, int lineWidth ```
void q_headerview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QHeaderView* self, int midLineWidth ```
void q_headerview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QHeaderView* self ```
QRect* q_headerview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QHeaderView* self, QRect* frameRect ```
void q_headerview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QHeaderView* self ```
uintptr_t q_headerview_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QHeaderView* self ```
void q_headerview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QHeaderView* self ```
uintptr_t q_headerview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QHeaderView* self ```
uintptr_t q_headerview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QHeaderView* self ```
QStyle* q_headerview_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QHeaderView* self, QStyle* style ```
void q_headerview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QHeaderView* self, enum Qt__WindowModality windowModality ```
void q_headerview_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QHeaderView* self, QWidget* param1 ```
bool q_headerview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QHeaderView* self, bool enabled ```
void q_headerview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QHeaderView* self, bool disabled ```
void q_headerview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QHeaderView* self, bool windowModified ```
void q_headerview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QHeaderView* self ```
QRect* q_headerview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QHeaderView* self ```
const QRect* q_headerview_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QHeaderView* self ```
QRect* q_headerview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QHeaderView* self ```
QPoint* q_headerview_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QHeaderView* self ```
QRect* q_headerview_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QHeaderView* self ```
QRect* q_headerview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QHeaderView* self ```
QRegion* q_headerview_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QHeaderView* self, QSize* minimumSize ```
void q_headerview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QHeaderView* self, int minw, int minh ```
void q_headerview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QHeaderView* self, QSize* maximumSize ```
void q_headerview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QHeaderView* self, int maxw, int maxh ```
void q_headerview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QHeaderView* self, int minw ```
void q_headerview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QHeaderView* self, int minh ```
void q_headerview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QHeaderView* self, int maxw ```
void q_headerview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QHeaderView* self, int maxh ```
void q_headerview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QHeaderView* self, QSize* sizeIncrement ```
void q_headerview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QHeaderView* self, int w, int h ```
void q_headerview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QHeaderView* self, QSize* baseSize ```
void q_headerview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QHeaderView* self, int basew, int baseh ```
void q_headerview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QHeaderView* self, QSize* fixedSize ```
void q_headerview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QHeaderView* self, int w, int h ```
void q_headerview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QHeaderView* self, int w ```
void q_headerview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QHeaderView* self, int h ```
void q_headerview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QHeaderView* self, QPointF* param1 ```
QPointF* q_headerview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QHeaderView* self, QPoint* param1 ```
QPoint* q_headerview_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QHeaderView* self, QPointF* param1 ```
QPointF* q_headerview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QHeaderView* self, QPoint* param1 ```
QPoint* q_headerview_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QHeaderView* self, QPointF* param1 ```
QPointF* q_headerview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QHeaderView* self, QPoint* param1 ```
QPoint* q_headerview_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QHeaderView* self, QPointF* param1 ```
QPointF* q_headerview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QHeaderView* self, QPoint* param1 ```
QPoint* q_headerview_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QHeaderView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_headerview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QHeaderView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_headerview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QHeaderView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_headerview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QHeaderView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_headerview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QHeaderView* self ```
const QPalette* q_headerview_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QHeaderView* self, QPalette* palette ```
void q_headerview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QHeaderView* self, enum QPalette__ColorRole backgroundRole ```
void q_headerview_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QHeaderView* self, enum QPalette__ColorRole foregroundRole ```
void q_headerview_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QHeaderView* self ```
const QFont* q_headerview_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QHeaderView* self, QFont* font ```
void q_headerview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QHeaderView* self ```
QFontMetrics* q_headerview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QHeaderView* self ```
QFontInfo* q_headerview_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QHeaderView* self ```
QCursor* q_headerview_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QHeaderView* self, QCursor* cursor ```
void q_headerview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QHeaderView* self ```
void q_headerview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QHeaderView* self ```
bool q_headerview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QHeaderView* self ```
bool q_headerview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QHeaderView* self ```
bool q_headerview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QHeaderView* self, QBitmap* mask ```
void q_headerview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QHeaderView* self, QRegion* mask ```
void q_headerview_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QHeaderView* self ```
QRegion* q_headerview_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QHeaderView* self ```
void q_headerview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPaintDevice* target ```
void q_headerview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPainter* painter ```
void q_headerview_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QHeaderView* self ```
QPixmap* q_headerview_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QHeaderView* self ```
QGraphicsEffect* q_headerview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QHeaderView* self, QGraphicsEffect* effect ```
void q_headerview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QHeaderView* self, enum Qt__GestureType typeVal ```
void q_headerview_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QHeaderView* self, enum Qt__GestureType typeVal ```
void q_headerview_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QHeaderView* self, const char* windowTitle ```
void q_headerview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QHeaderView* self, const char* styleSheet ```
void q_headerview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QHeaderView* self ```
const char* q_headerview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QHeaderView* self ```
const char* q_headerview_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QHeaderView* self, QIcon* icon ```
void q_headerview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QHeaderView* self ```
QIcon* q_headerview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QHeaderView* self, const char* windowIconText ```
void q_headerview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QHeaderView* self ```
const char* q_headerview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QHeaderView* self, const char* windowRole ```
void q_headerview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QHeaderView* self ```
const char* q_headerview_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QHeaderView* self, const char* filePath ```
void q_headerview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QHeaderView* self ```
const char* q_headerview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QHeaderView* self, double level ```
void q_headerview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QHeaderView* self ```
double q_headerview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QHeaderView* self, const char* toolTip ```
void q_headerview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QHeaderView* self ```
const char* q_headerview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QHeaderView* self, int msec ```
void q_headerview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QHeaderView* self, const char* statusTip ```
void q_headerview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QHeaderView* self ```
const char* q_headerview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QHeaderView* self, const char* whatsThis ```
void q_headerview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QHeaderView* self ```
const char* q_headerview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QHeaderView* self ```
const char* q_headerview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QHeaderView* self, const char* name ```
void q_headerview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QHeaderView* self ```
const char* q_headerview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QHeaderView* self, const char* description ```
void q_headerview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QHeaderView* self, enum Qt__LayoutDirection direction ```
void q_headerview_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QHeaderView* self ```
void q_headerview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QHeaderView* self, QLocale* locale ```
void q_headerview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QHeaderView* self ```
QLocale* q_headerview_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QHeaderView* self ```
void q_headerview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QHeaderView* self ```
void q_headerview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QHeaderView* self ```
void q_headerview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QHeaderView* self ```
void q_headerview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QHeaderView* self, enum Qt__FocusReason reason ```
void q_headerview_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QHeaderView* self, enum Qt__FocusPolicy policy ```
void q_headerview_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QHeaderView* self ```
bool q_headerview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_headerview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QHeaderView* self, QWidget* focusProxy ```
void q_headerview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QHeaderView* self, enum Qt__ContextMenuPolicy policy ```
void q_headerview_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QHeaderView* self ```
void q_headerview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QHeaderView* self, QCursor* param1 ```
void q_headerview_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QHeaderView* self ```
void q_headerview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QHeaderView* self ```
void q_headerview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QHeaderView* self ```
void q_headerview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QHeaderView* self, QKeySequence* key ```
int32_t q_headerview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QHeaderView* self, int id ```
void q_headerview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QHeaderView* self, int id ```
void q_headerview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QHeaderView* self, int id ```
void q_headerview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_headerview_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_headerview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QHeaderView* self ```
bool q_headerview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QHeaderView* self ```
QGraphicsProxyWidget* q_headerview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QHeaderView* self ```
void q_headerview_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QHeaderView* self, int x, int y, int w, int h ```
void q_headerview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QHeaderView* self, QRect* param1 ```
void q_headerview_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QHeaderView* self, QRegion* param1 ```
void q_headerview_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QHeaderView* self, int x, int y, int w, int h ```
void q_headerview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QHeaderView* self, QRect* param1 ```
void q_headerview_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QHeaderView* self, QRegion* param1 ```
void q_headerview_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QHeaderView* self, bool hidden ```
void q_headerview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QHeaderView* self ```
void q_headerview_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QHeaderView* self ```
void q_headerview_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QHeaderView* self ```
void q_headerview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QHeaderView* self ```
void q_headerview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QHeaderView* self ```
void q_headerview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QHeaderView* self ```
void q_headerview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QHeaderView* self ```
bool q_headerview_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QHeaderView* self ```
void q_headerview_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QHeaderView* self ```
void q_headerview_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QHeaderView* self, QWidget* param1 ```
void q_headerview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QHeaderView* self, int x, int y ```
void q_headerview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QHeaderView* self, QPoint* param1 ```
void q_headerview_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QHeaderView* self, int w, int h ```
void q_headerview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QHeaderView* self, QSize* param1 ```
void q_headerview_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QHeaderView* self, int x, int y, int w, int h ```
void q_headerview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QHeaderView* self, QRect* geometry ```
void q_headerview_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QHeaderView* self ```
char* q_headerview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QHeaderView* self, const char* geometry ```
bool q_headerview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QHeaderView* self ```
void q_headerview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QHeaderView* self, QWidget* param1 ```
bool q_headerview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QHeaderView* self, int state ```
void q_headerview_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QHeaderView* self, int state ```
void q_headerview_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QHeaderView* self ```
QSizePolicy* q_headerview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QHeaderView* self, QSizePolicy* sizePolicy ```
void q_headerview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QHeaderView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_headerview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QHeaderView* self ```
QRegion* q_headerview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QHeaderView* self, int left, int top, int right, int bottom ```
void q_headerview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QHeaderView* self, QMargins* margins ```
void q_headerview_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QHeaderView* self ```
QMargins* q_headerview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QHeaderView* self ```
QRect* q_headerview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QHeaderView* self ```
QLayout* q_headerview_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QHeaderView* self, QLayout* layout ```
void q_headerview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QHeaderView* self ```
void q_headerview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QHeaderView* self, QWidget* parent ```
void q_headerview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QHeaderView* self, QWidget* parent, int f ```
void q_headerview_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QHeaderView* self, int dx, int dy ```
void q_headerview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QHeaderView* self, int dx, int dy, QRect* param3 ```
void q_headerview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QHeaderView* self ```
bool q_headerview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QHeaderView* self, bool on ```
void q_headerview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QHeaderView* self, QAction* action ```
void q_headerview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QHeaderView* self, libqt_list /* of QAction* */ actions ```
void q_headerview_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QHeaderView* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_headerview_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QHeaderView* self, QAction* before, QAction* action ```
void q_headerview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QHeaderView* self, QAction* action ```
void q_headerview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QHeaderView* self ```
libqt_list /* of QAction* */ q_headerview_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QHeaderView* self, const char* text ```
QAction* q_headerview_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QHeaderView* self, QIcon* icon, const char* text ```
QAction* q_headerview_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QHeaderView* self, const char* text, QKeySequence* shortcut ```
QAction* q_headerview_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QHeaderView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_headerview_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QHeaderView* self, int typeVal ```
void q_headerview_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QHeaderView* self, enum Qt__WindowType param1 ```
void q_headerview_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QHeaderView* self, int typeVal ```
void q_headerview_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_headerview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QHeaderView* self, int x, int y ```
QWidget* q_headerview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QHeaderView* self, QPoint* p ```
QWidget* q_headerview_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QHeaderView* self, enum Qt__WidgetAttribute param1 ```
void q_headerview_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QHeaderView* self, enum Qt__WidgetAttribute param1 ```
bool q_headerview_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QHeaderView* self ```
void q_headerview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QHeaderView* self, QWidget* child ```
bool q_headerview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QHeaderView* self ```
bool q_headerview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QHeaderView* self, bool enabled ```
void q_headerview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QHeaderView* self ```
QBackingStore* q_headerview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QHeaderView* self ```
QWindow* q_headerview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QHeaderView* self ```
QScreen* q_headerview_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QHeaderView* self, QScreen* screen ```
void q_headerview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_headerview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QHeaderView* self, const char* title ```
void q_headerview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QHeaderView* self, void (*slot)(QWidget*, const char*) ```
void q_headerview_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QHeaderView* self, QIcon* icon ```
void q_headerview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QHeaderView* self, void (*slot)(QWidget*, QIcon*) ```
void q_headerview_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QHeaderView* self, const char* iconText ```
void q_headerview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QHeaderView* self, void (*slot)(QWidget*, const char*) ```
void q_headerview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QHeaderView* self, QPoint* pos ```
void q_headerview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QHeaderView* self, void (*slot)(QWidget*, QPoint*) ```
void q_headerview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QHeaderView* self, int hints ```
void q_headerview_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPaintDevice* target, QPoint* targetOffset ```
void q_headerview_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_headerview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_headerview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPainter* painter, QPoint* targetOffset ```
void q_headerview_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_headerview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_headerview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QHeaderView* self, QRect* rectangle ```
QPixmap* q_headerview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QHeaderView* self, enum Qt__GestureType typeVal, int flags ```
void q_headerview_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QHeaderView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_headerview_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QHeaderView* self, int id, bool enable ```
void q_headerview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QHeaderView* self, int id, bool enable ```
void q_headerview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QHeaderView* self, enum Qt__WindowType param1, bool on ```
void q_headerview_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QHeaderView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_headerview_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_headerview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_headerview_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHeaderView* self ```
const char* q_headerview_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHeaderView* self, char* name ```
void q_headerview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHeaderView* self ```
bool q_headerview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHeaderView* self, bool b ```
bool q_headerview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHeaderView* self ```
QThread* q_headerview_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHeaderView* self, QThread* thread ```
void q_headerview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHeaderView* self, int interval ```
int32_t q_headerview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHeaderView* self, int id ```
void q_headerview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHeaderView* self ```
libqt_list /* of QObject* */ q_headerview_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHeaderView* self, QObject* filterObj ```
void q_headerview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHeaderView* self, QObject* obj ```
void q_headerview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_headerview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHeaderView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_headerview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_headerview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_headerview_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHeaderView* self ```
void q_headerview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHeaderView* self ```
void q_headerview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHeaderView* self, const char* name, QVariant* value ```
bool q_headerview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHeaderView* self, const char* name ```
QVariant* q_headerview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHeaderView* self ```
const char** q_headerview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHeaderView* self ```
QBindingStorage* q_headerview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHeaderView* self ```
const QBindingStorage* q_headerview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHeaderView* self ```
void q_headerview_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHeaderView* self, void (*slot)(QObject*) ```
void q_headerview_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHeaderView* self ```
QObject* q_headerview_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHeaderView* self, const char* classname ```
bool q_headerview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHeaderView* self ```
void q_headerview_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHeaderView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_headerview_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_headerview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHeaderView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_headerview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHeaderView* self, QObject* param1 ```
void q_headerview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHeaderView* self, void (*slot)(QObject*, QObject*) ```
void q_headerview_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QHeaderView* self ```
bool q_headerview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QHeaderView* self ```
double q_headerview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QHeaderView* self ```
double q_headerview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_headerview_device_pixel_ratio_f_scale();

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QItemSelectionModel* selectionModel ```
void q_headerview_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QItemSelectionModel* selectionModel ```
void q_headerview_qbase_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QItemSelectionModel*) ```
void q_headerview_on_set_selection_model(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, const char* search ```
void q_headerview_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, const char* search ```
void q_headerview_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, const char*) ```
void q_headerview_on_keyboard_search(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int row ```
int32_t q_headerview_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int row ```
int32_t q_headerview_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int32_t (*slot)(QHeaderView*, int) ```
void q_headerview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int column ```
int32_t q_headerview_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int column ```
int32_t q_headerview_qbase_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int32_t (*slot)(QHeaderView*, int) ```
void q_headerview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index ```
QAbstractItemDelegate* q_headerview_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index ```
QAbstractItemDelegate* q_headerview_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QAbstractItemDelegate* (*slot)(QHeaderView*, QModelIndex*) ```
void q_headerview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, enum Qt__InputMethodQuery query ```
QVariant* q_headerview_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, enum Qt__InputMethodQuery query ```
QVariant* q_headerview_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QVariant* (*slot)(QHeaderView*, enum Qt__InputMethodQuery) ```
void q_headerview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_set_root_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_qbase_set_root_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*) ```
void q_headerview_on_set_root_index(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_select_all(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* parent, int start, int end ```
void q_headerview_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* parent, int start, int end ```
void q_headerview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*, int, int) ```
void q_headerview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_headerview_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_headerview_qbase_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QItemSelection*, QItemSelection*) ```
void q_headerview_on_selection_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_update_editor_data(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_update_editor_geometries(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int action ```
void q_headerview_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int action ```
void q_headerview_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int action ```
void q_headerview_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int action ```
void q_headerview_qbase_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int value ```
void q_headerview_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int value ```
void q_headerview_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int value ```
void q_headerview_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int value ```
void q_headerview_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_headerview_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_headerview_qbase_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_headerview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QWidget* editor ```
void q_headerview_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QWidget* editor ```
void q_headerview_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QWidget*) ```
void q_headerview_on_commit_data(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QObject* editor ```
void q_headerview_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QObject* editor ```
void q_headerview_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QObject*) ```
void q_headerview_on_editor_destroyed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
libqt_list /* of QModelIndex* */ q_headerview_selected_indexes(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
libqt_list /* of QModelIndex* */ q_headerview_qbase_selected_indexes(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_headerview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_headerview_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_headerview_qbase_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_headerview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index, QEvent* event ```
int64_t q_headerview_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index, QEvent* event ```
int64_t q_headerview_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int64_t (*slot)(QHeaderView*, QModelIndex*, QEvent*) ```
void q_headerview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int supportedActions ```
void q_headerview_start_drag(void* self, int64_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int supportedActions ```
void q_headerview_qbase_start_drag(void* self, int64_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_start_drag(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QStyleOptionViewItem* option ```
void q_headerview_init_view_item_option(void* self, void* option);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QStyleOptionViewItem* option ```
void q_headerview_qbase_init_view_item_option(void* self, void* option);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QStyleOptionViewItem*) ```
void q_headerview_on_init_view_item_option(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, bool next ```
bool q_headerview_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, bool next ```
bool q_headerview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, bool) ```
void q_headerview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QDragEnterEvent* event ```
void q_headerview_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QDragEnterEvent* event ```
void q_headerview_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QDragEnterEvent*) ```
void q_headerview_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QDragMoveEvent* event ```
void q_headerview_drag_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QDragMoveEvent* event ```
void q_headerview_qbase_drag_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QDragMoveEvent*) ```
void q_headerview_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QDragLeaveEvent* event ```
void q_headerview_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QDragLeaveEvent* event ```
void q_headerview_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QDragLeaveEvent*) ```
void q_headerview_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QDropEvent* event ```
void q_headerview_drop_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QDropEvent* event ```
void q_headerview_qbase_drop_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QDropEvent*) ```
void q_headerview_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QFocusEvent* event ```
void q_headerview_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QFocusEvent* event ```
void q_headerview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QFocusEvent*) ```
void q_headerview_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QFocusEvent* event ```
void q_headerview_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QFocusEvent* event ```
void q_headerview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QFocusEvent*) ```
void q_headerview_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QKeyEvent* event ```
void q_headerview_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QKeyEvent* event ```
void q_headerview_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QKeyEvent*) ```
void q_headerview_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QResizeEvent* event ```
void q_headerview_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QResizeEvent* event ```
void q_headerview_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QResizeEvent*) ```
void q_headerview_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QTimerEvent* event ```
void q_headerview_timer_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QTimerEvent* event ```
void q_headerview_qbase_timer_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QTimerEvent*) ```
void q_headerview_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QInputMethodEvent* event ```
void q_headerview_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QInputMethodEvent* event ```
void q_headerview_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QInputMethodEvent*) ```
void q_headerview_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QObject* object, QEvent* event ```
bool q_headerview_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QObject* object, QEvent* event ```
bool q_headerview_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, QObject*, QEvent*) ```
void q_headerview_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
QSize* q_headerview_viewport_size_hint(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
QSize* q_headerview_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QSize* (*slot)() ```
void q_headerview_on_viewport_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
QSize* q_headerview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
QSize* q_headerview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QSize* (*slot)() ```
void q_headerview_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QWidget* viewport ```
void q_headerview_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QWidget* viewport ```
void q_headerview_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QWidget*) ```
void q_headerview_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QWheelEvent* param1 ```
void q_headerview_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QWheelEvent* param1 ```
void q_headerview_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QWheelEvent*) ```
void q_headerview_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QContextMenuEvent* param1 ```
void q_headerview_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QContextMenuEvent* param1 ```
void q_headerview_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QContextMenuEvent*) ```
void q_headerview_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QEvent* param1 ```
void q_headerview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QEvent* param1 ```
void q_headerview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QEvent*) ```
void q_headerview_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
int32_t q_headerview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
int32_t q_headerview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int32_t (*slot)() ```
void q_headerview_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int param1 ```
int32_t q_headerview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int param1 ```
int32_t q_headerview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int32_t (*slot)(QHeaderView*, int) ```
void q_headerview_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
bool q_headerview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
bool q_headerview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)() ```
void q_headerview_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
QPaintEngine* q_headerview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
QPaintEngine* q_headerview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QPaintEngine* (*slot)() ```
void q_headerview_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QKeyEvent* event ```
void q_headerview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QKeyEvent* event ```
void q_headerview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QKeyEvent*) ```
void q_headerview_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QEnterEvent* event ```
void q_headerview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QEnterEvent* event ```
void q_headerview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QEnterEvent*) ```
void q_headerview_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QEvent* event ```
void q_headerview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QEvent* event ```
void q_headerview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QEvent*) ```
void q_headerview_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QMoveEvent* event ```
void q_headerview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QMoveEvent* event ```
void q_headerview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QMoveEvent*) ```
void q_headerview_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QCloseEvent* event ```
void q_headerview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QCloseEvent* event ```
void q_headerview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QCloseEvent*) ```
void q_headerview_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QTabletEvent* event ```
void q_headerview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QTabletEvent* event ```
void q_headerview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QTabletEvent*) ```
void q_headerview_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QActionEvent* event ```
void q_headerview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QActionEvent* event ```
void q_headerview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QActionEvent*) ```
void q_headerview_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QShowEvent* event ```
void q_headerview_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QShowEvent* event ```
void q_headerview_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QShowEvent*) ```
void q_headerview_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QHideEvent* event ```
void q_headerview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QHideEvent* event ```
void q_headerview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QHideEvent*) ```
void q_headerview_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, const char* eventType, void* message, intptr_t* result ```
bool q_headerview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, const char* eventType, void* message, intptr_t* result ```
bool q_headerview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, const char*, void*, intptr_t*) ```
void q_headerview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_headerview_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_headerview_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int32_t (*slot)(QHeaderView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_headerview_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QPainter* painter ```
void q_headerview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QPainter* painter ```
void q_headerview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QPainter*) ```
void q_headerview_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QPoint* offset ```
QPaintDevice* q_headerview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QPoint* offset ```
QPaintDevice* q_headerview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QPaintDevice* (*slot)(QHeaderView*, QPoint*) ```
void q_headerview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
QPainter* q_headerview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
QPainter* q_headerview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QPainter* (*slot)() ```
void q_headerview_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QChildEvent* event ```
void q_headerview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QChildEvent* event ```
void q_headerview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QChildEvent*) ```
void q_headerview_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QEvent* event ```
void q_headerview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QEvent* event ```
void q_headerview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QEvent*) ```
void q_headerview_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QMetaMethod* signal ```
void q_headerview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QMetaMethod* signal ```
void q_headerview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QMetaMethod*) ```
void q_headerview_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QMetaMethod* signal ```
void q_headerview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QMetaMethod* signal ```
void q_headerview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QMetaMethod*) ```
void q_headerview_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
int64_t q_headerview_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
int64_t q_headerview_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int64_t (*slot)() ```
void q_headerview_on_state(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, enum QAbstractItemView__State state ```
void q_headerview_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, enum QAbstractItemView__State state ```
void q_headerview_qbase_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, enum QAbstractItemView__State) ```
void q_headerview_on_set_state(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_schedule_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_execute_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QRegion* region ```
void q_headerview_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QRegion* region ```
void q_headerview_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QRegion*) ```
void q_headerview_on_set_dirty_region(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int dx, int dy ```
void q_headerview_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int dx, int dy ```
void q_headerview_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, int) ```
void q_headerview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
QPoint* q_headerview_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
QPoint* q_headerview_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QPoint* (*slot)() ```
void q_headerview_on_dirty_region_offset(void* self, QPoint* (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_start_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_stop_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_do_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
int64_t q_headerview_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
int64_t q_headerview_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int64_t (*slot)() ```
void q_headerview_on_drop_indicator_position(void* self, int64_t (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int left, int top, int right, int bottom ```
void q_headerview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int left, int top, int right, int bottom ```
void q_headerview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, int, int, int) ```
void q_headerview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
QMargins* q_headerview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
QMargins* q_headerview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QMargins* (*slot)() ```
void q_headerview_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QPainter* param1 ```
void q_headerview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QPainter* param1 ```
void q_headerview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QPainter*) ```
void q_headerview_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
bool q_headerview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
bool q_headerview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)() ```
void q_headerview_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
bool q_headerview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
bool q_headerview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)() ```
void q_headerview_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
QObject* q_headerview_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
QObject* q_headerview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QObject* (*slot)() ```
void q_headerview_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
int32_t q_headerview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
int32_t q_headerview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int32_t (*slot)() ```
void q_headerview_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, const char* signal ```
int32_t q_headerview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, const char* signal ```
int32_t q_headerview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int32_t (*slot)(QHeaderView*, const char*) ```
void q_headerview_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QMetaMethod* signal ```
bool q_headerview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QMetaMethod* signal ```
bool q_headerview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, QMetaMethod*) ```
void q_headerview_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QHeaderView* self, void (*slot)(QObject*, const char*) ```
void q_headerview_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#dtor.QHeaderView)
///
/// Delete this object from C++ memory.
///
/// ``` QHeaderView* self ```
void q_headerview_delete(void* self);

/// https://doc.qt.io/qt-6/qheaderview.html#types

typedef enum {
    QHEADERVIEW_RESIZEMODE_INTERACTIVE = 0,
    QHEADERVIEW_RESIZEMODE_STRETCH = 1,
    QHEADERVIEW_RESIZEMODE_FIXED = 2,
    QHEADERVIEW_RESIZEMODE_RESIZETOCONTENTS = 3,
    QHEADERVIEW_RESIZEMODE_CUSTOM = 2
} QHeaderView__ResizeMode;

#endif
