#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
#include "libqabstractscrollarea.hpp"
#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqframe.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqscrollbar.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqheaderview.hpp"
#include "libqheaderview.h"

/// https://doc.qt.io/qt-6/qheaderview.html

/// q_headerview_new constructs a new QHeaderView object.
///
/// ``` enum Qt__Orientation orientation ```
QHeaderView* q_headerview_new(int64_t orientation) {
    return QHeaderView_new(orientation);
}

/// q_headerview_new2 constructs a new QHeaderView object.
///
/// ``` enum Qt__Orientation orientation, QWidget* parent ```
QHeaderView* q_headerview_new2(int64_t orientation, void* parent) {
    return QHeaderView_new2(orientation, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHeaderView* self ```
QMetaObject* q_headerview_meta_object(void* self) {
    return QHeaderView_MetaObject((QHeaderView*)self);
}

/// ``` QHeaderView* self, const char* param1 ```
void* q_headerview_metacast(void* self, const char* param1) {
    return QHeaderView_Metacast((QHeaderView*)self, param1);
}

/// ``` QHeaderView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_headerview_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHeaderView_Metacall((QHeaderView*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, int32_t (*slot)(QHeaderView*, enum QMetaObject__Call, int, void*) ```
void q_headerview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QHeaderView_OnMetacall((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_headerview_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHeaderView_QBaseMetacall((QHeaderView*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_headerview_tr(const char* s) {
    libqt_string _str = QHeaderView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setModel)
///
/// ``` QHeaderView* self, QAbstractItemModel* model ```
void q_headerview_set_model(void* self, void* model) {
    QHeaderView_SetModel((QHeaderView*)self, (QAbstractItemModel*)model);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QAbstractItemModel*) ```
void q_headerview_on_set_model(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnSetModel((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QAbstractItemModel* model ```
void q_headerview_qbase_set_model(void* self, void* model) {
    QHeaderView_QBaseSetModel((QHeaderView*)self, (QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#orientation)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_orientation(void* self) {
    return QHeaderView_Orientation((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#offset)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_offset(void* self) {
    return QHeaderView_Offset((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#length)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_length(void* self) {
    return QHeaderView_Length((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sizeHint)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_size_hint(void* self) {
    return QHeaderView_SizeHint((QHeaderView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, QSize* (*slot)() ```
void q_headerview_on_size_hint(void* self, QSize* (*slot)()) {
    QHeaderView_OnSizeHint((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self ```
QSize* q_headerview_qbase_size_hint(void* self) {
    return QHeaderView_QBaseSizeHint((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setVisible)
///
/// ``` QHeaderView* self, bool v ```
void q_headerview_set_visible(void* self, bool v) {
    QHeaderView_SetVisible((QHeaderView*)self, v);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, bool) ```
void q_headerview_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QHeaderView_OnSetVisible((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, bool v ```
void q_headerview_qbase_set_visible(void* self, bool v) {
    QHeaderView_QBaseSetVisible((QHeaderView*)self, v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeHint)
///
/// ``` QHeaderView* self, int logicalIndex ```
int32_t q_headerview_section_size_hint(void* self, int logicalIndex) {
    return QHeaderView_SectionSizeHint((QHeaderView*)self, logicalIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#visualIndexAt)
///
/// ``` QHeaderView* self, int position ```
int32_t q_headerview_visual_index_at(void* self, int position) {
    return QHeaderView_VisualIndexAt((QHeaderView*)self, position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
///
/// ``` QHeaderView* self, int position ```
int32_t q_headerview_logical_index_at(void* self, int position) {
    return QHeaderView_LogicalIndexAt((QHeaderView*)self, position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
///
/// ``` QHeaderView* self, int x, int y ```
int32_t q_headerview_logical_index_at2(void* self, int x, int y) {
    return QHeaderView_LogicalIndexAt2((QHeaderView*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#logicalIndexAt)
///
/// ``` QHeaderView* self, QPoint* pos ```
int32_t q_headerview_logical_index_at_with_pos(void* self, void* pos) {
    return QHeaderView_LogicalIndexAtWithPos((QHeaderView*)self, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionSize)
///
/// ``` QHeaderView* self, int logicalIndex ```
int32_t q_headerview_section_size(void* self, int logicalIndex) {
    return QHeaderView_SectionSize((QHeaderView*)self, logicalIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionPosition)
///
/// ``` QHeaderView* self, int logicalIndex ```
int32_t q_headerview_section_position(void* self, int logicalIndex) {
    return QHeaderView_SectionPosition((QHeaderView*)self, logicalIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionViewportPosition)
///
/// ``` QHeaderView* self, int logicalIndex ```
int32_t q_headerview_section_viewport_position(void* self, int logicalIndex) {
    return QHeaderView_SectionViewportPosition((QHeaderView*)self, logicalIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#moveSection)
///
/// ``` QHeaderView* self, int from, int to ```
void q_headerview_move_section(void* self, int from, int to) {
    QHeaderView_MoveSection((QHeaderView*)self, from, to);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#swapSections)
///
/// ``` QHeaderView* self, int first, int second ```
void q_headerview_swap_sections(void* self, int first, int second) {
    QHeaderView_SwapSections((QHeaderView*)self, first, second);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#resizeSection)
///
/// ``` QHeaderView* self, int logicalIndex, int size ```
void q_headerview_resize_section(void* self, int logicalIndex, int size) {
    QHeaderView_ResizeSection((QHeaderView*)self, logicalIndex, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
///
/// ``` QHeaderView* self, enum QHeaderView__ResizeMode mode ```
void q_headerview_resize_sections(void* self, int64_t mode) {
    QHeaderView_ResizeSections((QHeaderView*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#isSectionHidden)
///
/// ``` QHeaderView* self, int logicalIndex ```
bool q_headerview_is_section_hidden(void* self, int logicalIndex) {
    return QHeaderView_IsSectionHidden((QHeaderView*)self, logicalIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSectionHidden)
///
/// ``` QHeaderView* self, int logicalIndex, bool hide ```
void q_headerview_set_section_hidden(void* self, int logicalIndex, bool hide) {
    QHeaderView_SetSectionHidden((QHeaderView*)self, logicalIndex, hide);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#hiddenSectionCount)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_hidden_section_count(void* self) {
    return QHeaderView_HiddenSectionCount((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#hideSection)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_hide_section(void* self, int logicalIndex) {
    QHeaderView_HideSection((QHeaderView*)self, logicalIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#showSection)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_show_section(void* self, int logicalIndex) {
    QHeaderView_ShowSection((QHeaderView*)self, logicalIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#count)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_count(void* self) {
    return QHeaderView_Count((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#visualIndex)
///
/// ``` QHeaderView* self, int logicalIndex ```
int32_t q_headerview_visual_index(void* self, int logicalIndex) {
    return QHeaderView_VisualIndex((QHeaderView*)self, logicalIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#logicalIndex)
///
/// ``` QHeaderView* self, int visualIndex ```
int32_t q_headerview_logical_index(void* self, int visualIndex) {
    return QHeaderView_LogicalIndex((QHeaderView*)self, visualIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSectionsMovable)
///
/// ``` QHeaderView* self, bool movable ```
void q_headerview_set_sections_movable(void* self, bool movable) {
    QHeaderView_SetSectionsMovable((QHeaderView*)self, movable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsMovable)
///
/// ``` QHeaderView* self ```
bool q_headerview_sections_movable(void* self) {
    return QHeaderView_SectionsMovable((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setFirstSectionMovable)
///
/// ``` QHeaderView* self, bool movable ```
void q_headerview_set_first_section_movable(void* self, bool movable) {
    QHeaderView_SetFirstSectionMovable((QHeaderView*)self, movable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#isFirstSectionMovable)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_first_section_movable(void* self) {
    return QHeaderView_IsFirstSectionMovable((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSectionsClickable)
///
/// ``` QHeaderView* self, bool clickable ```
void q_headerview_set_sections_clickable(void* self, bool clickable) {
    QHeaderView_SetSectionsClickable((QHeaderView*)self, clickable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsClickable)
///
/// ``` QHeaderView* self ```
bool q_headerview_sections_clickable(void* self) {
    return QHeaderView_SectionsClickable((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setHighlightSections)
///
/// ``` QHeaderView* self, bool highlight ```
void q_headerview_set_highlight_sections(void* self, bool highlight) {
    QHeaderView_SetHighlightSections((QHeaderView*)self, highlight);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#highlightSections)
///
/// ``` QHeaderView* self ```
bool q_headerview_highlight_sections(void* self) {
    return QHeaderView_HighlightSections((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionResizeMode)
///
/// ``` QHeaderView* self, int logicalIndex ```
int64_t q_headerview_section_resize_mode(void* self, int logicalIndex) {
    return QHeaderView_SectionResizeMode((QHeaderView*)self, logicalIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSectionResizeMode)
///
/// ``` QHeaderView* self, enum QHeaderView__ResizeMode mode ```
void q_headerview_set_section_resize_mode(void* self, int64_t mode) {
    QHeaderView_SetSectionResizeMode((QHeaderView*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSectionResizeMode)
///
/// ``` QHeaderView* self, int logicalIndex, enum QHeaderView__ResizeMode mode ```
void q_headerview_set_section_resize_mode2(void* self, int logicalIndex, int64_t mode) {
    QHeaderView_SetSectionResizeMode2((QHeaderView*)self, logicalIndex, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setResizeContentsPrecision)
///
/// ``` QHeaderView* self, int precision ```
void q_headerview_set_resize_contents_precision(void* self, int precision) {
    QHeaderView_SetResizeContentsPrecision((QHeaderView*)self, precision);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#resizeContentsPrecision)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_resize_contents_precision(void* self) {
    return QHeaderView_ResizeContentsPrecision((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#stretchSectionCount)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_stretch_section_count(void* self) {
    return QHeaderView_StretchSectionCount((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicatorShown)
///
/// ``` QHeaderView* self, bool show ```
void q_headerview_set_sort_indicator_shown(void* self, bool show) {
    QHeaderView_SetSortIndicatorShown((QHeaderView*)self, show);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#isSortIndicatorShown)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_sort_indicator_shown(void* self) {
    return QHeaderView_IsSortIndicatorShown((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicator)
///
/// ``` QHeaderView* self, int logicalIndex, enum Qt__SortOrder order ```
void q_headerview_set_sort_indicator(void* self, int logicalIndex, int64_t order) {
    QHeaderView_SetSortIndicator((QHeaderView*)self, logicalIndex, order);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorSection)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_sort_indicator_section(void* self) {
    return QHeaderView_SortIndicatorSection((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorOrder)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_sort_indicator_order(void* self) {
    return QHeaderView_SortIndicatorOrder((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSortIndicatorClearable)
///
/// ``` QHeaderView* self, bool clearable ```
void q_headerview_set_sort_indicator_clearable(void* self, bool clearable) {
    QHeaderView_SetSortIndicatorClearable((QHeaderView*)self, clearable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#isSortIndicatorClearable)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_sort_indicator_clearable(void* self) {
    return QHeaderView_IsSortIndicatorClearable((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#stretchLastSection)
///
/// ``` QHeaderView* self ```
bool q_headerview_stretch_last_section(void* self) {
    return QHeaderView_StretchLastSection((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setStretchLastSection)
///
/// ``` QHeaderView* self, bool stretch ```
void q_headerview_set_stretch_last_section(void* self, bool stretch) {
    QHeaderView_SetStretchLastSection((QHeaderView*)self, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#cascadingSectionResizes)
///
/// ``` QHeaderView* self ```
bool q_headerview_cascading_section_resizes(void* self) {
    return QHeaderView_CascadingSectionResizes((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setCascadingSectionResizes)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_cascading_section_resizes(void* self, bool enable) {
    QHeaderView_SetCascadingSectionResizes((QHeaderView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#defaultSectionSize)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_default_section_size(void* self) {
    return QHeaderView_DefaultSectionSize((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setDefaultSectionSize)
///
/// ``` QHeaderView* self, int size ```
void q_headerview_set_default_section_size(void* self, int size) {
    QHeaderView_SetDefaultSectionSize((QHeaderView*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#resetDefaultSectionSize)
///
/// ``` QHeaderView* self ```
void q_headerview_reset_default_section_size(void* self) {
    QHeaderView_ResetDefaultSectionSize((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#minimumSectionSize)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_minimum_section_size(void* self) {
    return QHeaderView_MinimumSectionSize((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setMinimumSectionSize)
///
/// ``` QHeaderView* self, int size ```
void q_headerview_set_minimum_section_size(void* self, int size) {
    QHeaderView_SetMinimumSectionSize((QHeaderView*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#maximumSectionSize)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_maximum_section_size(void* self) {
    return QHeaderView_MaximumSectionSize((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setMaximumSectionSize)
///
/// ``` QHeaderView* self, int size ```
void q_headerview_set_maximum_section_size(void* self, int size) {
    QHeaderView_SetMaximumSectionSize((QHeaderView*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#defaultAlignment)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_default_alignment(void* self) {
    return QHeaderView_DefaultAlignment((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setDefaultAlignment)
///
/// ``` QHeaderView* self, int alignment ```
void q_headerview_set_default_alignment(void* self, int64_t alignment) {
    QHeaderView_SetDefaultAlignment((QHeaderView*)self, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#doItemsLayout)
///
/// ``` QHeaderView* self ```
void q_headerview_do_items_layout(void* self) {
    QHeaderView_DoItemsLayout((QHeaderView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_do_items_layout(void* self, void (*slot)()) {
    QHeaderView_OnDoItemsLayout((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_do_items_layout(void* self) {
    QHeaderView_QBaseDoItemsLayout((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsMoved)
///
/// ``` QHeaderView* self ```
bool q_headerview_sections_moved(void* self) {
    return QHeaderView_SectionsMoved((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsHidden)
///
/// ``` QHeaderView* self ```
bool q_headerview_sections_hidden(void* self) {
    return QHeaderView_SectionsHidden((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#saveState)
///
/// ``` QHeaderView* self ```
char* q_headerview_save_state(void* self) {
    libqt_string _str = QHeaderView_SaveState((QHeaderView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#restoreState)
///
/// ``` QHeaderView* self, const char* state ```
bool q_headerview_restore_state(void* self, const char* state) {
    return QHeaderView_RestoreState((QHeaderView*)self, qstring(state));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#reset)
///
/// ``` QHeaderView* self ```
void q_headerview_reset(void* self) {
    QHeaderView_Reset((QHeaderView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_reset(void* self, void (*slot)()) {
    QHeaderView_OnReset((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_reset(void* self) {
    QHeaderView_QBaseReset((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setOffset)
///
/// ``` QHeaderView* self, int offset ```
void q_headerview_set_offset(void* self, int offset) {
    QHeaderView_SetOffset((QHeaderView*)self, offset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setOffsetToSectionPosition)
///
/// ``` QHeaderView* self, int visualIndex ```
void q_headerview_set_offset_to_section_position(void* self, int visualIndex) {
    QHeaderView_SetOffsetToSectionPosition((QHeaderView*)self, visualIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setOffsetToLastSection)
///
/// ``` QHeaderView* self ```
void q_headerview_set_offset_to_last_section(void* self) {
    QHeaderView_SetOffsetToLastSection((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#headerDataChanged)
///
/// ``` QHeaderView* self, enum Qt__Orientation orientation, int logicalFirst, int logicalLast ```
void q_headerview_header_data_changed(void* self, int64_t orientation, int logicalFirst, int logicalLast) {
    QHeaderView_HeaderDataChanged((QHeaderView*)self, orientation, logicalFirst, logicalLast);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionMoved)
///
/// ``` QHeaderView* self, int logicalIndex, int oldVisualIndex, int newVisualIndex ```
void q_headerview_section_moved(void* self, int logicalIndex, int oldVisualIndex, int newVisualIndex) {
    QHeaderView_SectionMoved((QHeaderView*)self, logicalIndex, oldVisualIndex, newVisualIndex);
}

/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, int, int) ```
void q_headerview_on_section_moved(void* self, void (*slot)(void*, int, int, int)) {
    QHeaderView_Connect_SectionMoved((QHeaderView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionResized)
///
/// ``` QHeaderView* self, int logicalIndex, int oldSize, int newSize ```
void q_headerview_section_resized(void* self, int logicalIndex, int oldSize, int newSize) {
    QHeaderView_SectionResized((QHeaderView*)self, logicalIndex, oldSize, newSize);
}

/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, int, int) ```
void q_headerview_on_section_resized(void* self, void (*slot)(void*, int, int, int)) {
    QHeaderView_Connect_SectionResized((QHeaderView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionPressed)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_section_pressed(void* self, int logicalIndex) {
    QHeaderView_SectionPressed((QHeaderView*)self, logicalIndex);
}

/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_section_pressed(void* self, void (*slot)(void*, int)) {
    QHeaderView_Connect_SectionPressed((QHeaderView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionClicked)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_section_clicked(void* self, int logicalIndex) {
    QHeaderView_SectionClicked((QHeaderView*)self, logicalIndex);
}

/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_section_clicked(void* self, void (*slot)(void*, int)) {
    QHeaderView_Connect_SectionClicked((QHeaderView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionEntered)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_section_entered(void* self, int logicalIndex) {
    QHeaderView_SectionEntered((QHeaderView*)self, logicalIndex);
}

/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_section_entered(void* self, void (*slot)(void*, int)) {
    QHeaderView_Connect_SectionEntered((QHeaderView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionDoubleClicked)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_section_double_clicked(void* self, int logicalIndex) {
    QHeaderView_SectionDoubleClicked((QHeaderView*)self, logicalIndex);
}

/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_section_double_clicked(void* self, void (*slot)(void*, int)) {
    QHeaderView_Connect_SectionDoubleClicked((QHeaderView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionCountChanged)
///
/// ``` QHeaderView* self, int oldCount, int newCount ```
void q_headerview_section_count_changed(void* self, int oldCount, int newCount) {
    QHeaderView_SectionCountChanged((QHeaderView*)self, oldCount, newCount);
}

/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, int) ```
void q_headerview_on_section_count_changed(void* self, void (*slot)(void*, int, int)) {
    QHeaderView_Connect_SectionCountChanged((QHeaderView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionHandleDoubleClicked)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_section_handle_double_clicked(void* self, int logicalIndex) {
    QHeaderView_SectionHandleDoubleClicked((QHeaderView*)self, logicalIndex);
}

/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_section_handle_double_clicked(void* self, void (*slot)(void*, int)) {
    QHeaderView_Connect_SectionHandleDoubleClicked((QHeaderView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#geometriesChanged)
///
/// ``` QHeaderView* self ```
void q_headerview_geometries_changed(void* self) {
    QHeaderView_GeometriesChanged((QHeaderView*)self);
}

/// ``` QHeaderView* self, void (*slot)(QHeaderView*) ```
void q_headerview_on_geometries_changed(void* self, void (*slot)(void*)) {
    QHeaderView_Connect_GeometriesChanged((QHeaderView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorChanged)
///
/// ``` QHeaderView* self, int logicalIndex, enum Qt__SortOrder order ```
void q_headerview_sort_indicator_changed(void* self, int logicalIndex, int64_t order) {
    QHeaderView_SortIndicatorChanged((QHeaderView*)self, logicalIndex, order);
}

/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, enum Qt__SortOrder) ```
void q_headerview_on_sort_indicator_changed(void* self, void (*slot)(void*, int, int64_t)) {
    QHeaderView_Connect_SortIndicatorChanged((QHeaderView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sortIndicatorClearableChanged)
///
/// ``` QHeaderView* self, bool clearable ```
void q_headerview_sort_indicator_clearable_changed(void* self, bool clearable) {
    QHeaderView_SortIndicatorClearableChanged((QHeaderView*)self, clearable);
}

/// ``` QHeaderView* self, void (*slot)(QHeaderView*, bool) ```
void q_headerview_on_sort_indicator_clearable_changed(void* self, void (*slot)(void*, bool)) {
    QHeaderView_Connect_SortIndicatorClearableChanged((QHeaderView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#updateSection)
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_update_section(void* self, int logicalIndex) {
    QHeaderView_UpdateSection((QHeaderView*)self, logicalIndex);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_update_section(void* self, void (*slot)(void*, int)) {
    QHeaderView_OnUpdateSection((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, int logicalIndex ```
void q_headerview_qbase_update_section(void* self, int logicalIndex) {
    QHeaderView_QBaseUpdateSection((QHeaderView*)self, logicalIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#resizeSections)
///
/// ``` QHeaderView* self ```
void q_headerview_resize_sections2(void* self) {
    QHeaderView_ResizeSections2((QHeaderView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_resize_sections2(void* self, void (*slot)()) {
    QHeaderView_OnResizeSections2((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_resize_sections2(void* self) {
    QHeaderView_QBaseResizeSections2((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsInserted)
///
/// ``` QHeaderView* self, QModelIndex* parent, int logicalFirst, int logicalLast ```
void q_headerview_sections_inserted(void* self, void* parent, int logicalFirst, int logicalLast) {
    QHeaderView_SectionsInserted((QHeaderView*)self, (QModelIndex*)parent, logicalFirst, logicalLast);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*, int, int) ```
void q_headerview_on_sections_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QHeaderView_OnSectionsInserted((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* parent, int logicalFirst, int logicalLast ```
void q_headerview_qbase_sections_inserted(void* self, void* parent, int logicalFirst, int logicalLast) {
    QHeaderView_QBaseSectionsInserted((QHeaderView*)self, (QModelIndex*)parent, logicalFirst, logicalLast);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionsAboutToBeRemoved)
///
/// ``` QHeaderView* self, QModelIndex* parent, int logicalFirst, int logicalLast ```
void q_headerview_sections_about_to_be_removed(void* self, void* parent, int logicalFirst, int logicalLast) {
    QHeaderView_SectionsAboutToBeRemoved((QHeaderView*)self, (QModelIndex*)parent, logicalFirst, logicalLast);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*, int, int) ```
void q_headerview_on_sections_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QHeaderView_OnSectionsAboutToBeRemoved((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* parent, int logicalFirst, int logicalLast ```
void q_headerview_qbase_sections_about_to_be_removed(void* self, void* parent, int logicalFirst, int logicalLast) {
    QHeaderView_QBaseSectionsAboutToBeRemoved((QHeaderView*)self, (QModelIndex*)parent, logicalFirst, logicalLast);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initialize)
///
/// ``` QHeaderView* self ```
void q_headerview_initialize(void* self) {
    QHeaderView_Initialize((QHeaderView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_initialize(void* self, void (*slot)()) {
    QHeaderView_OnInitialize((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_initialize(void* self) {
    QHeaderView_QBaseInitialize((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
///
/// ``` QHeaderView* self ```
void q_headerview_initialize_sections(void* self) {
    QHeaderView_InitializeSections((QHeaderView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_initialize_sections(void* self, void (*slot)()) {
    QHeaderView_OnInitializeSections((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_initialize_sections(void* self) {
    QHeaderView_QBaseInitializeSections((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initializeSections)
///
/// ``` QHeaderView* self, int start, int end ```
void q_headerview_initialize_sections2(void* self, int start, int end) {
    QHeaderView_InitializeSections2((QHeaderView*)self, start, end);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, int) ```
void q_headerview_on_initialize_sections2(void* self, void (*slot)(void*, int, int)) {
    QHeaderView_OnInitializeSections2((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, int start, int end ```
void q_headerview_qbase_initialize_sections2(void* self, int start, int end) {
    QHeaderView_QBaseInitializeSections2((QHeaderView*)self, start, end);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#currentChanged)
///
/// ``` QHeaderView* self, QModelIndex* current, QModelIndex* old ```
void q_headerview_current_changed(void* self, void* current, void* old) {
    QHeaderView_CurrentChanged((QHeaderView*)self, (QModelIndex*)current, (QModelIndex*)old);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*, QModelIndex*) ```
void q_headerview_on_current_changed(void* self, void (*slot)(void*, void*, void*)) {
    QHeaderView_OnCurrentChanged((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* current, QModelIndex* old ```
void q_headerview_qbase_current_changed(void* self, void* current, void* old) {
    QHeaderView_QBaseCurrentChanged((QHeaderView*)self, (QModelIndex*)current, (QModelIndex*)old);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#event)
///
/// ``` QHeaderView* self, QEvent* e ```
bool q_headerview_event(void* self, void* e) {
    return QHeaderView_Event((QHeaderView*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, QEvent*) ```
void q_headerview_on_event(void* self, bool (*slot)(void*, void*)) {
    QHeaderView_OnEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QEvent* e ```
bool q_headerview_qbase_event(void* self, void* e) {
    return QHeaderView_QBaseEvent((QHeaderView*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#paintEvent)
///
/// ``` QHeaderView* self, QPaintEvent* e ```
void q_headerview_paint_event(void* self, void* e) {
    QHeaderView_PaintEvent((QHeaderView*)self, (QPaintEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QPaintEvent*) ```
void q_headerview_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnPaintEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QPaintEvent* e ```
void q_headerview_qbase_paint_event(void* self, void* e) {
    QHeaderView_QBasePaintEvent((QHeaderView*)self, (QPaintEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mousePressEvent)
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_mouse_press_event(void* self, void* e) {
    QHeaderView_MousePressEvent((QHeaderView*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QMouseEvent*) ```
void q_headerview_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnMousePressEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_qbase_mouse_press_event(void* self, void* e) {
    QHeaderView_QBaseMousePressEvent((QHeaderView*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mouseMoveEvent)
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_mouse_move_event(void* self, void* e) {
    QHeaderView_MouseMoveEvent((QHeaderView*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QMouseEvent*) ```
void q_headerview_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnMouseMoveEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_qbase_mouse_move_event(void* self, void* e) {
    QHeaderView_QBaseMouseMoveEvent((QHeaderView*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mouseReleaseEvent)
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_mouse_release_event(void* self, void* e) {
    QHeaderView_MouseReleaseEvent((QHeaderView*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QMouseEvent*) ```
void q_headerview_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnMouseReleaseEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_qbase_mouse_release_event(void* self, void* e) {
    QHeaderView_QBaseMouseReleaseEvent((QHeaderView*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#mouseDoubleClickEvent)
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_mouse_double_click_event(void* self, void* e) {
    QHeaderView_MouseDoubleClickEvent((QHeaderView*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QMouseEvent*) ```
void q_headerview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnMouseDoubleClickEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QMouseEvent* e ```
void q_headerview_qbase_mouse_double_click_event(void* self, void* e) {
    QHeaderView_QBaseMouseDoubleClickEvent((QHeaderView*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#viewportEvent)
///
/// ``` QHeaderView* self, QEvent* e ```
bool q_headerview_viewport_event(void* self, void* e) {
    return QHeaderView_ViewportEvent((QHeaderView*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, QEvent*) ```
void q_headerview_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QHeaderView_OnViewportEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QEvent* e ```
bool q_headerview_qbase_viewport_event(void* self, void* e) {
    return QHeaderView_QBaseViewportEvent((QHeaderView*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#paintSection)
///
/// ``` QHeaderView* self, QPainter* painter, QRect* rect, int logicalIndex ```
void q_headerview_paint_section(void* self, void* painter, void* rect, int logicalIndex) {
    QHeaderView_PaintSection((QHeaderView*)self, (QPainter*)painter, (QRect*)rect, logicalIndex);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QPainter*, QRect*, int) ```
void q_headerview_on_paint_section(void* self, void (*slot)(void*, void*, void*, int)) {
    QHeaderView_OnPaintSection((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QPainter* painter, QRect* rect, int logicalIndex ```
void q_headerview_qbase_paint_section(void* self, void* painter, void* rect, int logicalIndex) {
    QHeaderView_QBasePaintSection((QHeaderView*)self, (QPainter*)painter, (QRect*)rect, logicalIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#sectionSizeFromContents)
///
/// ``` QHeaderView* self, int logicalIndex ```
QSize* q_headerview_section_size_from_contents(void* self, int logicalIndex) {
    return QHeaderView_SectionSizeFromContents((QHeaderView*)self, logicalIndex);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, QSize* (*slot)(QHeaderView*, int) ```
void q_headerview_on_section_size_from_contents(void* self, QSize* (*slot)(void*, int)) {
    QHeaderView_OnSectionSizeFromContents((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, int logicalIndex ```
QSize* q_headerview_qbase_section_size_from_contents(void* self, int logicalIndex) {
    return QHeaderView_QBaseSectionSizeFromContents((QHeaderView*)self, logicalIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#horizontalOffset)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_horizontal_offset(void* self) {
    return QHeaderView_HorizontalOffset((QHeaderView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, int32_t (*slot)() ```
void q_headerview_on_horizontal_offset(void* self, int32_t (*slot)()) {
    QHeaderView_OnHorizontalOffset((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self ```
int32_t q_headerview_qbase_horizontal_offset(void* self) {
    return QHeaderView_QBaseHorizontalOffset((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#verticalOffset)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_vertical_offset(void* self) {
    return QHeaderView_VerticalOffset((QHeaderView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, int32_t (*slot)() ```
void q_headerview_on_vertical_offset(void* self, int32_t (*slot)()) {
    QHeaderView_OnVerticalOffset((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self ```
int32_t q_headerview_qbase_vertical_offset(void* self) {
    return QHeaderView_QBaseVerticalOffset((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#updateGeometries)
///
/// ``` QHeaderView* self ```
void q_headerview_update_geometries(void* self) {
    QHeaderView_UpdateGeometries((QHeaderView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_update_geometries(void* self, void (*slot)()) {
    QHeaderView_OnUpdateGeometries((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_update_geometries(void* self) {
    QHeaderView_QBaseUpdateGeometries((QHeaderView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#scrollContentsBy)
///
/// ``` QHeaderView* self, int dx, int dy ```
void q_headerview_scroll_contents_by(void* self, int dx, int dy) {
    QHeaderView_ScrollContentsBy((QHeaderView*)self, dx, dy);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, int) ```
void q_headerview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QHeaderView_OnScrollContentsBy((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, int dx, int dy ```
void q_headerview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QHeaderView_QBaseScrollContentsBy((QHeaderView*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#dataChanged)
///
/// ``` QHeaderView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_headerview_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QHeaderView_DataChanged((QHeaderView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*, QModelIndex*, int*[]) ```
void q_headerview_on_data_changed(void* self, void (*slot)(void*, void*, void*, int*)) {
    QHeaderView_OnDataChanged((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_headerview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QHeaderView_QBaseDataChanged((QHeaderView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#rowsInserted)
///
/// ``` QHeaderView* self, QModelIndex* parent, int start, int end ```
void q_headerview_rows_inserted(void* self, void* parent, int start, int end) {
    QHeaderView_RowsInserted((QHeaderView*)self, (QModelIndex*)parent, start, end);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*, int, int) ```
void q_headerview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QHeaderView_OnRowsInserted((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* parent, int start, int end ```
void q_headerview_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QHeaderView_QBaseRowsInserted((QHeaderView*)self, (QModelIndex*)parent, start, end);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#visualRect)
///
/// ``` QHeaderView* self, QModelIndex* index ```
QRect* q_headerview_visual_rect(void* self, void* index) {
    return QHeaderView_VisualRect((QHeaderView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, QRect* (*slot)(QHeaderView*, QModelIndex*) ```
void q_headerview_on_visual_rect(void* self, QRect* (*slot)(void*, void*)) {
    QHeaderView_OnVisualRect((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* index ```
QRect* q_headerview_qbase_visual_rect(void* self, void* index) {
    return QHeaderView_QBaseVisualRect((QHeaderView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#scrollTo)
///
/// ``` QHeaderView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_headerview_scroll_to(void* self, void* index, int64_t hint) {
    QHeaderView_ScrollTo((QHeaderView*)self, (QModelIndex*)index, hint);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_headerview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t)) {
    QHeaderView_OnScrollTo((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_headerview_qbase_scroll_to(void* self, void* index, int64_t hint) {
    QHeaderView_QBaseScrollTo((QHeaderView*)self, (QModelIndex*)index, hint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#indexAt)
///
/// ``` QHeaderView* self, QPoint* p ```
QModelIndex* q_headerview_index_at(void* self, void* p) {
    return QHeaderView_IndexAt((QHeaderView*)self, (QPoint*)p);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, QModelIndex* (*slot)(QHeaderView*, QPoint*) ```
void q_headerview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*)) {
    QHeaderView_OnIndexAt((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QPoint* p ```
QModelIndex* q_headerview_qbase_index_at(void* self, void* p) {
    return QHeaderView_QBaseIndexAt((QHeaderView*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#isIndexHidden)
///
/// ``` QHeaderView* self, QModelIndex* index ```
bool q_headerview_is_index_hidden(void* self, void* index) {
    return QHeaderView_IsIndexHidden((QHeaderView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, QModelIndex*) ```
void q_headerview_on_is_index_hidden(void* self, bool (*slot)(void*, void*)) {
    QHeaderView_OnIsIndexHidden((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QModelIndex* index ```
bool q_headerview_qbase_is_index_hidden(void* self, void* index) {
    return QHeaderView_QBaseIsIndexHidden((QHeaderView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#moveCursor)
///
/// ``` QHeaderView* self, enum QAbstractItemView__CursorAction param1, int param2 ```
QModelIndex* q_headerview_move_cursor(void* self, int64_t param1, int64_t param2) {
    return QHeaderView_MoveCursor((QHeaderView*)self, param1, param2);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, QModelIndex* (*slot)(QHeaderView*, enum QAbstractItemView__CursorAction, int) ```
void q_headerview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t)) {
    QHeaderView_OnMoveCursor((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, enum QAbstractItemView__CursorAction param1, int param2 ```
QModelIndex* q_headerview_qbase_move_cursor(void* self, int64_t param1, int64_t param2) {
    return QHeaderView_QBaseMoveCursor((QHeaderView*)self, param1, param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#setSelection)
///
/// ``` QHeaderView* self, QRect* rect, int flags ```
void q_headerview_set_selection(void* self, void* rect, int64_t flags) {
    QHeaderView_SetSelection((QHeaderView*)self, (QRect*)rect, flags);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QRect*, int) ```
void q_headerview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t)) {
    QHeaderView_OnSetSelection((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QRect* rect, int flags ```
void q_headerview_qbase_set_selection(void* self, void* rect, int64_t flags) {
    QHeaderView_QBaseSetSelection((QHeaderView*)self, (QRect*)rect, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#visualRegionForSelection)
///
/// ``` QHeaderView* self, QItemSelection* selection ```
QRegion* q_headerview_visual_region_for_selection(void* self, void* selection) {
    return QHeaderView_VisualRegionForSelection((QHeaderView*)self, (QItemSelection*)selection);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, QRegion* (*slot)(QHeaderView*, QItemSelection*) ```
void q_headerview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*)) {
    QHeaderView_OnVisualRegionForSelection((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QItemSelection* selection ```
QRegion* q_headerview_qbase_visual_region_for_selection(void* self, void* selection) {
    return QHeaderView_QBaseVisualRegionForSelection((QHeaderView*)self, (QItemSelection*)selection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initStyleOptionForIndex)
///
/// ``` QHeaderView* self, QStyleOptionHeader* option, int logicalIndex ```
void q_headerview_init_style_option_for_index(void* self, void* option, int logicalIndex) {
    QHeaderView_InitStyleOptionForIndex((QHeaderView*)self, (QStyleOptionHeader*)option, logicalIndex);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QStyleOptionHeader*, int) ```
void q_headerview_on_init_style_option_for_index(void* self, void (*slot)(void*, void*, int)) {
    QHeaderView_OnInitStyleOptionForIndex((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QStyleOptionHeader* option, int logicalIndex ```
void q_headerview_qbase_init_style_option_for_index(void* self, void* option, int logicalIndex) {
    QHeaderView_QBaseInitStyleOptionForIndex((QHeaderView*)self, (QStyleOptionHeader*)option, logicalIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qheaderview.html#initStyleOption)
///
/// ``` QHeaderView* self, QStyleOptionHeader* option ```
void q_headerview_init_style_option(void* self, void* option) {
    QHeaderView_InitStyleOption((QHeaderView*)self, (QStyleOptionHeader*)option);
}

/// Allows for overriding the related default method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QStyleOptionHeader*) ```
void q_headerview_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnInitStyleOption((QHeaderView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHeaderView* self, QStyleOptionHeader* option ```
void q_headerview_qbase_init_style_option(void* self, void* option) {
    QHeaderView_QBaseInitStyleOption((QHeaderView*)self, (QStyleOptionHeader*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_headerview_tr2(const char* s, const char* c) {
    libqt_string _str = QHeaderView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_headerview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHeaderView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QHeaderView* self ```
QAbstractItemModel* q_headerview_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QHeaderView* self ```
QItemSelectionModel* q_headerview_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QHeaderView* self, QAbstractItemDelegate* delegate ```
void q_headerview_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QHeaderView* self ```
QAbstractItemDelegate* q_headerview_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QHeaderView* self, enum QAbstractItemView__SelectionMode mode ```
void q_headerview_set_selection_mode(void* self, int64_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QHeaderView* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_headerview_set_selection_behavior(void* self, int64_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QHeaderView* self ```
QModelIndex* q_headerview_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QHeaderView* self ```
QModelIndex* q_headerview_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QHeaderView* self, int triggers ```
void q_headerview_set_edit_triggers(void* self, int64_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QHeaderView* self, enum QAbstractItemView__ScrollMode mode ```
void q_headerview_set_vertical_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QHeaderView* self ```
void q_headerview_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QHeaderView* self, enum QAbstractItemView__ScrollMode mode ```
void q_headerview_set_horizontal_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QHeaderView* self ```
void q_headerview_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QHeaderView* self ```
bool q_headerview_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QHeaderView* self, int margin ```
void q_headerview_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QHeaderView* self ```
bool q_headerview_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QHeaderView* self ```
bool q_headerview_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QHeaderView* self ```
bool q_headerview_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QHeaderView* self, bool overwrite ```
void q_headerview_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QHeaderView* self ```
bool q_headerview_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QHeaderView* self, enum QAbstractItemView__DragDropMode behavior ```
void q_headerview_set_drag_drop_mode(void* self, int64_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QHeaderView* self, enum Qt__DropAction dropAction ```
void q_headerview_set_default_drop_action(void* self, int64_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QHeaderView* self ```
bool q_headerview_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QHeaderView* self, QSize* size ```
void q_headerview_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QHeaderView* self, enum Qt__TextElideMode mode ```
void q_headerview_set_text_elide_mode(void* self, int64_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QHeaderView* self, QModelIndex* index ```
QSize* q_headerview_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_open_persistent_editor(void* self, void* index) {
    QAbstractItemView_OpenPersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_close_persistent_editor(void* self, void* index) {
    QAbstractItemView_ClosePersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// ``` QHeaderView* self, QModelIndex* index ```
bool q_headerview_is_persistent_editor_open(void* self, void* index) {
    return QAbstractItemView_IsPersistentEditorOpen((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QHeaderView* self, QModelIndex* index, QWidget* widget ```
void q_headerview_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QHeaderView* self, QModelIndex* index ```
QWidget* q_headerview_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QHeaderView* self, int row, QAbstractItemDelegate* delegate ```
void q_headerview_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QHeaderView* self, int row ```
QAbstractItemDelegate* q_headerview_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QHeaderView* self, int column, QAbstractItemDelegate* delegate ```
void q_headerview_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QHeaderView* self, int column ```
QAbstractItemDelegate* q_headerview_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QHeaderView* self, QModelIndex* index ```
QAbstractItemDelegate* q_headerview_item_delegate_with_index(void* self, void* index) {
    return QAbstractItemView_ItemDelegateWithIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QHeaderView* self ```
void q_headerview_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QHeaderView* self ```
void q_headerview_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QHeaderView* self ```
void q_headerview_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QHeaderView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_headerview_on_pressed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QHeaderView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_headerview_on_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QHeaderView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_headerview_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QHeaderView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_headerview_on_activated(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QHeaderView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_headerview_on_entered(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QHeaderView* self ```
void q_headerview_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// ``` QHeaderView* self, void (*slot)(QAbstractItemView*) ```
void q_headerview_on_viewport_entered(void* self, void (*slot)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QHeaderView* self, QSize* size ```
void q_headerview_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

/// Inherited from QAbstractItemView
///
/// ``` QHeaderView* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_headerview_on_icon_size_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QHeaderView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_headerview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QHeaderView* self ```
QScrollBar* q_headerview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QHeaderView* self, QScrollBar* scrollbar ```
void q_headerview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QHeaderView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_headerview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QHeaderView* self ```
QScrollBar* q_headerview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QHeaderView* self, QScrollBar* scrollbar ```
void q_headerview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QHeaderView* self, QWidget* widget ```
void q_headerview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QHeaderView* self, QWidget* widget, int alignment ```
void q_headerview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QHeaderView* self, int alignment ```
libqt_list /* of QWidget* */ q_headerview_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QHeaderView* self, QWidget* widget ```
void q_headerview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QHeaderView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_headerview_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QHeaderView* self, int frameStyle ```
void q_headerview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QHeaderView* self, enum QFrame__Shape frameShape ```
void q_headerview_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QHeaderView* self, enum QFrame__Shadow frameShadow ```
void q_headerview_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QHeaderView* self, int lineWidth ```
void q_headerview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QHeaderView* self, int midLineWidth ```
void q_headerview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QHeaderView* self ```
QRect* q_headerview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QHeaderView* self, QRect* frameRect ```
void q_headerview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QHeaderView* self ```
uintptr_t q_headerview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QHeaderView* self ```
void q_headerview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QHeaderView* self ```
uintptr_t q_headerview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QHeaderView* self ```
uintptr_t q_headerview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QHeaderView* self ```
QStyle* q_headerview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QHeaderView* self, QStyle* style ```
void q_headerview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QHeaderView* self, enum Qt__WindowModality windowModality ```
void q_headerview_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QHeaderView* self, QWidget* param1 ```
bool q_headerview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QHeaderView* self, bool enabled ```
void q_headerview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QHeaderView* self, bool disabled ```
void q_headerview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QHeaderView* self, bool windowModified ```
void q_headerview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QHeaderView* self ```
QRect* q_headerview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QHeaderView* self ```
QRect* q_headerview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QHeaderView* self ```
QRect* q_headerview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QHeaderView* self ```
QPoint* q_headerview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QHeaderView* self ```
QRect* q_headerview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QHeaderView* self ```
QRect* q_headerview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QHeaderView* self ```
QRegion* q_headerview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QHeaderView* self, QSize* minimumSize ```
void q_headerview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QHeaderView* self, int minw, int minh ```
void q_headerview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QHeaderView* self, QSize* maximumSize ```
void q_headerview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QHeaderView* self, int maxw, int maxh ```
void q_headerview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QHeaderView* self, int minw ```
void q_headerview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QHeaderView* self, int minh ```
void q_headerview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QHeaderView* self, int maxw ```
void q_headerview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QHeaderView* self, int maxh ```
void q_headerview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QHeaderView* self, QSize* sizeIncrement ```
void q_headerview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QHeaderView* self, int w, int h ```
void q_headerview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QHeaderView* self ```
QSize* q_headerview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QHeaderView* self, QSize* baseSize ```
void q_headerview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QHeaderView* self, int basew, int baseh ```
void q_headerview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QHeaderView* self, QSize* fixedSize ```
void q_headerview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QHeaderView* self, int w, int h ```
void q_headerview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QHeaderView* self, int w ```
void q_headerview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QHeaderView* self, int h ```
void q_headerview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QHeaderView* self, QPointF* param1 ```
QPointF* q_headerview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QHeaderView* self, QPoint* param1 ```
QPoint* q_headerview_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QHeaderView* self, QPointF* param1 ```
QPointF* q_headerview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QHeaderView* self, QPoint* param1 ```
QPoint* q_headerview_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QHeaderView* self, QPointF* param1 ```
QPointF* q_headerview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QHeaderView* self, QPoint* param1 ```
QPoint* q_headerview_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QHeaderView* self, QPointF* param1 ```
QPointF* q_headerview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QHeaderView* self, QPoint* param1 ```
QPoint* q_headerview_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QHeaderView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_headerview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QHeaderView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_headerview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QHeaderView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_headerview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QHeaderView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_headerview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QHeaderView* self ```
QPalette* q_headerview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QHeaderView* self, QPalette* palette ```
void q_headerview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QHeaderView* self, enum QPalette__ColorRole backgroundRole ```
void q_headerview_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QHeaderView* self, enum QPalette__ColorRole foregroundRole ```
void q_headerview_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QHeaderView* self ```
QFont* q_headerview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QHeaderView* self, QFont* font ```
void q_headerview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QHeaderView* self ```
QFontMetrics* q_headerview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QHeaderView* self ```
QFontInfo* q_headerview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QHeaderView* self ```
QCursor* q_headerview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QHeaderView* self, QCursor* cursor ```
void q_headerview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QHeaderView* self ```
void q_headerview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QHeaderView* self ```
bool q_headerview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QHeaderView* self ```
bool q_headerview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QHeaderView* self ```
bool q_headerview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QHeaderView* self, QBitmap* mask ```
void q_headerview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QHeaderView* self, QRegion* mask ```
void q_headerview_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QHeaderView* self ```
QRegion* q_headerview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QHeaderView* self ```
void q_headerview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPaintDevice* target ```
void q_headerview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPainter* painter ```
void q_headerview_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QHeaderView* self ```
QPixmap* q_headerview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QHeaderView* self ```
QGraphicsEffect* q_headerview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QHeaderView* self, QGraphicsEffect* effect ```
void q_headerview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QHeaderView* self, enum Qt__GestureType typeVal ```
void q_headerview_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QHeaderView* self, enum Qt__GestureType typeVal ```
void q_headerview_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QHeaderView* self, const char* windowTitle ```
void q_headerview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QHeaderView* self, const char* styleSheet ```
void q_headerview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QHeaderView* self ```
const char* q_headerview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QHeaderView* self ```
const char* q_headerview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QHeaderView* self, QIcon* icon ```
void q_headerview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QHeaderView* self ```
QIcon* q_headerview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QHeaderView* self, const char* windowIconText ```
void q_headerview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QHeaderView* self ```
const char* q_headerview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QHeaderView* self, const char* windowRole ```
void q_headerview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QHeaderView* self ```
const char* q_headerview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QHeaderView* self, const char* filePath ```
void q_headerview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QHeaderView* self ```
const char* q_headerview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QHeaderView* self, double level ```
void q_headerview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QHeaderView* self ```
double q_headerview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QHeaderView* self, const char* toolTip ```
void q_headerview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QHeaderView* self ```
const char* q_headerview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QHeaderView* self, int msec ```
void q_headerview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QHeaderView* self, const char* statusTip ```
void q_headerview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QHeaderView* self ```
const char* q_headerview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QHeaderView* self, const char* whatsThis ```
void q_headerview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QHeaderView* self ```
const char* q_headerview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QHeaderView* self ```
const char* q_headerview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QHeaderView* self, const char* name ```
void q_headerview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QHeaderView* self ```
const char* q_headerview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QHeaderView* self, const char* description ```
void q_headerview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QHeaderView* self, enum Qt__LayoutDirection direction ```
void q_headerview_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QHeaderView* self ```
void q_headerview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QHeaderView* self, QLocale* locale ```
void q_headerview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QHeaderView* self ```
QLocale* q_headerview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QHeaderView* self ```
void q_headerview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QHeaderView* self ```
void q_headerview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QHeaderView* self ```
void q_headerview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QHeaderView* self ```
void q_headerview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QHeaderView* self, enum Qt__FocusReason reason ```
void q_headerview_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QHeaderView* self, enum Qt__FocusPolicy policy ```
void q_headerview_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QHeaderView* self ```
bool q_headerview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_headerview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QHeaderView* self, QWidget* focusProxy ```
void q_headerview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QHeaderView* self, enum Qt__ContextMenuPolicy policy ```
void q_headerview_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QHeaderView* self ```
void q_headerview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QHeaderView* self, QCursor* param1 ```
void q_headerview_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QHeaderView* self ```
void q_headerview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QHeaderView* self ```
void q_headerview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QHeaderView* self ```
void q_headerview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QHeaderView* self, QKeySequence* key ```
int32_t q_headerview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QHeaderView* self, int id ```
void q_headerview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QHeaderView* self, int id ```
void q_headerview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QHeaderView* self, int id ```
void q_headerview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_headerview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_headerview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QHeaderView* self ```
bool q_headerview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QHeaderView* self, bool enable ```
void q_headerview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QHeaderView* self ```
QGraphicsProxyWidget* q_headerview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QHeaderView* self ```
void q_headerview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QHeaderView* self, int x, int y, int w, int h ```
void q_headerview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QHeaderView* self, QRect* param1 ```
void q_headerview_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QHeaderView* self, QRegion* param1 ```
void q_headerview_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QHeaderView* self, int x, int y, int w, int h ```
void q_headerview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QHeaderView* self, QRect* param1 ```
void q_headerview_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QHeaderView* self, QRegion* param1 ```
void q_headerview_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QHeaderView* self, bool hidden ```
void q_headerview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QHeaderView* self ```
void q_headerview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QHeaderView* self ```
void q_headerview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QHeaderView* self ```
void q_headerview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QHeaderView* self ```
void q_headerview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QHeaderView* self ```
void q_headerview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QHeaderView* self ```
void q_headerview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QHeaderView* self ```
bool q_headerview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QHeaderView* self ```
void q_headerview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QHeaderView* self ```
void q_headerview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QHeaderView* self, QWidget* param1 ```
void q_headerview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QHeaderView* self, int x, int y ```
void q_headerview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QHeaderView* self, QPoint* param1 ```
void q_headerview_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QHeaderView* self, int w, int h ```
void q_headerview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QHeaderView* self, QSize* param1 ```
void q_headerview_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QHeaderView* self, int x, int y, int w, int h ```
void q_headerview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QHeaderView* self, QRect* geometry ```
void q_headerview_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QHeaderView* self ```
char* q_headerview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QHeaderView* self, const char* geometry ```
bool q_headerview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QHeaderView* self ```
void q_headerview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QHeaderView* self, QWidget* param1 ```
bool q_headerview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QHeaderView* self, int state ```
void q_headerview_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QHeaderView* self, int state ```
void q_headerview_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QHeaderView* self ```
QSizePolicy* q_headerview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QHeaderView* self, QSizePolicy* sizePolicy ```
void q_headerview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QHeaderView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_headerview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QHeaderView* self ```
QRegion* q_headerview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QHeaderView* self, int left, int top, int right, int bottom ```
void q_headerview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QHeaderView* self, QMargins* margins ```
void q_headerview_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QHeaderView* self ```
QMargins* q_headerview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QHeaderView* self ```
QRect* q_headerview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QHeaderView* self ```
QLayout* q_headerview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QHeaderView* self, QLayout* layout ```
void q_headerview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QHeaderView* self ```
void q_headerview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QHeaderView* self, QWidget* parent ```
void q_headerview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QHeaderView* self, QWidget* parent, int f ```
void q_headerview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QHeaderView* self, int dx, int dy ```
void q_headerview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QHeaderView* self, int dx, int dy, QRect* param3 ```
void q_headerview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QHeaderView* self ```
bool q_headerview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QHeaderView* self, bool on ```
void q_headerview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QHeaderView* self, QAction* action ```
void q_headerview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QHeaderView* self, QAction* actions[] ```
void q_headerview_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QHeaderView* self, QAction* before, QAction* actions[] ```
void q_headerview_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QHeaderView* self, QAction* before, QAction* action ```
void q_headerview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QHeaderView* self, QAction* action ```
void q_headerview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QHeaderView* self ```
libqt_list /* of QAction* */ q_headerview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QHeaderView* self, const char* text ```
QAction* q_headerview_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QHeaderView* self, QIcon* icon, const char* text ```
QAction* q_headerview_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QHeaderView* self, const char* text, QKeySequence* shortcut ```
QAction* q_headerview_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QHeaderView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_headerview_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QHeaderView* self ```
QWidget* q_headerview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QHeaderView* self, int typeVal ```
void q_headerview_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QHeaderView* self, enum Qt__WindowType param1 ```
void q_headerview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QHeaderView* self, int typeVal ```
void q_headerview_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_headerview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QHeaderView* self, int x, int y ```
QWidget* q_headerview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QHeaderView* self, QPoint* p ```
QWidget* q_headerview_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QHeaderView* self, enum Qt__WidgetAttribute param1 ```
void q_headerview_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QHeaderView* self, enum Qt__WidgetAttribute param1 ```
bool q_headerview_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QHeaderView* self ```
void q_headerview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QHeaderView* self, QWidget* child ```
bool q_headerview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QHeaderView* self ```
bool q_headerview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QHeaderView* self, bool enabled ```
void q_headerview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QHeaderView* self ```
QBackingStore* q_headerview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QHeaderView* self ```
QWindow* q_headerview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QHeaderView* self ```
QScreen* q_headerview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QHeaderView* self, QScreen* screen ```
void q_headerview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_headerview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QHeaderView* self, const char* title ```
void q_headerview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QHeaderView* self, void (*slot)(QWidget*, const char*) ```
void q_headerview_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QHeaderView* self, QIcon* icon ```
void q_headerview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QHeaderView* self, void (*slot)(QWidget*, QIcon*) ```
void q_headerview_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QHeaderView* self, const char* iconText ```
void q_headerview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QHeaderView* self, void (*slot)(QWidget*, const char*) ```
void q_headerview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QHeaderView* self, QPoint* pos ```
void q_headerview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QHeaderView* self, void (*slot)(QWidget*, QPoint*) ```
void q_headerview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QHeaderView* self ```
int64_t q_headerview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QHeaderView* self, int hints ```
void q_headerview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPaintDevice* target, QPoint* targetOffset ```
void q_headerview_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_headerview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_headerview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPainter* painter, QPoint* targetOffset ```
void q_headerview_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_headerview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QHeaderView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_headerview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QHeaderView* self, QRect* rectangle ```
QPixmap* q_headerview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QHeaderView* self, enum Qt__GestureType typeVal, int flags ```
void q_headerview_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QHeaderView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_headerview_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QHeaderView* self, int id, bool enable ```
void q_headerview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QHeaderView* self, int id, bool enable ```
void q_headerview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QHeaderView* self, enum Qt__WindowType param1, bool on ```
void q_headerview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QHeaderView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_headerview_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_headerview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_headerview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHeaderView* self ```
const char* q_headerview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHeaderView* self, const char* name ```
void q_headerview_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHeaderView* self ```
bool q_headerview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHeaderView* self ```
bool q_headerview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHeaderView* self, bool b ```
bool q_headerview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHeaderView* self ```
QThread* q_headerview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHeaderView* self, QThread* thread ```
void q_headerview_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHeaderView* self, int interval ```
int32_t q_headerview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHeaderView* self, int id ```
void q_headerview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHeaderView* self ```
libqt_list /* of QObject* */ q_headerview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHeaderView* self, QObject* filterObj ```
void q_headerview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHeaderView* self, QObject* obj ```
void q_headerview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_headerview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHeaderView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_headerview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_headerview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_headerview_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHeaderView* self ```
void q_headerview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHeaderView* self ```
void q_headerview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHeaderView* self, const char* name, QVariant* value ```
bool q_headerview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHeaderView* self, const char* name ```
QVariant* q_headerview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHeaderView* self ```
const char** q_headerview_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHeaderView* self ```
QBindingStorage* q_headerview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHeaderView* self ```
QBindingStorage* q_headerview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHeaderView* self ```
void q_headerview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QHeaderView* self, void (*slot)(QObject*) ```
void q_headerview_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHeaderView* self ```
QObject* q_headerview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHeaderView* self, const char* classname ```
bool q_headerview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHeaderView* self ```
void q_headerview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHeaderView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_headerview_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_headerview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHeaderView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_headerview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHeaderView* self, QObject* param1 ```
void q_headerview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QHeaderView* self, void (*slot)(QObject*, QObject*) ```
void q_headerview_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QHeaderView* self ```
bool q_headerview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QHeaderView* self ```
double q_headerview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QHeaderView* self ```
double q_headerview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QHeaderView* self ```
int32_t q_headerview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_headerview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QItemSelectionModel* selectionModel ```
void q_headerview_set_selection_model(void* self, void* selectionModel) {
    QHeaderView_SetSelectionModel((QHeaderView*)self, (QItemSelectionModel*)selectionModel);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QItemSelectionModel* selectionModel ```
void q_headerview_qbase_set_selection_model(void* self, void* selectionModel) {
    QHeaderView_QBaseSetSelectionModel((QHeaderView*)self, (QItemSelectionModel*)selectionModel);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QItemSelectionModel*) ```
void q_headerview_on_set_selection_model(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnSetSelectionModel((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, const char* search ```
void q_headerview_keyboard_search(void* self, const char* search) {
    QHeaderView_KeyboardSearch((QHeaderView*)self, qstring(search));
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, const char* search ```
void q_headerview_qbase_keyboard_search(void* self, const char* search) {
    QHeaderView_QBaseKeyboardSearch((QHeaderView*)self, qstring(search));
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, const char*) ```
void q_headerview_on_keyboard_search(void* self, void (*slot)(void*, const char*)) {
    QHeaderView_OnKeyboardSearch((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int row ```
int32_t q_headerview_size_hint_for_row(void* self, int row) {
    return QHeaderView_SizeHintForRow((QHeaderView*)self, row);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int row ```
int32_t q_headerview_qbase_size_hint_for_row(void* self, int row) {
    return QHeaderView_QBaseSizeHintForRow((QHeaderView*)self, row);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int32_t (*slot)(QHeaderView*, int) ```
void q_headerview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int)) {
    QHeaderView_OnSizeHintForRow((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int column ```
int32_t q_headerview_size_hint_for_column(void* self, int column) {
    return QHeaderView_SizeHintForColumn((QHeaderView*)self, column);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int column ```
int32_t q_headerview_qbase_size_hint_for_column(void* self, int column) {
    return QHeaderView_QBaseSizeHintForColumn((QHeaderView*)self, column);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int32_t (*slot)(QHeaderView*, int) ```
void q_headerview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int)) {
    QHeaderView_OnSizeHintForColumn((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index ```
QAbstractItemDelegate* q_headerview_item_delegate_for_index(void* self, void* index) {
    return QHeaderView_ItemDelegateForIndex((QHeaderView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index ```
QAbstractItemDelegate* q_headerview_qbase_item_delegate_for_index(void* self, void* index) {
    return QHeaderView_QBaseItemDelegateForIndex((QHeaderView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QAbstractItemDelegate* (*slot)(QHeaderView*, QModelIndex*) ```
void q_headerview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*)) {
    QHeaderView_OnItemDelegateForIndex((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, enum Qt__InputMethodQuery query ```
QVariant* q_headerview_input_method_query(void* self, int64_t query) {
    return QHeaderView_InputMethodQuery((QHeaderView*)self, query);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, enum Qt__InputMethodQuery query ```
QVariant* q_headerview_qbase_input_method_query(void* self, int64_t query) {
    return QHeaderView_QBaseInputMethodQuery((QHeaderView*)self, query);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QVariant* (*slot)(QHeaderView*, enum Qt__InputMethodQuery) ```
void q_headerview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QHeaderView_OnInputMethodQuery((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_set_root_index(void* self, void* index) {
    QHeaderView_SetRootIndex((QHeaderView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index ```
void q_headerview_qbase_set_root_index(void* self, void* index) {
    QHeaderView_QBaseSetRootIndex((QHeaderView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*) ```
void q_headerview_on_set_root_index(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnSetRootIndex((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_select_all(void* self) {
    QHeaderView_SelectAll((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_select_all(void* self) {
    QHeaderView_QBaseSelectAll((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_select_all(void* self, void (*slot)()) {
    QHeaderView_OnSelectAll((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* parent, int start, int end ```
void q_headerview_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QHeaderView_RowsAboutToBeRemoved((QHeaderView*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* parent, int start, int end ```
void q_headerview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QHeaderView_QBaseRowsAboutToBeRemoved((QHeaderView*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QModelIndex*, int, int) ```
void q_headerview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QHeaderView_OnRowsAboutToBeRemoved((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_headerview_selection_changed(void* self, void* selected, void* deselected) {
    QHeaderView_SelectionChanged((QHeaderView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_headerview_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QHeaderView_QBaseSelectionChanged((QHeaderView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QItemSelection*, QItemSelection*) ```
void q_headerview_on_selection_changed(void* self, void (*slot)(void*, void*, void*)) {
    QHeaderView_OnSelectionChanged((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_update_editor_data(void* self) {
    QHeaderView_UpdateEditorData((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_update_editor_data(void* self) {
    QHeaderView_QBaseUpdateEditorData((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_update_editor_data(void* self, void (*slot)()) {
    QHeaderView_OnUpdateEditorData((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_update_editor_geometries(void* self) {
    QHeaderView_UpdateEditorGeometries((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_update_editor_geometries(void* self) {
    QHeaderView_QBaseUpdateEditorGeometries((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_update_editor_geometries(void* self, void (*slot)()) {
    QHeaderView_OnUpdateEditorGeometries((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int action ```
void q_headerview_vertical_scrollbar_action(void* self, int action) {
    QHeaderView_VerticalScrollbarAction((QHeaderView*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int action ```
void q_headerview_qbase_vertical_scrollbar_action(void* self, int action) {
    QHeaderView_QBaseVerticalScrollbarAction((QHeaderView*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QHeaderView_OnVerticalScrollbarAction((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int action ```
void q_headerview_horizontal_scrollbar_action(void* self, int action) {
    QHeaderView_HorizontalScrollbarAction((QHeaderView*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int action ```
void q_headerview_qbase_horizontal_scrollbar_action(void* self, int action) {
    QHeaderView_QBaseHorizontalScrollbarAction((QHeaderView*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QHeaderView_OnHorizontalScrollbarAction((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int value ```
void q_headerview_vertical_scrollbar_value_changed(void* self, int value) {
    QHeaderView_VerticalScrollbarValueChanged((QHeaderView*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int value ```
void q_headerview_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QHeaderView_QBaseVerticalScrollbarValueChanged((QHeaderView*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QHeaderView_OnVerticalScrollbarValueChanged((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int value ```
void q_headerview_horizontal_scrollbar_value_changed(void* self, int value) {
    QHeaderView_HorizontalScrollbarValueChanged((QHeaderView*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int value ```
void q_headerview_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QHeaderView_QBaseHorizontalScrollbarValueChanged((QHeaderView*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QHeaderView_OnHorizontalScrollbarValueChanged((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_headerview_close_editor(void* self, void* editor, int64_t hint) {
    QHeaderView_CloseEditor((QHeaderView*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_headerview_qbase_close_editor(void* self, void* editor, int64_t hint) {
    QHeaderView_QBaseCloseEditor((QHeaderView*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_headerview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t)) {
    QHeaderView_OnCloseEditor((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QWidget* editor ```
void q_headerview_commit_data(void* self, void* editor) {
    QHeaderView_CommitData((QHeaderView*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QWidget* editor ```
void q_headerview_qbase_commit_data(void* self, void* editor) {
    QHeaderView_QBaseCommitData((QHeaderView*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QWidget*) ```
void q_headerview_on_commit_data(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnCommitData((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QObject* editor ```
void q_headerview_editor_destroyed(void* self, void* editor) {
    QHeaderView_EditorDestroyed((QHeaderView*)self, (QObject*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QObject* editor ```
void q_headerview_qbase_editor_destroyed(void* self, void* editor) {
    QHeaderView_QBaseEditorDestroyed((QHeaderView*)self, (QObject*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QObject*) ```
void q_headerview_on_editor_destroyed(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnEditorDestroyed((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
libqt_list /* of QModelIndex* */ q_headerview_selected_indexes(void* self) {
    libqt_list _arr = QHeaderView_SelectedIndexes((QHeaderView*)self);
    return _arr;
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
libqt_list /* of QModelIndex* */ q_headerview_qbase_selected_indexes(void* self) {
    libqt_list _arr = QHeaderView_QBaseSelectedIndexes((QHeaderView*)self);
    return _arr;
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_headerview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QHeaderView_OnSelectedIndexes((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_headerview_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QHeaderView_Edit2((QHeaderView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_headerview_qbase_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QHeaderView_QBaseEdit2((QHeaderView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_headerview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*)) {
    QHeaderView_OnEdit2((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index, QEvent* event ```
int64_t q_headerview_selection_command(void* self, void* index, void* event) {
    return QHeaderView_SelectionCommand((QHeaderView*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QModelIndex* index, QEvent* event ```
int64_t q_headerview_qbase_selection_command(void* self, void* index, void* event) {
    return QHeaderView_QBaseSelectionCommand((QHeaderView*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int64_t (*slot)(QHeaderView*, QModelIndex*, QEvent*) ```
void q_headerview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*)) {
    QHeaderView_OnSelectionCommand((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int supportedActions ```
void q_headerview_start_drag(void* self, int64_t supportedActions) {
    QHeaderView_StartDrag((QHeaderView*)self, supportedActions);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int supportedActions ```
void q_headerview_qbase_start_drag(void* self, int64_t supportedActions) {
    QHeaderView_QBaseStartDrag((QHeaderView*)self, supportedActions);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int) ```
void q_headerview_on_start_drag(void* self, void (*slot)(void*, int64_t)) {
    QHeaderView_OnStartDrag((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QStyleOptionViewItem* option ```
void q_headerview_init_view_item_option(void* self, void* option) {
    QHeaderView_InitViewItemOption((QHeaderView*)self, (QStyleOptionViewItem*)option);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QStyleOptionViewItem* option ```
void q_headerview_qbase_init_view_item_option(void* self, void* option) {
    QHeaderView_QBaseInitViewItemOption((QHeaderView*)self, (QStyleOptionViewItem*)option);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QStyleOptionViewItem*) ```
void q_headerview_on_init_view_item_option(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnInitViewItemOption((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, bool next ```
bool q_headerview_focus_next_prev_child(void* self, bool next) {
    return QHeaderView_FocusNextPrevChild((QHeaderView*)self, next);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, bool next ```
bool q_headerview_qbase_focus_next_prev_child(void* self, bool next) {
    return QHeaderView_QBaseFocusNextPrevChild((QHeaderView*)self, next);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, bool) ```
void q_headerview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QHeaderView_OnFocusNextPrevChild((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QDragEnterEvent* event ```
void q_headerview_drag_enter_event(void* self, void* event) {
    QHeaderView_DragEnterEvent((QHeaderView*)self, (QDragEnterEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QDragEnterEvent* event ```
void q_headerview_qbase_drag_enter_event(void* self, void* event) {
    QHeaderView_QBaseDragEnterEvent((QHeaderView*)self, (QDragEnterEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QDragEnterEvent*) ```
void q_headerview_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnDragEnterEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QDragMoveEvent* event ```
void q_headerview_drag_move_event(void* self, void* event) {
    QHeaderView_DragMoveEvent((QHeaderView*)self, (QDragMoveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QDragMoveEvent* event ```
void q_headerview_qbase_drag_move_event(void* self, void* event) {
    QHeaderView_QBaseDragMoveEvent((QHeaderView*)self, (QDragMoveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QDragMoveEvent*) ```
void q_headerview_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnDragMoveEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QDragLeaveEvent* event ```
void q_headerview_drag_leave_event(void* self, void* event) {
    QHeaderView_DragLeaveEvent((QHeaderView*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QDragLeaveEvent* event ```
void q_headerview_qbase_drag_leave_event(void* self, void* event) {
    QHeaderView_QBaseDragLeaveEvent((QHeaderView*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QDragLeaveEvent*) ```
void q_headerview_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnDragLeaveEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QDropEvent* event ```
void q_headerview_drop_event(void* self, void* event) {
    QHeaderView_DropEvent((QHeaderView*)self, (QDropEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QDropEvent* event ```
void q_headerview_qbase_drop_event(void* self, void* event) {
    QHeaderView_QBaseDropEvent((QHeaderView*)self, (QDropEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QDropEvent*) ```
void q_headerview_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnDropEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QFocusEvent* event ```
void q_headerview_focus_in_event(void* self, void* event) {
    QHeaderView_FocusInEvent((QHeaderView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QFocusEvent* event ```
void q_headerview_qbase_focus_in_event(void* self, void* event) {
    QHeaderView_QBaseFocusInEvent((QHeaderView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QFocusEvent*) ```
void q_headerview_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnFocusInEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QFocusEvent* event ```
void q_headerview_focus_out_event(void* self, void* event) {
    QHeaderView_FocusOutEvent((QHeaderView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QFocusEvent* event ```
void q_headerview_qbase_focus_out_event(void* self, void* event) {
    QHeaderView_QBaseFocusOutEvent((QHeaderView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QFocusEvent*) ```
void q_headerview_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnFocusOutEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QKeyEvent* event ```
void q_headerview_key_press_event(void* self, void* event) {
    QHeaderView_KeyPressEvent((QHeaderView*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QKeyEvent* event ```
void q_headerview_qbase_key_press_event(void* self, void* event) {
    QHeaderView_QBaseKeyPressEvent((QHeaderView*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QKeyEvent*) ```
void q_headerview_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnKeyPressEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QResizeEvent* event ```
void q_headerview_resize_event(void* self, void* event) {
    QHeaderView_ResizeEvent((QHeaderView*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QResizeEvent* event ```
void q_headerview_qbase_resize_event(void* self, void* event) {
    QHeaderView_QBaseResizeEvent((QHeaderView*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QResizeEvent*) ```
void q_headerview_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnResizeEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QTimerEvent* event ```
void q_headerview_timer_event(void* self, void* event) {
    QHeaderView_TimerEvent((QHeaderView*)self, (QTimerEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QTimerEvent* event ```
void q_headerview_qbase_timer_event(void* self, void* event) {
    QHeaderView_QBaseTimerEvent((QHeaderView*)self, (QTimerEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QTimerEvent*) ```
void q_headerview_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnTimerEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QInputMethodEvent* event ```
void q_headerview_input_method_event(void* self, void* event) {
    QHeaderView_InputMethodEvent((QHeaderView*)self, (QInputMethodEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QInputMethodEvent* event ```
void q_headerview_qbase_input_method_event(void* self, void* event) {
    QHeaderView_QBaseInputMethodEvent((QHeaderView*)self, (QInputMethodEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QInputMethodEvent*) ```
void q_headerview_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnInputMethodEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QObject* object, QEvent* event ```
bool q_headerview_event_filter(void* self, void* object, void* event) {
    return QHeaderView_EventFilter((QHeaderView*)self, (QObject*)object, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QObject* object, QEvent* event ```
bool q_headerview_qbase_event_filter(void* self, void* object, void* event) {
    return QHeaderView_QBaseEventFilter((QHeaderView*)self, (QObject*)object, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, QObject*, QEvent*) ```
void q_headerview_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QHeaderView_OnEventFilter((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
QSize* q_headerview_viewport_size_hint(void* self) {
    return QHeaderView_ViewportSizeHint((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
QSize* q_headerview_qbase_viewport_size_hint(void* self) {
    return QHeaderView_QBaseViewportSizeHint((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QSize* (*slot)() ```
void q_headerview_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QHeaderView_OnViewportSizeHint((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
QSize* q_headerview_minimum_size_hint(void* self) {
    return QHeaderView_MinimumSizeHint((QHeaderView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
QSize* q_headerview_qbase_minimum_size_hint(void* self) {
    return QHeaderView_QBaseMinimumSizeHint((QHeaderView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QSize* (*slot)() ```
void q_headerview_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QHeaderView_OnMinimumSizeHint((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QWidget* viewport ```
void q_headerview_setup_viewport(void* self, void* viewport) {
    QHeaderView_SetupViewport((QHeaderView*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QWidget* viewport ```
void q_headerview_qbase_setup_viewport(void* self, void* viewport) {
    QHeaderView_QBaseSetupViewport((QHeaderView*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QWidget*) ```
void q_headerview_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnSetupViewport((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QWheelEvent* param1 ```
void q_headerview_wheel_event(void* self, void* param1) {
    QHeaderView_WheelEvent((QHeaderView*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QWheelEvent* param1 ```
void q_headerview_qbase_wheel_event(void* self, void* param1) {
    QHeaderView_QBaseWheelEvent((QHeaderView*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QWheelEvent*) ```
void q_headerview_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnWheelEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QContextMenuEvent* param1 ```
void q_headerview_context_menu_event(void* self, void* param1) {
    QHeaderView_ContextMenuEvent((QHeaderView*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QContextMenuEvent* param1 ```
void q_headerview_qbase_context_menu_event(void* self, void* param1) {
    QHeaderView_QBaseContextMenuEvent((QHeaderView*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QContextMenuEvent*) ```
void q_headerview_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnContextMenuEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QEvent* param1 ```
void q_headerview_change_event(void* self, void* param1) {
    QHeaderView_ChangeEvent((QHeaderView*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QEvent* param1 ```
void q_headerview_qbase_change_event(void* self, void* param1) {
    QHeaderView_QBaseChangeEvent((QHeaderView*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QEvent*) ```
void q_headerview_on_change_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnChangeEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
int32_t q_headerview_dev_type(void* self) {
    return QHeaderView_DevType((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
int32_t q_headerview_qbase_dev_type(void* self) {
    return QHeaderView_QBaseDevType((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int32_t (*slot)() ```
void q_headerview_on_dev_type(void* self, int32_t (*slot)()) {
    QHeaderView_OnDevType((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int param1 ```
int32_t q_headerview_height_for_width(void* self, int param1) {
    return QHeaderView_HeightForWidth((QHeaderView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int param1 ```
int32_t q_headerview_qbase_height_for_width(void* self, int param1) {
    return QHeaderView_QBaseHeightForWidth((QHeaderView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int32_t (*slot)(QHeaderView*, int) ```
void q_headerview_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QHeaderView_OnHeightForWidth((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
bool q_headerview_has_height_for_width(void* self) {
    return QHeaderView_HasHeightForWidth((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
bool q_headerview_qbase_has_height_for_width(void* self) {
    return QHeaderView_QBaseHasHeightForWidth((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)() ```
void q_headerview_on_has_height_for_width(void* self, bool (*slot)()) {
    QHeaderView_OnHasHeightForWidth((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
QPaintEngine* q_headerview_paint_engine(void* self) {
    return QHeaderView_PaintEngine((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
QPaintEngine* q_headerview_qbase_paint_engine(void* self) {
    return QHeaderView_QBasePaintEngine((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QPaintEngine* (*slot)() ```
void q_headerview_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QHeaderView_OnPaintEngine((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QKeyEvent* event ```
void q_headerview_key_release_event(void* self, void* event) {
    QHeaderView_KeyReleaseEvent((QHeaderView*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QKeyEvent* event ```
void q_headerview_qbase_key_release_event(void* self, void* event) {
    QHeaderView_QBaseKeyReleaseEvent((QHeaderView*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QKeyEvent*) ```
void q_headerview_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnKeyReleaseEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QEnterEvent* event ```
void q_headerview_enter_event(void* self, void* event) {
    QHeaderView_EnterEvent((QHeaderView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QEnterEvent* event ```
void q_headerview_qbase_enter_event(void* self, void* event) {
    QHeaderView_QBaseEnterEvent((QHeaderView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QEnterEvent*) ```
void q_headerview_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnEnterEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QEvent* event ```
void q_headerview_leave_event(void* self, void* event) {
    QHeaderView_LeaveEvent((QHeaderView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QEvent* event ```
void q_headerview_qbase_leave_event(void* self, void* event) {
    QHeaderView_QBaseLeaveEvent((QHeaderView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QEvent*) ```
void q_headerview_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnLeaveEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QMoveEvent* event ```
void q_headerview_move_event(void* self, void* event) {
    QHeaderView_MoveEvent((QHeaderView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QMoveEvent* event ```
void q_headerview_qbase_move_event(void* self, void* event) {
    QHeaderView_QBaseMoveEvent((QHeaderView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QMoveEvent*) ```
void q_headerview_on_move_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnMoveEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QCloseEvent* event ```
void q_headerview_close_event(void* self, void* event) {
    QHeaderView_CloseEvent((QHeaderView*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QCloseEvent* event ```
void q_headerview_qbase_close_event(void* self, void* event) {
    QHeaderView_QBaseCloseEvent((QHeaderView*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QCloseEvent*) ```
void q_headerview_on_close_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnCloseEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QTabletEvent* event ```
void q_headerview_tablet_event(void* self, void* event) {
    QHeaderView_TabletEvent((QHeaderView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QTabletEvent* event ```
void q_headerview_qbase_tablet_event(void* self, void* event) {
    QHeaderView_QBaseTabletEvent((QHeaderView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QTabletEvent*) ```
void q_headerview_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnTabletEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QActionEvent* event ```
void q_headerview_action_event(void* self, void* event) {
    QHeaderView_ActionEvent((QHeaderView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QActionEvent* event ```
void q_headerview_qbase_action_event(void* self, void* event) {
    QHeaderView_QBaseActionEvent((QHeaderView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QActionEvent*) ```
void q_headerview_on_action_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnActionEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QShowEvent* event ```
void q_headerview_show_event(void* self, void* event) {
    QHeaderView_ShowEvent((QHeaderView*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QShowEvent* event ```
void q_headerview_qbase_show_event(void* self, void* event) {
    QHeaderView_QBaseShowEvent((QHeaderView*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QShowEvent*) ```
void q_headerview_on_show_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnShowEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QHideEvent* event ```
void q_headerview_hide_event(void* self, void* event) {
    QHeaderView_HideEvent((QHeaderView*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QHideEvent* event ```
void q_headerview_qbase_hide_event(void* self, void* event) {
    QHeaderView_QBaseHideEvent((QHeaderView*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QHideEvent*) ```
void q_headerview_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnHideEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, const char* eventType, void* message, intptr_t* result ```
bool q_headerview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QHeaderView_NativeEvent((QHeaderView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, const char* eventType, void* message, intptr_t* result ```
bool q_headerview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QHeaderView_QBaseNativeEvent((QHeaderView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, const char*, void*, intptr_t*) ```
void q_headerview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QHeaderView_OnNativeEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_headerview_metric(void* self, int64_t param1) {
    return QHeaderView_Metric((QHeaderView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_headerview_qbase_metric(void* self, int64_t param1) {
    return QHeaderView_QBaseMetric((QHeaderView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int32_t (*slot)(QHeaderView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_headerview_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QHeaderView_OnMetric((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QPainter* painter ```
void q_headerview_init_painter(void* self, void* painter) {
    QHeaderView_InitPainter((QHeaderView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QPainter* painter ```
void q_headerview_qbase_init_painter(void* self, void* painter) {
    QHeaderView_QBaseInitPainter((QHeaderView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QPainter*) ```
void q_headerview_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnInitPainter((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QPoint* offset ```
QPaintDevice* q_headerview_redirected(void* self, void* offset) {
    return QHeaderView_Redirected((QHeaderView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QPoint* offset ```
QPaintDevice* q_headerview_qbase_redirected(void* self, void* offset) {
    return QHeaderView_QBaseRedirected((QHeaderView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QPaintDevice* (*slot)(QHeaderView*, QPoint*) ```
void q_headerview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QHeaderView_OnRedirected((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
QPainter* q_headerview_shared_painter(void* self) {
    return QHeaderView_SharedPainter((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
QPainter* q_headerview_qbase_shared_painter(void* self) {
    return QHeaderView_QBaseSharedPainter((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QPainter* (*slot)() ```
void q_headerview_on_shared_painter(void* self, QPainter* (*slot)()) {
    QHeaderView_OnSharedPainter((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QChildEvent* event ```
void q_headerview_child_event(void* self, void* event) {
    QHeaderView_ChildEvent((QHeaderView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QChildEvent* event ```
void q_headerview_qbase_child_event(void* self, void* event) {
    QHeaderView_QBaseChildEvent((QHeaderView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QChildEvent*) ```
void q_headerview_on_child_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnChildEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QEvent* event ```
void q_headerview_custom_event(void* self, void* event) {
    QHeaderView_CustomEvent((QHeaderView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QEvent* event ```
void q_headerview_qbase_custom_event(void* self, void* event) {
    QHeaderView_QBaseCustomEvent((QHeaderView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QEvent*) ```
void q_headerview_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnCustomEvent((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QMetaMethod* signal ```
void q_headerview_connect_notify(void* self, void* signal) {
    QHeaderView_ConnectNotify((QHeaderView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QMetaMethod* signal ```
void q_headerview_qbase_connect_notify(void* self, void* signal) {
    QHeaderView_QBaseConnectNotify((QHeaderView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QMetaMethod*) ```
void q_headerview_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnConnectNotify((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QMetaMethod* signal ```
void q_headerview_disconnect_notify(void* self, void* signal) {
    QHeaderView_DisconnectNotify((QHeaderView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QMetaMethod* signal ```
void q_headerview_qbase_disconnect_notify(void* self, void* signal) {
    QHeaderView_QBaseDisconnectNotify((QHeaderView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QMetaMethod*) ```
void q_headerview_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnDisconnectNotify((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
int64_t q_headerview_state(void* self) {
    return QHeaderView_State((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
int64_t q_headerview_qbase_state(void* self) {
    return QHeaderView_QBaseState((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int64_t (*slot)() ```
void q_headerview_on_state(void* self, int64_t (*slot)()) {
    QHeaderView_OnState((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, enum QAbstractItemView__State state ```
void q_headerview_set_state(void* self, int64_t state) {
    QHeaderView_SetState((QHeaderView*)self, state);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, enum QAbstractItemView__State state ```
void q_headerview_qbase_set_state(void* self, int64_t state) {
    QHeaderView_QBaseSetState((QHeaderView*)self, state);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, enum QAbstractItemView__State) ```
void q_headerview_on_set_state(void* self, void (*slot)(void*, int64_t)) {
    QHeaderView_OnSetState((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_schedule_delayed_items_layout(void* self) {
    QHeaderView_ScheduleDelayedItemsLayout((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_schedule_delayed_items_layout(void* self) {
    QHeaderView_QBaseScheduleDelayedItemsLayout((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_schedule_delayed_items_layout(void* self, void (*slot)()) {
    QHeaderView_OnScheduleDelayedItemsLayout((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_execute_delayed_items_layout(void* self) {
    QHeaderView_ExecuteDelayedItemsLayout((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_execute_delayed_items_layout(void* self) {
    QHeaderView_QBaseExecuteDelayedItemsLayout((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_execute_delayed_items_layout(void* self, void (*slot)()) {
    QHeaderView_OnExecuteDelayedItemsLayout((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QRegion* region ```
void q_headerview_set_dirty_region(void* self, void* region) {
    QHeaderView_SetDirtyRegion((QHeaderView*)self, (QRegion*)region);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QRegion* region ```
void q_headerview_qbase_set_dirty_region(void* self, void* region) {
    QHeaderView_QBaseSetDirtyRegion((QHeaderView*)self, (QRegion*)region);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QRegion*) ```
void q_headerview_on_set_dirty_region(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnSetDirtyRegion((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int dx, int dy ```
void q_headerview_scroll_dirty_region(void* self, int dx, int dy) {
    QHeaderView_ScrollDirtyRegion((QHeaderView*)self, dx, dy);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int dx, int dy ```
void q_headerview_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QHeaderView_QBaseScrollDirtyRegion((QHeaderView*)self, dx, dy);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, int) ```
void q_headerview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int)) {
    QHeaderView_OnScrollDirtyRegion((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
QPoint* q_headerview_dirty_region_offset(void* self) {
    return QHeaderView_DirtyRegionOffset((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
QPoint* q_headerview_qbase_dirty_region_offset(void* self) {
    return QHeaderView_QBaseDirtyRegionOffset((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QPoint* (*slot)() ```
void q_headerview_on_dirty_region_offset(void* self, QPoint* (*slot)()) {
    QHeaderView_OnDirtyRegionOffset((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_start_auto_scroll(void* self) {
    QHeaderView_StartAutoScroll((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_start_auto_scroll(void* self) {
    QHeaderView_QBaseStartAutoScroll((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_start_auto_scroll(void* self, void (*slot)()) {
    QHeaderView_OnStartAutoScroll((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_stop_auto_scroll(void* self) {
    QHeaderView_StopAutoScroll((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_stop_auto_scroll(void* self) {
    QHeaderView_QBaseStopAutoScroll((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_stop_auto_scroll(void* self, void (*slot)()) {
    QHeaderView_OnStopAutoScroll((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_do_auto_scroll(void* self) {
    QHeaderView_DoAutoScroll((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_do_auto_scroll(void* self) {
    QHeaderView_QBaseDoAutoScroll((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_do_auto_scroll(void* self, void (*slot)()) {
    QHeaderView_OnDoAutoScroll((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
int64_t q_headerview_drop_indicator_position(void* self) {
    return QHeaderView_DropIndicatorPosition((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
int64_t q_headerview_qbase_drop_indicator_position(void* self) {
    return QHeaderView_QBaseDropIndicatorPosition((QHeaderView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int64_t (*slot)() ```
void q_headerview_on_drop_indicator_position(void* self, int64_t (*slot)()) {
    QHeaderView_OnDropIndicatorPosition((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, int left, int top, int right, int bottom ```
void q_headerview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QHeaderView_SetViewportMargins((QHeaderView*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, int left, int top, int right, int bottom ```
void q_headerview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QHeaderView_QBaseSetViewportMargins((QHeaderView*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, int, int, int, int) ```
void q_headerview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QHeaderView_OnSetViewportMargins((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
QMargins* q_headerview_viewport_margins(void* self) {
    return QHeaderView_ViewportMargins((QHeaderView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
QMargins* q_headerview_qbase_viewport_margins(void* self) {
    return QHeaderView_QBaseViewportMargins((QHeaderView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QMargins* (*slot)() ```
void q_headerview_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QHeaderView_OnViewportMargins((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QPainter* param1 ```
void q_headerview_draw_frame(void* self, void* param1) {
    QHeaderView_DrawFrame((QHeaderView*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QPainter* param1 ```
void q_headerview_qbase_draw_frame(void* self, void* param1) {
    QHeaderView_QBaseDrawFrame((QHeaderView*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)(QHeaderView*, QPainter*) ```
void q_headerview_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QHeaderView_OnDrawFrame((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_update_micro_focus(void* self) {
    QHeaderView_UpdateMicroFocus((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_update_micro_focus(void* self) {
    QHeaderView_QBaseUpdateMicroFocus((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_update_micro_focus(void* self, void (*slot)()) {
    QHeaderView_OnUpdateMicroFocus((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_create(void* self) {
    QHeaderView_Create((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_create(void* self) {
    QHeaderView_QBaseCreate((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_create(void* self, void (*slot)()) {
    QHeaderView_OnCreate((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_destroy(void* self) {
    QHeaderView_Destroy((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
void q_headerview_qbase_destroy(void* self) {
    QHeaderView_QBaseDestroy((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, void (*slot)() ```
void q_headerview_on_destroy(void* self, void (*slot)()) {
    QHeaderView_OnDestroy((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
bool q_headerview_focus_next_child(void* self) {
    return QHeaderView_FocusNextChild((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
bool q_headerview_qbase_focus_next_child(void* self) {
    return QHeaderView_QBaseFocusNextChild((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)() ```
void q_headerview_on_focus_next_child(void* self, bool (*slot)()) {
    QHeaderView_OnFocusNextChild((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
bool q_headerview_focus_previous_child(void* self) {
    return QHeaderView_FocusPreviousChild((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
bool q_headerview_qbase_focus_previous_child(void* self) {
    return QHeaderView_QBaseFocusPreviousChild((QHeaderView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)() ```
void q_headerview_on_focus_previous_child(void* self, bool (*slot)()) {
    QHeaderView_OnFocusPreviousChild((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
QObject* q_headerview_sender(void* self) {
    return QHeaderView_Sender((QHeaderView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
QObject* q_headerview_qbase_sender(void* self) {
    return QHeaderView_QBaseSender((QHeaderView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, QObject* (*slot)() ```
void q_headerview_on_sender(void* self, QObject* (*slot)()) {
    QHeaderView_OnSender((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self ```
int32_t q_headerview_sender_signal_index(void* self) {
    return QHeaderView_SenderSignalIndex((QHeaderView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self ```
int32_t q_headerview_qbase_sender_signal_index(void* self) {
    return QHeaderView_QBaseSenderSignalIndex((QHeaderView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int32_t (*slot)() ```
void q_headerview_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QHeaderView_OnSenderSignalIndex((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, const char* signal ```
int32_t q_headerview_receivers(void* self, const char* signal) {
    return QHeaderView_Receivers((QHeaderView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, const char* signal ```
int32_t q_headerview_qbase_receivers(void* self, const char* signal) {
    return QHeaderView_QBaseReceivers((QHeaderView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, int32_t (*slot)(QHeaderView*, const char*) ```
void q_headerview_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QHeaderView_OnReceivers((QHeaderView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHeaderView* self, QMetaMethod* signal ```
bool q_headerview_is_signal_connected(void* self, void* signal) {
    return QHeaderView_IsSignalConnected((QHeaderView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHeaderView* self, QMetaMethod* signal ```
bool q_headerview_qbase_is_signal_connected(void* self, void* signal) {
    return QHeaderView_QBaseIsSignalConnected((QHeaderView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHeaderView* self, bool (*slot)(QHeaderView*, QMetaMethod*) ```
void q_headerview_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QHeaderView_OnIsSignalConnected((QHeaderView*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QHeaderView* self ```
void q_headerview_delete(void* self) {
    QHeaderView_Delete((QHeaderView*)(self));
}