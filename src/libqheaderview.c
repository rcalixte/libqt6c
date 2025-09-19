#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
#include "libqabstractscrollarea.hpp"
#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqframe.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqheaderview.hpp"
#include "libqheaderview.h"

QHeaderView* q_headerview_new(int32_t orientation) {
    return QHeaderView_new(orientation);
}

QHeaderView* q_headerview_new2(int32_t orientation, void* parent) {
    return QHeaderView_new2(orientation, (QWidget*)parent);
}

const QMetaObject* q_headerview_meta_object(void* self) {
    return QHeaderView_MetaObject((QHeaderView*)self);
}

void* q_headerview_metacast(void* self, const char* param1) {
    return QHeaderView_Metacast((QHeaderView*)self, param1);
}

int32_t q_headerview_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHeaderView_Metacall((QHeaderView*)self, param1, param2, param3);
}

void q_headerview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QHeaderView_OnMetacall((QHeaderView*)self, (intptr_t)callback);
}

int32_t q_headerview_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHeaderView_QBaseMetacall((QHeaderView*)self, param1, param2, param3);
}

const char* q_headerview_tr(const char* s) {
    libqt_string _str = QHeaderView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_headerview_set_model(void* self, void* model) {
    QHeaderView_SetModel((QHeaderView*)self, (QAbstractItemModel*)model);
}

void q_headerview_on_set_model(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnSetModel((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_set_model(void* self, void* model) {
    QHeaderView_QBaseSetModel((QHeaderView*)self, (QAbstractItemModel*)model);
}

int32_t q_headerview_orientation(void* self) {
    return QHeaderView_Orientation((QHeaderView*)self);
}

int32_t q_headerview_offset(void* self) {
    return QHeaderView_Offset((QHeaderView*)self);
}

int32_t q_headerview_length(void* self) {
    return QHeaderView_Length((QHeaderView*)self);
}

QSize* q_headerview_size_hint(void* self) {
    return QHeaderView_SizeHint((QHeaderView*)self);
}

void q_headerview_on_size_hint(void* self, QSize* (*callback)()) {
    QHeaderView_OnSizeHint((QHeaderView*)self, (intptr_t)callback);
}

QSize* q_headerview_qbase_size_hint(void* self) {
    return QHeaderView_QBaseSizeHint((QHeaderView*)self);
}

void q_headerview_set_visible(void* self, bool v) {
    QHeaderView_SetVisible((QHeaderView*)self, v);
}

void q_headerview_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QHeaderView_OnSetVisible((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_set_visible(void* self, bool v) {
    QHeaderView_QBaseSetVisible((QHeaderView*)self, v);
}

int32_t q_headerview_section_size_hint(void* self, int logicalIndex) {
    return QHeaderView_SectionSizeHint((QHeaderView*)self, logicalIndex);
}

int32_t q_headerview_visual_index_at(void* self, int position) {
    return QHeaderView_VisualIndexAt((QHeaderView*)self, position);
}

int32_t q_headerview_logical_index_at(void* self, int position) {
    return QHeaderView_LogicalIndexAt((QHeaderView*)self, position);
}

int32_t q_headerview_logical_index_at2(void* self, int x, int y) {
    return QHeaderView_LogicalIndexAt2((QHeaderView*)self, x, y);
}

int32_t q_headerview_logical_index_at3(void* self, void* pos) {
    return QHeaderView_LogicalIndexAt3((QHeaderView*)self, (QPoint*)pos);
}

int32_t q_headerview_section_size(void* self, int logicalIndex) {
    return QHeaderView_SectionSize((QHeaderView*)self, logicalIndex);
}

int32_t q_headerview_section_position(void* self, int logicalIndex) {
    return QHeaderView_SectionPosition((QHeaderView*)self, logicalIndex);
}

int32_t q_headerview_section_viewport_position(void* self, int logicalIndex) {
    return QHeaderView_SectionViewportPosition((QHeaderView*)self, logicalIndex);
}

void q_headerview_move_section(void* self, int from, int to) {
    QHeaderView_MoveSection((QHeaderView*)self, from, to);
}

void q_headerview_swap_sections(void* self, int first, int second) {
    QHeaderView_SwapSections((QHeaderView*)self, first, second);
}

void q_headerview_resize_section(void* self, int logicalIndex, int size) {
    QHeaderView_ResizeSection((QHeaderView*)self, logicalIndex, size);
}

void q_headerview_resize_sections(void* self, int32_t mode) {
    QHeaderView_ResizeSections((QHeaderView*)self, mode);
}

bool q_headerview_is_section_hidden(void* self, int logicalIndex) {
    return QHeaderView_IsSectionHidden((QHeaderView*)self, logicalIndex);
}

void q_headerview_set_section_hidden(void* self, int logicalIndex, bool hide) {
    QHeaderView_SetSectionHidden((QHeaderView*)self, logicalIndex, hide);
}

int32_t q_headerview_hidden_section_count(void* self) {
    return QHeaderView_HiddenSectionCount((QHeaderView*)self);
}

void q_headerview_hide_section(void* self, int logicalIndex) {
    QHeaderView_HideSection((QHeaderView*)self, logicalIndex);
}

void q_headerview_show_section(void* self, int logicalIndex) {
    QHeaderView_ShowSection((QHeaderView*)self, logicalIndex);
}

int32_t q_headerview_count(void* self) {
    return QHeaderView_Count((QHeaderView*)self);
}

int32_t q_headerview_visual_index(void* self, int logicalIndex) {
    return QHeaderView_VisualIndex((QHeaderView*)self, logicalIndex);
}

int32_t q_headerview_logical_index(void* self, int visualIndex) {
    return QHeaderView_LogicalIndex((QHeaderView*)self, visualIndex);
}

void q_headerview_set_sections_movable(void* self, bool movable) {
    QHeaderView_SetSectionsMovable((QHeaderView*)self, movable);
}

bool q_headerview_sections_movable(void* self) {
    return QHeaderView_SectionsMovable((QHeaderView*)self);
}

void q_headerview_set_first_section_movable(void* self, bool movable) {
    QHeaderView_SetFirstSectionMovable((QHeaderView*)self, movable);
}

bool q_headerview_is_first_section_movable(void* self) {
    return QHeaderView_IsFirstSectionMovable((QHeaderView*)self);
}

void q_headerview_set_sections_clickable(void* self, bool clickable) {
    QHeaderView_SetSectionsClickable((QHeaderView*)self, clickable);
}

bool q_headerview_sections_clickable(void* self) {
    return QHeaderView_SectionsClickable((QHeaderView*)self);
}

void q_headerview_set_highlight_sections(void* self, bool highlight) {
    QHeaderView_SetHighlightSections((QHeaderView*)self, highlight);
}

bool q_headerview_highlight_sections(void* self) {
    return QHeaderView_HighlightSections((QHeaderView*)self);
}

int32_t q_headerview_section_resize_mode(void* self, int logicalIndex) {
    return QHeaderView_SectionResizeMode((QHeaderView*)self, logicalIndex);
}

void q_headerview_set_section_resize_mode(void* self, int32_t mode) {
    QHeaderView_SetSectionResizeMode((QHeaderView*)self, mode);
}

void q_headerview_set_section_resize_mode2(void* self, int logicalIndex, int32_t mode) {
    QHeaderView_SetSectionResizeMode2((QHeaderView*)self, logicalIndex, mode);
}

void q_headerview_set_resize_contents_precision(void* self, int precision) {
    QHeaderView_SetResizeContentsPrecision((QHeaderView*)self, precision);
}

int32_t q_headerview_resize_contents_precision(void* self) {
    return QHeaderView_ResizeContentsPrecision((QHeaderView*)self);
}

int32_t q_headerview_stretch_section_count(void* self) {
    return QHeaderView_StretchSectionCount((QHeaderView*)self);
}

void q_headerview_set_sort_indicator_shown(void* self, bool show) {
    QHeaderView_SetSortIndicatorShown((QHeaderView*)self, show);
}

bool q_headerview_is_sort_indicator_shown(void* self) {
    return QHeaderView_IsSortIndicatorShown((QHeaderView*)self);
}

void q_headerview_set_sort_indicator(void* self, int logicalIndex, int32_t order) {
    QHeaderView_SetSortIndicator((QHeaderView*)self, logicalIndex, order);
}

int32_t q_headerview_sort_indicator_section(void* self) {
    return QHeaderView_SortIndicatorSection((QHeaderView*)self);
}

int32_t q_headerview_sort_indicator_order(void* self) {
    return QHeaderView_SortIndicatorOrder((QHeaderView*)self);
}

void q_headerview_set_sort_indicator_clearable(void* self, bool clearable) {
    QHeaderView_SetSortIndicatorClearable((QHeaderView*)self, clearable);
}

bool q_headerview_is_sort_indicator_clearable(void* self) {
    return QHeaderView_IsSortIndicatorClearable((QHeaderView*)self);
}

bool q_headerview_stretch_last_section(void* self) {
    return QHeaderView_StretchLastSection((QHeaderView*)self);
}

void q_headerview_set_stretch_last_section(void* self, bool stretch) {
    QHeaderView_SetStretchLastSection((QHeaderView*)self, stretch);
}

bool q_headerview_cascading_section_resizes(void* self) {
    return QHeaderView_CascadingSectionResizes((QHeaderView*)self);
}

void q_headerview_set_cascading_section_resizes(void* self, bool enable) {
    QHeaderView_SetCascadingSectionResizes((QHeaderView*)self, enable);
}

int32_t q_headerview_default_section_size(void* self) {
    return QHeaderView_DefaultSectionSize((QHeaderView*)self);
}

void q_headerview_set_default_section_size(void* self, int size) {
    QHeaderView_SetDefaultSectionSize((QHeaderView*)self, size);
}

void q_headerview_reset_default_section_size(void* self) {
    QHeaderView_ResetDefaultSectionSize((QHeaderView*)self);
}

int32_t q_headerview_minimum_section_size(void* self) {
    return QHeaderView_MinimumSectionSize((QHeaderView*)self);
}

void q_headerview_set_minimum_section_size(void* self, int size) {
    QHeaderView_SetMinimumSectionSize((QHeaderView*)self, size);
}

int32_t q_headerview_maximum_section_size(void* self) {
    return QHeaderView_MaximumSectionSize((QHeaderView*)self);
}

void q_headerview_set_maximum_section_size(void* self, int size) {
    QHeaderView_SetMaximumSectionSize((QHeaderView*)self, size);
}

int32_t q_headerview_default_alignment(void* self) {
    return QHeaderView_DefaultAlignment((QHeaderView*)self);
}

void q_headerview_set_default_alignment(void* self, int32_t alignment) {
    QHeaderView_SetDefaultAlignment((QHeaderView*)self, alignment);
}

void q_headerview_do_items_layout(void* self) {
    QHeaderView_DoItemsLayout((QHeaderView*)self);
}

void q_headerview_on_do_items_layout(void* self, void (*callback)()) {
    QHeaderView_OnDoItemsLayout((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_do_items_layout(void* self) {
    QHeaderView_QBaseDoItemsLayout((QHeaderView*)self);
}

bool q_headerview_sections_moved(void* self) {
    return QHeaderView_SectionsMoved((QHeaderView*)self);
}

bool q_headerview_sections_hidden(void* self) {
    return QHeaderView_SectionsHidden((QHeaderView*)self);
}

char* q_headerview_save_state(void* self) {
    libqt_string _str = QHeaderView_SaveState((QHeaderView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_headerview_restore_state(void* self, const char* state) {
    return QHeaderView_RestoreState((QHeaderView*)self, qstring(state));
}

void q_headerview_reset(void* self) {
    QHeaderView_Reset((QHeaderView*)self);
}

void q_headerview_on_reset(void* self, void (*callback)()) {
    QHeaderView_OnReset((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_reset(void* self) {
    QHeaderView_QBaseReset((QHeaderView*)self);
}

void q_headerview_set_offset(void* self, int offset) {
    QHeaderView_SetOffset((QHeaderView*)self, offset);
}

void q_headerview_set_offset_to_section_position(void* self, int visualIndex) {
    QHeaderView_SetOffsetToSectionPosition((QHeaderView*)self, visualIndex);
}

void q_headerview_set_offset_to_last_section(void* self) {
    QHeaderView_SetOffsetToLastSection((QHeaderView*)self);
}

void q_headerview_header_data_changed(void* self, int32_t orientation, int logicalFirst, int logicalLast) {
    QHeaderView_HeaderDataChanged((QHeaderView*)self, orientation, logicalFirst, logicalLast);
}

void q_headerview_section_moved(void* self, int logicalIndex, int oldVisualIndex, int newVisualIndex) {
    QHeaderView_SectionMoved((QHeaderView*)self, logicalIndex, oldVisualIndex, newVisualIndex);
}

void q_headerview_on_section_moved(void* self, void (*callback)(void*, int, int, int)) {
    QHeaderView_Connect_SectionMoved((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_section_resized(void* self, int logicalIndex, int oldSize, int newSize) {
    QHeaderView_SectionResized((QHeaderView*)self, logicalIndex, oldSize, newSize);
}

void q_headerview_on_section_resized(void* self, void (*callback)(void*, int, int, int)) {
    QHeaderView_Connect_SectionResized((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_section_pressed(void* self, int logicalIndex) {
    QHeaderView_SectionPressed((QHeaderView*)self, logicalIndex);
}

void q_headerview_on_section_pressed(void* self, void (*callback)(void*, int)) {
    QHeaderView_Connect_SectionPressed((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_section_clicked(void* self, int logicalIndex) {
    QHeaderView_SectionClicked((QHeaderView*)self, logicalIndex);
}

void q_headerview_on_section_clicked(void* self, void (*callback)(void*, int)) {
    QHeaderView_Connect_SectionClicked((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_section_entered(void* self, int logicalIndex) {
    QHeaderView_SectionEntered((QHeaderView*)self, logicalIndex);
}

void q_headerview_on_section_entered(void* self, void (*callback)(void*, int)) {
    QHeaderView_Connect_SectionEntered((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_section_double_clicked(void* self, int logicalIndex) {
    QHeaderView_SectionDoubleClicked((QHeaderView*)self, logicalIndex);
}

void q_headerview_on_section_double_clicked(void* self, void (*callback)(void*, int)) {
    QHeaderView_Connect_SectionDoubleClicked((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_section_count_changed(void* self, int oldCount, int newCount) {
    QHeaderView_SectionCountChanged((QHeaderView*)self, oldCount, newCount);
}

void q_headerview_on_section_count_changed(void* self, void (*callback)(void*, int, int)) {
    QHeaderView_Connect_SectionCountChanged((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_section_handle_double_clicked(void* self, int logicalIndex) {
    QHeaderView_SectionHandleDoubleClicked((QHeaderView*)self, logicalIndex);
}

void q_headerview_on_section_handle_double_clicked(void* self, void (*callback)(void*, int)) {
    QHeaderView_Connect_SectionHandleDoubleClicked((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_geometries_changed(void* self) {
    QHeaderView_GeometriesChanged((QHeaderView*)self);
}

void q_headerview_on_geometries_changed(void* self, void (*callback)(void*)) {
    QHeaderView_Connect_GeometriesChanged((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_sort_indicator_changed(void* self, int logicalIndex, int32_t order) {
    QHeaderView_SortIndicatorChanged((QHeaderView*)self, logicalIndex, order);
}

void q_headerview_on_sort_indicator_changed(void* self, void (*callback)(void*, int, int32_t)) {
    QHeaderView_Connect_SortIndicatorChanged((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_sort_indicator_clearable_changed(void* self, bool clearable) {
    QHeaderView_SortIndicatorClearableChanged((QHeaderView*)self, clearable);
}

void q_headerview_on_sort_indicator_clearable_changed(void* self, void (*callback)(void*, bool)) {
    QHeaderView_Connect_SortIndicatorClearableChanged((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_update_section(void* self, int logicalIndex) {
    QHeaderView_UpdateSection((QHeaderView*)self, logicalIndex);
}

void q_headerview_on_update_section(void* self, void (*callback)(void*, int)) {
    QHeaderView_OnUpdateSection((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_update_section(void* self, int logicalIndex) {
    QHeaderView_QBaseUpdateSection((QHeaderView*)self, logicalIndex);
}

void q_headerview_resize_sections2(void* self) {
    QHeaderView_ResizeSections2((QHeaderView*)self);
}

void q_headerview_on_resize_sections2(void* self, void (*callback)()) {
    QHeaderView_OnResizeSections2((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_resize_sections2(void* self) {
    QHeaderView_QBaseResizeSections2((QHeaderView*)self);
}

void q_headerview_sections_inserted(void* self, void* parent, int logicalFirst, int logicalLast) {
    QHeaderView_SectionsInserted((QHeaderView*)self, (QModelIndex*)parent, logicalFirst, logicalLast);
}

void q_headerview_on_sections_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QHeaderView_OnSectionsInserted((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_sections_inserted(void* self, void* parent, int logicalFirst, int logicalLast) {
    QHeaderView_QBaseSectionsInserted((QHeaderView*)self, (QModelIndex*)parent, logicalFirst, logicalLast);
}

void q_headerview_sections_about_to_be_removed(void* self, void* parent, int logicalFirst, int logicalLast) {
    QHeaderView_SectionsAboutToBeRemoved((QHeaderView*)self, (QModelIndex*)parent, logicalFirst, logicalLast);
}

void q_headerview_on_sections_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QHeaderView_OnSectionsAboutToBeRemoved((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_sections_about_to_be_removed(void* self, void* parent, int logicalFirst, int logicalLast) {
    QHeaderView_QBaseSectionsAboutToBeRemoved((QHeaderView*)self, (QModelIndex*)parent, logicalFirst, logicalLast);
}

void q_headerview_initialize(void* self) {
    QHeaderView_Initialize((QHeaderView*)self);
}

void q_headerview_on_initialize(void* self, void (*callback)()) {
    QHeaderView_OnInitialize((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_initialize(void* self) {
    QHeaderView_QBaseInitialize((QHeaderView*)self);
}

void q_headerview_initialize_sections(void* self) {
    QHeaderView_InitializeSections((QHeaderView*)self);
}

void q_headerview_on_initialize_sections(void* self, void (*callback)()) {
    QHeaderView_OnInitializeSections((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_initialize_sections(void* self) {
    QHeaderView_QBaseInitializeSections((QHeaderView*)self);
}

void q_headerview_initialize_sections2(void* self, int start, int end) {
    QHeaderView_InitializeSections2((QHeaderView*)self, start, end);
}

void q_headerview_on_initialize_sections2(void* self, void (*callback)(void*, int, int)) {
    QHeaderView_OnInitializeSections2((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_initialize_sections2(void* self, int start, int end) {
    QHeaderView_QBaseInitializeSections2((QHeaderView*)self, start, end);
}

void q_headerview_current_changed(void* self, void* current, void* old) {
    QHeaderView_CurrentChanged((QHeaderView*)self, (QModelIndex*)current, (QModelIndex*)old);
}

void q_headerview_on_current_changed(void* self, void (*callback)(void*, void*, void*)) {
    QHeaderView_OnCurrentChanged((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_current_changed(void* self, void* current, void* old) {
    QHeaderView_QBaseCurrentChanged((QHeaderView*)self, (QModelIndex*)current, (QModelIndex*)old);
}

bool q_headerview_event(void* self, void* e) {
    return QHeaderView_Event((QHeaderView*)self, (QEvent*)e);
}

void q_headerview_on_event(void* self, bool (*callback)(void*, void*)) {
    QHeaderView_OnEvent((QHeaderView*)self, (intptr_t)callback);
}

bool q_headerview_qbase_event(void* self, void* e) {
    return QHeaderView_QBaseEvent((QHeaderView*)self, (QEvent*)e);
}

void q_headerview_paint_event(void* self, void* e) {
    QHeaderView_PaintEvent((QHeaderView*)self, (QPaintEvent*)e);
}

void q_headerview_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnPaintEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_paint_event(void* self, void* e) {
    QHeaderView_QBasePaintEvent((QHeaderView*)self, (QPaintEvent*)e);
}

void q_headerview_mouse_press_event(void* self, void* e) {
    QHeaderView_MousePressEvent((QHeaderView*)self, (QMouseEvent*)e);
}

void q_headerview_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnMousePressEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_mouse_press_event(void* self, void* e) {
    QHeaderView_QBaseMousePressEvent((QHeaderView*)self, (QMouseEvent*)e);
}

void q_headerview_mouse_move_event(void* self, void* e) {
    QHeaderView_MouseMoveEvent((QHeaderView*)self, (QMouseEvent*)e);
}

void q_headerview_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnMouseMoveEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_mouse_move_event(void* self, void* e) {
    QHeaderView_QBaseMouseMoveEvent((QHeaderView*)self, (QMouseEvent*)e);
}

void q_headerview_mouse_release_event(void* self, void* e) {
    QHeaderView_MouseReleaseEvent((QHeaderView*)self, (QMouseEvent*)e);
}

void q_headerview_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnMouseReleaseEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_mouse_release_event(void* self, void* e) {
    QHeaderView_QBaseMouseReleaseEvent((QHeaderView*)self, (QMouseEvent*)e);
}

void q_headerview_mouse_double_click_event(void* self, void* e) {
    QHeaderView_MouseDoubleClickEvent((QHeaderView*)self, (QMouseEvent*)e);
}

void q_headerview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnMouseDoubleClickEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_mouse_double_click_event(void* self, void* e) {
    QHeaderView_QBaseMouseDoubleClickEvent((QHeaderView*)self, (QMouseEvent*)e);
}

bool q_headerview_viewport_event(void* self, void* e) {
    return QHeaderView_ViewportEvent((QHeaderView*)self, (QEvent*)e);
}

void q_headerview_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    QHeaderView_OnViewportEvent((QHeaderView*)self, (intptr_t)callback);
}

bool q_headerview_qbase_viewport_event(void* self, void* e) {
    return QHeaderView_QBaseViewportEvent((QHeaderView*)self, (QEvent*)e);
}

void q_headerview_paint_section(void* self, void* painter, void* rect, int logicalIndex) {
    QHeaderView_PaintSection((QHeaderView*)self, (QPainter*)painter, (QRect*)rect, logicalIndex);
}

void q_headerview_on_paint_section(void* self, void (*callback)(void*, void*, void*, int)) {
    QHeaderView_OnPaintSection((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_paint_section(void* self, void* painter, void* rect, int logicalIndex) {
    QHeaderView_QBasePaintSection((QHeaderView*)self, (QPainter*)painter, (QRect*)rect, logicalIndex);
}

QSize* q_headerview_section_size_from_contents(void* self, int logicalIndex) {
    return QHeaderView_SectionSizeFromContents((QHeaderView*)self, logicalIndex);
}

void q_headerview_on_section_size_from_contents(void* self, QSize* (*callback)(void*, int)) {
    QHeaderView_OnSectionSizeFromContents((QHeaderView*)self, (intptr_t)callback);
}

QSize* q_headerview_qbase_section_size_from_contents(void* self, int logicalIndex) {
    return QHeaderView_QBaseSectionSizeFromContents((QHeaderView*)self, logicalIndex);
}

int32_t q_headerview_horizontal_offset(void* self) {
    return QHeaderView_HorizontalOffset((QHeaderView*)self);
}

void q_headerview_on_horizontal_offset(void* self, int32_t (*callback)()) {
    QHeaderView_OnHorizontalOffset((QHeaderView*)self, (intptr_t)callback);
}

int32_t q_headerview_qbase_horizontal_offset(void* self) {
    return QHeaderView_QBaseHorizontalOffset((QHeaderView*)self);
}

int32_t q_headerview_vertical_offset(void* self) {
    return QHeaderView_VerticalOffset((QHeaderView*)self);
}

void q_headerview_on_vertical_offset(void* self, int32_t (*callback)()) {
    QHeaderView_OnVerticalOffset((QHeaderView*)self, (intptr_t)callback);
}

int32_t q_headerview_qbase_vertical_offset(void* self) {
    return QHeaderView_QBaseVerticalOffset((QHeaderView*)self);
}

void q_headerview_update_geometries(void* self) {
    QHeaderView_UpdateGeometries((QHeaderView*)self);
}

void q_headerview_on_update_geometries(void* self, void (*callback)()) {
    QHeaderView_OnUpdateGeometries((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_update_geometries(void* self) {
    QHeaderView_QBaseUpdateGeometries((QHeaderView*)self);
}

void q_headerview_scroll_contents_by(void* self, int dx, int dy) {
    QHeaderView_ScrollContentsBy((QHeaderView*)self, dx, dy);
}

void q_headerview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    QHeaderView_OnScrollContentsBy((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QHeaderView_QBaseScrollContentsBy((QHeaderView*)self, dx, dy);
}

void q_headerview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QHeaderView_DataChanged((QHeaderView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_headerview_on_data_changed(void* self, void (*callback)(void*, void*, void*, int*)) {
    QHeaderView_OnDataChanged((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QHeaderView_QBaseDataChanged((QHeaderView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_headerview_rows_inserted(void* self, void* parent, int start, int end) {
    QHeaderView_RowsInserted((QHeaderView*)self, (QModelIndex*)parent, start, end);
}

void q_headerview_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QHeaderView_OnRowsInserted((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QHeaderView_QBaseRowsInserted((QHeaderView*)self, (QModelIndex*)parent, start, end);
}

QRect* q_headerview_visual_rect(void* self, void* index) {
    return QHeaderView_VisualRect((QHeaderView*)self, (QModelIndex*)index);
}

void q_headerview_on_visual_rect(void* self, QRect* (*callback)(void*, void*)) {
    QHeaderView_OnVisualRect((QHeaderView*)self, (intptr_t)callback);
}

QRect* q_headerview_qbase_visual_rect(void* self, void* index) {
    return QHeaderView_QBaseVisualRect((QHeaderView*)self, (QModelIndex*)index);
}

void q_headerview_scroll_to(void* self, void* index, int32_t hint) {
    QHeaderView_ScrollTo((QHeaderView*)self, (QModelIndex*)index, hint);
}

void q_headerview_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t)) {
    QHeaderView_OnScrollTo((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_scroll_to(void* self, void* index, int32_t hint) {
    QHeaderView_QBaseScrollTo((QHeaderView*)self, (QModelIndex*)index, hint);
}

QModelIndex* q_headerview_index_at(void* self, void* p) {
    return QHeaderView_IndexAt((QHeaderView*)self, (QPoint*)p);
}

void q_headerview_on_index_at(void* self, QModelIndex* (*callback)(void*, void*)) {
    QHeaderView_OnIndexAt((QHeaderView*)self, (intptr_t)callback);
}

QModelIndex* q_headerview_qbase_index_at(void* self, void* p) {
    return QHeaderView_QBaseIndexAt((QHeaderView*)self, (QPoint*)p);
}

bool q_headerview_is_index_hidden(void* self, void* index) {
    return QHeaderView_IsIndexHidden((QHeaderView*)self, (QModelIndex*)index);
}

void q_headerview_on_is_index_hidden(void* self, bool (*callback)(void*, void*)) {
    QHeaderView_OnIsIndexHidden((QHeaderView*)self, (intptr_t)callback);
}

bool q_headerview_qbase_is_index_hidden(void* self, void* index) {
    return QHeaderView_QBaseIsIndexHidden((QHeaderView*)self, (QModelIndex*)index);
}

QModelIndex* q_headerview_move_cursor(void* self, int32_t param1, int64_t param2) {
    return QHeaderView_MoveCursor((QHeaderView*)self, param1, param2);
}

void q_headerview_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int64_t)) {
    QHeaderView_OnMoveCursor((QHeaderView*)self, (intptr_t)callback);
}

QModelIndex* q_headerview_qbase_move_cursor(void* self, int32_t param1, int64_t param2) {
    return QHeaderView_QBaseMoveCursor((QHeaderView*)self, param1, param2);
}

void q_headerview_set_selection(void* self, void* rect, int32_t flags) {
    QHeaderView_SetSelection((QHeaderView*)self, (QRect*)rect, flags);
}

void q_headerview_on_set_selection(void* self, void (*callback)(void*, void*, int32_t)) {
    QHeaderView_OnSetSelection((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_set_selection(void* self, void* rect, int32_t flags) {
    QHeaderView_QBaseSetSelection((QHeaderView*)self, (QRect*)rect, flags);
}

QRegion* q_headerview_visual_region_for_selection(void* self, void* selection) {
    return QHeaderView_VisualRegionForSelection((QHeaderView*)self, (QItemSelection*)selection);
}

void q_headerview_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*)) {
    QHeaderView_OnVisualRegionForSelection((QHeaderView*)self, (intptr_t)callback);
}

QRegion* q_headerview_qbase_visual_region_for_selection(void* self, void* selection) {
    return QHeaderView_QBaseVisualRegionForSelection((QHeaderView*)self, (QItemSelection*)selection);
}

void q_headerview_init_style_option_for_index(void* self, void* option, int logicalIndex) {
    QHeaderView_InitStyleOptionForIndex((QHeaderView*)self, (QStyleOptionHeader*)option, logicalIndex);
}

void q_headerview_on_init_style_option_for_index(void* self, void (*callback)(void*, void*, int)) {
    QHeaderView_OnInitStyleOptionForIndex((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_init_style_option_for_index(void* self, void* option, int logicalIndex) {
    QHeaderView_QBaseInitStyleOptionForIndex((QHeaderView*)self, (QStyleOptionHeader*)option, logicalIndex);
}

void q_headerview_init_style_option(void* self, void* option) {
    QHeaderView_InitStyleOption((QHeaderView*)self, (QStyleOptionHeader*)option);
}

void q_headerview_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnInitStyleOption((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_qbase_init_style_option(void* self, void* option) {
    QHeaderView_QBaseInitStyleOption((QHeaderView*)self, (QStyleOptionHeader*)option);
}

const char* q_headerview_tr2(const char* s, const char* c) {
    libqt_string _str = QHeaderView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_headerview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHeaderView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_headerview_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

QItemSelectionModel* q_headerview_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

void q_headerview_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_headerview_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

void q_headerview_set_selection_mode(void* self, int32_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

int32_t q_headerview_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

void q_headerview_set_selection_behavior(void* self, int32_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

int32_t q_headerview_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

QModelIndex* q_headerview_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

QModelIndex* q_headerview_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

void q_headerview_set_edit_triggers(void* self, int32_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

int32_t q_headerview_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

void q_headerview_set_vertical_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

int32_t q_headerview_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

void q_headerview_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

void q_headerview_set_horizontal_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

int32_t q_headerview_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

void q_headerview_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

void q_headerview_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

bool q_headerview_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

void q_headerview_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

int32_t q_headerview_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

void q_headerview_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

bool q_headerview_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

void q_headerview_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

bool q_headerview_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

void q_headerview_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

bool q_headerview_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

void q_headerview_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

bool q_headerview_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

void q_headerview_set_drag_drop_mode(void* self, int32_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

int32_t q_headerview_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

void q_headerview_set_default_drop_action(void* self, int32_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

int32_t q_headerview_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

void q_headerview_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

bool q_headerview_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

void q_headerview_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

QSize* q_headerview_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

void q_headerview_set_text_elide_mode(void* self, int32_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

int32_t q_headerview_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

QSize* q_headerview_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_headerview_open_persistent_editor(void* self, void* index) {
    QAbstractItemView_OpenPersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_headerview_close_persistent_editor(void* self, void* index) {
    QAbstractItemView_ClosePersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

bool q_headerview_is_persistent_editor_open(void* self, void* index) {
    return QAbstractItemView_IsPersistentEditorOpen((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_headerview_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

QWidget* q_headerview_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_headerview_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_headerview_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

void q_headerview_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_headerview_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

QAbstractItemDelegate* q_headerview_item_delegate2(void* self, void* index) {
    return QAbstractItemView_ItemDelegate2((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_headerview_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_headerview_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

void q_headerview_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_headerview_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

void q_headerview_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

void q_headerview_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_headerview_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_headerview_on_pressed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)callback);
}

void q_headerview_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_headerview_on_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)callback);
}

void q_headerview_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_headerview_on_double_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)callback);
}

void q_headerview_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_headerview_on_activated(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)callback);
}

void q_headerview_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_headerview_on_entered(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)callback);
}

void q_headerview_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

void q_headerview_on_viewport_entered(void* self, void (*callback)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)callback);
}

void q_headerview_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

void q_headerview_on_icon_size_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)callback);
}

int32_t q_headerview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_headerview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_headerview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_headerview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t q_headerview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_headerview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_headerview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_headerview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_headerview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_headerview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_headerview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_headerview_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_headerview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_headerview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_headerview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t q_headerview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_headerview_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_headerview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_headerview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_headerview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t q_headerview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_headerview_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t q_headerview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_headerview_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_headerview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_headerview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_headerview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_headerview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_headerview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_headerview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_headerview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_headerview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_headerview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_headerview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_headerview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_headerview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_headerview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_headerview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_headerview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_headerview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_headerview_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_headerview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_headerview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_headerview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_headerview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_headerview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_headerview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_headerview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_headerview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_headerview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_headerview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_headerview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_headerview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_headerview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_headerview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_headerview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_headerview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_headerview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_headerview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_headerview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_headerview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_headerview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_headerview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_headerview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_headerview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_headerview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_headerview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_headerview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_headerview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_headerview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_headerview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_headerview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_headerview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_headerview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_headerview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_headerview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_headerview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_headerview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_headerview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_headerview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_headerview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_headerview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_headerview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_headerview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_headerview_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_headerview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_headerview_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_headerview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_headerview_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_headerview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_headerview_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_headerview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_headerview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_headerview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_headerview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_headerview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_headerview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_headerview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_headerview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_headerview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_headerview_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_headerview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_headerview_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_headerview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_headerview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_headerview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_headerview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_headerview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_headerview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_headerview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_headerview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_headerview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_headerview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_headerview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_headerview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_headerview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_headerview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_headerview_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_headerview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_headerview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_headerview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_headerview_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_headerview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_headerview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_headerview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_headerview_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_headerview_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_headerview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_headerview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_headerview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_headerview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_headerview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_headerview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_headerview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_headerview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_headerview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_headerview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_headerview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_headerview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_headerview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_headerview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_headerview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_headerview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_headerview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_headerview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_headerview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_headerview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_headerview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_headerview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_headerview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_headerview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_headerview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_headerview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_headerview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_headerview_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_headerview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_headerview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_headerview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_headerview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_headerview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_headerview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_headerview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_headerview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_headerview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_headerview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_headerview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_headerview_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_headerview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_headerview_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_headerview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_headerview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_headerview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_headerview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_headerview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_headerview_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_headerview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_headerview_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_headerview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_headerview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_headerview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_headerview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_headerview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_headerview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_headerview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_headerview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_headerview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_headerview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_headerview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_headerview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_headerview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_headerview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_headerview_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_headerview_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_headerview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_headerview_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_headerview_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_headerview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_headerview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_headerview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_headerview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_headerview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_headerview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_headerview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_headerview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_headerview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_headerview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_headerview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_headerview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_headerview_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_headerview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_headerview_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_headerview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_headerview_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_headerview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_headerview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_headerview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_headerview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_headerview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_headerview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_headerview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_headerview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_headerview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_headerview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_headerview_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_headerview_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_headerview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_headerview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_headerview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_headerview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_headerview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_headerview_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_headerview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_headerview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_headerview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_headerview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_headerview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_headerview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_headerview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_headerview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_headerview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_headerview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_headerview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_headerview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_headerview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_headerview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_headerview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_headerview_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_headerview_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_headerview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_headerview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_headerview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_headerview_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_headerview_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_headerview_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_headerview_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_headerview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_headerview_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t q_headerview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_headerview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_headerview_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t q_headerview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_headerview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_headerview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_headerview_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_headerview_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_headerview_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_headerview_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_headerview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_headerview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_headerview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_headerview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_headerview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_headerview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_headerview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_headerview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_headerview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_headerview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_headerview_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_headerview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_headerview_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_headerview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_headerview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_headerview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_headerview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_headerview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_headerview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_headerview_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_headerview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_headerview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_headerview_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_headerview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_headerview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_headerview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_headerview_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_headerview_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_headerview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_headerview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_headerview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_headerview_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_headerview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_headerview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_headerview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_headerview_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_headerview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_headerview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_headerview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_headerview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_headerview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_headerview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_headerview_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_headerview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_headerview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_headerview_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_headerview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_headerview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_headerview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_headerview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_headerview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_headerview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_headerview_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_headerview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_headerview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_headerview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_headerview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_headerview_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_headerview_dynamic_property_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_headerview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_headerview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_headerview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_headerview_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_headerview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_headerview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_headerview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_headerview_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_headerview_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_headerview_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_headerview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_headerview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_headerview_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_headerview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_headerview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_headerview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_headerview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_headerview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_headerview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_headerview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_headerview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_headerview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_headerview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_headerview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_headerview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_headerview_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_headerview_set_selection_model(void* self, void* selectionModel) {
    QHeaderView_SetSelectionModel((QHeaderView*)self, (QItemSelectionModel*)selectionModel);
}

void q_headerview_qbase_set_selection_model(void* self, void* selectionModel) {
    QHeaderView_QBaseSetSelectionModel((QHeaderView*)self, (QItemSelectionModel*)selectionModel);
}

void q_headerview_on_set_selection_model(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnSetSelectionModel((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_keyboard_search(void* self, const char* search) {
    QHeaderView_KeyboardSearch((QHeaderView*)self, qstring(search));
}

void q_headerview_qbase_keyboard_search(void* self, const char* search) {
    QHeaderView_QBaseKeyboardSearch((QHeaderView*)self, qstring(search));
}

void q_headerview_on_keyboard_search(void* self, void (*callback)(void*, const char*)) {
    QHeaderView_OnKeyboardSearch((QHeaderView*)self, (intptr_t)callback);
}

int32_t q_headerview_size_hint_for_row(void* self, int row) {
    return QHeaderView_SizeHintForRow((QHeaderView*)self, row);
}

int32_t q_headerview_qbase_size_hint_for_row(void* self, int row) {
    return QHeaderView_QBaseSizeHintForRow((QHeaderView*)self, row);
}

void q_headerview_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int)) {
    QHeaderView_OnSizeHintForRow((QHeaderView*)self, (intptr_t)callback);
}

int32_t q_headerview_size_hint_for_column(void* self, int column) {
    return QHeaderView_SizeHintForColumn((QHeaderView*)self, column);
}

int32_t q_headerview_qbase_size_hint_for_column(void* self, int column) {
    return QHeaderView_QBaseSizeHintForColumn((QHeaderView*)self, column);
}

void q_headerview_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int)) {
    QHeaderView_OnSizeHintForColumn((QHeaderView*)self, (intptr_t)callback);
}

QAbstractItemDelegate* q_headerview_item_delegate_for_index(void* self, void* index) {
    return QHeaderView_ItemDelegateForIndex((QHeaderView*)self, (QModelIndex*)index);
}

QAbstractItemDelegate* q_headerview_qbase_item_delegate_for_index(void* self, void* index) {
    return QHeaderView_QBaseItemDelegateForIndex((QHeaderView*)self, (QModelIndex*)index);
}

void q_headerview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*)) {
    QHeaderView_OnItemDelegateForIndex((QHeaderView*)self, (intptr_t)callback);
}

QVariant* q_headerview_input_method_query(void* self, int64_t query) {
    return QHeaderView_InputMethodQuery((QHeaderView*)self, query);
}

QVariant* q_headerview_qbase_input_method_query(void* self, int64_t query) {
    return QHeaderView_QBaseInputMethodQuery((QHeaderView*)self, query);
}

void q_headerview_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QHeaderView_OnInputMethodQuery((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_set_root_index(void* self, void* index) {
    QHeaderView_SetRootIndex((QHeaderView*)self, (QModelIndex*)index);
}

void q_headerview_qbase_set_root_index(void* self, void* index) {
    QHeaderView_QBaseSetRootIndex((QHeaderView*)self, (QModelIndex*)index);
}

void q_headerview_on_set_root_index(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnSetRootIndex((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_select_all(void* self) {
    QHeaderView_SelectAll((QHeaderView*)self);
}

void q_headerview_qbase_select_all(void* self) {
    QHeaderView_QBaseSelectAll((QHeaderView*)self);
}

void q_headerview_on_select_all(void* self, void (*callback)()) {
    QHeaderView_OnSelectAll((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QHeaderView_RowsAboutToBeRemoved((QHeaderView*)self, (QModelIndex*)parent, start, end);
}

void q_headerview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QHeaderView_QBaseRowsAboutToBeRemoved((QHeaderView*)self, (QModelIndex*)parent, start, end);
}

void q_headerview_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QHeaderView_OnRowsAboutToBeRemoved((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_selection_changed(void* self, void* selected, void* deselected) {
    QHeaderView_SelectionChanged((QHeaderView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_headerview_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QHeaderView_QBaseSelectionChanged((QHeaderView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_headerview_on_selection_changed(void* self, void (*callback)(void*, void*, void*)) {
    QHeaderView_OnSelectionChanged((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_update_editor_data(void* self) {
    QHeaderView_UpdateEditorData((QHeaderView*)self);
}

void q_headerview_qbase_update_editor_data(void* self) {
    QHeaderView_QBaseUpdateEditorData((QHeaderView*)self);
}

void q_headerview_on_update_editor_data(void* self, void (*callback)()) {
    QHeaderView_OnUpdateEditorData((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_update_editor_geometries(void* self) {
    QHeaderView_UpdateEditorGeometries((QHeaderView*)self);
}

void q_headerview_qbase_update_editor_geometries(void* self) {
    QHeaderView_QBaseUpdateEditorGeometries((QHeaderView*)self);
}

void q_headerview_on_update_editor_geometries(void* self, void (*callback)()) {
    QHeaderView_OnUpdateEditorGeometries((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_vertical_scrollbar_action(void* self, int action) {
    QHeaderView_VerticalScrollbarAction((QHeaderView*)self, action);
}

void q_headerview_qbase_vertical_scrollbar_action(void* self, int action) {
    QHeaderView_QBaseVerticalScrollbarAction((QHeaderView*)self, action);
}

void q_headerview_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int)) {
    QHeaderView_OnVerticalScrollbarAction((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_horizontal_scrollbar_action(void* self, int action) {
    QHeaderView_HorizontalScrollbarAction((QHeaderView*)self, action);
}

void q_headerview_qbase_horizontal_scrollbar_action(void* self, int action) {
    QHeaderView_QBaseHorizontalScrollbarAction((QHeaderView*)self, action);
}

void q_headerview_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int)) {
    QHeaderView_OnHorizontalScrollbarAction((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_vertical_scrollbar_value_changed(void* self, int value) {
    QHeaderView_VerticalScrollbarValueChanged((QHeaderView*)self, value);
}

void q_headerview_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QHeaderView_QBaseVerticalScrollbarValueChanged((QHeaderView*)self, value);
}

void q_headerview_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    QHeaderView_OnVerticalScrollbarValueChanged((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_horizontal_scrollbar_value_changed(void* self, int value) {
    QHeaderView_HorizontalScrollbarValueChanged((QHeaderView*)self, value);
}

void q_headerview_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QHeaderView_QBaseHorizontalScrollbarValueChanged((QHeaderView*)self, value);
}

void q_headerview_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    QHeaderView_OnHorizontalScrollbarValueChanged((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_close_editor(void* self, void* editor, int32_t hint) {
    QHeaderView_CloseEditor((QHeaderView*)self, (QWidget*)editor, hint);
}

void q_headerview_qbase_close_editor(void* self, void* editor, int32_t hint) {
    QHeaderView_QBaseCloseEditor((QHeaderView*)self, (QWidget*)editor, hint);
}

void q_headerview_on_close_editor(void* self, void (*callback)(void*, void*, int32_t)) {
    QHeaderView_OnCloseEditor((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_commit_data(void* self, void* editor) {
    QHeaderView_CommitData((QHeaderView*)self, (QWidget*)editor);
}

void q_headerview_qbase_commit_data(void* self, void* editor) {
    QHeaderView_QBaseCommitData((QHeaderView*)self, (QWidget*)editor);
}

void q_headerview_on_commit_data(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnCommitData((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_editor_destroyed(void* self, void* editor) {
    QHeaderView_EditorDestroyed((QHeaderView*)self, (QObject*)editor);
}

void q_headerview_qbase_editor_destroyed(void* self, void* editor) {
    QHeaderView_QBaseEditorDestroyed((QHeaderView*)self, (QObject*)editor);
}

void q_headerview_on_editor_destroyed(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnEditorDestroyed((QHeaderView*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_headerview_selected_indexes(void* self) {
    libqt_list _arr = QHeaderView_SelectedIndexes((QHeaderView*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_headerview_qbase_selected_indexes(void* self) {
    libqt_list _arr = QHeaderView_QBaseSelectedIndexes((QHeaderView*)self);
    return _arr;
}

void q_headerview_on_selected_indexes(void* self, QModelIndex** (*callback)()) {
    QHeaderView_OnSelectedIndexes((QHeaderView*)self, (intptr_t)callback);
}

bool q_headerview_edit2(void* self, void* index, int32_t trigger, void* event) {
    return QHeaderView_Edit2((QHeaderView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

bool q_headerview_qbase_edit2(void* self, void* index, int32_t trigger, void* event) {
    return QHeaderView_QBaseEdit2((QHeaderView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

void q_headerview_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*)) {
    QHeaderView_OnEdit2((QHeaderView*)self, (intptr_t)callback);
}

int32_t q_headerview_selection_command(void* self, void* index, void* event) {
    return QHeaderView_SelectionCommand((QHeaderView*)self, (QModelIndex*)index, (QEvent*)event);
}

int32_t q_headerview_qbase_selection_command(void* self, void* index, void* event) {
    return QHeaderView_QBaseSelectionCommand((QHeaderView*)self, (QModelIndex*)index, (QEvent*)event);
}

void q_headerview_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*)) {
    QHeaderView_OnSelectionCommand((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_start_drag(void* self, int32_t supportedActions) {
    QHeaderView_StartDrag((QHeaderView*)self, supportedActions);
}

void q_headerview_qbase_start_drag(void* self, int32_t supportedActions) {
    QHeaderView_QBaseStartDrag((QHeaderView*)self, supportedActions);
}

void q_headerview_on_start_drag(void* self, void (*callback)(void*, int32_t)) {
    QHeaderView_OnStartDrag((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_init_view_item_option(void* self, void* option) {
    QHeaderView_InitViewItemOption((QHeaderView*)self, (QStyleOptionViewItem*)option);
}

void q_headerview_qbase_init_view_item_option(void* self, void* option) {
    QHeaderView_QBaseInitViewItemOption((QHeaderView*)self, (QStyleOptionViewItem*)option);
}

void q_headerview_on_init_view_item_option(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnInitViewItemOption((QHeaderView*)self, (intptr_t)callback);
}

bool q_headerview_focus_next_prev_child(void* self, bool next) {
    return QHeaderView_FocusNextPrevChild((QHeaderView*)self, next);
}

bool q_headerview_qbase_focus_next_prev_child(void* self, bool next) {
    return QHeaderView_QBaseFocusNextPrevChild((QHeaderView*)self, next);
}

void q_headerview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QHeaderView_OnFocusNextPrevChild((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_drag_enter_event(void* self, void* event) {
    QHeaderView_DragEnterEvent((QHeaderView*)self, (QDragEnterEvent*)event);
}

void q_headerview_qbase_drag_enter_event(void* self, void* event) {
    QHeaderView_QBaseDragEnterEvent((QHeaderView*)self, (QDragEnterEvent*)event);
}

void q_headerview_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnDragEnterEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_drag_move_event(void* self, void* event) {
    QHeaderView_DragMoveEvent((QHeaderView*)self, (QDragMoveEvent*)event);
}

void q_headerview_qbase_drag_move_event(void* self, void* event) {
    QHeaderView_QBaseDragMoveEvent((QHeaderView*)self, (QDragMoveEvent*)event);
}

void q_headerview_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnDragMoveEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_drag_leave_event(void* self, void* event) {
    QHeaderView_DragLeaveEvent((QHeaderView*)self, (QDragLeaveEvent*)event);
}

void q_headerview_qbase_drag_leave_event(void* self, void* event) {
    QHeaderView_QBaseDragLeaveEvent((QHeaderView*)self, (QDragLeaveEvent*)event);
}

void q_headerview_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnDragLeaveEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_drop_event(void* self, void* event) {
    QHeaderView_DropEvent((QHeaderView*)self, (QDropEvent*)event);
}

void q_headerview_qbase_drop_event(void* self, void* event) {
    QHeaderView_QBaseDropEvent((QHeaderView*)self, (QDropEvent*)event);
}

void q_headerview_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnDropEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_focus_in_event(void* self, void* event) {
    QHeaderView_FocusInEvent((QHeaderView*)self, (QFocusEvent*)event);
}

void q_headerview_qbase_focus_in_event(void* self, void* event) {
    QHeaderView_QBaseFocusInEvent((QHeaderView*)self, (QFocusEvent*)event);
}

void q_headerview_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnFocusInEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_focus_out_event(void* self, void* event) {
    QHeaderView_FocusOutEvent((QHeaderView*)self, (QFocusEvent*)event);
}

void q_headerview_qbase_focus_out_event(void* self, void* event) {
    QHeaderView_QBaseFocusOutEvent((QHeaderView*)self, (QFocusEvent*)event);
}

void q_headerview_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnFocusOutEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_key_press_event(void* self, void* event) {
    QHeaderView_KeyPressEvent((QHeaderView*)self, (QKeyEvent*)event);
}

void q_headerview_qbase_key_press_event(void* self, void* event) {
    QHeaderView_QBaseKeyPressEvent((QHeaderView*)self, (QKeyEvent*)event);
}

void q_headerview_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnKeyPressEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_resize_event(void* self, void* event) {
    QHeaderView_ResizeEvent((QHeaderView*)self, (QResizeEvent*)event);
}

void q_headerview_qbase_resize_event(void* self, void* event) {
    QHeaderView_QBaseResizeEvent((QHeaderView*)self, (QResizeEvent*)event);
}

void q_headerview_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnResizeEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_timer_event(void* self, void* event) {
    QHeaderView_TimerEvent((QHeaderView*)self, (QTimerEvent*)event);
}

void q_headerview_qbase_timer_event(void* self, void* event) {
    QHeaderView_QBaseTimerEvent((QHeaderView*)self, (QTimerEvent*)event);
}

void q_headerview_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnTimerEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_input_method_event(void* self, void* event) {
    QHeaderView_InputMethodEvent((QHeaderView*)self, (QInputMethodEvent*)event);
}

void q_headerview_qbase_input_method_event(void* self, void* event) {
    QHeaderView_QBaseInputMethodEvent((QHeaderView*)self, (QInputMethodEvent*)event);
}

void q_headerview_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnInputMethodEvent((QHeaderView*)self, (intptr_t)callback);
}

bool q_headerview_event_filter(void* self, void* object, void* event) {
    return QHeaderView_EventFilter((QHeaderView*)self, (QObject*)object, (QEvent*)event);
}

bool q_headerview_qbase_event_filter(void* self, void* object, void* event) {
    return QHeaderView_QBaseEventFilter((QHeaderView*)self, (QObject*)object, (QEvent*)event);
}

void q_headerview_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QHeaderView_OnEventFilter((QHeaderView*)self, (intptr_t)callback);
}

QSize* q_headerview_viewport_size_hint(void* self) {
    return QHeaderView_ViewportSizeHint((QHeaderView*)self);
}

QSize* q_headerview_qbase_viewport_size_hint(void* self) {
    return QHeaderView_QBaseViewportSizeHint((QHeaderView*)self);
}

void q_headerview_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    QHeaderView_OnViewportSizeHint((QHeaderView*)self, (intptr_t)callback);
}

QSize* q_headerview_minimum_size_hint(void* self) {
    return QHeaderView_MinimumSizeHint((QHeaderView*)self);
}

QSize* q_headerview_qbase_minimum_size_hint(void* self) {
    return QHeaderView_QBaseMinimumSizeHint((QHeaderView*)self);
}

void q_headerview_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QHeaderView_OnMinimumSizeHint((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_setup_viewport(void* self, void* viewport) {
    QHeaderView_SetupViewport((QHeaderView*)self, (QWidget*)viewport);
}

void q_headerview_qbase_setup_viewport(void* self, void* viewport) {
    QHeaderView_QBaseSetupViewport((QHeaderView*)self, (QWidget*)viewport);
}

void q_headerview_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnSetupViewport((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_wheel_event(void* self, void* param1) {
    QHeaderView_WheelEvent((QHeaderView*)self, (QWheelEvent*)param1);
}

void q_headerview_qbase_wheel_event(void* self, void* param1) {
    QHeaderView_QBaseWheelEvent((QHeaderView*)self, (QWheelEvent*)param1);
}

void q_headerview_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnWheelEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_context_menu_event(void* self, void* param1) {
    QHeaderView_ContextMenuEvent((QHeaderView*)self, (QContextMenuEvent*)param1);
}

void q_headerview_qbase_context_menu_event(void* self, void* param1) {
    QHeaderView_QBaseContextMenuEvent((QHeaderView*)self, (QContextMenuEvent*)param1);
}

void q_headerview_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnContextMenuEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_change_event(void* self, void* param1) {
    QHeaderView_ChangeEvent((QHeaderView*)self, (QEvent*)param1);
}

void q_headerview_qbase_change_event(void* self, void* param1) {
    QHeaderView_QBaseChangeEvent((QHeaderView*)self, (QEvent*)param1);
}

void q_headerview_on_change_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnChangeEvent((QHeaderView*)self, (intptr_t)callback);
}

int32_t q_headerview_dev_type(void* self) {
    return QHeaderView_DevType((QHeaderView*)self);
}

int32_t q_headerview_qbase_dev_type(void* self) {
    return QHeaderView_QBaseDevType((QHeaderView*)self);
}

void q_headerview_on_dev_type(void* self, int32_t (*callback)()) {
    QHeaderView_OnDevType((QHeaderView*)self, (intptr_t)callback);
}

int32_t q_headerview_height_for_width(void* self, int param1) {
    return QHeaderView_HeightForWidth((QHeaderView*)self, param1);
}

int32_t q_headerview_qbase_height_for_width(void* self, int param1) {
    return QHeaderView_QBaseHeightForWidth((QHeaderView*)self, param1);
}

void q_headerview_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QHeaderView_OnHeightForWidth((QHeaderView*)self, (intptr_t)callback);
}

bool q_headerview_has_height_for_width(void* self) {
    return QHeaderView_HasHeightForWidth((QHeaderView*)self);
}

bool q_headerview_qbase_has_height_for_width(void* self) {
    return QHeaderView_QBaseHasHeightForWidth((QHeaderView*)self);
}

void q_headerview_on_has_height_for_width(void* self, bool (*callback)()) {
    QHeaderView_OnHasHeightForWidth((QHeaderView*)self, (intptr_t)callback);
}

QPaintEngine* q_headerview_paint_engine(void* self) {
    return QHeaderView_PaintEngine((QHeaderView*)self);
}

QPaintEngine* q_headerview_qbase_paint_engine(void* self) {
    return QHeaderView_QBasePaintEngine((QHeaderView*)self);
}

void q_headerview_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QHeaderView_OnPaintEngine((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_key_release_event(void* self, void* event) {
    QHeaderView_KeyReleaseEvent((QHeaderView*)self, (QKeyEvent*)event);
}

void q_headerview_qbase_key_release_event(void* self, void* event) {
    QHeaderView_QBaseKeyReleaseEvent((QHeaderView*)self, (QKeyEvent*)event);
}

void q_headerview_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnKeyReleaseEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_enter_event(void* self, void* event) {
    QHeaderView_EnterEvent((QHeaderView*)self, (QEnterEvent*)event);
}

void q_headerview_qbase_enter_event(void* self, void* event) {
    QHeaderView_QBaseEnterEvent((QHeaderView*)self, (QEnterEvent*)event);
}

void q_headerview_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnEnterEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_leave_event(void* self, void* event) {
    QHeaderView_LeaveEvent((QHeaderView*)self, (QEvent*)event);
}

void q_headerview_qbase_leave_event(void* self, void* event) {
    QHeaderView_QBaseLeaveEvent((QHeaderView*)self, (QEvent*)event);
}

void q_headerview_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnLeaveEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_move_event(void* self, void* event) {
    QHeaderView_MoveEvent((QHeaderView*)self, (QMoveEvent*)event);
}

void q_headerview_qbase_move_event(void* self, void* event) {
    QHeaderView_QBaseMoveEvent((QHeaderView*)self, (QMoveEvent*)event);
}

void q_headerview_on_move_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnMoveEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_close_event(void* self, void* event) {
    QHeaderView_CloseEvent((QHeaderView*)self, (QCloseEvent*)event);
}

void q_headerview_qbase_close_event(void* self, void* event) {
    QHeaderView_QBaseCloseEvent((QHeaderView*)self, (QCloseEvent*)event);
}

void q_headerview_on_close_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnCloseEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_tablet_event(void* self, void* event) {
    QHeaderView_TabletEvent((QHeaderView*)self, (QTabletEvent*)event);
}

void q_headerview_qbase_tablet_event(void* self, void* event) {
    QHeaderView_QBaseTabletEvent((QHeaderView*)self, (QTabletEvent*)event);
}

void q_headerview_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnTabletEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_action_event(void* self, void* event) {
    QHeaderView_ActionEvent((QHeaderView*)self, (QActionEvent*)event);
}

void q_headerview_qbase_action_event(void* self, void* event) {
    QHeaderView_QBaseActionEvent((QHeaderView*)self, (QActionEvent*)event);
}

void q_headerview_on_action_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnActionEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_show_event(void* self, void* event) {
    QHeaderView_ShowEvent((QHeaderView*)self, (QShowEvent*)event);
}

void q_headerview_qbase_show_event(void* self, void* event) {
    QHeaderView_QBaseShowEvent((QHeaderView*)self, (QShowEvent*)event);
}

void q_headerview_on_show_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnShowEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_hide_event(void* self, void* event) {
    QHeaderView_HideEvent((QHeaderView*)self, (QHideEvent*)event);
}

void q_headerview_qbase_hide_event(void* self, void* event) {
    QHeaderView_QBaseHideEvent((QHeaderView*)self, (QHideEvent*)event);
}

void q_headerview_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnHideEvent((QHeaderView*)self, (intptr_t)callback);
}

bool q_headerview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QHeaderView_NativeEvent((QHeaderView*)self, qstring(eventType), message, result);
}

bool q_headerview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QHeaderView_QBaseNativeEvent((QHeaderView*)self, qstring(eventType), message, result);
}

void q_headerview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QHeaderView_OnNativeEvent((QHeaderView*)self, (intptr_t)callback);
}

int32_t q_headerview_metric(void* self, int32_t param1) {
    return QHeaderView_Metric((QHeaderView*)self, param1);
}

int32_t q_headerview_qbase_metric(void* self, int32_t param1) {
    return QHeaderView_QBaseMetric((QHeaderView*)self, param1);
}

void q_headerview_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QHeaderView_OnMetric((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_init_painter(void* self, void* painter) {
    QHeaderView_InitPainter((QHeaderView*)self, (QPainter*)painter);
}

void q_headerview_qbase_init_painter(void* self, void* painter) {
    QHeaderView_QBaseInitPainter((QHeaderView*)self, (QPainter*)painter);
}

void q_headerview_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnInitPainter((QHeaderView*)self, (intptr_t)callback);
}

QPaintDevice* q_headerview_redirected(void* self, void* offset) {
    return QHeaderView_Redirected((QHeaderView*)self, (QPoint*)offset);
}

QPaintDevice* q_headerview_qbase_redirected(void* self, void* offset) {
    return QHeaderView_QBaseRedirected((QHeaderView*)self, (QPoint*)offset);
}

void q_headerview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QHeaderView_OnRedirected((QHeaderView*)self, (intptr_t)callback);
}

QPainter* q_headerview_shared_painter(void* self) {
    return QHeaderView_SharedPainter((QHeaderView*)self);
}

QPainter* q_headerview_qbase_shared_painter(void* self) {
    return QHeaderView_QBaseSharedPainter((QHeaderView*)self);
}

void q_headerview_on_shared_painter(void* self, QPainter* (*callback)()) {
    QHeaderView_OnSharedPainter((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_child_event(void* self, void* event) {
    QHeaderView_ChildEvent((QHeaderView*)self, (QChildEvent*)event);
}

void q_headerview_qbase_child_event(void* self, void* event) {
    QHeaderView_QBaseChildEvent((QHeaderView*)self, (QChildEvent*)event);
}

void q_headerview_on_child_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnChildEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_custom_event(void* self, void* event) {
    QHeaderView_CustomEvent((QHeaderView*)self, (QEvent*)event);
}

void q_headerview_qbase_custom_event(void* self, void* event) {
    QHeaderView_QBaseCustomEvent((QHeaderView*)self, (QEvent*)event);
}

void q_headerview_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnCustomEvent((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_connect_notify(void* self, void* signal) {
    QHeaderView_ConnectNotify((QHeaderView*)self, (QMetaMethod*)signal);
}

void q_headerview_qbase_connect_notify(void* self, void* signal) {
    QHeaderView_QBaseConnectNotify((QHeaderView*)self, (QMetaMethod*)signal);
}

void q_headerview_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnConnectNotify((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_disconnect_notify(void* self, void* signal) {
    QHeaderView_DisconnectNotify((QHeaderView*)self, (QMetaMethod*)signal);
}

void q_headerview_qbase_disconnect_notify(void* self, void* signal) {
    QHeaderView_QBaseDisconnectNotify((QHeaderView*)self, (QMetaMethod*)signal);
}

void q_headerview_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnDisconnectNotify((QHeaderView*)self, (intptr_t)callback);
}

int32_t q_headerview_state(void* self) {
    return QHeaderView_State((QHeaderView*)self);
}

int32_t q_headerview_qbase_state(void* self) {
    return QHeaderView_QBaseState((QHeaderView*)self);
}

void q_headerview_on_state(void* self, int32_t (*callback)()) {
    QHeaderView_OnState((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_set_state(void* self, int32_t state) {
    QHeaderView_SetState((QHeaderView*)self, state);
}

void q_headerview_qbase_set_state(void* self, int32_t state) {
    QHeaderView_QBaseSetState((QHeaderView*)self, state);
}

void q_headerview_on_set_state(void* self, void (*callback)(void*, int32_t)) {
    QHeaderView_OnSetState((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_schedule_delayed_items_layout(void* self) {
    QHeaderView_ScheduleDelayedItemsLayout((QHeaderView*)self);
}

void q_headerview_qbase_schedule_delayed_items_layout(void* self) {
    QHeaderView_QBaseScheduleDelayedItemsLayout((QHeaderView*)self);
}

void q_headerview_on_schedule_delayed_items_layout(void* self, void (*callback)()) {
    QHeaderView_OnScheduleDelayedItemsLayout((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_execute_delayed_items_layout(void* self) {
    QHeaderView_ExecuteDelayedItemsLayout((QHeaderView*)self);
}

void q_headerview_qbase_execute_delayed_items_layout(void* self) {
    QHeaderView_QBaseExecuteDelayedItemsLayout((QHeaderView*)self);
}

void q_headerview_on_execute_delayed_items_layout(void* self, void (*callback)()) {
    QHeaderView_OnExecuteDelayedItemsLayout((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_set_dirty_region(void* self, void* region) {
    QHeaderView_SetDirtyRegion((QHeaderView*)self, (QRegion*)region);
}

void q_headerview_qbase_set_dirty_region(void* self, void* region) {
    QHeaderView_QBaseSetDirtyRegion((QHeaderView*)self, (QRegion*)region);
}

void q_headerview_on_set_dirty_region(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnSetDirtyRegion((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_scroll_dirty_region(void* self, int dx, int dy) {
    QHeaderView_ScrollDirtyRegion((QHeaderView*)self, dx, dy);
}

void q_headerview_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QHeaderView_QBaseScrollDirtyRegion((QHeaderView*)self, dx, dy);
}

void q_headerview_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int)) {
    QHeaderView_OnScrollDirtyRegion((QHeaderView*)self, (intptr_t)callback);
}

QPoint* q_headerview_dirty_region_offset(void* self) {
    return QHeaderView_DirtyRegionOffset((QHeaderView*)self);
}

QPoint* q_headerview_qbase_dirty_region_offset(void* self) {
    return QHeaderView_QBaseDirtyRegionOffset((QHeaderView*)self);
}

void q_headerview_on_dirty_region_offset(void* self, QPoint* (*callback)()) {
    QHeaderView_OnDirtyRegionOffset((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_start_auto_scroll(void* self) {
    QHeaderView_StartAutoScroll((QHeaderView*)self);
}

void q_headerview_qbase_start_auto_scroll(void* self) {
    QHeaderView_QBaseStartAutoScroll((QHeaderView*)self);
}

void q_headerview_on_start_auto_scroll(void* self, void (*callback)()) {
    QHeaderView_OnStartAutoScroll((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_stop_auto_scroll(void* self) {
    QHeaderView_StopAutoScroll((QHeaderView*)self);
}

void q_headerview_qbase_stop_auto_scroll(void* self) {
    QHeaderView_QBaseStopAutoScroll((QHeaderView*)self);
}

void q_headerview_on_stop_auto_scroll(void* self, void (*callback)()) {
    QHeaderView_OnStopAutoScroll((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_do_auto_scroll(void* self) {
    QHeaderView_DoAutoScroll((QHeaderView*)self);
}

void q_headerview_qbase_do_auto_scroll(void* self) {
    QHeaderView_QBaseDoAutoScroll((QHeaderView*)self);
}

void q_headerview_on_do_auto_scroll(void* self, void (*callback)()) {
    QHeaderView_OnDoAutoScroll((QHeaderView*)self, (intptr_t)callback);
}

int32_t q_headerview_drop_indicator_position(void* self) {
    return QHeaderView_DropIndicatorPosition((QHeaderView*)self);
}

int32_t q_headerview_qbase_drop_indicator_position(void* self) {
    return QHeaderView_QBaseDropIndicatorPosition((QHeaderView*)self);
}

void q_headerview_on_drop_indicator_position(void* self, int32_t (*callback)()) {
    QHeaderView_OnDropIndicatorPosition((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QHeaderView_SetViewportMargins((QHeaderView*)self, left, top, right, bottom);
}

void q_headerview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QHeaderView_QBaseSetViewportMargins((QHeaderView*)self, left, top, right, bottom);
}

void q_headerview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    QHeaderView_OnSetViewportMargins((QHeaderView*)self, (intptr_t)callback);
}

QMargins* q_headerview_viewport_margins(void* self) {
    return QHeaderView_ViewportMargins((QHeaderView*)self);
}

QMargins* q_headerview_qbase_viewport_margins(void* self) {
    return QHeaderView_QBaseViewportMargins((QHeaderView*)self);
}

void q_headerview_on_viewport_margins(void* self, QMargins* (*callback)()) {
    QHeaderView_OnViewportMargins((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_draw_frame(void* self, void* param1) {
    QHeaderView_DrawFrame((QHeaderView*)self, (QPainter*)param1);
}

void q_headerview_qbase_draw_frame(void* self, void* param1) {
    QHeaderView_QBaseDrawFrame((QHeaderView*)self, (QPainter*)param1);
}

void q_headerview_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    QHeaderView_OnDrawFrame((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_update_micro_focus(void* self) {
    QHeaderView_UpdateMicroFocus((QHeaderView*)self);
}

void q_headerview_qbase_update_micro_focus(void* self) {
    QHeaderView_QBaseUpdateMicroFocus((QHeaderView*)self);
}

void q_headerview_on_update_micro_focus(void* self, void (*callback)()) {
    QHeaderView_OnUpdateMicroFocus((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_create(void* self) {
    QHeaderView_Create((QHeaderView*)self);
}

void q_headerview_qbase_create(void* self) {
    QHeaderView_QBaseCreate((QHeaderView*)self);
}

void q_headerview_on_create(void* self, void (*callback)()) {
    QHeaderView_OnCreate((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_destroy(void* self) {
    QHeaderView_Destroy((QHeaderView*)self);
}

void q_headerview_qbase_destroy(void* self) {
    QHeaderView_QBaseDestroy((QHeaderView*)self);
}

void q_headerview_on_destroy(void* self, void (*callback)()) {
    QHeaderView_OnDestroy((QHeaderView*)self, (intptr_t)callback);
}

bool q_headerview_focus_next_child(void* self) {
    return QHeaderView_FocusNextChild((QHeaderView*)self);
}

bool q_headerview_qbase_focus_next_child(void* self) {
    return QHeaderView_QBaseFocusNextChild((QHeaderView*)self);
}

void q_headerview_on_focus_next_child(void* self, bool (*callback)()) {
    QHeaderView_OnFocusNextChild((QHeaderView*)self, (intptr_t)callback);
}

bool q_headerview_focus_previous_child(void* self) {
    return QHeaderView_FocusPreviousChild((QHeaderView*)self);
}

bool q_headerview_qbase_focus_previous_child(void* self) {
    return QHeaderView_QBaseFocusPreviousChild((QHeaderView*)self);
}

void q_headerview_on_focus_previous_child(void* self, bool (*callback)()) {
    QHeaderView_OnFocusPreviousChild((QHeaderView*)self, (intptr_t)callback);
}

QObject* q_headerview_sender(void* self) {
    return QHeaderView_Sender((QHeaderView*)self);
}

QObject* q_headerview_qbase_sender(void* self) {
    return QHeaderView_QBaseSender((QHeaderView*)self);
}

void q_headerview_on_sender(void* self, QObject* (*callback)()) {
    QHeaderView_OnSender((QHeaderView*)self, (intptr_t)callback);
}

int32_t q_headerview_sender_signal_index(void* self) {
    return QHeaderView_SenderSignalIndex((QHeaderView*)self);
}

int32_t q_headerview_qbase_sender_signal_index(void* self) {
    return QHeaderView_QBaseSenderSignalIndex((QHeaderView*)self);
}

void q_headerview_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QHeaderView_OnSenderSignalIndex((QHeaderView*)self, (intptr_t)callback);
}

int32_t q_headerview_receivers(void* self, const char* signal) {
    return QHeaderView_Receivers((QHeaderView*)self, signal);
}

int32_t q_headerview_qbase_receivers(void* self, const char* signal) {
    return QHeaderView_QBaseReceivers((QHeaderView*)self, signal);
}

void q_headerview_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QHeaderView_OnReceivers((QHeaderView*)self, (intptr_t)callback);
}

bool q_headerview_is_signal_connected(void* self, void* signal) {
    return QHeaderView_IsSignalConnected((QHeaderView*)self, (QMetaMethod*)signal);
}

bool q_headerview_qbase_is_signal_connected(void* self, void* signal) {
    return QHeaderView_QBaseIsSignalConnected((QHeaderView*)self, (QMetaMethod*)signal);
}

void q_headerview_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QHeaderView_OnIsSignalConnected((QHeaderView*)self, (intptr_t)callback);
}

double q_headerview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QHeaderView_GetDecodedMetricF((QHeaderView*)self, metricA, metricB);
}

double q_headerview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QHeaderView_QBaseGetDecodedMetricF((QHeaderView*)self, metricA, metricB);
}

void q_headerview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QHeaderView_OnGetDecodedMetricF((QHeaderView*)self, (intptr_t)callback);
}

void q_headerview_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_headerview_delete(void* self) {
    QHeaderView_Delete((QHeaderView*)(self));
}
