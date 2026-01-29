#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemview.hpp"
#include "libqabstractscrollarea.hpp"
#include "libqevent.hpp"
#include "libqbrush.hpp"
#include "libqcoreevent.hpp"
#include "libqdatastream.hpp"
#include "libqfont.hpp"
#include "libqframe.hpp"
#include "libqicon.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqmimedata.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqtableview.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqtablewidget.hpp"
#include "libqtablewidget.h"

QTableWidgetSelectionRange* q_tablewidgetselectionrange_new(void* other) {
    return QTableWidgetSelectionRange_new((QTableWidgetSelectionRange*)other);
}

QTableWidgetSelectionRange* q_tablewidgetselectionrange_new2(void* other) {
    return QTableWidgetSelectionRange_new2((QTableWidgetSelectionRange*)other);
}

QTableWidgetSelectionRange* q_tablewidgetselectionrange_new3() {
    return QTableWidgetSelectionRange_new3();
}

QTableWidgetSelectionRange* q_tablewidgetselectionrange_new4(int top, int left, int bottom, int right) {
    return QTableWidgetSelectionRange_new4(top, left, bottom, right);
}

void q_tablewidgetselectionrange_copy_assign(void* self, void* other) {
    QTableWidgetSelectionRange_CopyAssign((QTableWidgetSelectionRange*)self, (QTableWidgetSelectionRange*)other);
}

void q_tablewidgetselectionrange_move_assign(void* self, void* other) {
    QTableWidgetSelectionRange_MoveAssign((QTableWidgetSelectionRange*)self, (QTableWidgetSelectionRange*)other);
}

int32_t q_tablewidgetselectionrange_top_row(void* self) {
    return QTableWidgetSelectionRange_TopRow((QTableWidgetSelectionRange*)self);
}

int32_t q_tablewidgetselectionrange_bottom_row(void* self) {
    return QTableWidgetSelectionRange_BottomRow((QTableWidgetSelectionRange*)self);
}

int32_t q_tablewidgetselectionrange_left_column(void* self) {
    return QTableWidgetSelectionRange_LeftColumn((QTableWidgetSelectionRange*)self);
}

int32_t q_tablewidgetselectionrange_right_column(void* self) {
    return QTableWidgetSelectionRange_RightColumn((QTableWidgetSelectionRange*)self);
}

int32_t q_tablewidgetselectionrange_row_count(void* self) {
    return QTableWidgetSelectionRange_RowCount((QTableWidgetSelectionRange*)self);
}

int32_t q_tablewidgetselectionrange_column_count(void* self) {
    return QTableWidgetSelectionRange_ColumnCount((QTableWidgetSelectionRange*)self);
}

void q_tablewidgetselectionrange_delete(void* self) {
    QTableWidgetSelectionRange_Delete((QTableWidgetSelectionRange*)(self));
}

QTableWidgetItem* q_tablewidgetitem_new() {
    return QTableWidgetItem_new();
}

QTableWidgetItem* q_tablewidgetitem_new2(const char* text) {
    return QTableWidgetItem_new2(qstring(text));
}

QTableWidgetItem* q_tablewidgetitem_new3(void* icon, const char* text) {
    return QTableWidgetItem_new3((QIcon*)icon, qstring(text));
}

QTableWidgetItem* q_tablewidgetitem_new4(void* other) {
    return QTableWidgetItem_new4((QTableWidgetItem*)other);
}

QTableWidgetItem* q_tablewidgetitem_new5(int type) {
    return QTableWidgetItem_new5(type);
}

QTableWidgetItem* q_tablewidgetitem_new6(const char* text, int type) {
    return QTableWidgetItem_new6(qstring(text), type);
}

QTableWidgetItem* q_tablewidgetitem_new7(void* icon, const char* text, int type) {
    return QTableWidgetItem_new7((QIcon*)icon, qstring(text), type);
}

QTableWidgetItem* q_tablewidgetitem_clone(void* self) {
    return QTableWidgetItem_Clone((QTableWidgetItem*)self);
}

void q_tablewidgetitem_on_clone(void* self, QTableWidgetItem* (*callback)()) {
    QTableWidgetItem_OnClone((QTableWidgetItem*)self, (intptr_t)callback);
}

QTableWidgetItem* q_tablewidgetitem_qbase_clone(void* self) {
    return QTableWidgetItem_QBaseClone((QTableWidgetItem*)self);
}

QTableWidget* q_tablewidgetitem_table_widget(void* self) {
    return QTableWidgetItem_TableWidget((QTableWidgetItem*)self);
}

int32_t q_tablewidgetitem_row(void* self) {
    return QTableWidgetItem_Row((QTableWidgetItem*)self);
}

int32_t q_tablewidgetitem_column(void* self) {
    return QTableWidgetItem_Column((QTableWidgetItem*)self);
}

void q_tablewidgetitem_set_selected(void* self, bool selectVal) {
    QTableWidgetItem_SetSelected((QTableWidgetItem*)self, selectVal);
}

bool q_tablewidgetitem_is_selected(void* self) {
    return QTableWidgetItem_IsSelected((QTableWidgetItem*)self);
}

int32_t q_tablewidgetitem_flags(void* self) {
    return QTableWidgetItem_Flags((QTableWidgetItem*)self);
}

void q_tablewidgetitem_set_flags(void* self, int32_t flags) {
    QTableWidgetItem_SetFlags((QTableWidgetItem*)self, flags);
}

