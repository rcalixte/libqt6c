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
#include "libqlistview.hpp"
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
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqlistwidget.hpp"
#include "libqlistwidget.h"

QListWidgetItem* q_listwidgetitem_new() {
    return QListWidgetItem_new();
}

QListWidgetItem* q_listwidgetitem_new2(const char* text) {
    return QListWidgetItem_new2(qstring(text));
}

QListWidgetItem* q_listwidgetitem_new3(void* icon, const char* text) {
    return QListWidgetItem_new3((QIcon*)icon, qstring(text));
}

QListWidgetItem* q_listwidgetitem_new4(void* other) {
    return QListWidgetItem_new4((QListWidgetItem*)other);
}

QListWidgetItem* q_listwidgetitem_new5(void* listview) {
    return QListWidgetItem_new5((QListWidget*)listview);
}

QListWidgetItem* q_listwidgetitem_new6(void* listview, int typeVal) {
    return QListWidgetItem_new6((QListWidget*)listview, typeVal);
}

QListWidgetItem* q_listwidgetitem_new7(const char* text, void* listview) {
    return QListWidgetItem_new7(qstring(text), (QListWidget*)listview);
}

QListWidgetItem* q_listwidgetitem_new8(const char* text, void* listview, int typeVal) {
    return QListWidgetItem_new8(qstring(text), (QListWidget*)listview, typeVal);
}

QListWidgetItem* q_listwidgetitem_new9(void* icon, const char* text, void* listview) {
    return QListWidgetItem_new9((QIcon*)icon, qstring(text), (QListWidget*)listview);
}

QListWidgetItem* q_listwidgetitem_new10(void* icon, const char* text, void* listview, int typeVal) {
    return QListWidgetItem_new10((QIcon*)icon, qstring(text), (QListWidget*)listview, typeVal);
}

QListWidgetItem* q_listwidgetitem_clone(void* self) {
    return QListWidgetItem_Clone((QListWidgetItem*)self);
}

void q_listwidgetitem_on_clone(void* self, QListWidgetItem* (*callback)()) {
    QListWidgetItem_OnClone((QListWidgetItem*)self, (intptr_t)callback);
}

QListWidgetItem* q_listwidgetitem_qbase_clone(void* self) {
    return QListWidgetItem_QBaseClone((QListWidgetItem*)self);
}

QListWidget* q_listwidgetitem_list_widget(void* self) {
    return QListWidgetItem_ListWidget((QListWidgetItem*)self);
}

void q_listwidgetitem_set_selected(void* self, bool selectVal) {
    QListWidgetItem_SetSelected((QListWidgetItem*)self, selectVal);
}

bool q_listwidgetitem_is_selected(void* self) {
    return QListWidgetItem_IsSelected((QListWidgetItem*)self);
}

void q_listwidgetitem_set_hidden(void* self, bool hide) {
    QListWidgetItem_SetHidden((QListWidgetItem*)self, hide);
}

bool q_listwidgetitem_is_hidden(void* self) {
    return QListWidgetItem_IsHidden((QListWidgetItem*)self);
}

int64_t q_listwidgetitem_flags(void* self) {
    return QListWidgetItem_Flags((QListWidgetItem*)self);
}

void q_listwidgetitem_set_flags(void* self, int64_t flags) {
    QListWidgetItem_SetFlags((QListWidgetItem*)self, flags);
}

