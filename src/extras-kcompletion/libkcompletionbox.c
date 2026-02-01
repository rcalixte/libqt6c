#include "../libqabstractitemdelegate.hpp"
#include "../libqabstractitemview.hpp"
#include "../libqabstractscrollarea.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqframe.hpp"
#include "../libqitemselectionmodel.hpp"
#include "../libqlistview.hpp"
#include "../libqlistwidget.hpp"
#include "../libqmargins.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqregion.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkcompletionbox.hpp"
#include "libkcompletionbox.h"

KCompletionBox* k_completionbox_new(void* parent) {
    return KCompletionBox_new((QWidget*)parent);
}

KCompletionBox* k_completionbox_new2() {
    return KCompletionBox_new2();
}

const QMetaObject* k_completionbox_meta_object(void* self) {
    return KCompletionBox_MetaObject((KCompletionBox*)self);
}

void k_completionbox_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KCompletionBox_OnMetaObject((KCompletionBox*)self, (intptr_t)callback);
}

const QMetaObject* k_completionbox_qbase_meta_object(void* self) {
    return KCompletionBox_QBaseMetaObject((KCompletionBox*)self);
}

void* k_completionbox_metacast(void* self, const char* param1) {
    return KCompletionBox_Metacast((KCompletionBox*)self, param1);
}

void k_completionbox_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KCompletionBox_OnMetacast((KCompletionBox*)self, (intptr_t)callback);
}

void* k_completionbox_qbase_metacast(void* self, const char* param1) {
    return KCompletionBox_QBaseMetacast((KCompletionBox*)self, param1);
}

int32_t k_completionbox_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCompletionBox_Metacall((KCompletionBox*)self, param1, param2, param3);
}

void k_completionbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCompletionBox_OnMetacall((KCompletionBox*)self, (intptr_t)callback);
}

int32_t k_completionbox_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCompletionBox_QBaseMetacall((KCompletionBox*)self, param1, param2, param3);
}

const char* k_completionbox_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* k_completionbox_size_hint(void* self) {
    return KCompletionBox_SizeHint((KCompletionBox*)self);
}

void k_completionbox_on_size_hint(void* self, QSize* (*callback)()) {
    KCompletionBox_OnSizeHint((KCompletionBox*)self, (intptr_t)callback);
}

QSize* k_completionbox_qbase_size_hint(void* self) {
    return KCompletionBox_QBaseSizeHint((KCompletionBox*)self);
}

bool k_completionbox_activate_on_select(void* self) {
    return KCompletionBox_ActivateOnSelect((KCompletionBox*)self);
}