const char* q_tablewidgetitem_text(void* self) {
    libqt_string _str = QTableWidgetItem_Text((QTableWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidgetitem_set_text(void* self, const char* text) {
    QTableWidgetItem_SetText((QTableWidgetItem*)self, qstring(text));
}

QIcon* q_tablewidgetitem_icon(void* self) {
    return QTableWidgetItem_Icon((QTableWidgetItem*)self);
}

void q_tablewidgetitem_set_icon(void* self, void* icon) {
    QTableWidgetItem_SetIcon((QTableWidgetItem*)self, (QIcon*)icon);
}

const char* q_tablewidgetitem_status_tip(void* self) {
    libqt_string _str = QTableWidgetItem_StatusTip((QTableWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidgetitem_set_status_tip(void* self, const char* statusTip) {
    QTableWidgetItem_SetStatusTip((QTableWidgetItem*)self, qstring(statusTip));
}

const char* q_tablewidgetitem_tool_tip(void* self) {
    libqt_string _str = QTableWidgetItem_ToolTip((QTableWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidgetitem_set_tool_tip(void* self, const char* toolTip) {
    QTableWidgetItem_SetToolTip((QTableWidgetItem*)self, qstring(toolTip));
}

const char* q_tablewidgetitem_whats_this(void* self) {
    libqt_string _str = QTableWidgetItem_WhatsThis((QTableWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidgetitem_set_whats_this(void* self, const char* whatsThis) {
    QTableWidgetItem_SetWhatsThis((QTableWidgetItem*)self, qstring(whatsThis));
}

QFont* q_tablewidgetitem_font(void* self) {
    return QTableWidgetItem_Font((QTableWidgetItem*)self);
}

void q_tablewidgetitem_set_font(void* self, void* font) {
    QTableWidgetItem_SetFont((QTableWidgetItem*)self, (QFont*)font);
}

int32_t q_tablewidgetitem_text_alignment(void* self) {
    return QTableWidgetItem_TextAlignment((QTableWidgetItem*)self);
}

void q_tablewidgetitem_set_text_alignment(void* self, int alignment) {
    QTableWidgetItem_SetTextAlignment((QTableWidgetItem*)self, alignment);
}

void q_tablewidgetitem_set_text_alignment2(void* self, int32_t alignment) {
    QTableWidgetItem_SetTextAlignment2((QTableWidgetItem*)self, alignment);
}

void q_tablewidgetitem_set_text_alignment3(void* self, int32_t alignment) {
    QTableWidgetItem_SetTextAlignment3((QTableWidgetItem*)self, alignment);
}

QBrush* q_tablewidgetitem_background(void* self) {
    return QTableWidgetItem_Background((QTableWidgetItem*)self);
}

void q_tablewidgetitem_set_background(void* self, void* brush) {
    QTableWidgetItem_SetBackground((QTableWidgetItem*)self, (QBrush*)brush);
}

QBrush* q_tablewidgetitem_foreground(void* self) {
    return QTableWidgetItem_Foreground((QTableWidgetItem*)self);
}

void q_tablewidgetitem_set_foreground(void* self, void* brush) {
    QTableWidgetItem_SetForeground((QTableWidgetItem*)self, (QBrush*)brush);
}

int32_t q_tablewidgetitem_check_state(void* self) {
    return QTableWidgetItem_CheckState((QTableWidgetItem*)self);
}

void q_tablewidgetitem_set_check_state(void* self, int32_t state) {
    QTableWidgetItem_SetCheckState((QTableWidgetItem*)self, state);
}

QSize* q_tablewidgetitem_size_hint(void* self) {
    return QTableWidgetItem_SizeHint((QTableWidgetItem*)self);
}

void q_tablewidgetitem_set_size_hint(void* self, void* size) {
    QTableWidgetItem_SetSizeHint((QTableWidgetItem*)self, (QSize*)size);
}

QVariant* q_tablewidgetitem_data(void* self, int role) {
    return QTableWidgetItem_Data((QTableWidgetItem*)self, role);
}

void q_tablewidgetitem_on_data(void* self, QVariant* (*callback)(void*, int)) {
    QTableWidgetItem_OnData((QTableWidgetItem*)self, (intptr_t)callback);
}

QVariant* q_tablewidgetitem_qbase_data(void* self, int role) {
    return QTableWidgetItem_QBaseData((QTableWidgetItem*)self, role);
}

void q_tablewidgetitem_set_data(void* self, int role, void* value) {
    QTableWidgetItem_SetData((QTableWidgetItem*)self, role, (QVariant*)value);
}

void q_tablewidgetitem_on_set_data(void* self, void (*callback)(void*, int, void*)) {
    QTableWidgetItem_OnSetData((QTableWidgetItem*)self, (intptr_t)callback);
}

void q_tablewidgetitem_qbase_set_data(void* self, int role, void* value) {
    QTableWidgetItem_QBaseSetData((QTableWidgetItem*)self, role, (QVariant*)value);
}

bool q_tablewidgetitem_operator_lesser(void* self, void* other) {
    return QTableWidgetItem_OperatorLesser((QTableWidgetItem*)self, (QTableWidgetItem*)other);
}

void q_tablewidgetitem_on_operator_lesser(void* self, bool (*callback)(void*, void*)) {
    QTableWidgetItem_OnOperatorLesser((QTableWidgetItem*)self, (intptr_t)callback);
}

bool q_tablewidgetitem_qbase_operator_lesser(void* self, void* other) {
    return QTableWidgetItem_QBaseOperatorLesser((QTableWidgetItem*)self, (QTableWidgetItem*)other);
}

void q_tablewidgetitem_read(void* self, void* in) {
    QTableWidgetItem_Read((QTableWidgetItem*)self, (QDataStream*)in);
}

void q_tablewidgetitem_on_read(void* self, void (*callback)(void*, void*)) {
    QTableWidgetItem_OnRead((QTableWidgetItem*)self, (intptr_t)callback);
}

void q_tablewidgetitem_qbase_read(void* self, void* in) {
    QTableWidgetItem_QBaseRead((QTableWidgetItem*)self, (QDataStream*)in);
}

void q_tablewidgetitem_write(void* self, void* out) {
    QTableWidgetItem_Write((QTableWidgetItem*)self, (QDataStream*)out);
}

void q_tablewidgetitem_on_write(void* self, void (*callback)(void*, void*)) {
    QTableWidgetItem_OnWrite((QTableWidgetItem*)self, (intptr_t)callback);
}

void q_tablewidgetitem_qbase_write(void* self, void* out) {
    QTableWidgetItem_QBaseWrite((QTableWidgetItem*)self, (QDataStream*)out);
}

void q_tablewidgetitem_operator_assign(void* self, void* other) {
    QTableWidgetItem_OperatorAssign((QTableWidgetItem*)self, (QTableWidgetItem*)other);
}

int32_t q_tablewidgetitem_type(void* self) {
    return QTableWidgetItem_Type((QTableWidgetItem*)self);
}

void q_tablewidgetitem_delete(void* self) {
    QTableWidgetItem_Delete((QTableWidgetItem*)(self));
}

QTableWidget* q_tablewidget_new(void* parent) {
    return QTableWidget_new((QWidget*)parent);
}

QTableWidget* q_tablewidget_new2() {
    return QTableWidget_new2();
}

QTableWidget* q_tablewidget_new3(int rows, int columns) {
    return QTableWidget_new3(rows, columns);
}

QTableWidget* q_tablewidget_new4(int rows, int columns, void* parent) {
    return QTableWidget_new4(rows, columns, (QWidget*)parent);
}

const QMetaObject* q_tablewidget_meta_object(void* self) {
    return QTableWidget_MetaObject((QTableWidget*)self);
}

void q_tablewidget_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QTableWidget_OnMetaObject((QTableWidget*)self, (intptr_t)callback);
}

const QMetaObject* q_tablewidget_qbase_meta_object(void* self) {
    return QTableWidget_QBaseMetaObject((QTableWidget*)self);
}

void* q_tablewidget_metacast(void* self, const char* param1) {
    return QTableWidget_Metacast((QTableWidget*)self, param1);
}

void q_tablewidget_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QTableWidget_OnMetacast((QTableWidget*)self, (intptr_t)callback);
}

void* q_tablewidget_qbase_metacast(void* self, const char* param1) {
    return QTableWidget_QBaseMetacast((QTableWidget*)self, param1);
}

int32_t q_tablewidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTableWidget_Metacall((QTableWidget*)self, param1, param2, param3);
}

void q_tablewidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QTableWidget_OnMetacall((QTableWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTableWidget_QBaseMetacall((QTableWidget*)self, param1, param2, param3);
}

const char* q_tablewidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidget_set_row_count(void* self, int rows) {
    QTableWidget_SetRowCount((QTableWidget*)self, rows);
}

int32_t q_tablewidget_row_count(void* self) {
    return QTableWidget_RowCount((QTableWidget*)self);
}

void q_tablewidget_set_column_count(void* self, int columns) {
    QTableWidget_SetColumnCount((QTableWidget*)self, columns);
}

int32_t q_tablewidget_column_count(void* self) {
    return QTableWidget_ColumnCount((QTableWidget*)self);
}

int32_t q_tablewidget_row(void* self, void* item) {
    return QTableWidget_Row((QTableWidget*)self, (QTableWidgetItem*)item);
}

int32_t q_tablewidget_column(void* self, void* item) {
    return QTableWidget_Column((QTableWidget*)self, (QTableWidgetItem*)item);
}

QTableWidgetItem* q_tablewidget_item(void* self, int row, int column) {
    return QTableWidget_Item((QTableWidget*)self, row, column);
}

void q_tablewidget_set_item(void* self, int row, int column, void* item) {
    QTableWidget_SetItem((QTableWidget*)self, row, column, (QTableWidgetItem*)item);
}

QTableWidgetItem* q_tablewidget_take_item(void* self, int row, int column) {
    return QTableWidget_TakeItem((QTableWidget*)self, row, column);
}

libqt_list /* of QTableWidgetItem* */ q_tablewidget_items(void* self, void* data) {
    libqt_list _arr = QTableWidget_Items((QTableWidget*)self, (QMimeData*)data);
    return _arr;
}

QModelIndex* q_tablewidget_index_from_item(void* self, void* item) {
    return QTableWidget_IndexFromItem((QTableWidget*)self, (QTableWidgetItem*)item);
}

QTableWidgetItem* q_tablewidget_item_from_index(void* self, void* index) {
    return QTableWidget_ItemFromIndex((QTableWidget*)self, (QModelIndex*)index);
}

QTableWidgetItem* q_tablewidget_vertical_header_item(void* self, int row) {
    return QTableWidget_VerticalHeaderItem((QTableWidget*)self, row);
}

void q_tablewidget_set_vertical_header_item(void* self, int row, void* item) {
    QTableWidget_SetVerticalHeaderItem((QTableWidget*)self, row, (QTableWidgetItem*)item);
}

QTableWidgetItem* q_tablewidget_take_vertical_header_item(void* self, int row) {
    return QTableWidget_TakeVerticalHeaderItem((QTableWidget*)self, row);
}

QTableWidgetItem* q_tablewidget_horizontal_header_item(void* self, int column) {
    return QTableWidget_HorizontalHeaderItem((QTableWidget*)self, column);
}

void q_tablewidget_set_horizontal_header_item(void* self, int column, void* item) {
    QTableWidget_SetHorizontalHeaderItem((QTableWidget*)self, column, (QTableWidgetItem*)item);
}

QTableWidgetItem* q_tablewidget_take_horizontal_header_item(void* self, int column) {
    return QTableWidget_TakeHorizontalHeaderItem((QTableWidget*)self, column);
}

void q_tablewidget_set_vertical_header_labels(void* self, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_tablewidget_set_vertical_header_labels\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i) {
        labels_qstr[i] = qstring(labels[i]);
    }
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QTableWidget_SetVerticalHeaderLabels((QTableWidget*)self, labels_list);
    free(labels_qstr);
}

void q_tablewidget_set_horizontal_header_labels(void* self, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_tablewidget_set_horizontal_header_labels\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i) {
        labels_qstr[i] = qstring(labels[i]);
    }
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QTableWidget_SetHorizontalHeaderLabels((QTableWidget*)self, labels_list);
    free(labels_qstr);
}

int32_t q_tablewidget_current_row(void* self) {
    return QTableWidget_CurrentRow((QTableWidget*)self);
}

int32_t q_tablewidget_current_column(void* self) {
    return QTableWidget_CurrentColumn((QTableWidget*)self);
}

QTableWidgetItem* q_tablewidget_current_item(void* self) {
    return QTableWidget_CurrentItem((QTableWidget*)self);
}

void q_tablewidget_set_current_item(void* self, void* item) {
    QTableWidget_SetCurrentItem((QTableWidget*)self, (QTableWidgetItem*)item);
}

void q_tablewidget_set_current_item2(void* self, void* item, int32_t command) {
    QTableWidget_SetCurrentItem2((QTableWidget*)self, (QTableWidgetItem*)item, command);
}

void q_tablewidget_set_current_cell(void* self, int row, int column) {
    QTableWidget_SetCurrentCell((QTableWidget*)self, row, column);
}

void q_tablewidget_set_current_cell2(void* self, int row, int column, int32_t command) {
    QTableWidget_SetCurrentCell2((QTableWidget*)self, row, column, command);
}

void q_tablewidget_sort_items(void* self, int column) {
    QTableWidget_SortItems((QTableWidget*)self, column);
}

void q_tablewidget_set_sorting_enabled(void* self, bool enable) {
    QTableWidget_SetSortingEnabled((QTableWidget*)self, enable);
}

bool q_tablewidget_is_sorting_enabled(void* self) {
    return QTableWidget_IsSortingEnabled((QTableWidget*)self);
}

void q_tablewidget_edit_item(void* self, void* item) {
    QTableWidget_EditItem((QTableWidget*)self, (QTableWidgetItem*)item);
}

void q_tablewidget_open_persistent_editor(void* self, void* item) {
    QTableWidget_OpenPersistentEditor((QTableWidget*)self, (QTableWidgetItem*)item);
}

void q_tablewidget_close_persistent_editor(void* self, void* item) {
    QTableWidget_ClosePersistentEditor((QTableWidget*)self, (QTableWidgetItem*)item);
}

bool q_tablewidget_is_persistent_editor_open(void* self, void* item) {
    return QTableWidget_IsPersistentEditorOpen((QTableWidget*)self, (QTableWidgetItem*)item);
}

QWidget* q_tablewidget_cell_widget(void* self, int row, int column) {
    return QTableWidget_CellWidget((QTableWidget*)self, row, column);
}

void q_tablewidget_set_cell_widget(void* self, int row, int column, void* widget) {
    QTableWidget_SetCellWidget((QTableWidget*)self, row, column, (QWidget*)widget);
}

void q_tablewidget_remove_cell_widget(void* self, int row, int column) {
    QTableWidget_RemoveCellWidget((QTableWidget*)self, row, column);
}

void q_tablewidget_set_range_selected(void* self, void* range, bool selectVal) {
    QTableWidget_SetRangeSelected((QTableWidget*)self, (QTableWidgetSelectionRange*)range, selectVal);
}

libqt_list /* of QTableWidgetSelectionRange* */ q_tablewidget_selected_ranges(void* self) {
    libqt_list _arr = QTableWidget_SelectedRanges((QTableWidget*)self);
    return _arr;
}

libqt_list /* of QTableWidgetItem* */ q_tablewidget_selected_items(void* self) {
    libqt_list _arr = QTableWidget_SelectedItems((QTableWidget*)self);
    return _arr;
}

libqt_list /* of QTableWidgetItem* */ q_tablewidget_find_items(void* self, const char* text, int32_t flags) {
    libqt_list _arr = QTableWidget_FindItems((QTableWidget*)self, qstring(text), flags);
    return _arr;
}

int32_t q_tablewidget_visual_row(void* self, int logicalRow) {
    return QTableWidget_VisualRow((QTableWidget*)self, logicalRow);
}

int32_t q_tablewidget_visual_column(void* self, int logicalColumn) {
    return QTableWidget_VisualColumn((QTableWidget*)self, logicalColumn);
}

QTableWidgetItem* q_tablewidget_item_at(void* self, void* p) {
    return QTableWidget_ItemAt((QTableWidget*)self, (QPoint*)p);
}

QTableWidgetItem* q_tablewidget_item_at2(void* self, int x, int y) {
    return QTableWidget_ItemAt2((QTableWidget*)self, x, y);
}

QRect* q_tablewidget_visual_item_rect(void* self, void* item) {
    return QTableWidget_VisualItemRect((QTableWidget*)self, (QTableWidgetItem*)item);
}

const QTableWidgetItem* q_tablewidget_item_prototype(void* self) {
    return QTableWidget_ItemPrototype((QTableWidget*)self);
}

void q_tablewidget_set_item_prototype(void* self, void* item) {
    QTableWidget_SetItemPrototype((QTableWidget*)self, (QTableWidgetItem*)item);
}

void q_tablewidget_scroll_to_item(void* self, void* item) {
    QTableWidget_ScrollToItem((QTableWidget*)self, (QTableWidgetItem*)item);
}

void q_tablewidget_insert_row(void* self, int row) {
    QTableWidget_InsertRow((QTableWidget*)self, row);
}

void q_tablewidget_insert_column(void* self, int column) {
    QTableWidget_InsertColumn((QTableWidget*)self, column);
}

void q_tablewidget_remove_row(void* self, int row) {
    QTableWidget_RemoveRow((QTableWidget*)self, row);
}

void q_tablewidget_remove_column(void* self, int column) {
    QTableWidget_RemoveColumn((QTableWidget*)self, column);
}

void q_tablewidget_clear(void* self) {
    QTableWidget_Clear((QTableWidget*)self);
}

void q_tablewidget_clear_contents(void* self) {
    QTableWidget_ClearContents((QTableWidget*)self);
}

void q_tablewidget_item_pressed(void* self, void* item) {
    QTableWidget_ItemPressed((QTableWidget*)self, (QTableWidgetItem*)item);
}

void q_tablewidget_on_item_pressed(void* self, void (*callback)(void*, void*)) {
    QTableWidget_Connect_ItemPressed((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_item_clicked(void* self, void* item) {
    QTableWidget_ItemClicked((QTableWidget*)self, (QTableWidgetItem*)item);
}

void q_tablewidget_on_item_clicked(void* self, void (*callback)(void*, void*)) {
    QTableWidget_Connect_ItemClicked((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_item_double_clicked(void* self, void* item) {
    QTableWidget_ItemDoubleClicked((QTableWidget*)self, (QTableWidgetItem*)item);
}

void q_tablewidget_on_item_double_clicked(void* self, void (*callback)(void*, void*)) {
    QTableWidget_Connect_ItemDoubleClicked((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_item_activated(void* self, void* item) {
    QTableWidget_ItemActivated((QTableWidget*)self, (QTableWidgetItem*)item);
}

void q_tablewidget_on_item_activated(void* self, void (*callback)(void*, void*)) {
    QTableWidget_Connect_ItemActivated((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_item_entered(void* self, void* item) {
    QTableWidget_ItemEntered((QTableWidget*)self, (QTableWidgetItem*)item);
}

void q_tablewidget_on_item_entered(void* self, void (*callback)(void*, void*)) {
    QTableWidget_Connect_ItemEntered((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_item_changed(void* self, void* item) {
    QTableWidget_ItemChanged((QTableWidget*)self, (QTableWidgetItem*)item);
}

void q_tablewidget_on_item_changed(void* self, void (*callback)(void*, void*)) {
    QTableWidget_Connect_ItemChanged((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_current_item_changed(void* self, void* current, void* previous) {
    QTableWidget_CurrentItemChanged((QTableWidget*)self, (QTableWidgetItem*)current, (QTableWidgetItem*)previous);
}

void q_tablewidget_on_current_item_changed(void* self, void (*callback)(void*, void*, void*)) {
    QTableWidget_Connect_CurrentItemChanged((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_item_selection_changed(void* self) {
    QTableWidget_ItemSelectionChanged((QTableWidget*)self);
}

void q_tablewidget_on_item_selection_changed(void* self, void (*callback)(void*)) {
    QTableWidget_Connect_ItemSelectionChanged((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_cell_pressed(void* self, int row, int column) {
    QTableWidget_CellPressed((QTableWidget*)self, row, column);
}

void q_tablewidget_on_cell_pressed(void* self, void (*callback)(void*, int, int)) {
    QTableWidget_Connect_CellPressed((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_cell_clicked(void* self, int row, int column) {
    QTableWidget_CellClicked((QTableWidget*)self, row, column);
}

void q_tablewidget_on_cell_clicked(void* self, void (*callback)(void*, int, int)) {
    QTableWidget_Connect_CellClicked((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_cell_double_clicked(void* self, int row, int column) {
    QTableWidget_CellDoubleClicked((QTableWidget*)self, row, column);
}

void q_tablewidget_on_cell_double_clicked(void* self, void (*callback)(void*, int, int)) {
    QTableWidget_Connect_CellDoubleClicked((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_cell_activated(void* self, int row, int column) {
    QTableWidget_CellActivated((QTableWidget*)self, row, column);
}

void q_tablewidget_on_cell_activated(void* self, void (*callback)(void*, int, int)) {
    QTableWidget_Connect_CellActivated((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_cell_entered(void* self, int row, int column) {
    QTableWidget_CellEntered((QTableWidget*)self, row, column);
}

void q_tablewidget_on_cell_entered(void* self, void (*callback)(void*, int, int)) {
    QTableWidget_Connect_CellEntered((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_cell_changed(void* self, int row, int column) {
    QTableWidget_CellChanged((QTableWidget*)self, row, column);
}

void q_tablewidget_on_cell_changed(void* self, void (*callback)(void*, int, int)) {
    QTableWidget_Connect_CellChanged((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_current_cell_changed(void* self, int currentRow, int currentColumn, int previousRow, int previousColumn) {
    QTableWidget_CurrentCellChanged((QTableWidget*)self, currentRow, currentColumn, previousRow, previousColumn);
}

void q_tablewidget_on_current_cell_changed(void* self, void (*callback)(void*, int, int, int, int)) {
    QTableWidget_Connect_CurrentCellChanged((QTableWidget*)self, (intptr_t)callback);
}

bool q_tablewidget_event(void* self, void* e) {
    return QTableWidget_Event((QTableWidget*)self, (QEvent*)e);
}

void q_tablewidget_on_event(void* self, bool (*callback)(void*, void*)) {
    QTableWidget_OnEvent((QTableWidget*)self, (intptr_t)callback);
}

bool q_tablewidget_qbase_event(void* self, void* e) {
    return QTableWidget_QBaseEvent((QTableWidget*)self, (QEvent*)e);
}

const char** q_tablewidget_mime_types(void* self) {
    libqt_list _arr = QTableWidget_MimeTypes((QTableWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_tablewidget_mime_types\n");
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

void q_tablewidget_on_mime_types(void* self, const char** (*callback)()) {
    QTableWidget_OnMimeTypes((QTableWidget*)self, (intptr_t)callback);
}

const char** q_tablewidget_qbase_mime_types(void* self) {
    libqt_list _arr = QTableWidget_QBaseMimeTypes((QTableWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_tablewidget_mime_types\n");
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

QMimeData* q_tablewidget_mime_data(void* self, libqt_list /* of QTableWidgetItem* */ items) {
    return QTableWidget_MimeData((QTableWidget*)self, items);
}

void q_tablewidget_on_mime_data(void* self, QMimeData* (*callback)(void*, QTableWidgetItem**)) {
    QTableWidget_OnMimeData((QTableWidget*)self, (intptr_t)callback);
}

QMimeData* q_tablewidget_qbase_mime_data(void* self, libqt_list /* of QTableWidgetItem* */ items) {
    return QTableWidget_QBaseMimeData((QTableWidget*)self, items);
}

bool q_tablewidget_drop_mime_data(void* self, int row, int column, void* data, int32_t action) {
    return QTableWidget_DropMimeData((QTableWidget*)self, row, column, (QMimeData*)data, action);
}

void q_tablewidget_on_drop_mime_data(void* self, bool (*callback)(void*, int, int, void*, int32_t)) {
    QTableWidget_OnDropMimeData((QTableWidget*)self, (intptr_t)callback);
}

bool q_tablewidget_qbase_drop_mime_data(void* self, int row, int column, void* data, int32_t action) {
    return QTableWidget_QBaseDropMimeData((QTableWidget*)self, row, column, (QMimeData*)data, action);
}

int32_t q_tablewidget_supported_drop_actions(void* self) {
    return QTableWidget_SupportedDropActions((QTableWidget*)self);
}

void q_tablewidget_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    QTableWidget_OnSupportedDropActions((QTableWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_qbase_supported_drop_actions(void* self) {
    return QTableWidget_QBaseSupportedDropActions((QTableWidget*)self);
}

void q_tablewidget_drop_event(void* self, void* event) {
    QTableWidget_DropEvent((QTableWidget*)self, (QDropEvent*)event);
}

void q_tablewidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnDropEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_qbase_drop_event(void* self, void* event) {
    QTableWidget_QBaseDropEvent((QTableWidget*)self, (QDropEvent*)event);
}

const char* q_tablewidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tablewidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidget_sort_items2(void* self, int column, int32_t order) {
    QTableWidget_SortItems2((QTableWidget*)self, column, order);
}

void q_tablewidget_scroll_to_item2(void* self, void* item, int32_t hint) {
    QTableWidget_ScrollToItem2((QTableWidget*)self, (QTableWidgetItem*)item, hint);
}

void q_tablewidget_set_model(void* self, void* model) {
    QTableView_SetModel((QTableView*)self, (QAbstractItemModel*)model);
}

void q_tablewidget_on_set_model(void* self, void (*callback)(void*, void*)) {
    QTableView_OnSetModel((QTableView*)self, (intptr_t)callback);
}

void q_tablewidget_qbase_set_model(void* self, void* model) {
    QTableView_QBaseSetModel((QTableView*)self, (QAbstractItemModel*)model);
}

QHeaderView* q_tablewidget_horizontal_header(void* self) {
    return QTableView_HorizontalHeader((QTableView*)self);
}

QHeaderView* q_tablewidget_vertical_header(void* self) {
    return QTableView_VerticalHeader((QTableView*)self);
}

void q_tablewidget_set_horizontal_header(void* self, void* header) {
    QTableView_SetHorizontalHeader((QTableView*)self, (QHeaderView*)header);
}

void q_tablewidget_set_vertical_header(void* self, void* header) {
    QTableView_SetVerticalHeader((QTableView*)self, (QHeaderView*)header);
}

int32_t q_tablewidget_row_viewport_position(void* self, int row) {
    return QTableView_RowViewportPosition((QTableView*)self, row);
}

int32_t q_tablewidget_row_at(void* self, int y) {
    return QTableView_RowAt((QTableView*)self, y);
}

void q_tablewidget_set_row_height(void* self, int row, int height) {
    QTableView_SetRowHeight((QTableView*)self, row, height);
}

int32_t q_tablewidget_row_height(void* self, int row) {
    return QTableView_RowHeight((QTableView*)self, row);
}

int32_t q_tablewidget_column_viewport_position(void* self, int column) {
    return QTableView_ColumnViewportPosition((QTableView*)self, column);
}

int32_t q_tablewidget_column_at(void* self, int x) {
    return QTableView_ColumnAt((QTableView*)self, x);
}

void q_tablewidget_set_column_width(void* self, int column, int width) {
    QTableView_SetColumnWidth((QTableView*)self, column, width);
}

int32_t q_tablewidget_column_width(void* self, int column) {
    return QTableView_ColumnWidth((QTableView*)self, column);
}

bool q_tablewidget_is_row_hidden(void* self, int row) {
    return QTableView_IsRowHidden((QTableView*)self, row);
}

void q_tablewidget_set_row_hidden(void* self, int row, bool hide) {
    QTableView_SetRowHidden((QTableView*)self, row, hide);
}

bool q_tablewidget_is_column_hidden(void* self, int column) {
    return QTableView_IsColumnHidden((QTableView*)self, column);
}

void q_tablewidget_set_column_hidden(void* self, int column, bool hide) {
    QTableView_SetColumnHidden((QTableView*)self, column, hide);
}

bool q_tablewidget_show_grid(void* self) {
    return QTableView_ShowGrid((QTableView*)self);
}

int32_t q_tablewidget_grid_style(void* self) {
    return QTableView_GridStyle((QTableView*)self);
}

void q_tablewidget_set_grid_style(void* self, int32_t style) {
    QTableView_SetGridStyle((QTableView*)self, style);
}

void q_tablewidget_set_word_wrap(void* self, bool on) {
    QTableView_SetWordWrap((QTableView*)self, on);
}

bool q_tablewidget_word_wrap(void* self) {
    return QTableView_WordWrap((QTableView*)self);
}

void q_tablewidget_set_corner_button_enabled(void* self, bool enable) {
    QTableView_SetCornerButtonEnabled((QTableView*)self, enable);
}

bool q_tablewidget_is_corner_button_enabled(void* self) {
    return QTableView_IsCornerButtonEnabled((QTableView*)self);
}

void q_tablewidget_set_span(void* self, int row, int column, int rowSpan, int columnSpan) {
    QTableView_SetSpan((QTableView*)self, row, column, rowSpan, columnSpan);
}

int32_t q_tablewidget_row_span(void* self, int row, int column) {
    return QTableView_RowSpan((QTableView*)self, row, column);
}

int32_t q_tablewidget_column_span(void* self, int row, int column) {
    return QTableView_ColumnSpan((QTableView*)self, row, column);
}

void q_tablewidget_clear_spans(void* self) {
    QTableView_ClearSpans((QTableView*)self);
}

void q_tablewidget_select_row(void* self, int row) {
    QTableView_SelectRow((QTableView*)self, row);
}

void q_tablewidget_select_column(void* self, int column) {
    QTableView_SelectColumn((QTableView*)self, column);
}

void q_tablewidget_hide_row(void* self, int row) {
    QTableView_HideRow((QTableView*)self, row);
}

void q_tablewidget_hide_column(void* self, int column) {
    QTableView_HideColumn((QTableView*)self, column);
}

void q_tablewidget_show_row(void* self, int row) {
    QTableView_ShowRow((QTableView*)self, row);
}

void q_tablewidget_show_column(void* self, int column) {
    QTableView_ShowColumn((QTableView*)self, column);
}

void q_tablewidget_resize_row_to_contents(void* self, int row) {
    QTableView_ResizeRowToContents((QTableView*)self, row);
}

void q_tablewidget_resize_rows_to_contents(void* self) {
    QTableView_ResizeRowsToContents((QTableView*)self);
}

void q_tablewidget_resize_column_to_contents(void* self, int column) {
    QTableView_ResizeColumnToContents((QTableView*)self, column);
}

void q_tablewidget_resize_columns_to_contents(void* self) {
    QTableView_ResizeColumnsToContents((QTableView*)self);
}

void q_tablewidget_sort_by_column(void* self, int column, int32_t order) {
    QTableView_SortByColumn((QTableView*)self, column, order);
}

void q_tablewidget_set_show_grid(void* self, bool show) {
    QTableView_SetShowGrid((QTableView*)self, show);
}

QAbstractItemModel* q_tablewidget_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

QItemSelectionModel* q_tablewidget_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

void q_tablewidget_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_tablewidget_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

void q_tablewidget_set_selection_mode(void* self, int32_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

int32_t q_tablewidget_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

void q_tablewidget_set_selection_behavior(void* self, int32_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

int32_t q_tablewidget_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

QModelIndex* q_tablewidget_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

QModelIndex* q_tablewidget_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

void q_tablewidget_set_edit_triggers(void* self, int32_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

int32_t q_tablewidget_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

void q_tablewidget_set_vertical_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

int32_t q_tablewidget_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

void q_tablewidget_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

void q_tablewidget_set_horizontal_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

int32_t q_tablewidget_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

void q_tablewidget_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

void q_tablewidget_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

bool q_tablewidget_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

void q_tablewidget_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

int32_t q_tablewidget_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

void q_tablewidget_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

bool q_tablewidget_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

void q_tablewidget_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

bool q_tablewidget_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

void q_tablewidget_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

bool q_tablewidget_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

void q_tablewidget_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

bool q_tablewidget_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

void q_tablewidget_set_drag_drop_mode(void* self, int32_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

int32_t q_tablewidget_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

void q_tablewidget_set_default_drop_action(void* self, int32_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

int32_t q_tablewidget_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

void q_tablewidget_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

bool q_tablewidget_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

void q_tablewidget_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

QSize* q_tablewidget_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

void q_tablewidget_set_text_elide_mode(void* self, int32_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

int32_t q_tablewidget_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

QSize* q_tablewidget_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tablewidget_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

QWidget* q_tablewidget_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tablewidget_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_tablewidget_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

void q_tablewidget_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_tablewidget_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

QAbstractItemDelegate* q_tablewidget_item_delegate2(void* self, void* index) {
    return QAbstractItemView_ItemDelegate2((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tablewidget_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tablewidget_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

void q_tablewidget_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tablewidget_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

void q_tablewidget_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

void q_tablewidget_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tablewidget_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tablewidget_on_pressed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)callback);
}

void q_tablewidget_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tablewidget_on_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)callback);
}

void q_tablewidget_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tablewidget_on_double_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)callback);
}

void q_tablewidget_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tablewidget_on_activated(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)callback);
}

void q_tablewidget_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tablewidget_on_entered(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)callback);
}

void q_tablewidget_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

void q_tablewidget_on_viewport_entered(void* self, void (*callback)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)callback);
}

void q_tablewidget_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

void q_tablewidget_on_icon_size_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)callback);
}

int32_t q_tablewidget_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_tablewidget_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_tablewidget_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_tablewidget_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t q_tablewidget_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_tablewidget_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_tablewidget_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_tablewidget_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_tablewidget_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_tablewidget_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_tablewidget_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_tablewidget_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_tablewidget_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_tablewidget_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_tablewidget_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t q_tablewidget_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_tablewidget_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_tablewidget_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_tablewidget_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_tablewidget_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t q_tablewidget_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_tablewidget_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t q_tablewidget_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_tablewidget_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_tablewidget_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_tablewidget_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_tablewidget_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_tablewidget_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_tablewidget_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_tablewidget_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_tablewidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_tablewidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_tablewidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_tablewidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_tablewidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_tablewidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_tablewidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_tablewidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_tablewidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_tablewidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_tablewidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_tablewidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_tablewidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_tablewidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_tablewidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_tablewidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_tablewidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_tablewidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_tablewidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_tablewidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_tablewidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_tablewidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_tablewidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_tablewidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_tablewidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_tablewidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_tablewidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_tablewidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_tablewidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_tablewidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_tablewidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_tablewidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_tablewidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_tablewidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_tablewidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_tablewidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_tablewidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_tablewidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_tablewidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_tablewidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_tablewidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_tablewidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_tablewidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_tablewidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_tablewidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_tablewidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_tablewidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_tablewidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_tablewidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_tablewidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_tablewidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_tablewidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_tablewidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_tablewidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tablewidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tablewidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tablewidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tablewidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tablewidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tablewidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tablewidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tablewidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_tablewidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_tablewidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_tablewidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_tablewidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_tablewidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_tablewidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_tablewidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_tablewidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_tablewidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_tablewidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_tablewidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_tablewidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_tablewidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_tablewidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_tablewidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_tablewidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_tablewidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_tablewidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_tablewidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_tablewidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_tablewidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_tablewidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_tablewidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_tablewidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_tablewidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_tablewidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_tablewidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_tablewidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_tablewidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_tablewidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_tablewidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_tablewidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_tablewidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_tablewidget_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_tablewidget_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_tablewidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_tablewidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_tablewidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tablewidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_tablewidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_tablewidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_tablewidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_tablewidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_tablewidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_tablewidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_tablewidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_tablewidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_tablewidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_tablewidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_tablewidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_tablewidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_tablewidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tablewidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_tablewidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_tablewidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_tablewidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_tablewidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_tablewidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_tablewidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_tablewidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_tablewidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_tablewidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_tablewidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_tablewidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_tablewidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_tablewidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_tablewidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_tablewidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_tablewidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_tablewidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_tablewidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_tablewidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_tablewidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_tablewidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_tablewidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_tablewidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_tablewidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_tablewidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_tablewidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_tablewidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_tablewidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_tablewidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_tablewidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_tablewidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_tablewidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_tablewidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_tablewidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_tablewidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_tablewidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_tablewidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_tablewidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_tablewidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_tablewidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_tablewidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_tablewidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_tablewidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_tablewidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_tablewidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_tablewidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_tablewidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_tablewidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_tablewidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_tablewidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_tablewidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_tablewidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_tablewidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_tablewidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_tablewidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_tablewidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_tablewidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_tablewidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_tablewidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_tablewidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_tablewidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_tablewidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_tablewidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_tablewidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_tablewidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_tablewidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_tablewidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_tablewidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_tablewidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_tablewidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_tablewidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_tablewidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_tablewidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_tablewidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_tablewidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_tablewidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_tablewidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_tablewidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_tablewidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_tablewidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_tablewidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_tablewidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_tablewidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_tablewidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_tablewidget_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_tablewidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_tablewidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_tablewidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_tablewidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_tablewidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_tablewidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_tablewidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_tablewidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_tablewidget_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_tablewidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_tablewidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_tablewidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_tablewidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_tablewidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_tablewidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_tablewidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_tablewidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_tablewidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_tablewidget_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_tablewidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_tablewidget_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_tablewidget_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_tablewidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_tablewidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_tablewidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_tablewidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_tablewidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_tablewidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_tablewidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_tablewidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_tablewidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_tablewidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_tablewidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_tablewidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_tablewidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_tablewidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_tablewidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_tablewidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_tablewidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_tablewidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_tablewidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_tablewidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_tablewidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_tablewidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_tablewidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_tablewidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_tablewidget_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_tablewidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_tablewidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_tablewidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_tablewidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_tablewidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_tablewidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_tablewidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_tablewidget_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_tablewidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_tablewidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_tablewidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_tablewidget_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_tablewidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_tablewidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_tablewidget_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_tablewidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tablewidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_tablewidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_tablewidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_tablewidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_tablewidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_tablewidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_tablewidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_tablewidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_tablewidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_tablewidget_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_tablewidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_tablewidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_tablewidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_tablewidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_tablewidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_tablewidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_tablewidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_tablewidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_tablewidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_tablewidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_tablewidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_tablewidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_tablewidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_tablewidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_tablewidget_dynamic_property_names\n");
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

QBindingStorage* q_tablewidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_tablewidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_tablewidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_tablewidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_tablewidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_tablewidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_tablewidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_tablewidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_tablewidget_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_tablewidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_tablewidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_tablewidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_tablewidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_tablewidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_tablewidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_tablewidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_tablewidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_tablewidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_tablewidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_tablewidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_tablewidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_tablewidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_tablewidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_tablewidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_tablewidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_tablewidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_tablewidget_set_root_index(void* self, void* index) {
    QTableWidget_SetRootIndex((QTableWidget*)self, (QModelIndex*)index);
}

void q_tablewidget_qbase_set_root_index(void* self, void* index) {
    QTableWidget_QBaseSetRootIndex((QTableWidget*)self, (QModelIndex*)index);
}

void q_tablewidget_on_set_root_index(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnSetRootIndex((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_set_selection_model(void* self, void* selectionModel) {
    QTableWidget_SetSelectionModel((QTableWidget*)self, (QItemSelectionModel*)selectionModel);
}

void q_tablewidget_qbase_set_selection_model(void* self, void* selectionModel) {
    QTableWidget_QBaseSetSelectionModel((QTableWidget*)self, (QItemSelectionModel*)selectionModel);
}

void q_tablewidget_on_set_selection_model(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnSetSelectionModel((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_do_items_layout(void* self) {
    QTableWidget_DoItemsLayout((QTableWidget*)self);
}

void q_tablewidget_qbase_do_items_layout(void* self) {
    QTableWidget_QBaseDoItemsLayout((QTableWidget*)self);
}

void q_tablewidget_on_do_items_layout(void* self, void (*callback)()) {
    QTableWidget_OnDoItemsLayout((QTableWidget*)self, (intptr_t)callback);
}

QRect* q_tablewidget_visual_rect(void* self, void* index) {
    return QTableWidget_VisualRect((QTableWidget*)self, (QModelIndex*)index);
}

QRect* q_tablewidget_qbase_visual_rect(void* self, void* index) {
    return QTableWidget_QBaseVisualRect((QTableWidget*)self, (QModelIndex*)index);
}

void q_tablewidget_on_visual_rect(void* self, QRect* (*callback)(void*, void*)) {
    QTableWidget_OnVisualRect((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_scroll_to(void* self, void* index, int32_t hint) {
    QTableWidget_ScrollTo((QTableWidget*)self, (QModelIndex*)index, hint);
}

void q_tablewidget_qbase_scroll_to(void* self, void* index, int32_t hint) {
    QTableWidget_QBaseScrollTo((QTableWidget*)self, (QModelIndex*)index, hint);
}

void q_tablewidget_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t)) {
    QTableWidget_OnScrollTo((QTableWidget*)self, (intptr_t)callback);
}

QModelIndex* q_tablewidget_index_at(void* self, void* p) {
    return QTableWidget_IndexAt((QTableWidget*)self, (QPoint*)p);
}

QModelIndex* q_tablewidget_qbase_index_at(void* self, void* p) {
    return QTableWidget_QBaseIndexAt((QTableWidget*)self, (QPoint*)p);
}

void q_tablewidget_on_index_at(void* self, QModelIndex* (*callback)(void*, void*)) {
    QTableWidget_OnIndexAt((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_scroll_contents_by(void* self, int dx, int dy) {
    QTableWidget_ScrollContentsBy((QTableWidget*)self, dx, dy);
}

void q_tablewidget_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QTableWidget_QBaseScrollContentsBy((QTableWidget*)self, dx, dy);
}

void q_tablewidget_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    QTableWidget_OnScrollContentsBy((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_init_view_item_option(void* self, void* option) {
    QTableWidget_InitViewItemOption((QTableWidget*)self, (QStyleOptionViewItem*)option);
}

void q_tablewidget_qbase_init_view_item_option(void* self, void* option) {
    QTableWidget_QBaseInitViewItemOption((QTableWidget*)self, (QStyleOptionViewItem*)option);
}

void q_tablewidget_on_init_view_item_option(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnInitViewItemOption((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_paint_event(void* self, void* e) {
    QTableWidget_PaintEvent((QTableWidget*)self, (QPaintEvent*)e);
}

void q_tablewidget_qbase_paint_event(void* self, void* e) {
    QTableWidget_QBasePaintEvent((QTableWidget*)self, (QPaintEvent*)e);
}

void q_tablewidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnPaintEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_timer_event(void* self, void* event) {
    QTableWidget_TimerEvent((QTableWidget*)self, (QTimerEvent*)event);
}

void q_tablewidget_qbase_timer_event(void* self, void* event) {
    QTableWidget_QBaseTimerEvent((QTableWidget*)self, (QTimerEvent*)event);
}

void q_tablewidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnTimerEvent((QTableWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_horizontal_offset(void* self) {
    return QTableWidget_HorizontalOffset((QTableWidget*)self);
}

int32_t q_tablewidget_qbase_horizontal_offset(void* self) {
    return QTableWidget_QBaseHorizontalOffset((QTableWidget*)self);
}

void q_tablewidget_on_horizontal_offset(void* self, int32_t (*callback)()) {
    QTableWidget_OnHorizontalOffset((QTableWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_vertical_offset(void* self) {
    return QTableWidget_VerticalOffset((QTableWidget*)self);
}

int32_t q_tablewidget_qbase_vertical_offset(void* self) {
    return QTableWidget_QBaseVerticalOffset((QTableWidget*)self);
}

void q_tablewidget_on_vertical_offset(void* self, int32_t (*callback)()) {
    QTableWidget_OnVerticalOffset((QTableWidget*)self, (intptr_t)callback);
}

QModelIndex* q_tablewidget_move_cursor(void* self, int32_t cursorAction, int32_t modifiers) {
    return QTableWidget_MoveCursor((QTableWidget*)self, cursorAction, modifiers);
}

QModelIndex* q_tablewidget_qbase_move_cursor(void* self, int32_t cursorAction, int32_t modifiers) {
    return QTableWidget_QBaseMoveCursor((QTableWidget*)self, cursorAction, modifiers);
}

void q_tablewidget_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int32_t)) {
    QTableWidget_OnMoveCursor((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_set_selection(void* self, void* rect, int32_t command) {
    QTableWidget_SetSelection((QTableWidget*)self, (QRect*)rect, command);
}

void q_tablewidget_qbase_set_selection(void* self, void* rect, int32_t command) {
    QTableWidget_QBaseSetSelection((QTableWidget*)self, (QRect*)rect, command);
}

void q_tablewidget_on_set_selection(void* self, void (*callback)(void*, void*, int32_t)) {
    QTableWidget_OnSetSelection((QTableWidget*)self, (intptr_t)callback);
}

QRegion* q_tablewidget_visual_region_for_selection(void* self, void* selection) {
    return QTableWidget_VisualRegionForSelection((QTableWidget*)self, (QItemSelection*)selection);
}

QRegion* q_tablewidget_qbase_visual_region_for_selection(void* self, void* selection) {
    return QTableWidget_QBaseVisualRegionForSelection((QTableWidget*)self, (QItemSelection*)selection);
}

void q_tablewidget_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*)) {
    QTableWidget_OnVisualRegionForSelection((QTableWidget*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_tablewidget_selected_indexes(void* self) {
    libqt_list _arr = QTableWidget_SelectedIndexes((QTableWidget*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_tablewidget_qbase_selected_indexes(void* self) {
    libqt_list _arr = QTableWidget_QBaseSelectedIndexes((QTableWidget*)self);
    return _arr;
}

void q_tablewidget_on_selected_indexes(void* self, QModelIndex** (*callback)()) {
    QTableWidget_OnSelectedIndexes((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_update_geometries(void* self) {
    QTableWidget_UpdateGeometries((QTableWidget*)self);
}

void q_tablewidget_qbase_update_geometries(void* self) {
    QTableWidget_QBaseUpdateGeometries((QTableWidget*)self);
}

void q_tablewidget_on_update_geometries(void* self, void (*callback)()) {
    QTableWidget_OnUpdateGeometries((QTableWidget*)self, (intptr_t)callback);
}

QSize* q_tablewidget_viewport_size_hint(void* self) {
    return QTableWidget_ViewportSizeHint((QTableWidget*)self);
}

QSize* q_tablewidget_qbase_viewport_size_hint(void* self) {
    return QTableWidget_QBaseViewportSizeHint((QTableWidget*)self);
}

void q_tablewidget_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    QTableWidget_OnViewportSizeHint((QTableWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_size_hint_for_row(void* self, int row) {
    return QTableWidget_SizeHintForRow((QTableWidget*)self, row);
}

int32_t q_tablewidget_qbase_size_hint_for_row(void* self, int row) {
    return QTableWidget_QBaseSizeHintForRow((QTableWidget*)self, row);
}

void q_tablewidget_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int)) {
    QTableWidget_OnSizeHintForRow((QTableWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_size_hint_for_column(void* self, int column) {
    return QTableWidget_SizeHintForColumn((QTableWidget*)self, column);
}

int32_t q_tablewidget_qbase_size_hint_for_column(void* self, int column) {
    return QTableWidget_QBaseSizeHintForColumn((QTableWidget*)self, column);
}

void q_tablewidget_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int)) {
    QTableWidget_OnSizeHintForColumn((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_vertical_scrollbar_action(void* self, int action) {
    QTableWidget_VerticalScrollbarAction((QTableWidget*)self, action);
}

void q_tablewidget_qbase_vertical_scrollbar_action(void* self, int action) {
    QTableWidget_QBaseVerticalScrollbarAction((QTableWidget*)self, action);
}

void q_tablewidget_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int)) {
    QTableWidget_OnVerticalScrollbarAction((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_horizontal_scrollbar_action(void* self, int action) {
    QTableWidget_HorizontalScrollbarAction((QTableWidget*)self, action);
}

void q_tablewidget_qbase_horizontal_scrollbar_action(void* self, int action) {
    QTableWidget_QBaseHorizontalScrollbarAction((QTableWidget*)self, action);
}

void q_tablewidget_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int)) {
    QTableWidget_OnHorizontalScrollbarAction((QTableWidget*)self, (intptr_t)callback);
}

bool q_tablewidget_is_index_hidden(void* self, void* index) {
    return QTableWidget_IsIndexHidden((QTableWidget*)self, (QModelIndex*)index);
}

bool q_tablewidget_qbase_is_index_hidden(void* self, void* index) {
    return QTableWidget_QBaseIsIndexHidden((QTableWidget*)self, (QModelIndex*)index);
}

void q_tablewidget_on_is_index_hidden(void* self, bool (*callback)(void*, void*)) {
    QTableWidget_OnIsIndexHidden((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_selection_changed(void* self, void* selected, void* deselected) {
    QTableWidget_SelectionChanged((QTableWidget*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_tablewidget_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QTableWidget_QBaseSelectionChanged((QTableWidget*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_tablewidget_on_selection_changed(void* self, void (*callback)(void*, void*, void*)) {
    QTableWidget_OnSelectionChanged((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_current_changed(void* self, void* current, void* previous) {
    QTableWidget_CurrentChanged((QTableWidget*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_tablewidget_qbase_current_changed(void* self, void* current, void* previous) {
    QTableWidget_QBaseCurrentChanged((QTableWidget*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_tablewidget_on_current_changed(void* self, void (*callback)(void*, void*, void*)) {
    QTableWidget_OnCurrentChanged((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_keyboard_search(void* self, const char* search) {
    QTableWidget_KeyboardSearch((QTableWidget*)self, qstring(search));
}

void q_tablewidget_qbase_keyboard_search(void* self, const char* search) {
    QTableWidget_QBaseKeyboardSearch((QTableWidget*)self, qstring(search));
}

void q_tablewidget_on_keyboard_search(void* self, void (*callback)(void*, const char*)) {
    QTableWidget_OnKeyboardSearch((QTableWidget*)self, (intptr_t)callback);
}

QAbstractItemDelegate* q_tablewidget_item_delegate_for_index(void* self, void* index) {
    return QTableWidget_ItemDelegateForIndex((QTableWidget*)self, (QModelIndex*)index);
}

QAbstractItemDelegate* q_tablewidget_qbase_item_delegate_for_index(void* self, void* index) {
    return QTableWidget_QBaseItemDelegateForIndex((QTableWidget*)self, (QModelIndex*)index);
}

void q_tablewidget_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*)) {
    QTableWidget_OnItemDelegateForIndex((QTableWidget*)self, (intptr_t)callback);
}

QVariant* q_tablewidget_input_method_query(void* self, int32_t query) {
    return QTableWidget_InputMethodQuery((QTableWidget*)self, query);
}

QVariant* q_tablewidget_qbase_input_method_query(void* self, int32_t query) {
    return QTableWidget_QBaseInputMethodQuery((QTableWidget*)self, query);
}

void q_tablewidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QTableWidget_OnInputMethodQuery((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_reset(void* self) {
    QTableWidget_Reset((QTableWidget*)self);
}

void q_tablewidget_qbase_reset(void* self) {
    QTableWidget_QBaseReset((QTableWidget*)self);
}

void q_tablewidget_on_reset(void* self, void (*callback)()) {
    QTableWidget_OnReset((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_select_all(void* self) {
    QTableWidget_SelectAll((QTableWidget*)self);
}

void q_tablewidget_qbase_select_all(void* self) {
    QTableWidget_QBaseSelectAll((QTableWidget*)self);
}

void q_tablewidget_on_select_all(void* self, void (*callback)()) {
    QTableWidget_OnSelectAll((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QTableWidget_DataChanged((QTableWidget*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_tablewidget_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QTableWidget_QBaseDataChanged((QTableWidget*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_tablewidget_on_data_changed(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QTableWidget_OnDataChanged((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_rows_inserted(void* self, void* parent, int start, int end) {
    QTableWidget_RowsInserted((QTableWidget*)self, (QModelIndex*)parent, start, end);
}

void q_tablewidget_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QTableWidget_QBaseRowsInserted((QTableWidget*)self, (QModelIndex*)parent, start, end);
}

void q_tablewidget_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QTableWidget_OnRowsInserted((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTableWidget_RowsAboutToBeRemoved((QTableWidget*)self, (QModelIndex*)parent, start, end);
}

void q_tablewidget_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTableWidget_QBaseRowsAboutToBeRemoved((QTableWidget*)self, (QModelIndex*)parent, start, end);
}

void q_tablewidget_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QTableWidget_OnRowsAboutToBeRemoved((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_update_editor_data(void* self) {
    QTableWidget_UpdateEditorData((QTableWidget*)self);
}

void q_tablewidget_qbase_update_editor_data(void* self) {
    QTableWidget_QBaseUpdateEditorData((QTableWidget*)self);
}

void q_tablewidget_on_update_editor_data(void* self, void (*callback)()) {
    QTableWidget_OnUpdateEditorData((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_update_editor_geometries(void* self) {
    QTableWidget_UpdateEditorGeometries((QTableWidget*)self);
}

void q_tablewidget_qbase_update_editor_geometries(void* self) {
    QTableWidget_QBaseUpdateEditorGeometries((QTableWidget*)self);
}

void q_tablewidget_on_update_editor_geometries(void* self, void (*callback)()) {
    QTableWidget_OnUpdateEditorGeometries((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_vertical_scrollbar_value_changed(void* self, int value) {
    QTableWidget_VerticalScrollbarValueChanged((QTableWidget*)self, value);
}

void q_tablewidget_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QTableWidget_QBaseVerticalScrollbarValueChanged((QTableWidget*)self, value);
}

void q_tablewidget_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    QTableWidget_OnVerticalScrollbarValueChanged((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_horizontal_scrollbar_value_changed(void* self, int value) {
    QTableWidget_HorizontalScrollbarValueChanged((QTableWidget*)self, value);
}

void q_tablewidget_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QTableWidget_QBaseHorizontalScrollbarValueChanged((QTableWidget*)self, value);
}

void q_tablewidget_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    QTableWidget_OnHorizontalScrollbarValueChanged((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_close_editor(void* self, void* editor, int32_t hint) {
    QTableWidget_CloseEditor((QTableWidget*)self, (QWidget*)editor, hint);
}

void q_tablewidget_qbase_close_editor(void* self, void* editor, int32_t hint) {
    QTableWidget_QBaseCloseEditor((QTableWidget*)self, (QWidget*)editor, hint);
}

void q_tablewidget_on_close_editor(void* self, void (*callback)(void*, void*, int32_t)) {
    QTableWidget_OnCloseEditor((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_commit_data(void* self, void* editor) {
    QTableWidget_CommitData((QTableWidget*)self, (QWidget*)editor);
}

void q_tablewidget_qbase_commit_data(void* self, void* editor) {
    QTableWidget_QBaseCommitData((QTableWidget*)self, (QWidget*)editor);
}

void q_tablewidget_on_commit_data(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnCommitData((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_editor_destroyed(void* self, void* editor) {
    QTableWidget_EditorDestroyed((QTableWidget*)self, (QObject*)editor);
}

void q_tablewidget_qbase_editor_destroyed(void* self, void* editor) {
    QTableWidget_QBaseEditorDestroyed((QTableWidget*)self, (QObject*)editor);
}

void q_tablewidget_on_editor_destroyed(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnEditorDestroyed((QTableWidget*)self, (intptr_t)callback);
}

bool q_tablewidget_edit2(void* self, void* index, int32_t trigger, void* event) {
    return QTableWidget_Edit2((QTableWidget*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

bool q_tablewidget_qbase_edit2(void* self, void* index, int32_t trigger, void* event) {
    return QTableWidget_QBaseEdit2((QTableWidget*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

void q_tablewidget_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*)) {
    QTableWidget_OnEdit2((QTableWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_selection_command(void* self, void* index, void* event) {
    return QTableWidget_SelectionCommand((QTableWidget*)self, (QModelIndex*)index, (QEvent*)event);
}

int32_t q_tablewidget_qbase_selection_command(void* self, void* index, void* event) {
    return QTableWidget_QBaseSelectionCommand((QTableWidget*)self, (QModelIndex*)index, (QEvent*)event);
}

void q_tablewidget_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*)) {
    QTableWidget_OnSelectionCommand((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_start_drag(void* self, int32_t supportedActions) {
    QTableWidget_StartDrag((QTableWidget*)self, supportedActions);
}

void q_tablewidget_qbase_start_drag(void* self, int32_t supportedActions) {
    QTableWidget_QBaseStartDrag((QTableWidget*)self, supportedActions);
}

void q_tablewidget_on_start_drag(void* self, void (*callback)(void*, int32_t)) {
    QTableWidget_OnStartDrag((QTableWidget*)self, (intptr_t)callback);
}

bool q_tablewidget_focus_next_prev_child(void* self, bool next) {
    return QTableWidget_FocusNextPrevChild((QTableWidget*)self, next);
}

bool q_tablewidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QTableWidget_QBaseFocusNextPrevChild((QTableWidget*)self, next);
}

void q_tablewidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QTableWidget_OnFocusNextPrevChild((QTableWidget*)self, (intptr_t)callback);
}

bool q_tablewidget_viewport_event(void* self, void* event) {
    return QTableWidget_ViewportEvent((QTableWidget*)self, (QEvent*)event);
}

bool q_tablewidget_qbase_viewport_event(void* self, void* event) {
    return QTableWidget_QBaseViewportEvent((QTableWidget*)self, (QEvent*)event);
}

void q_tablewidget_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    QTableWidget_OnViewportEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_mouse_press_event(void* self, void* event) {
    QTableWidget_MousePressEvent((QTableWidget*)self, (QMouseEvent*)event);
}

void q_tablewidget_qbase_mouse_press_event(void* self, void* event) {
    QTableWidget_QBaseMousePressEvent((QTableWidget*)self, (QMouseEvent*)event);
}

void q_tablewidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnMousePressEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_mouse_move_event(void* self, void* event) {
    QTableWidget_MouseMoveEvent((QTableWidget*)self, (QMouseEvent*)event);
}

void q_tablewidget_qbase_mouse_move_event(void* self, void* event) {
    QTableWidget_QBaseMouseMoveEvent((QTableWidget*)self, (QMouseEvent*)event);
}

void q_tablewidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnMouseMoveEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_mouse_release_event(void* self, void* event) {
    QTableWidget_MouseReleaseEvent((QTableWidget*)self, (QMouseEvent*)event);
}

void q_tablewidget_qbase_mouse_release_event(void* self, void* event) {
    QTableWidget_QBaseMouseReleaseEvent((QTableWidget*)self, (QMouseEvent*)event);
}

void q_tablewidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnMouseReleaseEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_mouse_double_click_event(void* self, void* event) {
    QTableWidget_MouseDoubleClickEvent((QTableWidget*)self, (QMouseEvent*)event);
}

void q_tablewidget_qbase_mouse_double_click_event(void* self, void* event) {
    QTableWidget_QBaseMouseDoubleClickEvent((QTableWidget*)self, (QMouseEvent*)event);
}

void q_tablewidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnMouseDoubleClickEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_drag_enter_event(void* self, void* event) {
    QTableWidget_DragEnterEvent((QTableWidget*)self, (QDragEnterEvent*)event);
}

void q_tablewidget_qbase_drag_enter_event(void* self, void* event) {
    QTableWidget_QBaseDragEnterEvent((QTableWidget*)self, (QDragEnterEvent*)event);
}

void q_tablewidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnDragEnterEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_drag_move_event(void* self, void* event) {
    QTableWidget_DragMoveEvent((QTableWidget*)self, (QDragMoveEvent*)event);
}

void q_tablewidget_qbase_drag_move_event(void* self, void* event) {
    QTableWidget_QBaseDragMoveEvent((QTableWidget*)self, (QDragMoveEvent*)event);
}

void q_tablewidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnDragMoveEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_drag_leave_event(void* self, void* event) {
    QTableWidget_DragLeaveEvent((QTableWidget*)self, (QDragLeaveEvent*)event);
}

void q_tablewidget_qbase_drag_leave_event(void* self, void* event) {
    QTableWidget_QBaseDragLeaveEvent((QTableWidget*)self, (QDragLeaveEvent*)event);
}

void q_tablewidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnDragLeaveEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_focus_in_event(void* self, void* event) {
    QTableWidget_FocusInEvent((QTableWidget*)self, (QFocusEvent*)event);
}

void q_tablewidget_qbase_focus_in_event(void* self, void* event) {
    QTableWidget_QBaseFocusInEvent((QTableWidget*)self, (QFocusEvent*)event);
}

void q_tablewidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnFocusInEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_focus_out_event(void* self, void* event) {
    QTableWidget_FocusOutEvent((QTableWidget*)self, (QFocusEvent*)event);
}

void q_tablewidget_qbase_focus_out_event(void* self, void* event) {
    QTableWidget_QBaseFocusOutEvent((QTableWidget*)self, (QFocusEvent*)event);
}

void q_tablewidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnFocusOutEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_key_press_event(void* self, void* event) {
    QTableWidget_KeyPressEvent((QTableWidget*)self, (QKeyEvent*)event);
}

void q_tablewidget_qbase_key_press_event(void* self, void* event) {
    QTableWidget_QBaseKeyPressEvent((QTableWidget*)self, (QKeyEvent*)event);
}

void q_tablewidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnKeyPressEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_resize_event(void* self, void* event) {
    QTableWidget_ResizeEvent((QTableWidget*)self, (QResizeEvent*)event);
}

void q_tablewidget_qbase_resize_event(void* self, void* event) {
    QTableWidget_QBaseResizeEvent((QTableWidget*)self, (QResizeEvent*)event);
}

void q_tablewidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnResizeEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_input_method_event(void* self, void* event) {
    QTableWidget_InputMethodEvent((QTableWidget*)self, (QInputMethodEvent*)event);
}

void q_tablewidget_qbase_input_method_event(void* self, void* event) {
    QTableWidget_QBaseInputMethodEvent((QTableWidget*)self, (QInputMethodEvent*)event);
}

void q_tablewidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnInputMethodEvent((QTableWidget*)self, (intptr_t)callback);
}

bool q_tablewidget_event_filter(void* self, void* object, void* event) {
    return QTableWidget_EventFilter((QTableWidget*)self, (QObject*)object, (QEvent*)event);
}

bool q_tablewidget_qbase_event_filter(void* self, void* object, void* event) {
    return QTableWidget_QBaseEventFilter((QTableWidget*)self, (QObject*)object, (QEvent*)event);
}

void q_tablewidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTableWidget_OnEventFilter((QTableWidget*)self, (intptr_t)callback);
}

QSize* q_tablewidget_minimum_size_hint(void* self) {
    return QTableWidget_MinimumSizeHint((QTableWidget*)self);
}

QSize* q_tablewidget_qbase_minimum_size_hint(void* self) {
    return QTableWidget_QBaseMinimumSizeHint((QTableWidget*)self);
}

void q_tablewidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QTableWidget_OnMinimumSizeHint((QTableWidget*)self, (intptr_t)callback);
}

QSize* q_tablewidget_size_hint(void* self) {
    return QTableWidget_SizeHint((QTableWidget*)self);
}

QSize* q_tablewidget_qbase_size_hint(void* self) {
    return QTableWidget_QBaseSizeHint((QTableWidget*)self);
}

void q_tablewidget_on_size_hint(void* self, QSize* (*callback)()) {
    QTableWidget_OnSizeHint((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_setup_viewport(void* self, void* viewport) {
    QTableWidget_SetupViewport((QTableWidget*)self, (QWidget*)viewport);
}

void q_tablewidget_qbase_setup_viewport(void* self, void* viewport) {
    QTableWidget_QBaseSetupViewport((QTableWidget*)self, (QWidget*)viewport);
}

void q_tablewidget_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnSetupViewport((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_wheel_event(void* self, void* param1) {
    QTableWidget_WheelEvent((QTableWidget*)self, (QWheelEvent*)param1);
}

void q_tablewidget_qbase_wheel_event(void* self, void* param1) {
    QTableWidget_QBaseWheelEvent((QTableWidget*)self, (QWheelEvent*)param1);
}

void q_tablewidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnWheelEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_context_menu_event(void* self, void* param1) {
    QTableWidget_ContextMenuEvent((QTableWidget*)self, (QContextMenuEvent*)param1);
}

void q_tablewidget_qbase_context_menu_event(void* self, void* param1) {
    QTableWidget_QBaseContextMenuEvent((QTableWidget*)self, (QContextMenuEvent*)param1);
}

void q_tablewidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnContextMenuEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_change_event(void* self, void* param1) {
    QTableWidget_ChangeEvent((QTableWidget*)self, (QEvent*)param1);
}

void q_tablewidget_qbase_change_event(void* self, void* param1) {
    QTableWidget_QBaseChangeEvent((QTableWidget*)self, (QEvent*)param1);
}

void q_tablewidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnChangeEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_init_style_option(void* self, void* option) {
    QTableWidget_InitStyleOption((QTableWidget*)self, (QStyleOptionFrame*)option);
}

void q_tablewidget_qbase_init_style_option(void* self, void* option) {
    QTableWidget_QBaseInitStyleOption((QTableWidget*)self, (QStyleOptionFrame*)option);
}

void q_tablewidget_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnInitStyleOption((QTableWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_dev_type(void* self) {
    return QTableWidget_DevType((QTableWidget*)self);
}

int32_t q_tablewidget_qbase_dev_type(void* self) {
    return QTableWidget_QBaseDevType((QTableWidget*)self);
}

void q_tablewidget_on_dev_type(void* self, int32_t (*callback)()) {
    QTableWidget_OnDevType((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_set_visible(void* self, bool visible) {
    QTableWidget_SetVisible((QTableWidget*)self, visible);
}

void q_tablewidget_qbase_set_visible(void* self, bool visible) {
    QTableWidget_QBaseSetVisible((QTableWidget*)self, visible);
}

void q_tablewidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QTableWidget_OnSetVisible((QTableWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_height_for_width(void* self, int param1) {
    return QTableWidget_HeightForWidth((QTableWidget*)self, param1);
}

int32_t q_tablewidget_qbase_height_for_width(void* self, int param1) {
    return QTableWidget_QBaseHeightForWidth((QTableWidget*)self, param1);
}

void q_tablewidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QTableWidget_OnHeightForWidth((QTableWidget*)self, (intptr_t)callback);
}

bool q_tablewidget_has_height_for_width(void* self) {
    return QTableWidget_HasHeightForWidth((QTableWidget*)self);
}

bool q_tablewidget_qbase_has_height_for_width(void* self) {
    return QTableWidget_QBaseHasHeightForWidth((QTableWidget*)self);
}

void q_tablewidget_on_has_height_for_width(void* self, bool (*callback)()) {
    QTableWidget_OnHasHeightForWidth((QTableWidget*)self, (intptr_t)callback);
}

QPaintEngine* q_tablewidget_paint_engine(void* self) {
    return QTableWidget_PaintEngine((QTableWidget*)self);
}

QPaintEngine* q_tablewidget_qbase_paint_engine(void* self) {
    return QTableWidget_QBasePaintEngine((QTableWidget*)self);
}

void q_tablewidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QTableWidget_OnPaintEngine((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_key_release_event(void* self, void* event) {
    QTableWidget_KeyReleaseEvent((QTableWidget*)self, (QKeyEvent*)event);
}

void q_tablewidget_qbase_key_release_event(void* self, void* event) {
    QTableWidget_QBaseKeyReleaseEvent((QTableWidget*)self, (QKeyEvent*)event);
}

void q_tablewidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnKeyReleaseEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_enter_event(void* self, void* event) {
    QTableWidget_EnterEvent((QTableWidget*)self, (QEnterEvent*)event);
}

void q_tablewidget_qbase_enter_event(void* self, void* event) {
    QTableWidget_QBaseEnterEvent((QTableWidget*)self, (QEnterEvent*)event);
}

void q_tablewidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnEnterEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_leave_event(void* self, void* event) {
    QTableWidget_LeaveEvent((QTableWidget*)self, (QEvent*)event);
}

void q_tablewidget_qbase_leave_event(void* self, void* event) {
    QTableWidget_QBaseLeaveEvent((QTableWidget*)self, (QEvent*)event);
}

void q_tablewidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnLeaveEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_move_event(void* self, void* event) {
    QTableWidget_MoveEvent((QTableWidget*)self, (QMoveEvent*)event);
}

void q_tablewidget_qbase_move_event(void* self, void* event) {
    QTableWidget_QBaseMoveEvent((QTableWidget*)self, (QMoveEvent*)event);
}

void q_tablewidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnMoveEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_close_event(void* self, void* event) {
    QTableWidget_CloseEvent((QTableWidget*)self, (QCloseEvent*)event);
}

void q_tablewidget_qbase_close_event(void* self, void* event) {
    QTableWidget_QBaseCloseEvent((QTableWidget*)self, (QCloseEvent*)event);
}

void q_tablewidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnCloseEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_tablet_event(void* self, void* event) {
    QTableWidget_TabletEvent((QTableWidget*)self, (QTabletEvent*)event);
}

void q_tablewidget_qbase_tablet_event(void* self, void* event) {
    QTableWidget_QBaseTabletEvent((QTableWidget*)self, (QTabletEvent*)event);
}

void q_tablewidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnTabletEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_action_event(void* self, void* event) {
    QTableWidget_ActionEvent((QTableWidget*)self, (QActionEvent*)event);
}

void q_tablewidget_qbase_action_event(void* self, void* event) {
    QTableWidget_QBaseActionEvent((QTableWidget*)self, (QActionEvent*)event);
}

void q_tablewidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnActionEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_show_event(void* self, void* event) {
    QTableWidget_ShowEvent((QTableWidget*)self, (QShowEvent*)event);
}

void q_tablewidget_qbase_show_event(void* self, void* event) {
    QTableWidget_QBaseShowEvent((QTableWidget*)self, (QShowEvent*)event);
}

void q_tablewidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnShowEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_hide_event(void* self, void* event) {
    QTableWidget_HideEvent((QTableWidget*)self, (QHideEvent*)event);
}

void q_tablewidget_qbase_hide_event(void* self, void* event) {
    QTableWidget_QBaseHideEvent((QTableWidget*)self, (QHideEvent*)event);
}

void q_tablewidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnHideEvent((QTableWidget*)self, (intptr_t)callback);
}

bool q_tablewidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTableWidget_NativeEvent((QTableWidget*)self, qstring(eventType), message, result);
}

bool q_tablewidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTableWidget_QBaseNativeEvent((QTableWidget*)self, qstring(eventType), message, result);
}

void q_tablewidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QTableWidget_OnNativeEvent((QTableWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_metric(void* self, int32_t param1) {
    return QTableWidget_Metric((QTableWidget*)self, param1);
}

int32_t q_tablewidget_qbase_metric(void* self, int32_t param1) {
    return QTableWidget_QBaseMetric((QTableWidget*)self, param1);
}

void q_tablewidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QTableWidget_OnMetric((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_init_painter(void* self, void* painter) {
    QTableWidget_InitPainter((QTableWidget*)self, (QPainter*)painter);
}

void q_tablewidget_qbase_init_painter(void* self, void* painter) {
    QTableWidget_QBaseInitPainter((QTableWidget*)self, (QPainter*)painter);
}

void q_tablewidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnInitPainter((QTableWidget*)self, (intptr_t)callback);
}

QPaintDevice* q_tablewidget_redirected(void* self, void* offset) {
    return QTableWidget_Redirected((QTableWidget*)self, (QPoint*)offset);
}

QPaintDevice* q_tablewidget_qbase_redirected(void* self, void* offset) {
    return QTableWidget_QBaseRedirected((QTableWidget*)self, (QPoint*)offset);
}

void q_tablewidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QTableWidget_OnRedirected((QTableWidget*)self, (intptr_t)callback);
}

QPainter* q_tablewidget_shared_painter(void* self) {
    return QTableWidget_SharedPainter((QTableWidget*)self);
}

QPainter* q_tablewidget_qbase_shared_painter(void* self) {
    return QTableWidget_QBaseSharedPainter((QTableWidget*)self);
}

void q_tablewidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    QTableWidget_OnSharedPainter((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_child_event(void* self, void* event) {
    QTableWidget_ChildEvent((QTableWidget*)self, (QChildEvent*)event);
}

void q_tablewidget_qbase_child_event(void* self, void* event) {
    QTableWidget_QBaseChildEvent((QTableWidget*)self, (QChildEvent*)event);
}

void q_tablewidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnChildEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_custom_event(void* self, void* event) {
    QTableWidget_CustomEvent((QTableWidget*)self, (QEvent*)event);
}

void q_tablewidget_qbase_custom_event(void* self, void* event) {
    QTableWidget_QBaseCustomEvent((QTableWidget*)self, (QEvent*)event);
}

void q_tablewidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnCustomEvent((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_connect_notify(void* self, void* signal) {
    QTableWidget_ConnectNotify((QTableWidget*)self, (QMetaMethod*)signal);
}

void q_tablewidget_qbase_connect_notify(void* self, void* signal) {
    QTableWidget_QBaseConnectNotify((QTableWidget*)self, (QMetaMethod*)signal);
}

void q_tablewidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnConnectNotify((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_disconnect_notify(void* self, void* signal) {
    QTableWidget_DisconnectNotify((QTableWidget*)self, (QMetaMethod*)signal);
}

void q_tablewidget_qbase_disconnect_notify(void* self, void* signal) {
    QTableWidget_QBaseDisconnectNotify((QTableWidget*)self, (QMetaMethod*)signal);
}

void q_tablewidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnDisconnectNotify((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_row_moved(void* self, int row, int oldIndex, int newIndex) {
    QTableWidget_RowMoved((QTableWidget*)self, row, oldIndex, newIndex);
}

void q_tablewidget_qbase_row_moved(void* self, int row, int oldIndex, int newIndex) {
    QTableWidget_QBaseRowMoved((QTableWidget*)self, row, oldIndex, newIndex);
}

void q_tablewidget_on_row_moved(void* self, void (*callback)(void*, int, int, int)) {
    QTableWidget_OnRowMoved((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_column_moved(void* self, int column, int oldIndex, int newIndex) {
    QTableWidget_ColumnMoved((QTableWidget*)self, column, oldIndex, newIndex);
}

void q_tablewidget_qbase_column_moved(void* self, int column, int oldIndex, int newIndex) {
    QTableWidget_QBaseColumnMoved((QTableWidget*)self, column, oldIndex, newIndex);
}

void q_tablewidget_on_column_moved(void* self, void (*callback)(void*, int, int, int)) {
    QTableWidget_OnColumnMoved((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_row_resized(void* self, int row, int oldHeight, int newHeight) {
    QTableWidget_RowResized((QTableWidget*)self, row, oldHeight, newHeight);
}

void q_tablewidget_qbase_row_resized(void* self, int row, int oldHeight, int newHeight) {
    QTableWidget_QBaseRowResized((QTableWidget*)self, row, oldHeight, newHeight);
}

void q_tablewidget_on_row_resized(void* self, void (*callback)(void*, int, int, int)) {
    QTableWidget_OnRowResized((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_column_resized(void* self, int column, int oldWidth, int newWidth) {
    QTableWidget_ColumnResized((QTableWidget*)self, column, oldWidth, newWidth);
}

void q_tablewidget_qbase_column_resized(void* self, int column, int oldWidth, int newWidth) {
    QTableWidget_QBaseColumnResized((QTableWidget*)self, column, oldWidth, newWidth);
}

void q_tablewidget_on_column_resized(void* self, void (*callback)(void*, int, int, int)) {
    QTableWidget_OnColumnResized((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_row_count_changed(void* self, int oldCount, int newCount) {
    QTableWidget_RowCountChanged((QTableWidget*)self, oldCount, newCount);
}

void q_tablewidget_qbase_row_count_changed(void* self, int oldCount, int newCount) {
    QTableWidget_QBaseRowCountChanged((QTableWidget*)self, oldCount, newCount);
}

void q_tablewidget_on_row_count_changed(void* self, void (*callback)(void*, int, int)) {
    QTableWidget_OnRowCountChanged((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_column_count_changed(void* self, int oldCount, int newCount) {
    QTableWidget_ColumnCountChanged((QTableWidget*)self, oldCount, newCount);
}

void q_tablewidget_qbase_column_count_changed(void* self, int oldCount, int newCount) {
    QTableWidget_QBaseColumnCountChanged((QTableWidget*)self, oldCount, newCount);
}

void q_tablewidget_on_column_count_changed(void* self, void (*callback)(void*, int, int)) {
    QTableWidget_OnColumnCountChanged((QTableWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_state(void* self) {
    return QTableWidget_State((QTableWidget*)self);
}

int32_t q_tablewidget_qbase_state(void* self) {
    return QTableWidget_QBaseState((QTableWidget*)self);
}

void q_tablewidget_on_state(void* self, int32_t (*callback)()) {
    QTableWidget_OnState((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_set_state(void* self, int32_t state) {
    QTableWidget_SetState((QTableWidget*)self, state);
}

void q_tablewidget_qbase_set_state(void* self, int32_t state) {
    QTableWidget_QBaseSetState((QTableWidget*)self, state);
}

void q_tablewidget_on_set_state(void* self, void (*callback)(void*, int32_t)) {
    QTableWidget_OnSetState((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_schedule_delayed_items_layout(void* self) {
    QTableWidget_ScheduleDelayedItemsLayout((QTableWidget*)self);
}

void q_tablewidget_qbase_schedule_delayed_items_layout(void* self) {
    QTableWidget_QBaseScheduleDelayedItemsLayout((QTableWidget*)self);
}

void q_tablewidget_on_schedule_delayed_items_layout(void* self, void (*callback)()) {
    QTableWidget_OnScheduleDelayedItemsLayout((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_execute_delayed_items_layout(void* self) {
    QTableWidget_ExecuteDelayedItemsLayout((QTableWidget*)self);
}

void q_tablewidget_qbase_execute_delayed_items_layout(void* self) {
    QTableWidget_QBaseExecuteDelayedItemsLayout((QTableWidget*)self);
}

void q_tablewidget_on_execute_delayed_items_layout(void* self, void (*callback)()) {
    QTableWidget_OnExecuteDelayedItemsLayout((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_set_dirty_region(void* self, void* region) {
    QTableWidget_SetDirtyRegion((QTableWidget*)self, (QRegion*)region);
}

void q_tablewidget_qbase_set_dirty_region(void* self, void* region) {
    QTableWidget_QBaseSetDirtyRegion((QTableWidget*)self, (QRegion*)region);
}

void q_tablewidget_on_set_dirty_region(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnSetDirtyRegion((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_scroll_dirty_region(void* self, int dx, int dy) {
    QTableWidget_ScrollDirtyRegion((QTableWidget*)self, dx, dy);
}

void q_tablewidget_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QTableWidget_QBaseScrollDirtyRegion((QTableWidget*)self, dx, dy);
}

void q_tablewidget_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int)) {
    QTableWidget_OnScrollDirtyRegion((QTableWidget*)self, (intptr_t)callback);
}

QPoint* q_tablewidget_dirty_region_offset(void* self) {
    return QTableWidget_DirtyRegionOffset((QTableWidget*)self);
}

QPoint* q_tablewidget_qbase_dirty_region_offset(void* self) {
    return QTableWidget_QBaseDirtyRegionOffset((QTableWidget*)self);
}

void q_tablewidget_on_dirty_region_offset(void* self, QPoint* (*callback)()) {
    QTableWidget_OnDirtyRegionOffset((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_start_auto_scroll(void* self) {
    QTableWidget_StartAutoScroll((QTableWidget*)self);
}

void q_tablewidget_qbase_start_auto_scroll(void* self) {
    QTableWidget_QBaseStartAutoScroll((QTableWidget*)self);
}

void q_tablewidget_on_start_auto_scroll(void* self, void (*callback)()) {
    QTableWidget_OnStartAutoScroll((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_stop_auto_scroll(void* self) {
    QTableWidget_StopAutoScroll((QTableWidget*)self);
}

void q_tablewidget_qbase_stop_auto_scroll(void* self) {
    QTableWidget_QBaseStopAutoScroll((QTableWidget*)self);
}

void q_tablewidget_on_stop_auto_scroll(void* self, void (*callback)()) {
    QTableWidget_OnStopAutoScroll((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_do_auto_scroll(void* self) {
    QTableWidget_DoAutoScroll((QTableWidget*)self);
}

void q_tablewidget_qbase_do_auto_scroll(void* self) {
    QTableWidget_QBaseDoAutoScroll((QTableWidget*)self);
}

void q_tablewidget_on_do_auto_scroll(void* self, void (*callback)()) {
    QTableWidget_OnDoAutoScroll((QTableWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_drop_indicator_position(void* self) {
    return QTableWidget_DropIndicatorPosition((QTableWidget*)self);
}

int32_t q_tablewidget_qbase_drop_indicator_position(void* self) {
    return QTableWidget_QBaseDropIndicatorPosition((QTableWidget*)self);
}

void q_tablewidget_on_drop_indicator_position(void* self, int32_t (*callback)()) {
    QTableWidget_OnDropIndicatorPosition((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTableWidget_SetViewportMargins((QTableWidget*)self, left, top, right, bottom);
}

void q_tablewidget_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTableWidget_QBaseSetViewportMargins((QTableWidget*)self, left, top, right, bottom);
}

void q_tablewidget_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    QTableWidget_OnSetViewportMargins((QTableWidget*)self, (intptr_t)callback);
}

QMargins* q_tablewidget_viewport_margins(void* self) {
    return QTableWidget_ViewportMargins((QTableWidget*)self);
}

QMargins* q_tablewidget_qbase_viewport_margins(void* self) {
    return QTableWidget_QBaseViewportMargins((QTableWidget*)self);
}

void q_tablewidget_on_viewport_margins(void* self, QMargins* (*callback)()) {
    QTableWidget_OnViewportMargins((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_draw_frame(void* self, void* param1) {
    QTableWidget_DrawFrame((QTableWidget*)self, (QPainter*)param1);
}

void q_tablewidget_qbase_draw_frame(void* self, void* param1) {
    QTableWidget_QBaseDrawFrame((QTableWidget*)self, (QPainter*)param1);
}

void q_tablewidget_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    QTableWidget_OnDrawFrame((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_update_micro_focus(void* self) {
    QTableWidget_UpdateMicroFocus((QTableWidget*)self);
}

void q_tablewidget_qbase_update_micro_focus(void* self) {
    QTableWidget_QBaseUpdateMicroFocus((QTableWidget*)self);
}

void q_tablewidget_on_update_micro_focus(void* self, void (*callback)()) {
    QTableWidget_OnUpdateMicroFocus((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_create(void* self) {
    QTableWidget_Create((QTableWidget*)self);
}

void q_tablewidget_qbase_create(void* self) {
    QTableWidget_QBaseCreate((QTableWidget*)self);
}

void q_tablewidget_on_create(void* self, void (*callback)()) {
    QTableWidget_OnCreate((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_destroy(void* self) {
    QTableWidget_Destroy((QTableWidget*)self);
}

void q_tablewidget_qbase_destroy(void* self) {
    QTableWidget_QBaseDestroy((QTableWidget*)self);
}

void q_tablewidget_on_destroy(void* self, void (*callback)()) {
    QTableWidget_OnDestroy((QTableWidget*)self, (intptr_t)callback);
}

bool q_tablewidget_focus_next_child(void* self) {
    return QTableWidget_FocusNextChild((QTableWidget*)self);
}

bool q_tablewidget_qbase_focus_next_child(void* self) {
    return QTableWidget_QBaseFocusNextChild((QTableWidget*)self);
}

void q_tablewidget_on_focus_next_child(void* self, bool (*callback)()) {
    QTableWidget_OnFocusNextChild((QTableWidget*)self, (intptr_t)callback);
}

bool q_tablewidget_focus_previous_child(void* self) {
    return QTableWidget_FocusPreviousChild((QTableWidget*)self);
}

bool q_tablewidget_qbase_focus_previous_child(void* self) {
    return QTableWidget_QBaseFocusPreviousChild((QTableWidget*)self);
}

void q_tablewidget_on_focus_previous_child(void* self, bool (*callback)()) {
    QTableWidget_OnFocusPreviousChild((QTableWidget*)self, (intptr_t)callback);
}

QObject* q_tablewidget_sender(void* self) {
    return QTableWidget_Sender((QTableWidget*)self);
}

QObject* q_tablewidget_qbase_sender(void* self) {
    return QTableWidget_QBaseSender((QTableWidget*)self);
}

void q_tablewidget_on_sender(void* self, QObject* (*callback)()) {
    QTableWidget_OnSender((QTableWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_sender_signal_index(void* self) {
    return QTableWidget_SenderSignalIndex((QTableWidget*)self);
}

int32_t q_tablewidget_qbase_sender_signal_index(void* self) {
    return QTableWidget_QBaseSenderSignalIndex((QTableWidget*)self);
}

void q_tablewidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QTableWidget_OnSenderSignalIndex((QTableWidget*)self, (intptr_t)callback);
}

int32_t q_tablewidget_receivers(void* self, const char* signal) {
    return QTableWidget_Receivers((QTableWidget*)self, signal);
}

int32_t q_tablewidget_qbase_receivers(void* self, const char* signal) {
    return QTableWidget_QBaseReceivers((QTableWidget*)self, signal);
}

void q_tablewidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QTableWidget_OnReceivers((QTableWidget*)self, (intptr_t)callback);
}

bool q_tablewidget_is_signal_connected(void* self, void* signal) {
    return QTableWidget_IsSignalConnected((QTableWidget*)self, (QMetaMethod*)signal);
}

bool q_tablewidget_qbase_is_signal_connected(void* self, void* signal) {
    return QTableWidget_QBaseIsSignalConnected((QTableWidget*)self, (QMetaMethod*)signal);
}

void q_tablewidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QTableWidget_OnIsSignalConnected((QTableWidget*)self, (intptr_t)callback);
}

double q_tablewidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QTableWidget_GetDecodedMetricF((QTableWidget*)self, metricA, metricB);
}

double q_tablewidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QTableWidget_QBaseGetDecodedMetricF((QTableWidget*)self, metricA, metricB);
}

void q_tablewidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QTableWidget_OnGetDecodedMetricF((QTableWidget*)self, (intptr_t)callback);
}

void q_tablewidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_tablewidget_delete(void* self) {
    QTableWidget_Delete((QTableWidget*)(self));
}