const char* q_listwidgetitem_text(void* self) {
    libqt_string _str = QListWidgetItem_Text((QListWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidgetitem_set_text(void* self, const char* text) {
    QListWidgetItem_SetText((QListWidgetItem*)self, qstring(text));
}

QIcon* q_listwidgetitem_icon(void* self) {
    return QListWidgetItem_Icon((QListWidgetItem*)self);
}

void q_listwidgetitem_set_icon(void* self, void* icon) {
    QListWidgetItem_SetIcon((QListWidgetItem*)self, (QIcon*)icon);
}

const char* q_listwidgetitem_status_tip(void* self) {
    libqt_string _str = QListWidgetItem_StatusTip((QListWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidgetitem_set_status_tip(void* self, const char* statusTip) {
    QListWidgetItem_SetStatusTip((QListWidgetItem*)self, qstring(statusTip));
}

const char* q_listwidgetitem_tool_tip(void* self) {
    libqt_string _str = QListWidgetItem_ToolTip((QListWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidgetitem_set_tool_tip(void* self, const char* toolTip) {
    QListWidgetItem_SetToolTip((QListWidgetItem*)self, qstring(toolTip));
}

const char* q_listwidgetitem_whats_this(void* self) {
    libqt_string _str = QListWidgetItem_WhatsThis((QListWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidgetitem_set_whats_this(void* self, const char* whatsThis) {
    QListWidgetItem_SetWhatsThis((QListWidgetItem*)self, qstring(whatsThis));
}

QFont* q_listwidgetitem_font(void* self) {
    return QListWidgetItem_Font((QListWidgetItem*)self);
}

void q_listwidgetitem_set_font(void* self, void* font) {
    QListWidgetItem_SetFont((QListWidgetItem*)self, (QFont*)font);
}

int32_t q_listwidgetitem_text_alignment(void* self) {
    return QListWidgetItem_TextAlignment((QListWidgetItem*)self);
}

void q_listwidgetitem_set_text_alignment(void* self, int alignment) {
    QListWidgetItem_SetTextAlignment((QListWidgetItem*)self, alignment);
}

void q_listwidgetitem_set_text_alignment2(void* self, int64_t alignment) {
    QListWidgetItem_SetTextAlignment2((QListWidgetItem*)self, alignment);
}

void q_listwidgetitem_set_text_alignment3(void* self, int64_t alignment) {
    QListWidgetItem_SetTextAlignment3((QListWidgetItem*)self, alignment);
}

QBrush* q_listwidgetitem_background(void* self) {
    return QListWidgetItem_Background((QListWidgetItem*)self);
}

void q_listwidgetitem_set_background(void* self, void* brush) {
    QListWidgetItem_SetBackground((QListWidgetItem*)self, (QBrush*)brush);
}

QBrush* q_listwidgetitem_foreground(void* self) {
    return QListWidgetItem_Foreground((QListWidgetItem*)self);
}

void q_listwidgetitem_set_foreground(void* self, void* brush) {
    QListWidgetItem_SetForeground((QListWidgetItem*)self, (QBrush*)brush);
}

int64_t q_listwidgetitem_check_state(void* self) {
    return QListWidgetItem_CheckState((QListWidgetItem*)self);
}

void q_listwidgetitem_set_check_state(void* self, int64_t state) {
    QListWidgetItem_SetCheckState((QListWidgetItem*)self, state);
}

QSize* q_listwidgetitem_size_hint(void* self) {
    return QListWidgetItem_SizeHint((QListWidgetItem*)self);
}

void q_listwidgetitem_set_size_hint(void* self, void* size) {
    QListWidgetItem_SetSizeHint((QListWidgetItem*)self, (QSize*)size);
}

QVariant* q_listwidgetitem_data(void* self, int role) {
    return QListWidgetItem_Data((QListWidgetItem*)self, role);
}

void q_listwidgetitem_on_data(void* self, QVariant* (*callback)(void*, int)) {
    QListWidgetItem_OnData((QListWidgetItem*)self, (intptr_t)callback);
}

QVariant* q_listwidgetitem_qbase_data(void* self, int role) {
    return QListWidgetItem_QBaseData((QListWidgetItem*)self, role);
}

void q_listwidgetitem_set_data(void* self, int role, void* value) {
    QListWidgetItem_SetData((QListWidgetItem*)self, role, (QVariant*)value);
}

void q_listwidgetitem_on_set_data(void* self, void (*callback)(void*, int, void*)) {
    QListWidgetItem_OnSetData((QListWidgetItem*)self, (intptr_t)callback);
}

void q_listwidgetitem_qbase_set_data(void* self, int role, void* value) {
    QListWidgetItem_QBaseSetData((QListWidgetItem*)self, role, (QVariant*)value);
}

bool q_listwidgetitem_operator_lesser(void* self, void* other) {
    return QListWidgetItem_OperatorLesser((QListWidgetItem*)self, (QListWidgetItem*)other);
}

void q_listwidgetitem_on_operator_lesser(void* self, bool (*callback)(void*, void*)) {
    QListWidgetItem_OnOperatorLesser((QListWidgetItem*)self, (intptr_t)callback);
}

bool q_listwidgetitem_qbase_operator_lesser(void* self, void* other) {
    return QListWidgetItem_QBaseOperatorLesser((QListWidgetItem*)self, (QListWidgetItem*)other);
}

void q_listwidgetitem_read(void* self, void* in) {
    QListWidgetItem_Read((QListWidgetItem*)self, (QDataStream*)in);
}

void q_listwidgetitem_on_read(void* self, void (*callback)(void*, void*)) {
    QListWidgetItem_OnRead((QListWidgetItem*)self, (intptr_t)callback);
}

void q_listwidgetitem_qbase_read(void* self, void* in) {
    QListWidgetItem_QBaseRead((QListWidgetItem*)self, (QDataStream*)in);
}

void q_listwidgetitem_write(void* self, void* out) {
    QListWidgetItem_Write((QListWidgetItem*)self, (QDataStream*)out);
}

void q_listwidgetitem_on_write(void* self, void (*callback)(void*, void*)) {
    QListWidgetItem_OnWrite((QListWidgetItem*)self, (intptr_t)callback);
}

void q_listwidgetitem_qbase_write(void* self, void* out) {
    QListWidgetItem_QBaseWrite((QListWidgetItem*)self, (QDataStream*)out);
}

void q_listwidgetitem_operator_assign(void* self, void* other) {
    QListWidgetItem_OperatorAssign((QListWidgetItem*)self, (QListWidgetItem*)other);
}

int32_t q_listwidgetitem_type(void* self) {
    return QListWidgetItem_Type((QListWidgetItem*)self);
}

void q_listwidgetitem_delete(void* self) {
    QListWidgetItem_Delete((QListWidgetItem*)(self));
}

QListWidget* q_listwidget_new(void* parent) {
    return QListWidget_new((QWidget*)parent);
}

QListWidget* q_listwidget_new2() {
    return QListWidget_new2();
}

const QMetaObject* q_listwidget_meta_object(void* self) {
    return QListWidget_MetaObject((QListWidget*)self);
}

void* q_listwidget_metacast(void* self, const char* param1) {
    return QListWidget_Metacast((QListWidget*)self, param1);
}

int32_t q_listwidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QListWidget_Metacall((QListWidget*)self, param1, param2, param3);
}

void q_listwidget_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QListWidget_OnMetacall((QListWidget*)self, (intptr_t)callback);
}

int32_t q_listwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QListWidget_QBaseMetacall((QListWidget*)self, param1, param2, param3);
}

const char* q_listwidget_tr(const char* s) {
    libqt_string _str = QListWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidget_set_selection_model(void* self, void* selectionModel) {
    QListWidget_SetSelectionModel((QListWidget*)self, (QItemSelectionModel*)selectionModel);
}

void q_listwidget_on_set_selection_model(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnSetSelectionModel((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_qbase_set_selection_model(void* self, void* selectionModel) {
    QListWidget_QBaseSetSelectionModel((QListWidget*)self, (QItemSelectionModel*)selectionModel);
}

QListWidgetItem* q_listwidget_item(void* self, int row) {
    return QListWidget_Item((QListWidget*)self, row);
}

int32_t q_listwidget_row(void* self, void* item) {
    return QListWidget_Row((QListWidget*)self, (QListWidgetItem*)item);
}

void q_listwidget_insert_item(void* self, int row, void* item) {
    QListWidget_InsertItem((QListWidget*)self, row, (QListWidgetItem*)item);
}

void q_listwidget_insert_item2(void* self, int row, const char* label) {
    QListWidget_InsertItem2((QListWidget*)self, row, qstring(label));
}

void q_listwidget_insert_items(void* self, int row, const char* labels[]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_listwidget_insert_items");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i) {
        labels_qstr[i] = qstring(labels[i]);
    }
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QListWidget_InsertItems((QListWidget*)self, row, labels_list);
    free(labels_qstr);
}

void q_listwidget_add_item(void* self, const char* label) {
    QListWidget_AddItem((QListWidget*)self, qstring(label));
}

void q_listwidget_add_item2(void* self, void* item) {
    QListWidget_AddItem2((QListWidget*)self, (QListWidgetItem*)item);
}

void q_listwidget_add_items(void* self, const char* labels[]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_listwidget_add_items");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i) {
        labels_qstr[i] = qstring(labels[i]);
    }
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QListWidget_AddItems((QListWidget*)self, labels_list);
    free(labels_qstr);
}

QListWidgetItem* q_listwidget_take_item(void* self, int row) {
    return QListWidget_TakeItem((QListWidget*)self, row);
}

int32_t q_listwidget_count(void* self) {
    return QListWidget_Count((QListWidget*)self);
}

QListWidgetItem* q_listwidget_current_item(void* self) {
    return QListWidget_CurrentItem((QListWidget*)self);
}

void q_listwidget_set_current_item(void* self, void* item) {
    QListWidget_SetCurrentItem((QListWidget*)self, (QListWidgetItem*)item);
}

void q_listwidget_set_current_item2(void* self, void* item, int64_t command) {
    QListWidget_SetCurrentItem2((QListWidget*)self, (QListWidgetItem*)item, command);
}

int32_t q_listwidget_current_row(void* self) {
    return QListWidget_CurrentRow((QListWidget*)self);
}

void q_listwidget_set_current_row(void* self, int row) {
    QListWidget_SetCurrentRow((QListWidget*)self, row);
}

void q_listwidget_set_current_row2(void* self, int row, int64_t command) {
    QListWidget_SetCurrentRow2((QListWidget*)self, row, command);
}

QListWidgetItem* q_listwidget_item_at(void* self, void* p) {
    return QListWidget_ItemAt((QListWidget*)self, (QPoint*)p);
}

QListWidgetItem* q_listwidget_item_at2(void* self, int x, int y) {
    return QListWidget_ItemAt2((QListWidget*)self, x, y);
}

QRect* q_listwidget_visual_item_rect(void* self, void* item) {
    return QListWidget_VisualItemRect((QListWidget*)self, (QListWidgetItem*)item);
}

void q_listwidget_sort_items(void* self) {
    QListWidget_SortItems((QListWidget*)self);
}

void q_listwidget_set_sorting_enabled(void* self, bool enable) {
    QListWidget_SetSortingEnabled((QListWidget*)self, enable);
}

bool q_listwidget_is_sorting_enabled(void* self) {
    return QListWidget_IsSortingEnabled((QListWidget*)self);
}

void q_listwidget_edit_item(void* self, void* item) {
    QListWidget_EditItem((QListWidget*)self, (QListWidgetItem*)item);
}

void q_listwidget_open_persistent_editor(void* self, void* item) {
    QListWidget_OpenPersistentEditor((QListWidget*)self, (QListWidgetItem*)item);
}

void q_listwidget_close_persistent_editor(void* self, void* item) {
    QListWidget_ClosePersistentEditor((QListWidget*)self, (QListWidgetItem*)item);
}

bool q_listwidget_is_persistent_editor_open(void* self, void* item) {
    return QListWidget_IsPersistentEditorOpen((QListWidget*)self, (QListWidgetItem*)item);
}

QWidget* q_listwidget_item_widget(void* self, void* item) {
    return QListWidget_ItemWidget((QListWidget*)self, (QListWidgetItem*)item);
}

void q_listwidget_set_item_widget(void* self, void* item, void* widget) {
    QListWidget_SetItemWidget((QListWidget*)self, (QListWidgetItem*)item, (QWidget*)widget);
}

void q_listwidget_remove_item_widget(void* self, void* item) {
    QListWidget_RemoveItemWidget((QListWidget*)self, (QListWidgetItem*)item);
}

libqt_list /* of QListWidgetItem* */ q_listwidget_selected_items(void* self) {
    libqt_list _arr = QListWidget_SelectedItems((QListWidget*)self);
    return _arr;
}

libqt_list /* of QListWidgetItem* */ q_listwidget_find_items(void* self, const char* text, int64_t flags) {
    libqt_list _arr = QListWidget_FindItems((QListWidget*)self, qstring(text), flags);
    return _arr;
}

libqt_list /* of QListWidgetItem* */ q_listwidget_items(void* self, void* data) {
    libqt_list _arr = QListWidget_Items((QListWidget*)self, (QMimeData*)data);
    return _arr;
}

QModelIndex* q_listwidget_index_from_item(void* self, void* item) {
    return QListWidget_IndexFromItem((QListWidget*)self, (QListWidgetItem*)item);
}

QListWidgetItem* q_listwidget_item_from_index(void* self, void* index) {
    return QListWidget_ItemFromIndex((QListWidget*)self, (QModelIndex*)index);
}

void q_listwidget_drop_event(void* self, void* event) {
    QListWidget_DropEvent((QListWidget*)self, (QDropEvent*)event);
}

void q_listwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnDropEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_qbase_drop_event(void* self, void* event) {
    QListWidget_QBaseDropEvent((QListWidget*)self, (QDropEvent*)event);
}

void q_listwidget_scroll_to_item(void* self, void* item) {
    QListWidget_ScrollToItem((QListWidget*)self, (QListWidgetItem*)item);
}

void q_listwidget_clear(void* self) {
    QListWidget_Clear((QListWidget*)self);
}

void q_listwidget_item_pressed(void* self, void* item) {
    QListWidget_ItemPressed((QListWidget*)self, (QListWidgetItem*)item);
}

void q_listwidget_on_item_pressed(void* self, void (*callback)(void*, void*)) {
    QListWidget_Connect_ItemPressed((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_item_clicked(void* self, void* item) {
    QListWidget_ItemClicked((QListWidget*)self, (QListWidgetItem*)item);
}

void q_listwidget_on_item_clicked(void* self, void (*callback)(void*, void*)) {
    QListWidget_Connect_ItemClicked((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_item_double_clicked(void* self, void* item) {
    QListWidget_ItemDoubleClicked((QListWidget*)self, (QListWidgetItem*)item);
}

void q_listwidget_on_item_double_clicked(void* self, void (*callback)(void*, void*)) {
    QListWidget_Connect_ItemDoubleClicked((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_item_activated(void* self, void* item) {
    QListWidget_ItemActivated((QListWidget*)self, (QListWidgetItem*)item);
}

void q_listwidget_on_item_activated(void* self, void (*callback)(void*, void*)) {
    QListWidget_Connect_ItemActivated((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_item_entered(void* self, void* item) {
    QListWidget_ItemEntered((QListWidget*)self, (QListWidgetItem*)item);
}

void q_listwidget_on_item_entered(void* self, void (*callback)(void*, void*)) {
    QListWidget_Connect_ItemEntered((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_item_changed(void* self, void* item) {
    QListWidget_ItemChanged((QListWidget*)self, (QListWidgetItem*)item);
}

void q_listwidget_on_item_changed(void* self, void (*callback)(void*, void*)) {
    QListWidget_Connect_ItemChanged((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_current_item_changed(void* self, void* current, void* previous) {
    QListWidget_CurrentItemChanged((QListWidget*)self, (QListWidgetItem*)current, (QListWidgetItem*)previous);
}

void q_listwidget_on_current_item_changed(void* self, void (*callback)(void*, void*, void*)) {
    QListWidget_Connect_CurrentItemChanged((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_current_text_changed(void* self, const char* currentText) {
    QListWidget_CurrentTextChanged((QListWidget*)self, qstring(currentText));
}

void q_listwidget_on_current_text_changed(void* self, void (*callback)(void*, const char*)) {
    QListWidget_Connect_CurrentTextChanged((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_current_row_changed(void* self, int currentRow) {
    QListWidget_CurrentRowChanged((QListWidget*)self, currentRow);
}

void q_listwidget_on_current_row_changed(void* self, void (*callback)(void*, int)) {
    QListWidget_Connect_CurrentRowChanged((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_item_selection_changed(void* self) {
    QListWidget_ItemSelectionChanged((QListWidget*)self);
}

void q_listwidget_on_item_selection_changed(void* self, void (*callback)(void*)) {
    QListWidget_Connect_ItemSelectionChanged((QListWidget*)self, (intptr_t)callback);
}

bool q_listwidget_event(void* self, void* e) {
    return QListWidget_Event((QListWidget*)self, (QEvent*)e);
}

void q_listwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    QListWidget_OnEvent((QListWidget*)self, (intptr_t)callback);
}

bool q_listwidget_qbase_event(void* self, void* e) {
    return QListWidget_QBaseEvent((QListWidget*)self, (QEvent*)e);
}

const char** q_listwidget_mime_types(void* self) {
    libqt_list _arr = QListWidget_MimeTypes((QListWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_listwidget_mime_types");
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

void q_listwidget_on_mime_types(void* self, const char** (*callback)()) {
    QListWidget_OnMimeTypes((QListWidget*)self, (intptr_t)callback);
}

const char** q_listwidget_qbase_mime_types(void* self) {
    libqt_list _arr = QListWidget_QBaseMimeTypes((QListWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_listwidget_mime_types");
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

QMimeData* q_listwidget_mime_data(void* self, libqt_list items) {
    return QListWidget_MimeData((QListWidget*)self, items);
}

void q_listwidget_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list)) {
    QListWidget_OnMimeData((QListWidget*)self, (intptr_t)callback);
}

QMimeData* q_listwidget_qbase_mime_data(void* self, libqt_list items) {
    return QListWidget_QBaseMimeData((QListWidget*)self, items);
}

bool q_listwidget_drop_mime_data(void* self, int index, void* data, int64_t action) {
    return QListWidget_DropMimeData((QListWidget*)self, index, (QMimeData*)data, action);
}

void q_listwidget_on_drop_mime_data(void* self, bool (*callback)(void*, int, void*, int64_t)) {
    QListWidget_OnDropMimeData((QListWidget*)self, (intptr_t)callback);
}

bool q_listwidget_qbase_drop_mime_data(void* self, int index, void* data, int64_t action) {
    return QListWidget_QBaseDropMimeData((QListWidget*)self, index, (QMimeData*)data, action);
}

int64_t q_listwidget_supported_drop_actions(void* self) {
    return QListWidget_SupportedDropActions((QListWidget*)self);
}

void q_listwidget_on_supported_drop_actions(void* self, int64_t (*callback)()) {
    QListWidget_OnSupportedDropActions((QListWidget*)self, (intptr_t)callback);
}

int64_t q_listwidget_qbase_supported_drop_actions(void* self) {
    return QListWidget_QBaseSupportedDropActions((QListWidget*)self);
}

const char* q_listwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QListWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_listwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QListWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidget_sort_items1(void* self, int64_t order) {
    QListWidget_SortItems1((QListWidget*)self, order);
}

void q_listwidget_scroll_to_item2(void* self, void* item, int64_t hint) {
    QListWidget_ScrollToItem2((QListWidget*)self, (QListWidgetItem*)item, hint);
}

void q_listwidget_set_movement(void* self, int64_t movement) {
    QListView_SetMovement((QListView*)self, movement);
}

int64_t q_listwidget_movement(void* self) {
    return QListView_Movement((QListView*)self);
}

void q_listwidget_set_flow(void* self, int64_t flow) {
    QListView_SetFlow((QListView*)self, flow);
}

int64_t q_listwidget_flow(void* self) {
    return QListView_Flow((QListView*)self);
}

void q_listwidget_set_wrapping(void* self, bool enable) {
    QListView_SetWrapping((QListView*)self, enable);
}

bool q_listwidget_is_wrapping(void* self) {
    return QListView_IsWrapping((QListView*)self);
}

void q_listwidget_set_resize_mode(void* self, int64_t mode) {
    QListView_SetResizeMode((QListView*)self, mode);
}

int64_t q_listwidget_resize_mode(void* self) {
    return QListView_ResizeMode((QListView*)self);
}

void q_listwidget_set_layout_mode(void* self, int64_t mode) {
    QListView_SetLayoutMode((QListView*)self, mode);
}

int64_t q_listwidget_layout_mode(void* self) {
    return QListView_LayoutMode((QListView*)self);
}

void q_listwidget_set_spacing(void* self, int space) {
    QListView_SetSpacing((QListView*)self, space);
}

int32_t q_listwidget_spacing(void* self) {
    return QListView_Spacing((QListView*)self);
}

void q_listwidget_set_batch_size(void* self, int batchSize) {
    QListView_SetBatchSize((QListView*)self, batchSize);
}

int32_t q_listwidget_batch_size(void* self) {
    return QListView_BatchSize((QListView*)self);
}

void q_listwidget_set_grid_size(void* self, void* size) {
    QListView_SetGridSize((QListView*)self, (QSize*)size);
}

QSize* q_listwidget_grid_size(void* self) {
    return QListView_GridSize((QListView*)self);
}

void q_listwidget_set_view_mode(void* self, int64_t mode) {
    QListView_SetViewMode((QListView*)self, mode);
}

int64_t q_listwidget_view_mode(void* self) {
    return QListView_ViewMode((QListView*)self);
}

void q_listwidget_clear_property_flags(void* self) {
    QListView_ClearPropertyFlags((QListView*)self);
}

bool q_listwidget_is_row_hidden(void* self, int row) {
    return QListView_IsRowHidden((QListView*)self, row);
}

void q_listwidget_set_row_hidden(void* self, int row, bool hide) {
    QListView_SetRowHidden((QListView*)self, row, hide);
}

void q_listwidget_set_model_column(void* self, int column) {
    QListView_SetModelColumn((QListView*)self, column);
}

int32_t q_listwidget_model_column(void* self) {
    return QListView_ModelColumn((QListView*)self);
}

void q_listwidget_set_uniform_item_sizes(void* self, bool enable) {
    QListView_SetUniformItemSizes((QListView*)self, enable);
}

bool q_listwidget_uniform_item_sizes(void* self) {
    return QListView_UniformItemSizes((QListView*)self);
}

void q_listwidget_set_word_wrap(void* self, bool on) {
    QListView_SetWordWrap((QListView*)self, on);
}

bool q_listwidget_word_wrap(void* self) {
    return QListView_WordWrap((QListView*)self);
}

void q_listwidget_set_selection_rect_visible(void* self, bool show) {
    QListView_SetSelectionRectVisible((QListView*)self, show);
}

bool q_listwidget_is_selection_rect_visible(void* self) {
    return QListView_IsSelectionRectVisible((QListView*)self);
}

void q_listwidget_set_item_alignment(void* self, int64_t alignment) {
    QListView_SetItemAlignment((QListView*)self, alignment);
}

int64_t q_listwidget_item_alignment(void* self) {
    return QListView_ItemAlignment((QListView*)self);
}

void q_listwidget_indexes_moved(void* self, libqt_list indexes) {
    QListView_IndexesMoved((QListView*)self, indexes);
}

void q_listwidget_on_indexes_moved(void* self, void (*callback)(void*, libqt_list)) {
    QListView_Connect_IndexesMoved((QListView*)self, (intptr_t)callback);
}

void q_listwidget_set_model(void* self, void* model) {
    QAbstractItemView_SetModel((QAbstractItemView*)self, (QAbstractItemModel*)model);
}

void q_listwidget_on_set_model(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_OnSetModel((QAbstractItemView*)self, (intptr_t)callback);
}

void q_listwidget_qbase_set_model(void* self, void* model) {
    QAbstractItemView_QBaseSetModel((QAbstractItemView*)self, (QAbstractItemModel*)model);
}

QAbstractItemModel* q_listwidget_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

QItemSelectionModel* q_listwidget_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

void q_listwidget_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_listwidget_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

void q_listwidget_set_selection_mode(void* self, int64_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

int64_t q_listwidget_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

void q_listwidget_set_selection_behavior(void* self, int64_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

int64_t q_listwidget_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

QModelIndex* q_listwidget_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

QModelIndex* q_listwidget_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

void q_listwidget_set_edit_triggers(void* self, int64_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

int64_t q_listwidget_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

void q_listwidget_set_vertical_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

int64_t q_listwidget_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

void q_listwidget_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

void q_listwidget_set_horizontal_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

int64_t q_listwidget_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

void q_listwidget_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

void q_listwidget_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

bool q_listwidget_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

void q_listwidget_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

int32_t q_listwidget_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

void q_listwidget_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

bool q_listwidget_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

void q_listwidget_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

bool q_listwidget_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

void q_listwidget_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

bool q_listwidget_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

void q_listwidget_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

bool q_listwidget_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

void q_listwidget_set_drag_drop_mode(void* self, int64_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

int64_t q_listwidget_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

void q_listwidget_set_default_drop_action(void* self, int64_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

int64_t q_listwidget_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

void q_listwidget_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

bool q_listwidget_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

void q_listwidget_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

QSize* q_listwidget_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

void q_listwidget_set_text_elide_mode(void* self, int64_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

int64_t q_listwidget_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

QSize* q_listwidget_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listwidget_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

QWidget* q_listwidget_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listwidget_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_listwidget_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

void q_listwidget_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_listwidget_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

QAbstractItemDelegate* q_listwidget_item_delegate2(void* self, void* index) {
    return QAbstractItemView_ItemDelegate2((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listwidget_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listwidget_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

void q_listwidget_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listwidget_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

void q_listwidget_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

void q_listwidget_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listwidget_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listwidget_on_pressed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)callback);
}

void q_listwidget_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listwidget_on_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)callback);
}

void q_listwidget_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listwidget_on_double_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)callback);
}

void q_listwidget_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listwidget_on_activated(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)callback);
}

void q_listwidget_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listwidget_on_entered(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)callback);
}

void q_listwidget_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

void q_listwidget_on_viewport_entered(void* self, void (*callback)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)callback);
}

void q_listwidget_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

void q_listwidget_on_icon_size_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)callback);
}

int64_t q_listwidget_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_listwidget_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_listwidget_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_listwidget_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int64_t q_listwidget_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_listwidget_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_listwidget_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_listwidget_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_listwidget_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_listwidget_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_listwidget_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_listwidget_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_listwidget_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_listwidget_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_listwidget_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int64_t q_listwidget_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_listwidget_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_listwidget_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_listwidget_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_listwidget_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int64_t q_listwidget_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_listwidget_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int64_t q_listwidget_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_listwidget_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_listwidget_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_listwidget_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_listwidget_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_listwidget_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_listwidget_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_listwidget_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_listwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_listwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_listwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_listwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_listwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_listwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_listwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_listwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_listwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_listwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_listwidget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_listwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_listwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_listwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_listwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_listwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_listwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_listwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_listwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_listwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_listwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_listwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_listwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_listwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_listwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_listwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_listwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_listwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_listwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_listwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_listwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_listwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_listwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_listwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_listwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_listwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_listwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_listwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_listwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_listwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_listwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_listwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_listwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_listwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_listwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_listwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_listwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_listwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_listwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_listwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_listwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_listwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_listwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_listwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_listwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_listwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_listwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_listwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_listwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_listwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_listwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_listwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_listwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_listwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_listwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_listwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_listwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_listwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_listwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_listwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_listwidget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_listwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_listwidget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_listwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_listwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_listwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_listwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_listwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_listwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_listwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_listwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_listwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_listwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_listwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_listwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_listwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_listwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_listwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_listwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_listwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_listwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_listwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_listwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_listwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_listwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_listwidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_listwidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_listwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_listwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_listwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_listwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_listwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_listwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_listwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_listwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_listwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_listwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_listwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_listwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_listwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_listwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_listwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_listwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_listwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_listwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_listwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_listwidget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_listwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_listwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_listwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_listwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_listwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_listwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_listwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_listwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_listwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_listwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_listwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_listwidget_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_listwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_listwidget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_listwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_listwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_listwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_listwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_listwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_listwidget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_listwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_listwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_listwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_listwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_listwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_listwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_listwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_listwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_listwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_listwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_listwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_listwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_listwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_listwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_listwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_listwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_listwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_listwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_listwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_listwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_listwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_listwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_listwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_listwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_listwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_listwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_listwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_listwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_listwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_listwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_listwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_listwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_listwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_listwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_listwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_listwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_listwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_listwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_listwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_listwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_listwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_listwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_listwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_listwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_listwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_listwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_listwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_listwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_listwidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_listwidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_listwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_listwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_listwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_listwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_listwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_listwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_listwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_listwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_listwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_listwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_listwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_listwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_listwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_listwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_listwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_listwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_listwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_listwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_listwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_listwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_listwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_listwidget_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_listwidget_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_listwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_listwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_listwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_listwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_listwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_listwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_listwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_listwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_listwidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_listwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_listwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_listwidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_listwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_listwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_listwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_listwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_listwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_listwidget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_listwidget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_listwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_listwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_listwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_listwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_listwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_listwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_listwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_listwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_listwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_listwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_listwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_listwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_listwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_listwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_listwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_listwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_listwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_listwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_listwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_listwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_listwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_listwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_listwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_listwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_listwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_listwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_listwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_listwidget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_listwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_listwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_listwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_listwidget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_listwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_listwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_listwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listwidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_listwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_listwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_listwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_listwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_listwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_listwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_listwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_listwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_listwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_listwidget_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_listwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_listwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_listwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_listwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_listwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_listwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_listwidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_listwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_listwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_listwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_listwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_listwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_listwidget_dynamic_property_names");
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

QBindingStorage* q_listwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_listwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_listwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_listwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_listwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_listwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_listwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_listwidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_listwidget_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_listwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_listwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_listwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_listwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_listwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_listwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_listwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_listwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_listwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_listwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_listwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_listwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_listwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_listwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_listwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_listwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_listwidget_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QRect* q_listwidget_visual_rect(void* self, void* index) {
    return QListWidget_VisualRect((QListWidget*)self, (QModelIndex*)index);
}

QRect* q_listwidget_qbase_visual_rect(void* self, void* index) {
    return QListWidget_QBaseVisualRect((QListWidget*)self, (QModelIndex*)index);
}

void q_listwidget_on_visual_rect(void* self, QRect* (*callback)(void*, void*)) {
    QListWidget_OnVisualRect((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_scroll_to(void* self, void* index, int64_t hint) {
    QListWidget_ScrollTo((QListWidget*)self, (QModelIndex*)index, hint);
}

void q_listwidget_qbase_scroll_to(void* self, void* index, int64_t hint) {
    QListWidget_QBaseScrollTo((QListWidget*)self, (QModelIndex*)index, hint);
}

void q_listwidget_on_scroll_to(void* self, void (*callback)(void*, void*, int64_t)) {
    QListWidget_OnScrollTo((QListWidget*)self, (intptr_t)callback);
}

QModelIndex* q_listwidget_index_at(void* self, void* p) {
    return QListWidget_IndexAt((QListWidget*)self, (QPoint*)p);
}

QModelIndex* q_listwidget_qbase_index_at(void* self, void* p) {
    return QListWidget_QBaseIndexAt((QListWidget*)self, (QPoint*)p);
}

void q_listwidget_on_index_at(void* self, QModelIndex* (*callback)(void*, void*)) {
    QListWidget_OnIndexAt((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_do_items_layout(void* self) {
    QListWidget_DoItemsLayout((QListWidget*)self);
}

void q_listwidget_qbase_do_items_layout(void* self) {
    QListWidget_QBaseDoItemsLayout((QListWidget*)self);
}

void q_listwidget_on_do_items_layout(void* self, void (*callback)()) {
    QListWidget_OnDoItemsLayout((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_reset(void* self) {
    QListWidget_Reset((QListWidget*)self);
}

void q_listwidget_qbase_reset(void* self) {
    QListWidget_QBaseReset((QListWidget*)self);
}

void q_listwidget_on_reset(void* self, void (*callback)()) {
    QListWidget_OnReset((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_set_root_index(void* self, void* index) {
    QListWidget_SetRootIndex((QListWidget*)self, (QModelIndex*)index);
}

void q_listwidget_qbase_set_root_index(void* self, void* index) {
    QListWidget_QBaseSetRootIndex((QListWidget*)self, (QModelIndex*)index);
}

void q_listwidget_on_set_root_index(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnSetRootIndex((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_scroll_contents_by(void* self, int dx, int dy) {
    QListWidget_ScrollContentsBy((QListWidget*)self, dx, dy);
}

void q_listwidget_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QListWidget_QBaseScrollContentsBy((QListWidget*)self, dx, dy);
}

void q_listwidget_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    QListWidget_OnScrollContentsBy((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QListWidget_DataChanged((QListWidget*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_listwidget_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QListWidget_QBaseDataChanged((QListWidget*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_listwidget_on_data_changed(void* self, void (*callback)(void*, void*, void*, libqt_list)) {
    QListWidget_OnDataChanged((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_rows_inserted(void* self, void* parent, int start, int end) {
    QListWidget_RowsInserted((QListWidget*)self, (QModelIndex*)parent, start, end);
}

void q_listwidget_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QListWidget_QBaseRowsInserted((QListWidget*)self, (QModelIndex*)parent, start, end);
}

void q_listwidget_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QListWidget_OnRowsInserted((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QListWidget_RowsAboutToBeRemoved((QListWidget*)self, (QModelIndex*)parent, start, end);
}

void q_listwidget_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QListWidget_QBaseRowsAboutToBeRemoved((QListWidget*)self, (QModelIndex*)parent, start, end);
}

void q_listwidget_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QListWidget_OnRowsAboutToBeRemoved((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_mouse_move_event(void* self, void* e) {
    QListWidget_MouseMoveEvent((QListWidget*)self, (QMouseEvent*)e);
}

void q_listwidget_qbase_mouse_move_event(void* self, void* e) {
    QListWidget_QBaseMouseMoveEvent((QListWidget*)self, (QMouseEvent*)e);
}

void q_listwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnMouseMoveEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_mouse_release_event(void* self, void* e) {
    QListWidget_MouseReleaseEvent((QListWidget*)self, (QMouseEvent*)e);
}

void q_listwidget_qbase_mouse_release_event(void* self, void* e) {
    QListWidget_QBaseMouseReleaseEvent((QListWidget*)self, (QMouseEvent*)e);
}

void q_listwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnMouseReleaseEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_wheel_event(void* self, void* e) {
    QListWidget_WheelEvent((QListWidget*)self, (QWheelEvent*)e);
}

void q_listwidget_qbase_wheel_event(void* self, void* e) {
    QListWidget_QBaseWheelEvent((QListWidget*)self, (QWheelEvent*)e);
}

void q_listwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnWheelEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_timer_event(void* self, void* e) {
    QListWidget_TimerEvent((QListWidget*)self, (QTimerEvent*)e);
}

void q_listwidget_qbase_timer_event(void* self, void* e) {
    QListWidget_QBaseTimerEvent((QListWidget*)self, (QTimerEvent*)e);
}

void q_listwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnTimerEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_resize_event(void* self, void* e) {
    QListWidget_ResizeEvent((QListWidget*)self, (QResizeEvent*)e);
}

void q_listwidget_qbase_resize_event(void* self, void* e) {
    QListWidget_QBaseResizeEvent((QListWidget*)self, (QResizeEvent*)e);
}

void q_listwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnResizeEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_drag_move_event(void* self, void* e) {
    QListWidget_DragMoveEvent((QListWidget*)self, (QDragMoveEvent*)e);
}

void q_listwidget_qbase_drag_move_event(void* self, void* e) {
    QListWidget_QBaseDragMoveEvent((QListWidget*)self, (QDragMoveEvent*)e);
}

void q_listwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnDragMoveEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_drag_leave_event(void* self, void* e) {
    QListWidget_DragLeaveEvent((QListWidget*)self, (QDragLeaveEvent*)e);
}

void q_listwidget_qbase_drag_leave_event(void* self, void* e) {
    QListWidget_QBaseDragLeaveEvent((QListWidget*)self, (QDragLeaveEvent*)e);
}

void q_listwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnDragLeaveEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_start_drag(void* self, int64_t supportedActions) {
    QListWidget_StartDrag((QListWidget*)self, supportedActions);
}

void q_listwidget_qbase_start_drag(void* self, int64_t supportedActions) {
    QListWidget_QBaseStartDrag((QListWidget*)self, supportedActions);
}

void q_listwidget_on_start_drag(void* self, void (*callback)(void*, int64_t)) {
    QListWidget_OnStartDrag((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_init_view_item_option(void* self, void* option) {
    QListWidget_InitViewItemOption((QListWidget*)self, (QStyleOptionViewItem*)option);
}

void q_listwidget_qbase_init_view_item_option(void* self, void* option) {
    QListWidget_QBaseInitViewItemOption((QListWidget*)self, (QStyleOptionViewItem*)option);
}

void q_listwidget_on_init_view_item_option(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnInitViewItemOption((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_paint_event(void* self, void* e) {
    QListWidget_PaintEvent((QListWidget*)self, (QPaintEvent*)e);
}

void q_listwidget_qbase_paint_event(void* self, void* e) {
    QListWidget_QBasePaintEvent((QListWidget*)self, (QPaintEvent*)e);
}

void q_listwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnPaintEvent((QListWidget*)self, (intptr_t)callback);
}

int32_t q_listwidget_horizontal_offset(void* self) {
    return QListWidget_HorizontalOffset((QListWidget*)self);
}

int32_t q_listwidget_qbase_horizontal_offset(void* self) {
    return QListWidget_QBaseHorizontalOffset((QListWidget*)self);
}

void q_listwidget_on_horizontal_offset(void* self, int32_t (*callback)()) {
    QListWidget_OnHorizontalOffset((QListWidget*)self, (intptr_t)callback);
}

int32_t q_listwidget_vertical_offset(void* self) {
    return QListWidget_VerticalOffset((QListWidget*)self);
}

int32_t q_listwidget_qbase_vertical_offset(void* self) {
    return QListWidget_QBaseVerticalOffset((QListWidget*)self);
}

void q_listwidget_on_vertical_offset(void* self, int32_t (*callback)()) {
    QListWidget_OnVerticalOffset((QListWidget*)self, (intptr_t)callback);
}

QModelIndex* q_listwidget_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QListWidget_MoveCursor((QListWidget*)self, cursorAction, modifiers);
}

QModelIndex* q_listwidget_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QListWidget_QBaseMoveCursor((QListWidget*)self, cursorAction, modifiers);
}

void q_listwidget_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int64_t, int64_t)) {
    QListWidget_OnMoveCursor((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_set_selection(void* self, void* rect, int64_t command) {
    QListWidget_SetSelection((QListWidget*)self, (QRect*)rect, command);
}

void q_listwidget_qbase_set_selection(void* self, void* rect, int64_t command) {
    QListWidget_QBaseSetSelection((QListWidget*)self, (QRect*)rect, command);
}

void q_listwidget_on_set_selection(void* self, void (*callback)(void*, void*, int64_t)) {
    QListWidget_OnSetSelection((QListWidget*)self, (intptr_t)callback);
}

QRegion* q_listwidget_visual_region_for_selection(void* self, void* selection) {
    return QListWidget_VisualRegionForSelection((QListWidget*)self, (QItemSelection*)selection);
}

QRegion* q_listwidget_qbase_visual_region_for_selection(void* self, void* selection) {
    return QListWidget_QBaseVisualRegionForSelection((QListWidget*)self, (QItemSelection*)selection);
}

void q_listwidget_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*)) {
    QListWidget_OnVisualRegionForSelection((QListWidget*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_listwidget_selected_indexes(void* self) {
    libqt_list _arr = QListWidget_SelectedIndexes((QListWidget*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_listwidget_qbase_selected_indexes(void* self) {
    libqt_list _arr = QListWidget_QBaseSelectedIndexes((QListWidget*)self);
    return _arr;
}

void q_listwidget_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    QListWidget_OnSelectedIndexes((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_update_geometries(void* self) {
    QListWidget_UpdateGeometries((QListWidget*)self);
}

void q_listwidget_qbase_update_geometries(void* self) {
    QListWidget_QBaseUpdateGeometries((QListWidget*)self);
}

void q_listwidget_on_update_geometries(void* self, void (*callback)()) {
    QListWidget_OnUpdateGeometries((QListWidget*)self, (intptr_t)callback);
}

bool q_listwidget_is_index_hidden(void* self, void* index) {
    return QListWidget_IsIndexHidden((QListWidget*)self, (QModelIndex*)index);
}

bool q_listwidget_qbase_is_index_hidden(void* self, void* index) {
    return QListWidget_QBaseIsIndexHidden((QListWidget*)self, (QModelIndex*)index);
}

void q_listwidget_on_is_index_hidden(void* self, bool (*callback)(void*, void*)) {
    QListWidget_OnIsIndexHidden((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_selection_changed(void* self, void* selected, void* deselected) {
    QListWidget_SelectionChanged((QListWidget*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_listwidget_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QListWidget_QBaseSelectionChanged((QListWidget*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_listwidget_on_selection_changed(void* self, void (*callback)(void*, void*, void*)) {
    QListWidget_OnSelectionChanged((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_current_changed(void* self, void* current, void* previous) {
    QListWidget_CurrentChanged((QListWidget*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_listwidget_qbase_current_changed(void* self, void* current, void* previous) {
    QListWidget_QBaseCurrentChanged((QListWidget*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_listwidget_on_current_changed(void* self, void (*callback)(void*, void*, void*)) {
    QListWidget_OnCurrentChanged((QListWidget*)self, (intptr_t)callback);
}

QSize* q_listwidget_viewport_size_hint(void* self) {
    return QListWidget_ViewportSizeHint((QListWidget*)self);
}

QSize* q_listwidget_qbase_viewport_size_hint(void* self) {
    return QListWidget_QBaseViewportSizeHint((QListWidget*)self);
}

void q_listwidget_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    QListWidget_OnViewportSizeHint((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_keyboard_search(void* self, const char* search) {
    QListWidget_KeyboardSearch((QListWidget*)self, qstring(search));
}

void q_listwidget_qbase_keyboard_search(void* self, const char* search) {
    QListWidget_QBaseKeyboardSearch((QListWidget*)self, qstring(search));
}

void q_listwidget_on_keyboard_search(void* self, void (*callback)(void*, const char*)) {
    QListWidget_OnKeyboardSearch((QListWidget*)self, (intptr_t)callback);
}

int32_t q_listwidget_size_hint_for_row(void* self, int row) {
    return QListWidget_SizeHintForRow((QListWidget*)self, row);
}

int32_t q_listwidget_qbase_size_hint_for_row(void* self, int row) {
    return QListWidget_QBaseSizeHintForRow((QListWidget*)self, row);
}

void q_listwidget_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int)) {
    QListWidget_OnSizeHintForRow((QListWidget*)self, (intptr_t)callback);
}

int32_t q_listwidget_size_hint_for_column(void* self, int column) {
    return QListWidget_SizeHintForColumn((QListWidget*)self, column);
}

int32_t q_listwidget_qbase_size_hint_for_column(void* self, int column) {
    return QListWidget_QBaseSizeHintForColumn((QListWidget*)self, column);
}

void q_listwidget_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int)) {
    QListWidget_OnSizeHintForColumn((QListWidget*)self, (intptr_t)callback);
}

QAbstractItemDelegate* q_listwidget_item_delegate_for_index(void* self, void* index) {
    return QListWidget_ItemDelegateForIndex((QListWidget*)self, (QModelIndex*)index);
}

QAbstractItemDelegate* q_listwidget_qbase_item_delegate_for_index(void* self, void* index) {
    return QListWidget_QBaseItemDelegateForIndex((QListWidget*)self, (QModelIndex*)index);
}

void q_listwidget_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*)) {
    QListWidget_OnItemDelegateForIndex((QListWidget*)self, (intptr_t)callback);
}

QVariant* q_listwidget_input_method_query(void* self, int64_t query) {
    return QListWidget_InputMethodQuery((QListWidget*)self, query);
}

QVariant* q_listwidget_qbase_input_method_query(void* self, int64_t query) {
    return QListWidget_QBaseInputMethodQuery((QListWidget*)self, query);
}

void q_listwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QListWidget_OnInputMethodQuery((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_select_all(void* self) {
    QListWidget_SelectAll((QListWidget*)self);
}

void q_listwidget_qbase_select_all(void* self) {
    QListWidget_QBaseSelectAll((QListWidget*)self);
}

void q_listwidget_on_select_all(void* self, void (*callback)()) {
    QListWidget_OnSelectAll((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_update_editor_data(void* self) {
    QListWidget_UpdateEditorData((QListWidget*)self);
}

void q_listwidget_qbase_update_editor_data(void* self) {
    QListWidget_QBaseUpdateEditorData((QListWidget*)self);
}

void q_listwidget_on_update_editor_data(void* self, void (*callback)()) {
    QListWidget_OnUpdateEditorData((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_update_editor_geometries(void* self) {
    QListWidget_UpdateEditorGeometries((QListWidget*)self);
}

void q_listwidget_qbase_update_editor_geometries(void* self) {
    QListWidget_QBaseUpdateEditorGeometries((QListWidget*)self);
}

void q_listwidget_on_update_editor_geometries(void* self, void (*callback)()) {
    QListWidget_OnUpdateEditorGeometries((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_vertical_scrollbar_action(void* self, int action) {
    QListWidget_VerticalScrollbarAction((QListWidget*)self, action);
}

void q_listwidget_qbase_vertical_scrollbar_action(void* self, int action) {
    QListWidget_QBaseVerticalScrollbarAction((QListWidget*)self, action);
}

void q_listwidget_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int)) {
    QListWidget_OnVerticalScrollbarAction((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_horizontal_scrollbar_action(void* self, int action) {
    QListWidget_HorizontalScrollbarAction((QListWidget*)self, action);
}

void q_listwidget_qbase_horizontal_scrollbar_action(void* self, int action) {
    QListWidget_QBaseHorizontalScrollbarAction((QListWidget*)self, action);
}

void q_listwidget_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int)) {
    QListWidget_OnHorizontalScrollbarAction((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_vertical_scrollbar_value_changed(void* self, int value) {
    QListWidget_VerticalScrollbarValueChanged((QListWidget*)self, value);
}

void q_listwidget_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QListWidget_QBaseVerticalScrollbarValueChanged((QListWidget*)self, value);
}

void q_listwidget_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    QListWidget_OnVerticalScrollbarValueChanged((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_horizontal_scrollbar_value_changed(void* self, int value) {
    QListWidget_HorizontalScrollbarValueChanged((QListWidget*)self, value);
}

void q_listwidget_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QListWidget_QBaseHorizontalScrollbarValueChanged((QListWidget*)self, value);
}

void q_listwidget_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    QListWidget_OnHorizontalScrollbarValueChanged((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_close_editor(void* self, void* editor, int64_t hint) {
    QListWidget_CloseEditor((QListWidget*)self, (QWidget*)editor, hint);
}

void q_listwidget_qbase_close_editor(void* self, void* editor, int64_t hint) {
    QListWidget_QBaseCloseEditor((QListWidget*)self, (QWidget*)editor, hint);
}

void q_listwidget_on_close_editor(void* self, void (*callback)(void*, void*, int64_t)) {
    QListWidget_OnCloseEditor((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_commit_data(void* self, void* editor) {
    QListWidget_CommitData((QListWidget*)self, (QWidget*)editor);
}

void q_listwidget_qbase_commit_data(void* self, void* editor) {
    QListWidget_QBaseCommitData((QListWidget*)self, (QWidget*)editor);
}

void q_listwidget_on_commit_data(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnCommitData((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_editor_destroyed(void* self, void* editor) {
    QListWidget_EditorDestroyed((QListWidget*)self, (QObject*)editor);
}

void q_listwidget_qbase_editor_destroyed(void* self, void* editor) {
    QListWidget_QBaseEditorDestroyed((QListWidget*)self, (QObject*)editor);
}

void q_listwidget_on_editor_destroyed(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnEditorDestroyed((QListWidget*)self, (intptr_t)callback);
}

bool q_listwidget_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QListWidget_Edit2((QListWidget*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

bool q_listwidget_qbase_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QListWidget_QBaseEdit2((QListWidget*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

void q_listwidget_on_edit2(void* self, bool (*callback)(void*, void*, int64_t, void*)) {
    QListWidget_OnEdit2((QListWidget*)self, (intptr_t)callback);
}

int64_t q_listwidget_selection_command(void* self, void* index, void* event) {
    return QListWidget_SelectionCommand((QListWidget*)self, (QModelIndex*)index, (QEvent*)event);
}

int64_t q_listwidget_qbase_selection_command(void* self, void* index, void* event) {
    return QListWidget_QBaseSelectionCommand((QListWidget*)self, (QModelIndex*)index, (QEvent*)event);
}

void q_listwidget_on_selection_command(void* self, int64_t (*callback)(void*, void*, void*)) {
    QListWidget_OnSelectionCommand((QListWidget*)self, (intptr_t)callback);
}

bool q_listwidget_focus_next_prev_child(void* self, bool next) {
    return QListWidget_FocusNextPrevChild((QListWidget*)self, next);
}

bool q_listwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QListWidget_QBaseFocusNextPrevChild((QListWidget*)self, next);
}

void q_listwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QListWidget_OnFocusNextPrevChild((QListWidget*)self, (intptr_t)callback);
}

bool q_listwidget_viewport_event(void* self, void* event) {
    return QListWidget_ViewportEvent((QListWidget*)self, (QEvent*)event);
}

bool q_listwidget_qbase_viewport_event(void* self, void* event) {
    return QListWidget_QBaseViewportEvent((QListWidget*)self, (QEvent*)event);
}

void q_listwidget_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    QListWidget_OnViewportEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_mouse_press_event(void* self, void* event) {
    QListWidget_MousePressEvent((QListWidget*)self, (QMouseEvent*)event);
}

void q_listwidget_qbase_mouse_press_event(void* self, void* event) {
    QListWidget_QBaseMousePressEvent((QListWidget*)self, (QMouseEvent*)event);
}

void q_listwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnMousePressEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_mouse_double_click_event(void* self, void* event) {
    QListWidget_MouseDoubleClickEvent((QListWidget*)self, (QMouseEvent*)event);
}

void q_listwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QListWidget_QBaseMouseDoubleClickEvent((QListWidget*)self, (QMouseEvent*)event);
}

void q_listwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnMouseDoubleClickEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_drag_enter_event(void* self, void* event) {
    QListWidget_DragEnterEvent((QListWidget*)self, (QDragEnterEvent*)event);
}

void q_listwidget_qbase_drag_enter_event(void* self, void* event) {
    QListWidget_QBaseDragEnterEvent((QListWidget*)self, (QDragEnterEvent*)event);
}

void q_listwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnDragEnterEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_focus_in_event(void* self, void* event) {
    QListWidget_FocusInEvent((QListWidget*)self, (QFocusEvent*)event);
}

void q_listwidget_qbase_focus_in_event(void* self, void* event) {
    QListWidget_QBaseFocusInEvent((QListWidget*)self, (QFocusEvent*)event);
}

void q_listwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnFocusInEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_focus_out_event(void* self, void* event) {
    QListWidget_FocusOutEvent((QListWidget*)self, (QFocusEvent*)event);
}

void q_listwidget_qbase_focus_out_event(void* self, void* event) {
    QListWidget_QBaseFocusOutEvent((QListWidget*)self, (QFocusEvent*)event);
}

void q_listwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnFocusOutEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_key_press_event(void* self, void* event) {
    QListWidget_KeyPressEvent((QListWidget*)self, (QKeyEvent*)event);
}

void q_listwidget_qbase_key_press_event(void* self, void* event) {
    QListWidget_QBaseKeyPressEvent((QListWidget*)self, (QKeyEvent*)event);
}

void q_listwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnKeyPressEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_input_method_event(void* self, void* event) {
    QListWidget_InputMethodEvent((QListWidget*)self, (QInputMethodEvent*)event);
}

void q_listwidget_qbase_input_method_event(void* self, void* event) {
    QListWidget_QBaseInputMethodEvent((QListWidget*)self, (QInputMethodEvent*)event);
}

void q_listwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnInputMethodEvent((QListWidget*)self, (intptr_t)callback);
}

bool q_listwidget_event_filter(void* self, void* object, void* event) {
    return QListWidget_EventFilter((QListWidget*)self, (QObject*)object, (QEvent*)event);
}

bool q_listwidget_qbase_event_filter(void* self, void* object, void* event) {
    return QListWidget_QBaseEventFilter((QListWidget*)self, (QObject*)object, (QEvent*)event);
}

void q_listwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QListWidget_OnEventFilter((QListWidget*)self, (intptr_t)callback);
}

QSize* q_listwidget_minimum_size_hint(void* self) {
    return QListWidget_MinimumSizeHint((QListWidget*)self);
}

QSize* q_listwidget_qbase_minimum_size_hint(void* self) {
    return QListWidget_QBaseMinimumSizeHint((QListWidget*)self);
}

void q_listwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QListWidget_OnMinimumSizeHint((QListWidget*)self, (intptr_t)callback);
}

QSize* q_listwidget_size_hint(void* self) {
    return QListWidget_SizeHint((QListWidget*)self);
}

QSize* q_listwidget_qbase_size_hint(void* self) {
    return QListWidget_QBaseSizeHint((QListWidget*)self);
}

void q_listwidget_on_size_hint(void* self, QSize* (*callback)()) {
    QListWidget_OnSizeHint((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_setup_viewport(void* self, void* viewport) {
    QListWidget_SetupViewport((QListWidget*)self, (QWidget*)viewport);
}

void q_listwidget_qbase_setup_viewport(void* self, void* viewport) {
    QListWidget_QBaseSetupViewport((QListWidget*)self, (QWidget*)viewport);
}

void q_listwidget_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnSetupViewport((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_context_menu_event(void* self, void* param1) {
    QListWidget_ContextMenuEvent((QListWidget*)self, (QContextMenuEvent*)param1);
}

void q_listwidget_qbase_context_menu_event(void* self, void* param1) {
    QListWidget_QBaseContextMenuEvent((QListWidget*)self, (QContextMenuEvent*)param1);
}

void q_listwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnContextMenuEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_change_event(void* self, void* param1) {
    QListWidget_ChangeEvent((QListWidget*)self, (QEvent*)param1);
}

void q_listwidget_qbase_change_event(void* self, void* param1) {
    QListWidget_QBaseChangeEvent((QListWidget*)self, (QEvent*)param1);
}

void q_listwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnChangeEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_init_style_option(void* self, void* option) {
    QListWidget_InitStyleOption((QListWidget*)self, (QStyleOptionFrame*)option);
}

void q_listwidget_qbase_init_style_option(void* self, void* option) {
    QListWidget_QBaseInitStyleOption((QListWidget*)self, (QStyleOptionFrame*)option);
}

void q_listwidget_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnInitStyleOption((QListWidget*)self, (intptr_t)callback);
}

int32_t q_listwidget_dev_type(void* self) {
    return QListWidget_DevType((QListWidget*)self);
}

int32_t q_listwidget_qbase_dev_type(void* self) {
    return QListWidget_QBaseDevType((QListWidget*)self);
}

void q_listwidget_on_dev_type(void* self, int32_t (*callback)()) {
    QListWidget_OnDevType((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_set_visible(void* self, bool visible) {
    QListWidget_SetVisible((QListWidget*)self, visible);
}

void q_listwidget_qbase_set_visible(void* self, bool visible) {
    QListWidget_QBaseSetVisible((QListWidget*)self, visible);
}

void q_listwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QListWidget_OnSetVisible((QListWidget*)self, (intptr_t)callback);
}

int32_t q_listwidget_height_for_width(void* self, int param1) {
    return QListWidget_HeightForWidth((QListWidget*)self, param1);
}

int32_t q_listwidget_qbase_height_for_width(void* self, int param1) {
    return QListWidget_QBaseHeightForWidth((QListWidget*)self, param1);
}

void q_listwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QListWidget_OnHeightForWidth((QListWidget*)self, (intptr_t)callback);
}

bool q_listwidget_has_height_for_width(void* self) {
    return QListWidget_HasHeightForWidth((QListWidget*)self);
}

bool q_listwidget_qbase_has_height_for_width(void* self) {
    return QListWidget_QBaseHasHeightForWidth((QListWidget*)self);
}

void q_listwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    QListWidget_OnHasHeightForWidth((QListWidget*)self, (intptr_t)callback);
}

QPaintEngine* q_listwidget_paint_engine(void* self) {
    return QListWidget_PaintEngine((QListWidget*)self);
}

QPaintEngine* q_listwidget_qbase_paint_engine(void* self) {
    return QListWidget_QBasePaintEngine((QListWidget*)self);
}

void q_listwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QListWidget_OnPaintEngine((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_key_release_event(void* self, void* event) {
    QListWidget_KeyReleaseEvent((QListWidget*)self, (QKeyEvent*)event);
}

void q_listwidget_qbase_key_release_event(void* self, void* event) {
    QListWidget_QBaseKeyReleaseEvent((QListWidget*)self, (QKeyEvent*)event);
}

void q_listwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnKeyReleaseEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_enter_event(void* self, void* event) {
    QListWidget_EnterEvent((QListWidget*)self, (QEnterEvent*)event);
}

void q_listwidget_qbase_enter_event(void* self, void* event) {
    QListWidget_QBaseEnterEvent((QListWidget*)self, (QEnterEvent*)event);
}

void q_listwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnEnterEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_leave_event(void* self, void* event) {
    QListWidget_LeaveEvent((QListWidget*)self, (QEvent*)event);
}

void q_listwidget_qbase_leave_event(void* self, void* event) {
    QListWidget_QBaseLeaveEvent((QListWidget*)self, (QEvent*)event);
}

void q_listwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnLeaveEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_move_event(void* self, void* event) {
    QListWidget_MoveEvent((QListWidget*)self, (QMoveEvent*)event);
}

void q_listwidget_qbase_move_event(void* self, void* event) {
    QListWidget_QBaseMoveEvent((QListWidget*)self, (QMoveEvent*)event);
}

void q_listwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnMoveEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_close_event(void* self, void* event) {
    QListWidget_CloseEvent((QListWidget*)self, (QCloseEvent*)event);
}

void q_listwidget_qbase_close_event(void* self, void* event) {
    QListWidget_QBaseCloseEvent((QListWidget*)self, (QCloseEvent*)event);
}

void q_listwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnCloseEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_tablet_event(void* self, void* event) {
    QListWidget_TabletEvent((QListWidget*)self, (QTabletEvent*)event);
}

void q_listwidget_qbase_tablet_event(void* self, void* event) {
    QListWidget_QBaseTabletEvent((QListWidget*)self, (QTabletEvent*)event);
}

void q_listwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnTabletEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_action_event(void* self, void* event) {
    QListWidget_ActionEvent((QListWidget*)self, (QActionEvent*)event);
}

void q_listwidget_qbase_action_event(void* self, void* event) {
    QListWidget_QBaseActionEvent((QListWidget*)self, (QActionEvent*)event);
}

void q_listwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnActionEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_show_event(void* self, void* event) {
    QListWidget_ShowEvent((QListWidget*)self, (QShowEvent*)event);
}

void q_listwidget_qbase_show_event(void* self, void* event) {
    QListWidget_QBaseShowEvent((QListWidget*)self, (QShowEvent*)event);
}

void q_listwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnShowEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_hide_event(void* self, void* event) {
    QListWidget_HideEvent((QListWidget*)self, (QHideEvent*)event);
}

void q_listwidget_qbase_hide_event(void* self, void* event) {
    QListWidget_QBaseHideEvent((QListWidget*)self, (QHideEvent*)event);
}

void q_listwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnHideEvent((QListWidget*)self, (intptr_t)callback);
}

bool q_listwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QListWidget_NativeEvent((QListWidget*)self, qstring(eventType), message, result);
}

bool q_listwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QListWidget_QBaseNativeEvent((QListWidget*)self, qstring(eventType), message, result);
}

void q_listwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QListWidget_OnNativeEvent((QListWidget*)self, (intptr_t)callback);
}

int32_t q_listwidget_metric(void* self, int64_t param1) {
    return QListWidget_Metric((QListWidget*)self, param1);
}

int32_t q_listwidget_qbase_metric(void* self, int64_t param1) {
    return QListWidget_QBaseMetric((QListWidget*)self, param1);
}

void q_listwidget_on_metric(void* self, int32_t (*callback)(void*, int64_t)) {
    QListWidget_OnMetric((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_init_painter(void* self, void* painter) {
    QListWidget_InitPainter((QListWidget*)self, (QPainter*)painter);
}

void q_listwidget_qbase_init_painter(void* self, void* painter) {
    QListWidget_QBaseInitPainter((QListWidget*)self, (QPainter*)painter);
}

void q_listwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnInitPainter((QListWidget*)self, (intptr_t)callback);
}

QPaintDevice* q_listwidget_redirected(void* self, void* offset) {
    return QListWidget_Redirected((QListWidget*)self, (QPoint*)offset);
}

QPaintDevice* q_listwidget_qbase_redirected(void* self, void* offset) {
    return QListWidget_QBaseRedirected((QListWidget*)self, (QPoint*)offset);
}

void q_listwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QListWidget_OnRedirected((QListWidget*)self, (intptr_t)callback);
}

QPainter* q_listwidget_shared_painter(void* self) {
    return QListWidget_SharedPainter((QListWidget*)self);
}

QPainter* q_listwidget_qbase_shared_painter(void* self) {
    return QListWidget_QBaseSharedPainter((QListWidget*)self);
}

void q_listwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    QListWidget_OnSharedPainter((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_child_event(void* self, void* event) {
    QListWidget_ChildEvent((QListWidget*)self, (QChildEvent*)event);
}

void q_listwidget_qbase_child_event(void* self, void* event) {
    QListWidget_QBaseChildEvent((QListWidget*)self, (QChildEvent*)event);
}

void q_listwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnChildEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_custom_event(void* self, void* event) {
    QListWidget_CustomEvent((QListWidget*)self, (QEvent*)event);
}

void q_listwidget_qbase_custom_event(void* self, void* event) {
    QListWidget_QBaseCustomEvent((QListWidget*)self, (QEvent*)event);
}

void q_listwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnCustomEvent((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_connect_notify(void* self, void* signal) {
    QListWidget_ConnectNotify((QListWidget*)self, (QMetaMethod*)signal);
}

void q_listwidget_qbase_connect_notify(void* self, void* signal) {
    QListWidget_QBaseConnectNotify((QListWidget*)self, (QMetaMethod*)signal);
}

void q_listwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnConnectNotify((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_disconnect_notify(void* self, void* signal) {
    QListWidget_DisconnectNotify((QListWidget*)self, (QMetaMethod*)signal);
}

void q_listwidget_qbase_disconnect_notify(void* self, void* signal) {
    QListWidget_QBaseDisconnectNotify((QListWidget*)self, (QMetaMethod*)signal);
}

void q_listwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnDisconnectNotify((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_resize_contents(void* self, int width, int height) {
    QListWidget_ResizeContents((QListWidget*)self, width, height);
}

void q_listwidget_qbase_resize_contents(void* self, int width, int height) {
    QListWidget_QBaseResizeContents((QListWidget*)self, width, height);
}

void q_listwidget_on_resize_contents(void* self, void (*callback)(void*, int, int)) {
    QListWidget_OnResizeContents((QListWidget*)self, (intptr_t)callback);
}

QSize* q_listwidget_contents_size(void* self) {
    return QListWidget_ContentsSize((QListWidget*)self);
}

QSize* q_listwidget_qbase_contents_size(void* self) {
    return QListWidget_QBaseContentsSize((QListWidget*)self);
}

void q_listwidget_on_contents_size(void* self, QSize* (*callback)()) {
    QListWidget_OnContentsSize((QListWidget*)self, (intptr_t)callback);
}

QRect* q_listwidget_rect_for_index(void* self, void* index) {
    return QListWidget_RectForIndex((QListWidget*)self, (QModelIndex*)index);
}

QRect* q_listwidget_qbase_rect_for_index(void* self, void* index) {
    return QListWidget_QBaseRectForIndex((QListWidget*)self, (QModelIndex*)index);
}

void q_listwidget_on_rect_for_index(void* self, QRect* (*callback)(void*, void*)) {
    QListWidget_OnRectForIndex((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_set_position_for_index(void* self, void* position, void* index) {
    QListWidget_SetPositionForIndex((QListWidget*)self, (QPoint*)position, (QModelIndex*)index);
}

void q_listwidget_qbase_set_position_for_index(void* self, void* position, void* index) {
    QListWidget_QBaseSetPositionForIndex((QListWidget*)self, (QPoint*)position, (QModelIndex*)index);
}

void q_listwidget_on_set_position_for_index(void* self, void (*callback)(void*, void*, void*)) {
    QListWidget_OnSetPositionForIndex((QListWidget*)self, (intptr_t)callback);
}

int64_t q_listwidget_state(void* self) {
    return QListWidget_State((QListWidget*)self);
}

int64_t q_listwidget_qbase_state(void* self) {
    return QListWidget_QBaseState((QListWidget*)self);
}

void q_listwidget_on_state(void* self, int64_t (*callback)()) {
    QListWidget_OnState((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_set_state(void* self, int64_t state) {
    QListWidget_SetState((QListWidget*)self, state);
}

void q_listwidget_qbase_set_state(void* self, int64_t state) {
    QListWidget_QBaseSetState((QListWidget*)self, state);
}

void q_listwidget_on_set_state(void* self, void (*callback)(void*, int64_t)) {
    QListWidget_OnSetState((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_schedule_delayed_items_layout(void* self) {
    QListWidget_ScheduleDelayedItemsLayout((QListWidget*)self);
}

void q_listwidget_qbase_schedule_delayed_items_layout(void* self) {
    QListWidget_QBaseScheduleDelayedItemsLayout((QListWidget*)self);
}

void q_listwidget_on_schedule_delayed_items_layout(void* self, void (*callback)()) {
    QListWidget_OnScheduleDelayedItemsLayout((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_execute_delayed_items_layout(void* self) {
    QListWidget_ExecuteDelayedItemsLayout((QListWidget*)self);
}

void q_listwidget_qbase_execute_delayed_items_layout(void* self) {
    QListWidget_QBaseExecuteDelayedItemsLayout((QListWidget*)self);
}

void q_listwidget_on_execute_delayed_items_layout(void* self, void (*callback)()) {
    QListWidget_OnExecuteDelayedItemsLayout((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_set_dirty_region(void* self, void* region) {
    QListWidget_SetDirtyRegion((QListWidget*)self, (QRegion*)region);
}

void q_listwidget_qbase_set_dirty_region(void* self, void* region) {
    QListWidget_QBaseSetDirtyRegion((QListWidget*)self, (QRegion*)region);
}

void q_listwidget_on_set_dirty_region(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnSetDirtyRegion((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_scroll_dirty_region(void* self, int dx, int dy) {
    QListWidget_ScrollDirtyRegion((QListWidget*)self, dx, dy);
}

void q_listwidget_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QListWidget_QBaseScrollDirtyRegion((QListWidget*)self, dx, dy);
}

void q_listwidget_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int)) {
    QListWidget_OnScrollDirtyRegion((QListWidget*)self, (intptr_t)callback);
}

QPoint* q_listwidget_dirty_region_offset(void* self) {
    return QListWidget_DirtyRegionOffset((QListWidget*)self);
}

QPoint* q_listwidget_qbase_dirty_region_offset(void* self) {
    return QListWidget_QBaseDirtyRegionOffset((QListWidget*)self);
}

void q_listwidget_on_dirty_region_offset(void* self, QPoint* (*callback)()) {
    QListWidget_OnDirtyRegionOffset((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_start_auto_scroll(void* self) {
    QListWidget_StartAutoScroll((QListWidget*)self);
}

void q_listwidget_qbase_start_auto_scroll(void* self) {
    QListWidget_QBaseStartAutoScroll((QListWidget*)self);
}

void q_listwidget_on_start_auto_scroll(void* self, void (*callback)()) {
    QListWidget_OnStartAutoScroll((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_stop_auto_scroll(void* self) {
    QListWidget_StopAutoScroll((QListWidget*)self);
}

void q_listwidget_qbase_stop_auto_scroll(void* self) {
    QListWidget_QBaseStopAutoScroll((QListWidget*)self);
}

void q_listwidget_on_stop_auto_scroll(void* self, void (*callback)()) {
    QListWidget_OnStopAutoScroll((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_do_auto_scroll(void* self) {
    QListWidget_DoAutoScroll((QListWidget*)self);
}

void q_listwidget_qbase_do_auto_scroll(void* self) {
    QListWidget_QBaseDoAutoScroll((QListWidget*)self);
}

void q_listwidget_on_do_auto_scroll(void* self, void (*callback)()) {
    QListWidget_OnDoAutoScroll((QListWidget*)self, (intptr_t)callback);
}

int64_t q_listwidget_drop_indicator_position(void* self) {
    return QListWidget_DropIndicatorPosition((QListWidget*)self);
}

int64_t q_listwidget_qbase_drop_indicator_position(void* self) {
    return QListWidget_QBaseDropIndicatorPosition((QListWidget*)self);
}

void q_listwidget_on_drop_indicator_position(void* self, int64_t (*callback)()) {
    QListWidget_OnDropIndicatorPosition((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QListWidget_SetViewportMargins((QListWidget*)self, left, top, right, bottom);
}

void q_listwidget_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QListWidget_QBaseSetViewportMargins((QListWidget*)self, left, top, right, bottom);
}

void q_listwidget_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    QListWidget_OnSetViewportMargins((QListWidget*)self, (intptr_t)callback);
}

QMargins* q_listwidget_viewport_margins(void* self) {
    return QListWidget_ViewportMargins((QListWidget*)self);
}

QMargins* q_listwidget_qbase_viewport_margins(void* self) {
    return QListWidget_QBaseViewportMargins((QListWidget*)self);
}

void q_listwidget_on_viewport_margins(void* self, QMargins* (*callback)()) {
    QListWidget_OnViewportMargins((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_draw_frame(void* self, void* param1) {
    QListWidget_DrawFrame((QListWidget*)self, (QPainter*)param1);
}

void q_listwidget_qbase_draw_frame(void* self, void* param1) {
    QListWidget_QBaseDrawFrame((QListWidget*)self, (QPainter*)param1);
}

void q_listwidget_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    QListWidget_OnDrawFrame((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_update_micro_focus(void* self) {
    QListWidget_UpdateMicroFocus((QListWidget*)self);
}

void q_listwidget_qbase_update_micro_focus(void* self) {
    QListWidget_QBaseUpdateMicroFocus((QListWidget*)self);
}

void q_listwidget_on_update_micro_focus(void* self, void (*callback)()) {
    QListWidget_OnUpdateMicroFocus((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_create(void* self) {
    QListWidget_Create((QListWidget*)self);
}

void q_listwidget_qbase_create(void* self) {
    QListWidget_QBaseCreate((QListWidget*)self);
}

void q_listwidget_on_create(void* self, void (*callback)()) {
    QListWidget_OnCreate((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_destroy(void* self) {
    QListWidget_Destroy((QListWidget*)self);
}

void q_listwidget_qbase_destroy(void* self) {
    QListWidget_QBaseDestroy((QListWidget*)self);
}

void q_listwidget_on_destroy(void* self, void (*callback)()) {
    QListWidget_OnDestroy((QListWidget*)self, (intptr_t)callback);
}

bool q_listwidget_focus_next_child(void* self) {
    return QListWidget_FocusNextChild((QListWidget*)self);
}

bool q_listwidget_qbase_focus_next_child(void* self) {
    return QListWidget_QBaseFocusNextChild((QListWidget*)self);
}

void q_listwidget_on_focus_next_child(void* self, bool (*callback)()) {
    QListWidget_OnFocusNextChild((QListWidget*)self, (intptr_t)callback);
}

bool q_listwidget_focus_previous_child(void* self) {
    return QListWidget_FocusPreviousChild((QListWidget*)self);
}

bool q_listwidget_qbase_focus_previous_child(void* self) {
    return QListWidget_QBaseFocusPreviousChild((QListWidget*)self);
}

void q_listwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    QListWidget_OnFocusPreviousChild((QListWidget*)self, (intptr_t)callback);
}

QObject* q_listwidget_sender(void* self) {
    return QListWidget_Sender((QListWidget*)self);
}

QObject* q_listwidget_qbase_sender(void* self) {
    return QListWidget_QBaseSender((QListWidget*)self);
}

void q_listwidget_on_sender(void* self, QObject* (*callback)()) {
    QListWidget_OnSender((QListWidget*)self, (intptr_t)callback);
}

int32_t q_listwidget_sender_signal_index(void* self) {
    return QListWidget_SenderSignalIndex((QListWidget*)self);
}

int32_t q_listwidget_qbase_sender_signal_index(void* self) {
    return QListWidget_QBaseSenderSignalIndex((QListWidget*)self);
}

void q_listwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QListWidget_OnSenderSignalIndex((QListWidget*)self, (intptr_t)callback);
}

int32_t q_listwidget_receivers(void* self, const char* signal) {
    return QListWidget_Receivers((QListWidget*)self, signal);
}

int32_t q_listwidget_qbase_receivers(void* self, const char* signal) {
    return QListWidget_QBaseReceivers((QListWidget*)self, signal);
}

void q_listwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QListWidget_OnReceivers((QListWidget*)self, (intptr_t)callback);
}

bool q_listwidget_is_signal_connected(void* self, void* signal) {
    return QListWidget_IsSignalConnected((QListWidget*)self, (QMetaMethod*)signal);
}

bool q_listwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QListWidget_QBaseIsSignalConnected((QListWidget*)self, (QMetaMethod*)signal);
}

void q_listwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QListWidget_OnIsSignalConnected((QListWidget*)self, (intptr_t)callback);
}

double q_listwidget_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QListWidget_GetDecodedMetricF((QListWidget*)self, metricA, metricB);
}

double q_listwidget_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QListWidget_QBaseGetDecodedMetricF((QListWidget*)self, metricA, metricB);
}

void q_listwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int64_t, int64_t)) {
    QListWidget_OnGetDecodedMetricF((QListWidget*)self, (intptr_t)callback);
}

void q_listwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_listwidget_delete(void* self) {
    QListWidget_Delete((QListWidget*)(self));
}