const char** k_completionbox_items(void* self) {
    libqt_list _arr = KCompletionBox_Items((KCompletionBox*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completionbox_items\n");
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

bool k_completionbox_is_tab_handling(void* self) {
    return KCompletionBox_IsTabHandling((KCompletionBox*)self);
}

const char* k_completionbox_cancelled_text(void* self) {
    libqt_string _str = KCompletionBox_CancelledText((KCompletionBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completionbox_insert_items(void* self, const char* items[static 1]) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completionbox_insert_items\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KCompletionBox_InsertItems((KCompletionBox*)self, items_list);
    free(items_qstr);
}

void k_completionbox_set_items(void* self, const char* items[static 1]) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completionbox_set_items\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KCompletionBox_SetItems((KCompletionBox*)self, items_list);
    free(items_qstr);
}

void k_completionbox_popup(void* self) {
    KCompletionBox_Popup((KCompletionBox*)self);
}

void k_completionbox_on_popup(void* self, void (*callback)()) {
    KCompletionBox_OnPopup((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_qbase_popup(void* self) {
    KCompletionBox_QBasePopup((KCompletionBox*)self);
}

void k_completionbox_set_tab_handling(void* self, bool enable) {
    KCompletionBox_SetTabHandling((KCompletionBox*)self, enable);
}

void k_completionbox_set_cancelled_text(void* self, const char* text) {
    KCompletionBox_SetCancelledText((KCompletionBox*)self, qstring(text));
}

void k_completionbox_set_activate_on_select(void* self, bool doEmit) {
    KCompletionBox_SetActivateOnSelect((KCompletionBox*)self, doEmit);
}

void k_completionbox_down(void* self) {
    KCompletionBox_Down((KCompletionBox*)self);
}

void k_completionbox_up(void* self) {
    KCompletionBox_Up((KCompletionBox*)self);
}

void k_completionbox_page_down(void* self) {
    KCompletionBox_PageDown((KCompletionBox*)self);
}

void k_completionbox_page_up(void* self) {
    KCompletionBox_PageUp((KCompletionBox*)self);
}

void k_completionbox_home(void* self) {
    KCompletionBox_Home((KCompletionBox*)self);
}

void k_completionbox_end(void* self) {
    KCompletionBox_End((KCompletionBox*)self);
}

void k_completionbox_set_visible(void* self, bool visible) {
    KCompletionBox_SetVisible((KCompletionBox*)self, visible);
}

void k_completionbox_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KCompletionBox_OnSetVisible((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_qbase_set_visible(void* self, bool visible) {
    KCompletionBox_QBaseSetVisible((KCompletionBox*)self, visible);
}

void k_completionbox_text_activated(void* self, const char* text) {
    KCompletionBox_TextActivated((KCompletionBox*)self, qstring(text));
}

void k_completionbox_on_text_activated(void* self, void (*callback)(void*, const char*)) {
    KCompletionBox_Connect_TextActivated((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_user_cancelled(void* self, const char* param1) {
    KCompletionBox_UserCancelled((KCompletionBox*)self, qstring(param1));
}

void k_completionbox_on_user_cancelled(void* self, void (*callback)(void*, const char*)) {
    KCompletionBox_Connect_UserCancelled((KCompletionBox*)self, (intptr_t)callback);
}

QRect* k_completionbox_calculate_geometry(void* self) {
    return KCompletionBox_CalculateGeometry((KCompletionBox*)self);
}

void k_completionbox_on_calculate_geometry(void* self, QRect* (*callback)()) {
    KCompletionBox_OnCalculateGeometry((KCompletionBox*)self, (intptr_t)callback);
}

QRect* k_completionbox_qbase_calculate_geometry(void* self) {
    return KCompletionBox_QBaseCalculateGeometry((KCompletionBox*)self);
}

void k_completionbox_resize_and_reposition(void* self) {
    KCompletionBox_ResizeAndReposition((KCompletionBox*)self);
}

void k_completionbox_on_resize_and_reposition(void* self, void (*callback)()) {
    KCompletionBox_OnResizeAndReposition((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_qbase_resize_and_reposition(void* self) {
    KCompletionBox_QBaseResizeAndReposition((KCompletionBox*)self);
}

bool k_completionbox_event_filter(void* self, void* param1, void* param2) {
    return KCompletionBox_EventFilter((KCompletionBox*)self, (QObject*)param1, (QEvent*)param2);
}

void k_completionbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCompletionBox_OnEventFilter((KCompletionBox*)self, (intptr_t)callback);
}

bool k_completionbox_qbase_event_filter(void* self, void* param1, void* param2) {
    return KCompletionBox_QBaseEventFilter((KCompletionBox*)self, (QObject*)param1, (QEvent*)param2);
}

QPoint* k_completionbox_global_position_hint(void* self) {
    return KCompletionBox_GlobalPositionHint((KCompletionBox*)self);
}

void k_completionbox_on_global_position_hint(void* self, QPoint* (*callback)()) {
    KCompletionBox_OnGlobalPositionHint((KCompletionBox*)self, (intptr_t)callback);
}

QPoint* k_completionbox_qbase_global_position_hint(void* self) {
    return KCompletionBox_QBaseGlobalPositionHint((KCompletionBox*)self);
}

void k_completionbox_slot_activated(void* self, void* param1) {
    KCompletionBox_SlotActivated((KCompletionBox*)self, (QListWidgetItem*)param1);
}

void k_completionbox_on_slot_activated(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnSlotActivated((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_qbase_slot_activated(void* self, void* param1) {
    KCompletionBox_QBaseSlotActivated((KCompletionBox*)self, (QListWidgetItem*)param1);
}

const char* k_completionbox_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_completionbox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completionbox_insert_items2(void* self, const char* items[static 1], int index) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completionbox_insert_items2\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KCompletionBox_InsertItems2((KCompletionBox*)self, items_list, index);
    free(items_qstr);
}

QListWidgetItem* k_completionbox_item(void* self, int row) {
    return QListWidget_Item((QListWidget*)self, row);
}

int32_t k_completionbox_row(void* self, void* item) {
    return QListWidget_Row((QListWidget*)self, (QListWidgetItem*)item);
}

void k_completionbox_insert_item(void* self, int row, void* item) {
    QListWidget_InsertItem((QListWidget*)self, row, (QListWidgetItem*)item);
}

void k_completionbox_insert_item2(void* self, int row, const char* label) {
    QListWidget_InsertItem2((QListWidget*)self, row, qstring(label));
}

void k_completionbox_add_item(void* self, const char* label) {
    QListWidget_AddItem((QListWidget*)self, qstring(label));
}

void k_completionbox_add_item2(void* self, void* item) {
    QListWidget_AddItem2((QListWidget*)self, (QListWidgetItem*)item);
}

void k_completionbox_add_items(void* self, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completionbox_add_items\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i) {
        labels_qstr[i] = qstring(labels[i]);
    }
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QListWidget_AddItems((QListWidget*)self, labels_list);
    free(labels_qstr);
}

QListWidgetItem* k_completionbox_take_item(void* self, int row) {
    return QListWidget_TakeItem((QListWidget*)self, row);
}

int32_t k_completionbox_count(void* self) {
    return QListWidget_Count((QListWidget*)self);
}

QListWidgetItem* k_completionbox_current_item(void* self) {
    return QListWidget_CurrentItem((QListWidget*)self);
}

void k_completionbox_set_current_item(void* self, void* item) {
    QListWidget_SetCurrentItem((QListWidget*)self, (QListWidgetItem*)item);
}

void k_completionbox_set_current_item2(void* self, void* item, int32_t command) {
    QListWidget_SetCurrentItem2((QListWidget*)self, (QListWidgetItem*)item, command);
}

int32_t k_completionbox_current_row(void* self) {
    return QListWidget_CurrentRow((QListWidget*)self);
}

void k_completionbox_set_current_row(void* self, int row) {
    QListWidget_SetCurrentRow((QListWidget*)self, row);
}

void k_completionbox_set_current_row2(void* self, int row, int32_t command) {
    QListWidget_SetCurrentRow2((QListWidget*)self, row, command);
}

QListWidgetItem* k_completionbox_item_at(void* self, void* p) {
    return QListWidget_ItemAt((QListWidget*)self, (QPoint*)p);
}

QListWidgetItem* k_completionbox_item_at2(void* self, int x, int y) {
    return QListWidget_ItemAt2((QListWidget*)self, x, y);
}

QRect* k_completionbox_visual_item_rect(void* self, void* item) {
    return QListWidget_VisualItemRect((QListWidget*)self, (QListWidgetItem*)item);
}

void k_completionbox_sort_items(void* self) {
    QListWidget_SortItems((QListWidget*)self);
}

void k_completionbox_set_sorting_enabled(void* self, bool enable) {
    QListWidget_SetSortingEnabled((QListWidget*)self, enable);
}

bool k_completionbox_is_sorting_enabled(void* self) {
    return QListWidget_IsSortingEnabled((QListWidget*)self);
}

void k_completionbox_edit_item(void* self, void* item) {
    QListWidget_EditItem((QListWidget*)self, (QListWidgetItem*)item);
}

void k_completionbox_open_persistent_editor(void* self, void* item) {
    QListWidget_OpenPersistentEditor((QListWidget*)self, (QListWidgetItem*)item);
}

void k_completionbox_close_persistent_editor(void* self, void* item) {
    QListWidget_ClosePersistentEditor((QListWidget*)self, (QListWidgetItem*)item);
}

bool k_completionbox_is_persistent_editor_open(void* self, void* item) {
    return QListWidget_IsPersistentEditorOpen((QListWidget*)self, (QListWidgetItem*)item);
}

QWidget* k_completionbox_item_widget(void* self, void* item) {
    return QListWidget_ItemWidget((QListWidget*)self, (QListWidgetItem*)item);
}

void k_completionbox_set_item_widget(void* self, void* item, void* widget) {
    QListWidget_SetItemWidget((QListWidget*)self, (QListWidgetItem*)item, (QWidget*)widget);
}

void k_completionbox_remove_item_widget(void* self, void* item) {
    QListWidget_RemoveItemWidget((QListWidget*)self, (QListWidgetItem*)item);
}

libqt_list /* of QListWidgetItem* */ k_completionbox_selected_items(void* self) {
    libqt_list _arr = QListWidget_SelectedItems((QListWidget*)self);
    return _arr;
}

libqt_list /* of QListWidgetItem* */ k_completionbox_find_items(void* self, const char* text, int32_t flags) {
    libqt_list _arr = QListWidget_FindItems((QListWidget*)self, qstring(text), flags);
    return _arr;
}

QModelIndex* k_completionbox_index_from_item(void* self, void* item) {
    return QListWidget_IndexFromItem((QListWidget*)self, (QListWidgetItem*)item);
}

QListWidgetItem* k_completionbox_item_from_index(void* self, void* index) {
    return QListWidget_ItemFromIndex((QListWidget*)self, (QModelIndex*)index);
}

void k_completionbox_scroll_to_item(void* self, void* item) {
    QListWidget_ScrollToItem((QListWidget*)self, (QListWidgetItem*)item);
}

void k_completionbox_clear(void* self) {
    QListWidget_Clear((QListWidget*)self);
}

void k_completionbox_item_pressed(void* self, void* item) {
    QListWidget_ItemPressed((QListWidget*)self, (QListWidgetItem*)item);
}

void k_completionbox_on_item_pressed(void* self, void (*callback)(void*, void*)) {
    QListWidget_Connect_ItemPressed((QListWidget*)self, (intptr_t)callback);
}

void k_completionbox_item_clicked(void* self, void* item) {
    QListWidget_ItemClicked((QListWidget*)self, (QListWidgetItem*)item);
}

void k_completionbox_on_item_clicked(void* self, void (*callback)(void*, void*)) {
    QListWidget_Connect_ItemClicked((QListWidget*)self, (intptr_t)callback);
}

void k_completionbox_item_double_clicked(void* self, void* item) {
    QListWidget_ItemDoubleClicked((QListWidget*)self, (QListWidgetItem*)item);
}

void k_completionbox_on_item_double_clicked(void* self, void (*callback)(void*, void*)) {
    QListWidget_Connect_ItemDoubleClicked((QListWidget*)self, (intptr_t)callback);
}

void k_completionbox_item_activated(void* self, void* item) {
    QListWidget_ItemActivated((QListWidget*)self, (QListWidgetItem*)item);
}

void k_completionbox_on_item_activated(void* self, void (*callback)(void*, void*)) {
    QListWidget_Connect_ItemActivated((QListWidget*)self, (intptr_t)callback);
}

void k_completionbox_item_entered(void* self, void* item) {
    QListWidget_ItemEntered((QListWidget*)self, (QListWidgetItem*)item);
}

void k_completionbox_on_item_entered(void* self, void (*callback)(void*, void*)) {
    QListWidget_Connect_ItemEntered((QListWidget*)self, (intptr_t)callback);
}

void k_completionbox_item_changed(void* self, void* item) {
    QListWidget_ItemChanged((QListWidget*)self, (QListWidgetItem*)item);
}

void k_completionbox_on_item_changed(void* self, void (*callback)(void*, void*)) {
    QListWidget_Connect_ItemChanged((QListWidget*)self, (intptr_t)callback);
}

void k_completionbox_current_item_changed(void* self, void* current, void* previous) {
    QListWidget_CurrentItemChanged((QListWidget*)self, (QListWidgetItem*)current, (QListWidgetItem*)previous);
}

void k_completionbox_on_current_item_changed(void* self, void (*callback)(void*, void*, void*)) {
    QListWidget_Connect_CurrentItemChanged((QListWidget*)self, (intptr_t)callback);
}

void k_completionbox_current_text_changed(void* self, const char* currentText) {
    QListWidget_CurrentTextChanged((QListWidget*)self, qstring(currentText));
}

void k_completionbox_on_current_text_changed(void* self, void (*callback)(void*, const char*)) {
    QListWidget_Connect_CurrentTextChanged((QListWidget*)self, (intptr_t)callback);
}

void k_completionbox_current_row_changed(void* self, int currentRow) {
    QListWidget_CurrentRowChanged((QListWidget*)self, currentRow);
}

void k_completionbox_on_current_row_changed(void* self, void (*callback)(void*, int)) {
    QListWidget_Connect_CurrentRowChanged((QListWidget*)self, (intptr_t)callback);
}

void k_completionbox_item_selection_changed(void* self) {
    QListWidget_ItemSelectionChanged((QListWidget*)self);
}

void k_completionbox_on_item_selection_changed(void* self, void (*callback)(void*)) {
    QListWidget_Connect_ItemSelectionChanged((QListWidget*)self, (intptr_t)callback);
}

void k_completionbox_sort_items1(void* self, int32_t order) {
    QListWidget_SortItems1((QListWidget*)self, order);
}

void k_completionbox_scroll_to_item2(void* self, void* item, int32_t hint) {
    QListWidget_ScrollToItem2((QListWidget*)self, (QListWidgetItem*)item, hint);
}

void k_completionbox_set_movement(void* self, int32_t movement) {
    QListView_SetMovement((QListView*)self, movement);
}

int32_t k_completionbox_movement(void* self) {
    return QListView_Movement((QListView*)self);
}

void k_completionbox_set_flow(void* self, int32_t flow) {
    QListView_SetFlow((QListView*)self, flow);
}

int32_t k_completionbox_flow(void* self) {
    return QListView_Flow((QListView*)self);
}

void k_completionbox_set_wrapping(void* self, bool enable) {
    QListView_SetWrapping((QListView*)self, enable);
}

bool k_completionbox_is_wrapping(void* self) {
    return QListView_IsWrapping((QListView*)self);
}

void k_completionbox_set_resize_mode(void* self, int32_t mode) {
    QListView_SetResizeMode((QListView*)self, mode);
}

int32_t k_completionbox_resize_mode(void* self) {
    return QListView_ResizeMode((QListView*)self);
}

void k_completionbox_set_layout_mode(void* self, int32_t mode) {
    QListView_SetLayoutMode((QListView*)self, mode);
}

int32_t k_completionbox_layout_mode(void* self) {
    return QListView_LayoutMode((QListView*)self);
}

void k_completionbox_set_spacing(void* self, int space) {
    QListView_SetSpacing((QListView*)self, space);
}

int32_t k_completionbox_spacing(void* self) {
    return QListView_Spacing((QListView*)self);
}

void k_completionbox_set_batch_size(void* self, int batchSize) {
    QListView_SetBatchSize((QListView*)self, batchSize);
}

int32_t k_completionbox_batch_size(void* self) {
    return QListView_BatchSize((QListView*)self);
}

void k_completionbox_set_grid_size(void* self, void* size) {
    QListView_SetGridSize((QListView*)self, (QSize*)size);
}

QSize* k_completionbox_grid_size(void* self) {
    return QListView_GridSize((QListView*)self);
}

void k_completionbox_set_view_mode(void* self, int32_t mode) {
    QListView_SetViewMode((QListView*)self, mode);
}

int32_t k_completionbox_view_mode(void* self) {
    return QListView_ViewMode((QListView*)self);
}

void k_completionbox_clear_property_flags(void* self) {
    QListView_ClearPropertyFlags((QListView*)self);
}

bool k_completionbox_is_row_hidden(void* self, int row) {
    return QListView_IsRowHidden((QListView*)self, row);
}

void k_completionbox_set_row_hidden(void* self, int row, bool hide) {
    QListView_SetRowHidden((QListView*)self, row, hide);
}

void k_completionbox_set_model_column(void* self, int column) {
    QListView_SetModelColumn((QListView*)self, column);
}

int32_t k_completionbox_model_column(void* self) {
    return QListView_ModelColumn((QListView*)self);
}

void k_completionbox_set_uniform_item_sizes(void* self, bool enable) {
    QListView_SetUniformItemSizes((QListView*)self, enable);
}

bool k_completionbox_uniform_item_sizes(void* self) {
    return QListView_UniformItemSizes((QListView*)self);
}

void k_completionbox_set_word_wrap(void* self, bool on) {
    QListView_SetWordWrap((QListView*)self, on);
}

bool k_completionbox_word_wrap(void* self) {
    return QListView_WordWrap((QListView*)self);
}

void k_completionbox_set_selection_rect_visible(void* self, bool show) {
    QListView_SetSelectionRectVisible((QListView*)self, show);
}

bool k_completionbox_is_selection_rect_visible(void* self) {
    return QListView_IsSelectionRectVisible((QListView*)self);
}

void k_completionbox_set_item_alignment(void* self, int32_t alignment) {
    QListView_SetItemAlignment((QListView*)self, alignment);
}

int32_t k_completionbox_item_alignment(void* self) {
    return QListView_ItemAlignment((QListView*)self);
}

void k_completionbox_indexes_moved(void* self, libqt_list /* of QModelIndex* */ indexes) {
    QListView_IndexesMoved((QListView*)self, indexes);
}

void k_completionbox_on_indexes_moved(void* self, void (*callback)(void*, QModelIndex**)) {
    QListView_Connect_IndexesMoved((QListView*)self, (intptr_t)callback);
}

void k_completionbox_set_model(void* self, void* model) {
    QAbstractItemView_SetModel((QAbstractItemView*)self, (QAbstractItemModel*)model);
}

void k_completionbox_on_set_model(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_OnSetModel((QAbstractItemView*)self, (intptr_t)callback);
}

void k_completionbox_qbase_set_model(void* self, void* model) {
    QAbstractItemView_QBaseSetModel((QAbstractItemView*)self, (QAbstractItemModel*)model);
}

QAbstractItemModel* k_completionbox_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

QItemSelectionModel* k_completionbox_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

void k_completionbox_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* k_completionbox_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

void k_completionbox_set_selection_mode(void* self, int32_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

int32_t k_completionbox_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

void k_completionbox_set_selection_behavior(void* self, int32_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

int32_t k_completionbox_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

QModelIndex* k_completionbox_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

QModelIndex* k_completionbox_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

void k_completionbox_set_edit_triggers(void* self, int32_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

int32_t k_completionbox_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

void k_completionbox_set_vertical_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

int32_t k_completionbox_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

void k_completionbox_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

void k_completionbox_set_horizontal_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

int32_t k_completionbox_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

void k_completionbox_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

void k_completionbox_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

bool k_completionbox_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

void k_completionbox_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

int32_t k_completionbox_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

void k_completionbox_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

bool k_completionbox_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

void k_completionbox_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

bool k_completionbox_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

void k_completionbox_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

bool k_completionbox_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

void k_completionbox_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

bool k_completionbox_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

void k_completionbox_set_drag_drop_mode(void* self, int32_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

int32_t k_completionbox_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

void k_completionbox_set_default_drop_action(void* self, int32_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

int32_t k_completionbox_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

void k_completionbox_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

bool k_completionbox_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

void k_completionbox_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

QSize* k_completionbox_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

void k_completionbox_set_text_elide_mode(void* self, int32_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

int32_t k_completionbox_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

QSize* k_completionbox_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_completionbox_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

QWidget* k_completionbox_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_completionbox_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* k_completionbox_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

void k_completionbox_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* k_completionbox_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

QAbstractItemDelegate* k_completionbox_item_delegate2(void* self, void* index) {
    return QAbstractItemView_ItemDelegate2((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_completionbox_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_completionbox_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

void k_completionbox_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_completionbox_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

void k_completionbox_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

void k_completionbox_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_completionbox_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_completionbox_on_pressed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)callback);
}

void k_completionbox_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_completionbox_on_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)callback);
}

void k_completionbox_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_completionbox_on_double_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)callback);
}

void k_completionbox_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_completionbox_on_activated(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)callback);
}

void k_completionbox_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_completionbox_on_entered(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)callback);
}

void k_completionbox_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

void k_completionbox_on_viewport_entered(void* self, void (*callback)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)callback);
}

void k_completionbox_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

void k_completionbox_on_icon_size_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)callback);
}

int32_t k_completionbox_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_completionbox_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* k_completionbox_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void k_completionbox_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t k_completionbox_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_completionbox_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* k_completionbox_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void k_completionbox_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* k_completionbox_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void k_completionbox_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void k_completionbox_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ k_completionbox_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* k_completionbox_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void k_completionbox_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* k_completionbox_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t k_completionbox_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void k_completionbox_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t k_completionbox_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_completionbox_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_completionbox_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_completionbox_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_completionbox_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_completionbox_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_completionbox_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_completionbox_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_completionbox_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_completionbox_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_completionbox_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_completionbox_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_completionbox_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_completionbox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_completionbox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_completionbox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_completionbox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_completionbox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_completionbox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_completionbox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_completionbox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_completionbox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_completionbox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_completionbox_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_completionbox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_completionbox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_completionbox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_completionbox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_completionbox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_completionbox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_completionbox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_completionbox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_completionbox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_completionbox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_completionbox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_completionbox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_completionbox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_completionbox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_completionbox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_completionbox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_completionbox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_completionbox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_completionbox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_completionbox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_completionbox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_completionbox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_completionbox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_completionbox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_completionbox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_completionbox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_completionbox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_completionbox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_completionbox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_completionbox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_completionbox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_completionbox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_completionbox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_completionbox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_completionbox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_completionbox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_completionbox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_completionbox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_completionbox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_completionbox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_completionbox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_completionbox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_completionbox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_completionbox_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_completionbox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_completionbox_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_completionbox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_completionbox_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_completionbox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_completionbox_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_completionbox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_completionbox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_completionbox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_completionbox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_completionbox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_completionbox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_completionbox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_completionbox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_completionbox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_completionbox_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_completionbox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_completionbox_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_completionbox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_completionbox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_completionbox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_completionbox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_completionbox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_completionbox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_completionbox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_completionbox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_completionbox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_completionbox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_completionbox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_completionbox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_completionbox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_completionbox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_completionbox_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_completionbox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_completionbox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_completionbox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_completionbox_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_completionbox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_completionbox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_completionbox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_completionbox_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_completionbox_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_completionbox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_completionbox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_completionbox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_completionbox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completionbox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_completionbox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_completionbox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_completionbox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completionbox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_completionbox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completionbox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_completionbox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completionbox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_completionbox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_completionbox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_completionbox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_completionbox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completionbox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_completionbox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_completionbox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_completionbox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completionbox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_completionbox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_completionbox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completionbox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_completionbox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completionbox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_completionbox_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_completionbox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_completionbox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_completionbox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_completionbox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_completionbox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_completionbox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_completionbox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_completionbox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_completionbox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_completionbox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_completionbox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_completionbox_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_completionbox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_completionbox_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_completionbox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_completionbox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_completionbox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_completionbox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_completionbox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_completionbox_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_completionbox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_completionbox_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_completionbox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_completionbox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_completionbox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_completionbox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_completionbox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_completionbox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_completionbox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_completionbox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_completionbox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_completionbox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_completionbox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_completionbox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_completionbox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_completionbox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_completionbox_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_completionbox_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_completionbox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_completionbox_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_completionbox_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_completionbox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_completionbox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_completionbox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_completionbox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_completionbox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_completionbox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_completionbox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_completionbox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_completionbox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_completionbox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_completionbox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_completionbox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_completionbox_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_completionbox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_completionbox_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_completionbox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_completionbox_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_completionbox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_completionbox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_completionbox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_completionbox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_completionbox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_completionbox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_completionbox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_completionbox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_completionbox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_completionbox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_completionbox_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_completionbox_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_completionbox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_completionbox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_completionbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_completionbox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_completionbox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_completionbox_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_completionbox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_completionbox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_completionbox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_completionbox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_completionbox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_completionbox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_completionbox_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_completionbox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_completionbox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_completionbox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_completionbox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_completionbox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_completionbox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_completionbox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_completionbox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_completionbox_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_completionbox_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_completionbox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_completionbox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_completionbox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_completionbox_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_completionbox_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_completionbox_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_completionbox_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_completionbox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_completionbox_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_completionbox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_completionbox_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_completionbox_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_completionbox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_completionbox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_completionbox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_completionbox_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_completionbox_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_completionbox_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_completionbox_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_completionbox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_completionbox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_completionbox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_completionbox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_completionbox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_completionbox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_completionbox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_completionbox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_completionbox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_completionbox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_completionbox_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_completionbox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_completionbox_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_completionbox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_completionbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_completionbox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_completionbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_completionbox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_completionbox_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_completionbox_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_completionbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_completionbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_completionbox_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_completionbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_completionbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_completionbox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_completionbox_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_completionbox_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_completionbox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_completionbox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_completionbox_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_completionbox_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_completionbox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_completionbox_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_completionbox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completionbox_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_completionbox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_completionbox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_completionbox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_completionbox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_completionbox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_completionbox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_completionbox_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_completionbox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_completionbox_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_completionbox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_completionbox_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_completionbox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_completionbox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_completionbox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_completionbox_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_completionbox_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_completionbox_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_completionbox_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_completionbox_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_completionbox_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_completionbox_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_completionbox_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_completionbox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_completionbox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_completionbox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_completionbox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_completionbox_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completionbox_dynamic_property_names\n");
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

QBindingStorage* k_completionbox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_completionbox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_completionbox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_completionbox_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_completionbox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_completionbox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_completionbox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_completionbox_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_completionbox_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_completionbox_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_completionbox_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_completionbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_completionbox_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_completionbox_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_completionbox_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_completionbox_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_completionbox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_completionbox_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_completionbox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_completionbox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_completionbox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_completionbox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_completionbox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_completionbox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_completionbox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_completionbox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_completionbox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_completionbox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_completionbox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_completionbox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_completionbox_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_completionbox_set_selection_model(void* self, void* selectionModel) {
    KCompletionBox_SetSelectionModel((KCompletionBox*)self, (QItemSelectionModel*)selectionModel);
}

void k_completionbox_qbase_set_selection_model(void* self, void* selectionModel) {
    KCompletionBox_QBaseSetSelectionModel((KCompletionBox*)self, (QItemSelectionModel*)selectionModel);
}

void k_completionbox_on_set_selection_model(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnSetSelectionModel((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_drop_event(void* self, void* event) {
    KCompletionBox_DropEvent((KCompletionBox*)self, (QDropEvent*)event);
}

void k_completionbox_qbase_drop_event(void* self, void* event) {
    KCompletionBox_QBaseDropEvent((KCompletionBox*)self, (QDropEvent*)event);
}

void k_completionbox_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnDropEvent((KCompletionBox*)self, (intptr_t)callback);
}

bool k_completionbox_event(void* self, void* e) {
    return KCompletionBox_Event((KCompletionBox*)self, (QEvent*)e);
}

bool k_completionbox_qbase_event(void* self, void* e) {
    return KCompletionBox_QBaseEvent((KCompletionBox*)self, (QEvent*)e);
}

void k_completionbox_on_event(void* self, bool (*callback)(void*, void*)) {
    KCompletionBox_OnEvent((KCompletionBox*)self, (intptr_t)callback);
}

const char** k_completionbox_mime_types(void* self) {
    libqt_list _arr = KCompletionBox_MimeTypes((KCompletionBox*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completionbox_mime_types\n");
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

const char** k_completionbox_qbase_mime_types(void* self) {
    libqt_list _arr = KCompletionBox_QBaseMimeTypes((KCompletionBox*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completionbox_mime_types\n");
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

void k_completionbox_on_mime_types(void* self, const char** (*callback)()) {
    KCompletionBox_OnMimeTypes((KCompletionBox*)self, (intptr_t)callback);
}

QMimeData* k_completionbox_mime_data(void* self, libqt_list /* of QListWidgetItem* */ items) {
    return KCompletionBox_MimeData((KCompletionBox*)self, items);
}

QMimeData* k_completionbox_qbase_mime_data(void* self, libqt_list /* of QListWidgetItem* */ items) {
    return KCompletionBox_QBaseMimeData((KCompletionBox*)self, items);
}

void k_completionbox_on_mime_data(void* self, QMimeData* (*callback)(void*, QListWidgetItem**)) {
    KCompletionBox_OnMimeData((KCompletionBox*)self, (intptr_t)callback);
}

bool k_completionbox_drop_mime_data(void* self, int index, void* data, int32_t action) {
    return KCompletionBox_DropMimeData((KCompletionBox*)self, index, (QMimeData*)data, action);
}

bool k_completionbox_qbase_drop_mime_data(void* self, int index, void* data, int32_t action) {
    return KCompletionBox_QBaseDropMimeData((KCompletionBox*)self, index, (QMimeData*)data, action);
}

void k_completionbox_on_drop_mime_data(void* self, bool (*callback)(void*, int, void*, int32_t)) {
    KCompletionBox_OnDropMimeData((KCompletionBox*)self, (intptr_t)callback);
}

int32_t k_completionbox_supported_drop_actions(void* self) {
    return KCompletionBox_SupportedDropActions((KCompletionBox*)self);
}

int32_t k_completionbox_qbase_supported_drop_actions(void* self) {
    return KCompletionBox_QBaseSupportedDropActions((KCompletionBox*)self);
}

void k_completionbox_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KCompletionBox_OnSupportedDropActions((KCompletionBox*)self, (intptr_t)callback);
}

QRect* k_completionbox_visual_rect(void* self, void* index) {
    return KCompletionBox_VisualRect((KCompletionBox*)self, (QModelIndex*)index);
}

QRect* k_completionbox_qbase_visual_rect(void* self, void* index) {
    return KCompletionBox_QBaseVisualRect((KCompletionBox*)self, (QModelIndex*)index);
}

void k_completionbox_on_visual_rect(void* self, QRect* (*callback)(void*, void*)) {
    KCompletionBox_OnVisualRect((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_scroll_to(void* self, void* index, int32_t hint) {
    KCompletionBox_ScrollTo((KCompletionBox*)self, (QModelIndex*)index, hint);
}

void k_completionbox_qbase_scroll_to(void* self, void* index, int32_t hint) {
    KCompletionBox_QBaseScrollTo((KCompletionBox*)self, (QModelIndex*)index, hint);
}

void k_completionbox_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t)) {
    KCompletionBox_OnScrollTo((KCompletionBox*)self, (intptr_t)callback);
}

QModelIndex* k_completionbox_index_at(void* self, void* p) {
    return KCompletionBox_IndexAt((KCompletionBox*)self, (QPoint*)p);
}

QModelIndex* k_completionbox_qbase_index_at(void* self, void* p) {
    return KCompletionBox_QBaseIndexAt((KCompletionBox*)self, (QPoint*)p);
}

void k_completionbox_on_index_at(void* self, QModelIndex* (*callback)(void*, void*)) {
    KCompletionBox_OnIndexAt((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_do_items_layout(void* self) {
    KCompletionBox_DoItemsLayout((KCompletionBox*)self);
}

void k_completionbox_qbase_do_items_layout(void* self) {
    KCompletionBox_QBaseDoItemsLayout((KCompletionBox*)self);
}

void k_completionbox_on_do_items_layout(void* self, void (*callback)()) {
    KCompletionBox_OnDoItemsLayout((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_reset(void* self) {
    KCompletionBox_Reset((KCompletionBox*)self);
}

void k_completionbox_qbase_reset(void* self) {
    KCompletionBox_QBaseReset((KCompletionBox*)self);
}

void k_completionbox_on_reset(void* self, void (*callback)()) {
    KCompletionBox_OnReset((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_set_root_index(void* self, void* index) {
    KCompletionBox_SetRootIndex((KCompletionBox*)self, (QModelIndex*)index);
}

void k_completionbox_qbase_set_root_index(void* self, void* index) {
    KCompletionBox_QBaseSetRootIndex((KCompletionBox*)self, (QModelIndex*)index);
}

void k_completionbox_on_set_root_index(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnSetRootIndex((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_scroll_contents_by(void* self, int dx, int dy) {
    KCompletionBox_ScrollContentsBy((KCompletionBox*)self, dx, dy);
}

void k_completionbox_qbase_scroll_contents_by(void* self, int dx, int dy) {
    KCompletionBox_QBaseScrollContentsBy((KCompletionBox*)self, dx, dy);
}

void k_completionbox_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    KCompletionBox_OnScrollContentsBy((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    KCompletionBox_DataChanged((KCompletionBox*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_completionbox_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    KCompletionBox_QBaseDataChanged((KCompletionBox*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_completionbox_on_data_changed(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    KCompletionBox_OnDataChanged((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_rows_inserted(void* self, void* parent, int start, int end) {
    KCompletionBox_RowsInserted((KCompletionBox*)self, (QModelIndex*)parent, start, end);
}

void k_completionbox_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    KCompletionBox_QBaseRowsInserted((KCompletionBox*)self, (QModelIndex*)parent, start, end);
}

void k_completionbox_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    KCompletionBox_OnRowsInserted((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    KCompletionBox_RowsAboutToBeRemoved((KCompletionBox*)self, (QModelIndex*)parent, start, end);
}

void k_completionbox_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    KCompletionBox_QBaseRowsAboutToBeRemoved((KCompletionBox*)self, (QModelIndex*)parent, start, end);
}

void k_completionbox_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    KCompletionBox_OnRowsAboutToBeRemoved((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_mouse_move_event(void* self, void* e) {
    KCompletionBox_MouseMoveEvent((KCompletionBox*)self, (QMouseEvent*)e);
}

void k_completionbox_qbase_mouse_move_event(void* self, void* e) {
    KCompletionBox_QBaseMouseMoveEvent((KCompletionBox*)self, (QMouseEvent*)e);
}

void k_completionbox_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnMouseMoveEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_mouse_release_event(void* self, void* e) {
    KCompletionBox_MouseReleaseEvent((KCompletionBox*)self, (QMouseEvent*)e);
}

void k_completionbox_qbase_mouse_release_event(void* self, void* e) {
    KCompletionBox_QBaseMouseReleaseEvent((KCompletionBox*)self, (QMouseEvent*)e);
}

void k_completionbox_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnMouseReleaseEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_wheel_event(void* self, void* e) {
    KCompletionBox_WheelEvent((KCompletionBox*)self, (QWheelEvent*)e);
}

void k_completionbox_qbase_wheel_event(void* self, void* e) {
    KCompletionBox_QBaseWheelEvent((KCompletionBox*)self, (QWheelEvent*)e);
}

void k_completionbox_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnWheelEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_timer_event(void* self, void* e) {
    KCompletionBox_TimerEvent((KCompletionBox*)self, (QTimerEvent*)e);
}

void k_completionbox_qbase_timer_event(void* self, void* e) {
    KCompletionBox_QBaseTimerEvent((KCompletionBox*)self, (QTimerEvent*)e);
}

void k_completionbox_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnTimerEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_resize_event(void* self, void* e) {
    KCompletionBox_ResizeEvent((KCompletionBox*)self, (QResizeEvent*)e);
}

void k_completionbox_qbase_resize_event(void* self, void* e) {
    KCompletionBox_QBaseResizeEvent((KCompletionBox*)self, (QResizeEvent*)e);
}

void k_completionbox_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnResizeEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_drag_move_event(void* self, void* e) {
    KCompletionBox_DragMoveEvent((KCompletionBox*)self, (QDragMoveEvent*)e);
}

void k_completionbox_qbase_drag_move_event(void* self, void* e) {
    KCompletionBox_QBaseDragMoveEvent((KCompletionBox*)self, (QDragMoveEvent*)e);
}

void k_completionbox_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnDragMoveEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_drag_leave_event(void* self, void* e) {
    KCompletionBox_DragLeaveEvent((KCompletionBox*)self, (QDragLeaveEvent*)e);
}

void k_completionbox_qbase_drag_leave_event(void* self, void* e) {
    KCompletionBox_QBaseDragLeaveEvent((KCompletionBox*)self, (QDragLeaveEvent*)e);
}

void k_completionbox_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnDragLeaveEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_start_drag(void* self, int32_t supportedActions) {
    KCompletionBox_StartDrag((KCompletionBox*)self, supportedActions);
}

void k_completionbox_qbase_start_drag(void* self, int32_t supportedActions) {
    KCompletionBox_QBaseStartDrag((KCompletionBox*)self, supportedActions);
}

void k_completionbox_on_start_drag(void* self, void (*callback)(void*, int32_t)) {
    KCompletionBox_OnStartDrag((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_init_view_item_option(void* self, void* option) {
    KCompletionBox_InitViewItemOption((KCompletionBox*)self, (QStyleOptionViewItem*)option);
}

void k_completionbox_qbase_init_view_item_option(void* self, void* option) {
    KCompletionBox_QBaseInitViewItemOption((KCompletionBox*)self, (QStyleOptionViewItem*)option);
}

void k_completionbox_on_init_view_item_option(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnInitViewItemOption((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_paint_event(void* self, void* e) {
    KCompletionBox_PaintEvent((KCompletionBox*)self, (QPaintEvent*)e);
}

void k_completionbox_qbase_paint_event(void* self, void* e) {
    KCompletionBox_QBasePaintEvent((KCompletionBox*)self, (QPaintEvent*)e);
}

void k_completionbox_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnPaintEvent((KCompletionBox*)self, (intptr_t)callback);
}

int32_t k_completionbox_horizontal_offset(void* self) {
    return KCompletionBox_HorizontalOffset((KCompletionBox*)self);
}

int32_t k_completionbox_qbase_horizontal_offset(void* self) {
    return KCompletionBox_QBaseHorizontalOffset((KCompletionBox*)self);
}

void k_completionbox_on_horizontal_offset(void* self, int32_t (*callback)()) {
    KCompletionBox_OnHorizontalOffset((KCompletionBox*)self, (intptr_t)callback);
}

int32_t k_completionbox_vertical_offset(void* self) {
    return KCompletionBox_VerticalOffset((KCompletionBox*)self);
}

int32_t k_completionbox_qbase_vertical_offset(void* self) {
    return KCompletionBox_QBaseVerticalOffset((KCompletionBox*)self);
}

void k_completionbox_on_vertical_offset(void* self, int32_t (*callback)()) {
    KCompletionBox_OnVerticalOffset((KCompletionBox*)self, (intptr_t)callback);
}

QModelIndex* k_completionbox_move_cursor(void* self, int32_t cursorAction, int32_t modifiers) {
    return KCompletionBox_MoveCursor((KCompletionBox*)self, cursorAction, modifiers);
}

QModelIndex* k_completionbox_qbase_move_cursor(void* self, int32_t cursorAction, int32_t modifiers) {
    return KCompletionBox_QBaseMoveCursor((KCompletionBox*)self, cursorAction, modifiers);
}

void k_completionbox_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int32_t)) {
    KCompletionBox_OnMoveCursor((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_set_selection(void* self, void* rect, int32_t command) {
    KCompletionBox_SetSelection((KCompletionBox*)self, (QRect*)rect, command);
}

void k_completionbox_qbase_set_selection(void* self, void* rect, int32_t command) {
    KCompletionBox_QBaseSetSelection((KCompletionBox*)self, (QRect*)rect, command);
}

void k_completionbox_on_set_selection(void* self, void (*callback)(void*, void*, int32_t)) {
    KCompletionBox_OnSetSelection((KCompletionBox*)self, (intptr_t)callback);
}

QRegion* k_completionbox_visual_region_for_selection(void* self, void* selection) {
    return KCompletionBox_VisualRegionForSelection((KCompletionBox*)self, (QItemSelection*)selection);
}

QRegion* k_completionbox_qbase_visual_region_for_selection(void* self, void* selection) {
    return KCompletionBox_QBaseVisualRegionForSelection((KCompletionBox*)self, (QItemSelection*)selection);
}

void k_completionbox_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*)) {
    KCompletionBox_OnVisualRegionForSelection((KCompletionBox*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_completionbox_selected_indexes(void* self) {
    libqt_list _arr = KCompletionBox_SelectedIndexes((KCompletionBox*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_completionbox_qbase_selected_indexes(void* self) {
    libqt_list _arr = KCompletionBox_QBaseSelectedIndexes((KCompletionBox*)self);
    return _arr;
}

void k_completionbox_on_selected_indexes(void* self, QModelIndex** (*callback)()) {
    KCompletionBox_OnSelectedIndexes((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_update_geometries(void* self) {
    KCompletionBox_UpdateGeometries((KCompletionBox*)self);
}

void k_completionbox_qbase_update_geometries(void* self) {
    KCompletionBox_QBaseUpdateGeometries((KCompletionBox*)self);
}

void k_completionbox_on_update_geometries(void* self, void (*callback)()) {
    KCompletionBox_OnUpdateGeometries((KCompletionBox*)self, (intptr_t)callback);
}

bool k_completionbox_is_index_hidden(void* self, void* index) {
    return KCompletionBox_IsIndexHidden((KCompletionBox*)self, (QModelIndex*)index);
}

bool k_completionbox_qbase_is_index_hidden(void* self, void* index) {
    return KCompletionBox_QBaseIsIndexHidden((KCompletionBox*)self, (QModelIndex*)index);
}

void k_completionbox_on_is_index_hidden(void* self, bool (*callback)(void*, void*)) {
    KCompletionBox_OnIsIndexHidden((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_selection_changed(void* self, void* selected, void* deselected) {
    KCompletionBox_SelectionChanged((KCompletionBox*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void k_completionbox_qbase_selection_changed(void* self, void* selected, void* deselected) {
    KCompletionBox_QBaseSelectionChanged((KCompletionBox*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void k_completionbox_on_selection_changed(void* self, void (*callback)(void*, void*, void*)) {
    KCompletionBox_OnSelectionChanged((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_current_changed(void* self, void* current, void* previous) {
    KCompletionBox_CurrentChanged((KCompletionBox*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_completionbox_qbase_current_changed(void* self, void* current, void* previous) {
    KCompletionBox_QBaseCurrentChanged((KCompletionBox*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_completionbox_on_current_changed(void* self, void (*callback)(void*, void*, void*)) {
    KCompletionBox_OnCurrentChanged((KCompletionBox*)self, (intptr_t)callback);
}

QSize* k_completionbox_viewport_size_hint(void* self) {
    return KCompletionBox_ViewportSizeHint((KCompletionBox*)self);
}

QSize* k_completionbox_qbase_viewport_size_hint(void* self) {
    return KCompletionBox_QBaseViewportSizeHint((KCompletionBox*)self);
}

void k_completionbox_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    KCompletionBox_OnViewportSizeHint((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_keyboard_search(void* self, const char* search) {
    KCompletionBox_KeyboardSearch((KCompletionBox*)self, qstring(search));
}

void k_completionbox_qbase_keyboard_search(void* self, const char* search) {
    KCompletionBox_QBaseKeyboardSearch((KCompletionBox*)self, qstring(search));
}

void k_completionbox_on_keyboard_search(void* self, void (*callback)(void*, const char*)) {
    KCompletionBox_OnKeyboardSearch((KCompletionBox*)self, (intptr_t)callback);
}

int32_t k_completionbox_size_hint_for_row(void* self, int row) {
    return KCompletionBox_SizeHintForRow((KCompletionBox*)self, row);
}

int32_t k_completionbox_qbase_size_hint_for_row(void* self, int row) {
    return KCompletionBox_QBaseSizeHintForRow((KCompletionBox*)self, row);
}

void k_completionbox_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int)) {
    KCompletionBox_OnSizeHintForRow((KCompletionBox*)self, (intptr_t)callback);
}

int32_t k_completionbox_size_hint_for_column(void* self, int column) {
    return KCompletionBox_SizeHintForColumn((KCompletionBox*)self, column);
}

int32_t k_completionbox_qbase_size_hint_for_column(void* self, int column) {
    return KCompletionBox_QBaseSizeHintForColumn((KCompletionBox*)self, column);
}

void k_completionbox_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int)) {
    KCompletionBox_OnSizeHintForColumn((KCompletionBox*)self, (intptr_t)callback);
}

QAbstractItemDelegate* k_completionbox_item_delegate_for_index(void* self, void* index) {
    return KCompletionBox_ItemDelegateForIndex((KCompletionBox*)self, (QModelIndex*)index);
}

QAbstractItemDelegate* k_completionbox_qbase_item_delegate_for_index(void* self, void* index) {
    return KCompletionBox_QBaseItemDelegateForIndex((KCompletionBox*)self, (QModelIndex*)index);
}

void k_completionbox_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*)) {
    KCompletionBox_OnItemDelegateForIndex((KCompletionBox*)self, (intptr_t)callback);
}

QVariant* k_completionbox_input_method_query(void* self, int32_t query) {
    return KCompletionBox_InputMethodQuery((KCompletionBox*)self, query);
}

QVariant* k_completionbox_qbase_input_method_query(void* self, int32_t query) {
    return KCompletionBox_QBaseInputMethodQuery((KCompletionBox*)self, query);
}

void k_completionbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KCompletionBox_OnInputMethodQuery((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_select_all(void* self) {
    KCompletionBox_SelectAll((KCompletionBox*)self);
}

void k_completionbox_qbase_select_all(void* self) {
    KCompletionBox_QBaseSelectAll((KCompletionBox*)self);
}

void k_completionbox_on_select_all(void* self, void (*callback)()) {
    KCompletionBox_OnSelectAll((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_update_editor_data(void* self) {
    KCompletionBox_UpdateEditorData((KCompletionBox*)self);
}

void k_completionbox_qbase_update_editor_data(void* self) {
    KCompletionBox_QBaseUpdateEditorData((KCompletionBox*)self);
}

void k_completionbox_on_update_editor_data(void* self, void (*callback)()) {
    KCompletionBox_OnUpdateEditorData((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_update_editor_geometries(void* self) {
    KCompletionBox_UpdateEditorGeometries((KCompletionBox*)self);
}

void k_completionbox_qbase_update_editor_geometries(void* self) {
    KCompletionBox_QBaseUpdateEditorGeometries((KCompletionBox*)self);
}

void k_completionbox_on_update_editor_geometries(void* self, void (*callback)()) {
    KCompletionBox_OnUpdateEditorGeometries((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_vertical_scrollbar_action(void* self, int action) {
    KCompletionBox_VerticalScrollbarAction((KCompletionBox*)self, action);
}

void k_completionbox_qbase_vertical_scrollbar_action(void* self, int action) {
    KCompletionBox_QBaseVerticalScrollbarAction((KCompletionBox*)self, action);
}

void k_completionbox_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int)) {
    KCompletionBox_OnVerticalScrollbarAction((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_horizontal_scrollbar_action(void* self, int action) {
    KCompletionBox_HorizontalScrollbarAction((KCompletionBox*)self, action);
}

void k_completionbox_qbase_horizontal_scrollbar_action(void* self, int action) {
    KCompletionBox_QBaseHorizontalScrollbarAction((KCompletionBox*)self, action);
}

void k_completionbox_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int)) {
    KCompletionBox_OnHorizontalScrollbarAction((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_vertical_scrollbar_value_changed(void* self, int value) {
    KCompletionBox_VerticalScrollbarValueChanged((KCompletionBox*)self, value);
}

void k_completionbox_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    KCompletionBox_QBaseVerticalScrollbarValueChanged((KCompletionBox*)self, value);
}

void k_completionbox_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    KCompletionBox_OnVerticalScrollbarValueChanged((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_horizontal_scrollbar_value_changed(void* self, int value) {
    KCompletionBox_HorizontalScrollbarValueChanged((KCompletionBox*)self, value);
}

void k_completionbox_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    KCompletionBox_QBaseHorizontalScrollbarValueChanged((KCompletionBox*)self, value);
}

void k_completionbox_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    KCompletionBox_OnHorizontalScrollbarValueChanged((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_close_editor(void* self, void* editor, int32_t hint) {
    KCompletionBox_CloseEditor((KCompletionBox*)self, (QWidget*)editor, hint);
}

void k_completionbox_qbase_close_editor(void* self, void* editor, int32_t hint) {
    KCompletionBox_QBaseCloseEditor((KCompletionBox*)self, (QWidget*)editor, hint);
}

void k_completionbox_on_close_editor(void* self, void (*callback)(void*, void*, int32_t)) {
    KCompletionBox_OnCloseEditor((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_commit_data(void* self, void* editor) {
    KCompletionBox_CommitData((KCompletionBox*)self, (QWidget*)editor);
}

void k_completionbox_qbase_commit_data(void* self, void* editor) {
    KCompletionBox_QBaseCommitData((KCompletionBox*)self, (QWidget*)editor);
}

void k_completionbox_on_commit_data(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnCommitData((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_editor_destroyed(void* self, void* editor) {
    KCompletionBox_EditorDestroyed((KCompletionBox*)self, (QObject*)editor);
}

void k_completionbox_qbase_editor_destroyed(void* self, void* editor) {
    KCompletionBox_QBaseEditorDestroyed((KCompletionBox*)self, (QObject*)editor);
}

void k_completionbox_on_editor_destroyed(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnEditorDestroyed((KCompletionBox*)self, (intptr_t)callback);
}

bool k_completionbox_edit2(void* self, void* index, int32_t trigger, void* event) {
    return KCompletionBox_Edit2((KCompletionBox*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

bool k_completionbox_qbase_edit2(void* self, void* index, int32_t trigger, void* event) {
    return KCompletionBox_QBaseEdit2((KCompletionBox*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

void k_completionbox_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*)) {
    KCompletionBox_OnEdit2((KCompletionBox*)self, (intptr_t)callback);
}

int32_t k_completionbox_selection_command(void* self, void* index, void* event) {
    return KCompletionBox_SelectionCommand((KCompletionBox*)self, (QModelIndex*)index, (QEvent*)event);
}

int32_t k_completionbox_qbase_selection_command(void* self, void* index, void* event) {
    return KCompletionBox_QBaseSelectionCommand((KCompletionBox*)self, (QModelIndex*)index, (QEvent*)event);
}

void k_completionbox_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*)) {
    KCompletionBox_OnSelectionCommand((KCompletionBox*)self, (intptr_t)callback);
}

bool k_completionbox_focus_next_prev_child(void* self, bool next) {
    return KCompletionBox_FocusNextPrevChild((KCompletionBox*)self, next);
}

bool k_completionbox_qbase_focus_next_prev_child(void* self, bool next) {
    return KCompletionBox_QBaseFocusNextPrevChild((KCompletionBox*)self, next);
}

void k_completionbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KCompletionBox_OnFocusNextPrevChild((KCompletionBox*)self, (intptr_t)callback);
}

bool k_completionbox_viewport_event(void* self, void* event) {
    return KCompletionBox_ViewportEvent((KCompletionBox*)self, (QEvent*)event);
}

bool k_completionbox_qbase_viewport_event(void* self, void* event) {
    return KCompletionBox_QBaseViewportEvent((KCompletionBox*)self, (QEvent*)event);
}

void k_completionbox_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    KCompletionBox_OnViewportEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_mouse_press_event(void* self, void* event) {
    KCompletionBox_MousePressEvent((KCompletionBox*)self, (QMouseEvent*)event);
}

void k_completionbox_qbase_mouse_press_event(void* self, void* event) {
    KCompletionBox_QBaseMousePressEvent((KCompletionBox*)self, (QMouseEvent*)event);
}

void k_completionbox_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnMousePressEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_mouse_double_click_event(void* self, void* event) {
    KCompletionBox_MouseDoubleClickEvent((KCompletionBox*)self, (QMouseEvent*)event);
}

void k_completionbox_qbase_mouse_double_click_event(void* self, void* event) {
    KCompletionBox_QBaseMouseDoubleClickEvent((KCompletionBox*)self, (QMouseEvent*)event);
}

void k_completionbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnMouseDoubleClickEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_drag_enter_event(void* self, void* event) {
    KCompletionBox_DragEnterEvent((KCompletionBox*)self, (QDragEnterEvent*)event);
}

void k_completionbox_qbase_drag_enter_event(void* self, void* event) {
    KCompletionBox_QBaseDragEnterEvent((KCompletionBox*)self, (QDragEnterEvent*)event);
}

void k_completionbox_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnDragEnterEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_focus_in_event(void* self, void* event) {
    KCompletionBox_FocusInEvent((KCompletionBox*)self, (QFocusEvent*)event);
}

void k_completionbox_qbase_focus_in_event(void* self, void* event) {
    KCompletionBox_QBaseFocusInEvent((KCompletionBox*)self, (QFocusEvent*)event);
}

void k_completionbox_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnFocusInEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_focus_out_event(void* self, void* event) {
    KCompletionBox_FocusOutEvent((KCompletionBox*)self, (QFocusEvent*)event);
}

void k_completionbox_qbase_focus_out_event(void* self, void* event) {
    KCompletionBox_QBaseFocusOutEvent((KCompletionBox*)self, (QFocusEvent*)event);
}

void k_completionbox_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnFocusOutEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_key_press_event(void* self, void* event) {
    KCompletionBox_KeyPressEvent((KCompletionBox*)self, (QKeyEvent*)event);
}

void k_completionbox_qbase_key_press_event(void* self, void* event) {
    KCompletionBox_QBaseKeyPressEvent((KCompletionBox*)self, (QKeyEvent*)event);
}

void k_completionbox_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnKeyPressEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_input_method_event(void* self, void* event) {
    KCompletionBox_InputMethodEvent((KCompletionBox*)self, (QInputMethodEvent*)event);
}

void k_completionbox_qbase_input_method_event(void* self, void* event) {
    KCompletionBox_QBaseInputMethodEvent((KCompletionBox*)self, (QInputMethodEvent*)event);
}

void k_completionbox_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnInputMethodEvent((KCompletionBox*)self, (intptr_t)callback);
}

QSize* k_completionbox_minimum_size_hint(void* self) {
    return KCompletionBox_MinimumSizeHint((KCompletionBox*)self);
}

QSize* k_completionbox_qbase_minimum_size_hint(void* self) {
    return KCompletionBox_QBaseMinimumSizeHint((KCompletionBox*)self);
}

void k_completionbox_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KCompletionBox_OnMinimumSizeHint((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_setup_viewport(void* self, void* viewport) {
    KCompletionBox_SetupViewport((KCompletionBox*)self, (QWidget*)viewport);
}

void k_completionbox_qbase_setup_viewport(void* self, void* viewport) {
    KCompletionBox_QBaseSetupViewport((KCompletionBox*)self, (QWidget*)viewport);
}

void k_completionbox_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnSetupViewport((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_context_menu_event(void* self, void* param1) {
    KCompletionBox_ContextMenuEvent((KCompletionBox*)self, (QContextMenuEvent*)param1);
}

void k_completionbox_qbase_context_menu_event(void* self, void* param1) {
    KCompletionBox_QBaseContextMenuEvent((KCompletionBox*)self, (QContextMenuEvent*)param1);
}

void k_completionbox_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnContextMenuEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_change_event(void* self, void* param1) {
    KCompletionBox_ChangeEvent((KCompletionBox*)self, (QEvent*)param1);
}

void k_completionbox_qbase_change_event(void* self, void* param1) {
    KCompletionBox_QBaseChangeEvent((KCompletionBox*)self, (QEvent*)param1);
}

void k_completionbox_on_change_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnChangeEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_init_style_option(void* self, void* option) {
    KCompletionBox_InitStyleOption((KCompletionBox*)self, (QStyleOptionFrame*)option);
}

void k_completionbox_qbase_init_style_option(void* self, void* option) {
    KCompletionBox_QBaseInitStyleOption((KCompletionBox*)self, (QStyleOptionFrame*)option);
}

void k_completionbox_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnInitStyleOption((KCompletionBox*)self, (intptr_t)callback);
}

int32_t k_completionbox_dev_type(void* self) {
    return KCompletionBox_DevType((KCompletionBox*)self);
}

int32_t k_completionbox_qbase_dev_type(void* self) {
    return KCompletionBox_QBaseDevType((KCompletionBox*)self);
}

void k_completionbox_on_dev_type(void* self, int32_t (*callback)()) {
    KCompletionBox_OnDevType((KCompletionBox*)self, (intptr_t)callback);
}

int32_t k_completionbox_height_for_width(void* self, int param1) {
    return KCompletionBox_HeightForWidth((KCompletionBox*)self, param1);
}

int32_t k_completionbox_qbase_height_for_width(void* self, int param1) {
    return KCompletionBox_QBaseHeightForWidth((KCompletionBox*)self, param1);
}

void k_completionbox_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KCompletionBox_OnHeightForWidth((KCompletionBox*)self, (intptr_t)callback);
}

bool k_completionbox_has_height_for_width(void* self) {
    return KCompletionBox_HasHeightForWidth((KCompletionBox*)self);
}

bool k_completionbox_qbase_has_height_for_width(void* self) {
    return KCompletionBox_QBaseHasHeightForWidth((KCompletionBox*)self);
}

void k_completionbox_on_has_height_for_width(void* self, bool (*callback)()) {
    KCompletionBox_OnHasHeightForWidth((KCompletionBox*)self, (intptr_t)callback);
}

QPaintEngine* k_completionbox_paint_engine(void* self) {
    return KCompletionBox_PaintEngine((KCompletionBox*)self);
}

QPaintEngine* k_completionbox_qbase_paint_engine(void* self) {
    return KCompletionBox_QBasePaintEngine((KCompletionBox*)self);
}

void k_completionbox_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KCompletionBox_OnPaintEngine((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_key_release_event(void* self, void* event) {
    KCompletionBox_KeyReleaseEvent((KCompletionBox*)self, (QKeyEvent*)event);
}

void k_completionbox_qbase_key_release_event(void* self, void* event) {
    KCompletionBox_QBaseKeyReleaseEvent((KCompletionBox*)self, (QKeyEvent*)event);
}

void k_completionbox_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnKeyReleaseEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_enter_event(void* self, void* event) {
    KCompletionBox_EnterEvent((KCompletionBox*)self, (QEnterEvent*)event);
}

void k_completionbox_qbase_enter_event(void* self, void* event) {
    KCompletionBox_QBaseEnterEvent((KCompletionBox*)self, (QEnterEvent*)event);
}

void k_completionbox_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnEnterEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_leave_event(void* self, void* event) {
    KCompletionBox_LeaveEvent((KCompletionBox*)self, (QEvent*)event);
}

void k_completionbox_qbase_leave_event(void* self, void* event) {
    KCompletionBox_QBaseLeaveEvent((KCompletionBox*)self, (QEvent*)event);
}

void k_completionbox_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnLeaveEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_move_event(void* self, void* event) {
    KCompletionBox_MoveEvent((KCompletionBox*)self, (QMoveEvent*)event);
}

void k_completionbox_qbase_move_event(void* self, void* event) {
    KCompletionBox_QBaseMoveEvent((KCompletionBox*)self, (QMoveEvent*)event);
}

void k_completionbox_on_move_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnMoveEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_close_event(void* self, void* event) {
    KCompletionBox_CloseEvent((KCompletionBox*)self, (QCloseEvent*)event);
}

void k_completionbox_qbase_close_event(void* self, void* event) {
    KCompletionBox_QBaseCloseEvent((KCompletionBox*)self, (QCloseEvent*)event);
}

void k_completionbox_on_close_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnCloseEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_tablet_event(void* self, void* event) {
    KCompletionBox_TabletEvent((KCompletionBox*)self, (QTabletEvent*)event);
}

void k_completionbox_qbase_tablet_event(void* self, void* event) {
    KCompletionBox_QBaseTabletEvent((KCompletionBox*)self, (QTabletEvent*)event);
}

void k_completionbox_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnTabletEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_action_event(void* self, void* event) {
    KCompletionBox_ActionEvent((KCompletionBox*)self, (QActionEvent*)event);
}

void k_completionbox_qbase_action_event(void* self, void* event) {
    KCompletionBox_QBaseActionEvent((KCompletionBox*)self, (QActionEvent*)event);
}

void k_completionbox_on_action_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnActionEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_show_event(void* self, void* event) {
    KCompletionBox_ShowEvent((KCompletionBox*)self, (QShowEvent*)event);
}

void k_completionbox_qbase_show_event(void* self, void* event) {
    KCompletionBox_QBaseShowEvent((KCompletionBox*)self, (QShowEvent*)event);
}

void k_completionbox_on_show_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnShowEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_hide_event(void* self, void* event) {
    KCompletionBox_HideEvent((KCompletionBox*)self, (QHideEvent*)event);
}

void k_completionbox_qbase_hide_event(void* self, void* event) {
    KCompletionBox_QBaseHideEvent((KCompletionBox*)self, (QHideEvent*)event);
}

void k_completionbox_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnHideEvent((KCompletionBox*)self, (intptr_t)callback);
}

bool k_completionbox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KCompletionBox_NativeEvent((KCompletionBox*)self, qstring(eventType), message, result);
}

bool k_completionbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KCompletionBox_QBaseNativeEvent((KCompletionBox*)self, qstring(eventType), message, result);
}

void k_completionbox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KCompletionBox_OnNativeEvent((KCompletionBox*)self, (intptr_t)callback);
}

int32_t k_completionbox_metric(void* self, int32_t param1) {
    return KCompletionBox_Metric((KCompletionBox*)self, param1);
}

int32_t k_completionbox_qbase_metric(void* self, int32_t param1) {
    return KCompletionBox_QBaseMetric((KCompletionBox*)self, param1);
}

void k_completionbox_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KCompletionBox_OnMetric((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_init_painter(void* self, void* painter) {
    KCompletionBox_InitPainter((KCompletionBox*)self, (QPainter*)painter);
}

void k_completionbox_qbase_init_painter(void* self, void* painter) {
    KCompletionBox_QBaseInitPainter((KCompletionBox*)self, (QPainter*)painter);
}

void k_completionbox_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnInitPainter((KCompletionBox*)self, (intptr_t)callback);
}

QPaintDevice* k_completionbox_redirected(void* self, void* offset) {
    return KCompletionBox_Redirected((KCompletionBox*)self, (QPoint*)offset);
}

QPaintDevice* k_completionbox_qbase_redirected(void* self, void* offset) {
    return KCompletionBox_QBaseRedirected((KCompletionBox*)self, (QPoint*)offset);
}

void k_completionbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KCompletionBox_OnRedirected((KCompletionBox*)self, (intptr_t)callback);
}

QPainter* k_completionbox_shared_painter(void* self) {
    return KCompletionBox_SharedPainter((KCompletionBox*)self);
}

QPainter* k_completionbox_qbase_shared_painter(void* self) {
    return KCompletionBox_QBaseSharedPainter((KCompletionBox*)self);
}

void k_completionbox_on_shared_painter(void* self, QPainter* (*callback)()) {
    KCompletionBox_OnSharedPainter((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_child_event(void* self, void* event) {
    KCompletionBox_ChildEvent((KCompletionBox*)self, (QChildEvent*)event);
}

void k_completionbox_qbase_child_event(void* self, void* event) {
    KCompletionBox_QBaseChildEvent((KCompletionBox*)self, (QChildEvent*)event);
}

void k_completionbox_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnChildEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_custom_event(void* self, void* event) {
    KCompletionBox_CustomEvent((KCompletionBox*)self, (QEvent*)event);
}

void k_completionbox_qbase_custom_event(void* self, void* event) {
    KCompletionBox_QBaseCustomEvent((KCompletionBox*)self, (QEvent*)event);
}

void k_completionbox_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnCustomEvent((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_connect_notify(void* self, void* signal) {
    KCompletionBox_ConnectNotify((KCompletionBox*)self, (QMetaMethod*)signal);
}

void k_completionbox_qbase_connect_notify(void* self, void* signal) {
    KCompletionBox_QBaseConnectNotify((KCompletionBox*)self, (QMetaMethod*)signal);
}

void k_completionbox_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnConnectNotify((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_disconnect_notify(void* self, void* signal) {
    KCompletionBox_DisconnectNotify((KCompletionBox*)self, (QMetaMethod*)signal);
}

void k_completionbox_qbase_disconnect_notify(void* self, void* signal) {
    KCompletionBox_QBaseDisconnectNotify((KCompletionBox*)self, (QMetaMethod*)signal);
}

void k_completionbox_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnDisconnectNotify((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_resize_contents(void* self, int width, int height) {
    KCompletionBox_ResizeContents((KCompletionBox*)self, width, height);
}

void k_completionbox_qbase_resize_contents(void* self, int width, int height) {
    KCompletionBox_QBaseResizeContents((KCompletionBox*)self, width, height);
}

void k_completionbox_on_resize_contents(void* self, void (*callback)(void*, int, int)) {
    KCompletionBox_OnResizeContents((KCompletionBox*)self, (intptr_t)callback);
}

QSize* k_completionbox_contents_size(void* self) {
    return KCompletionBox_ContentsSize((KCompletionBox*)self);
}

QSize* k_completionbox_qbase_contents_size(void* self) {
    return KCompletionBox_QBaseContentsSize((KCompletionBox*)self);
}

void k_completionbox_on_contents_size(void* self, QSize* (*callback)()) {
    KCompletionBox_OnContentsSize((KCompletionBox*)self, (intptr_t)callback);
}

QRect* k_completionbox_rect_for_index(void* self, void* index) {
    return KCompletionBox_RectForIndex((KCompletionBox*)self, (QModelIndex*)index);
}

QRect* k_completionbox_qbase_rect_for_index(void* self, void* index) {
    return KCompletionBox_QBaseRectForIndex((KCompletionBox*)self, (QModelIndex*)index);
}

void k_completionbox_on_rect_for_index(void* self, QRect* (*callback)(void*, void*)) {
    KCompletionBox_OnRectForIndex((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_set_position_for_index(void* self, void* position, void* index) {
    KCompletionBox_SetPositionForIndex((KCompletionBox*)self, (QPoint*)position, (QModelIndex*)index);
}

void k_completionbox_qbase_set_position_for_index(void* self, void* position, void* index) {
    KCompletionBox_QBaseSetPositionForIndex((KCompletionBox*)self, (QPoint*)position, (QModelIndex*)index);
}

void k_completionbox_on_set_position_for_index(void* self, void (*callback)(void*, void*, void*)) {
    KCompletionBox_OnSetPositionForIndex((KCompletionBox*)self, (intptr_t)callback);
}

int32_t k_completionbox_state(void* self) {
    return KCompletionBox_State((KCompletionBox*)self);
}

int32_t k_completionbox_qbase_state(void* self) {
    return KCompletionBox_QBaseState((KCompletionBox*)self);
}

void k_completionbox_on_state(void* self, int32_t (*callback)()) {
    KCompletionBox_OnState((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_set_state(void* self, int32_t state) {
    KCompletionBox_SetState((KCompletionBox*)self, state);
}

void k_completionbox_qbase_set_state(void* self, int32_t state) {
    KCompletionBox_QBaseSetState((KCompletionBox*)self, state);
}

void k_completionbox_on_set_state(void* self, void (*callback)(void*, int32_t)) {
    KCompletionBox_OnSetState((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_schedule_delayed_items_layout(void* self) {
    KCompletionBox_ScheduleDelayedItemsLayout((KCompletionBox*)self);
}

void k_completionbox_qbase_schedule_delayed_items_layout(void* self) {
    KCompletionBox_QBaseScheduleDelayedItemsLayout((KCompletionBox*)self);
}

void k_completionbox_on_schedule_delayed_items_layout(void* self, void (*callback)()) {
    KCompletionBox_OnScheduleDelayedItemsLayout((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_execute_delayed_items_layout(void* self) {
    KCompletionBox_ExecuteDelayedItemsLayout((KCompletionBox*)self);
}

void k_completionbox_qbase_execute_delayed_items_layout(void* self) {
    KCompletionBox_QBaseExecuteDelayedItemsLayout((KCompletionBox*)self);
}

void k_completionbox_on_execute_delayed_items_layout(void* self, void (*callback)()) {
    KCompletionBox_OnExecuteDelayedItemsLayout((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_set_dirty_region(void* self, void* region) {
    KCompletionBox_SetDirtyRegion((KCompletionBox*)self, (QRegion*)region);
}

void k_completionbox_qbase_set_dirty_region(void* self, void* region) {
    KCompletionBox_QBaseSetDirtyRegion((KCompletionBox*)self, (QRegion*)region);
}

void k_completionbox_on_set_dirty_region(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnSetDirtyRegion((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_scroll_dirty_region(void* self, int dx, int dy) {
    KCompletionBox_ScrollDirtyRegion((KCompletionBox*)self, dx, dy);
}

void k_completionbox_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    KCompletionBox_QBaseScrollDirtyRegion((KCompletionBox*)self, dx, dy);
}

void k_completionbox_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int)) {
    KCompletionBox_OnScrollDirtyRegion((KCompletionBox*)self, (intptr_t)callback);
}

QPoint* k_completionbox_dirty_region_offset(void* self) {
    return KCompletionBox_DirtyRegionOffset((KCompletionBox*)self);
}

QPoint* k_completionbox_qbase_dirty_region_offset(void* self) {
    return KCompletionBox_QBaseDirtyRegionOffset((KCompletionBox*)self);
}

void k_completionbox_on_dirty_region_offset(void* self, QPoint* (*callback)()) {
    KCompletionBox_OnDirtyRegionOffset((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_start_auto_scroll(void* self) {
    KCompletionBox_StartAutoScroll((KCompletionBox*)self);
}

void k_completionbox_qbase_start_auto_scroll(void* self) {
    KCompletionBox_QBaseStartAutoScroll((KCompletionBox*)self);
}

void k_completionbox_on_start_auto_scroll(void* self, void (*callback)()) {
    KCompletionBox_OnStartAutoScroll((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_stop_auto_scroll(void* self) {
    KCompletionBox_StopAutoScroll((KCompletionBox*)self);
}

void k_completionbox_qbase_stop_auto_scroll(void* self) {
    KCompletionBox_QBaseStopAutoScroll((KCompletionBox*)self);
}

void k_completionbox_on_stop_auto_scroll(void* self, void (*callback)()) {
    KCompletionBox_OnStopAutoScroll((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_do_auto_scroll(void* self) {
    KCompletionBox_DoAutoScroll((KCompletionBox*)self);
}

void k_completionbox_qbase_do_auto_scroll(void* self) {
    KCompletionBox_QBaseDoAutoScroll((KCompletionBox*)self);
}

void k_completionbox_on_do_auto_scroll(void* self, void (*callback)()) {
    KCompletionBox_OnDoAutoScroll((KCompletionBox*)self, (intptr_t)callback);
}

int32_t k_completionbox_drop_indicator_position(void* self) {
    return KCompletionBox_DropIndicatorPosition((KCompletionBox*)self);
}

int32_t k_completionbox_qbase_drop_indicator_position(void* self) {
    return KCompletionBox_QBaseDropIndicatorPosition((KCompletionBox*)self);
}

void k_completionbox_on_drop_indicator_position(void* self, int32_t (*callback)()) {
    KCompletionBox_OnDropIndicatorPosition((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    KCompletionBox_SetViewportMargins((KCompletionBox*)self, left, top, right, bottom);
}

void k_completionbox_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    KCompletionBox_QBaseSetViewportMargins((KCompletionBox*)self, left, top, right, bottom);
}

void k_completionbox_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    KCompletionBox_OnSetViewportMargins((KCompletionBox*)self, (intptr_t)callback);
}

QMargins* k_completionbox_viewport_margins(void* self) {
    return KCompletionBox_ViewportMargins((KCompletionBox*)self);
}

QMargins* k_completionbox_qbase_viewport_margins(void* self) {
    return KCompletionBox_QBaseViewportMargins((KCompletionBox*)self);
}

void k_completionbox_on_viewport_margins(void* self, QMargins* (*callback)()) {
    KCompletionBox_OnViewportMargins((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_draw_frame(void* self, void* param1) {
    KCompletionBox_DrawFrame((KCompletionBox*)self, (QPainter*)param1);
}

void k_completionbox_qbase_draw_frame(void* self, void* param1) {
    KCompletionBox_QBaseDrawFrame((KCompletionBox*)self, (QPainter*)param1);
}

void k_completionbox_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    KCompletionBox_OnDrawFrame((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_update_micro_focus(void* self) {
    KCompletionBox_UpdateMicroFocus((KCompletionBox*)self);
}

void k_completionbox_qbase_update_micro_focus(void* self) {
    KCompletionBox_QBaseUpdateMicroFocus((KCompletionBox*)self);
}

void k_completionbox_on_update_micro_focus(void* self, void (*callback)()) {
    KCompletionBox_OnUpdateMicroFocus((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_create(void* self) {
    KCompletionBox_Create((KCompletionBox*)self);
}

void k_completionbox_qbase_create(void* self) {
    KCompletionBox_QBaseCreate((KCompletionBox*)self);
}

void k_completionbox_on_create(void* self, void (*callback)()) {
    KCompletionBox_OnCreate((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_destroy(void* self) {
    KCompletionBox_Destroy((KCompletionBox*)self);
}

void k_completionbox_qbase_destroy(void* self) {
    KCompletionBox_QBaseDestroy((KCompletionBox*)self);
}

void k_completionbox_on_destroy(void* self, void (*callback)()) {
    KCompletionBox_OnDestroy((KCompletionBox*)self, (intptr_t)callback);
}

bool k_completionbox_focus_next_child(void* self) {
    return KCompletionBox_FocusNextChild((KCompletionBox*)self);
}

bool k_completionbox_qbase_focus_next_child(void* self) {
    return KCompletionBox_QBaseFocusNextChild((KCompletionBox*)self);
}

void k_completionbox_on_focus_next_child(void* self, bool (*callback)()) {
    KCompletionBox_OnFocusNextChild((KCompletionBox*)self, (intptr_t)callback);
}

bool k_completionbox_focus_previous_child(void* self) {
    return KCompletionBox_FocusPreviousChild((KCompletionBox*)self);
}

bool k_completionbox_qbase_focus_previous_child(void* self) {
    return KCompletionBox_QBaseFocusPreviousChild((KCompletionBox*)self);
}

void k_completionbox_on_focus_previous_child(void* self, bool (*callback)()) {
    KCompletionBox_OnFocusPreviousChild((KCompletionBox*)self, (intptr_t)callback);
}

QObject* k_completionbox_sender(void* self) {
    return KCompletionBox_Sender((KCompletionBox*)self);
}

QObject* k_completionbox_qbase_sender(void* self) {
    return KCompletionBox_QBaseSender((KCompletionBox*)self);
}

void k_completionbox_on_sender(void* self, QObject* (*callback)()) {
    KCompletionBox_OnSender((KCompletionBox*)self, (intptr_t)callback);
}

int32_t k_completionbox_sender_signal_index(void* self) {
    return KCompletionBox_SenderSignalIndex((KCompletionBox*)self);
}

int32_t k_completionbox_qbase_sender_signal_index(void* self) {
    return KCompletionBox_QBaseSenderSignalIndex((KCompletionBox*)self);
}

void k_completionbox_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KCompletionBox_OnSenderSignalIndex((KCompletionBox*)self, (intptr_t)callback);
}

int32_t k_completionbox_receivers(void* self, const char* signal) {
    return KCompletionBox_Receivers((KCompletionBox*)self, signal);
}

int32_t k_completionbox_qbase_receivers(void* self, const char* signal) {
    return KCompletionBox_QBaseReceivers((KCompletionBox*)self, signal);
}

void k_completionbox_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KCompletionBox_OnReceivers((KCompletionBox*)self, (intptr_t)callback);
}

bool k_completionbox_is_signal_connected(void* self, void* signal) {
    return KCompletionBox_IsSignalConnected((KCompletionBox*)self, (QMetaMethod*)signal);
}

bool k_completionbox_qbase_is_signal_connected(void* self, void* signal) {
    return KCompletionBox_QBaseIsSignalConnected((KCompletionBox*)self, (QMetaMethod*)signal);
}

void k_completionbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KCompletionBox_OnIsSignalConnected((KCompletionBox*)self, (intptr_t)callback);
}

double k_completionbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KCompletionBox_GetDecodedMetricF((KCompletionBox*)self, metricA, metricB);
}

double k_completionbox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KCompletionBox_QBaseGetDecodedMetricF((KCompletionBox*)self, metricA, metricB);
}

void k_completionbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KCompletionBox_OnGetDecodedMetricF((KCompletionBox*)self, (intptr_t)callback);
}

void k_completionbox_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_completionbox_delete(void* self) {
    KCompletionBox_Delete((KCompletionBox*)(self));
}
