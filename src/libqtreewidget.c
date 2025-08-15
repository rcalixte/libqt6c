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
#include "libqtreeview.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqtreewidget.hpp"
#include "libqtreewidget.h"

QTreeWidgetItem* q_treewidgetitem_new() {
    return QTreeWidgetItem_new();
}

QTreeWidgetItem* q_treewidgetitem_new2(const char* strings[]) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = (libqt_string*)malloc(strings_len * sizeof(libqt_string));
    if (strings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_treewidgetitem_new2");
        abort();
    }
    for (size_t i = 0; i < strings_len; ++i) {
        strings_qstr[i] = qstring(strings[i]);
    }
    libqt_list strings_list = qlist(strings_qstr, strings_len);

    QTreeWidgetItem* _out = QTreeWidgetItem_new2(strings_list);
    free(strings_qstr);
    return _out;
}

QTreeWidgetItem* q_treewidgetitem_new3(void* treeview) {
    return QTreeWidgetItem_new3((QTreeWidget*)treeview);
}

QTreeWidgetItem* q_treewidgetitem_new4(void* treeview, const char* strings[]) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = (libqt_string*)malloc(strings_len * sizeof(libqt_string));
    if (strings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_treewidgetitem_new4");
        abort();
    }
    for (size_t i = 0; i < strings_len; ++i) {
        strings_qstr[i] = qstring(strings[i]);
    }
    libqt_list strings_list = qlist(strings_qstr, strings_len);

    QTreeWidgetItem* _out = QTreeWidgetItem_new4((QTreeWidget*)treeview, strings_list);
    free(strings_qstr);
    return _out;
}

QTreeWidgetItem* q_treewidgetitem_new5(void* treeview, void* after) {
    return QTreeWidgetItem_new5((QTreeWidget*)treeview, (QTreeWidgetItem*)after);
}

QTreeWidgetItem* q_treewidgetitem_new6(void* parent) {
    return QTreeWidgetItem_new6((QTreeWidgetItem*)parent);
}

QTreeWidgetItem* q_treewidgetitem_new7(void* parent, const char* strings[]) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = (libqt_string*)malloc(strings_len * sizeof(libqt_string));
    if (strings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_treewidgetitem_new7");
        abort();
    }
    for (size_t i = 0; i < strings_len; ++i) {
        strings_qstr[i] = qstring(strings[i]);
    }
    libqt_list strings_list = qlist(strings_qstr, strings_len);

    QTreeWidgetItem* _out = QTreeWidgetItem_new7((QTreeWidgetItem*)parent, strings_list);
    free(strings_qstr);
    return _out;
}

QTreeWidgetItem* q_treewidgetitem_new8(void* parent, void* after) {
    return QTreeWidgetItem_new8((QTreeWidgetItem*)parent, (QTreeWidgetItem*)after);
}

QTreeWidgetItem* q_treewidgetitem_new9(void* other) {
    return QTreeWidgetItem_new9((QTreeWidgetItem*)other);
}

QTreeWidgetItem* q_treewidgetitem_new10(int typeVal) {
    return QTreeWidgetItem_new10(typeVal);
}

QTreeWidgetItem* q_treewidgetitem_new11(const char* strings[], int typeVal) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = (libqt_string*)malloc(strings_len * sizeof(libqt_string));
    if (strings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_treewidgetitem_new11");
        abort();
    }
    for (size_t i = 0; i < strings_len; ++i) {
        strings_qstr[i] = qstring(strings[i]);
    }
    libqt_list strings_list = qlist(strings_qstr, strings_len);

    QTreeWidgetItem* _out = QTreeWidgetItem_new11(strings_list, typeVal);
    free(strings_qstr);
    return _out;
}

QTreeWidgetItem* q_treewidgetitem_new12(void* treeview, int typeVal) {
    return QTreeWidgetItem_new12((QTreeWidget*)treeview, typeVal);
}

QTreeWidgetItem* q_treewidgetitem_new13(void* treeview, const char* strings[], int typeVal) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = (libqt_string*)malloc(strings_len * sizeof(libqt_string));
    if (strings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_treewidgetitem_new13");
        abort();
    }
    for (size_t i = 0; i < strings_len; ++i) {
        strings_qstr[i] = qstring(strings[i]);
    }
    libqt_list strings_list = qlist(strings_qstr, strings_len);

    QTreeWidgetItem* _out = QTreeWidgetItem_new13((QTreeWidget*)treeview, strings_list, typeVal);
    free(strings_qstr);
    return _out;
}

QTreeWidgetItem* q_treewidgetitem_new14(void* treeview, void* after, int typeVal) {
    return QTreeWidgetItem_new14((QTreeWidget*)treeview, (QTreeWidgetItem*)after, typeVal);
}

QTreeWidgetItem* q_treewidgetitem_new15(void* parent, int typeVal) {
    return QTreeWidgetItem_new15((QTreeWidgetItem*)parent, typeVal);
}

QTreeWidgetItem* q_treewidgetitem_new16(void* parent, const char* strings[], int typeVal) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = (libqt_string*)malloc(strings_len * sizeof(libqt_string));
    if (strings_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_treewidgetitem_new16");
        abort();
    }
    for (size_t i = 0; i < strings_len; ++i) {
        strings_qstr[i] = qstring(strings[i]);
    }
    libqt_list strings_list = qlist(strings_qstr, strings_len);

    QTreeWidgetItem* _out = QTreeWidgetItem_new16((QTreeWidgetItem*)parent, strings_list, typeVal);
    free(strings_qstr);
    return _out;
}

QTreeWidgetItem* q_treewidgetitem_new17(void* parent, void* after, int typeVal) {
    return QTreeWidgetItem_new17((QTreeWidgetItem*)parent, (QTreeWidgetItem*)after, typeVal);
}

QTreeWidgetItem* q_treewidgetitem_clone(void* self) {
    return QTreeWidgetItem_Clone((QTreeWidgetItem*)self);
}

void q_treewidgetitem_on_clone(void* self, QTreeWidgetItem* (*callback)()) {
    QTreeWidgetItem_OnClone((QTreeWidgetItem*)self, (intptr_t)callback);
}

QTreeWidgetItem* q_treewidgetitem_qbase_clone(void* self) {
    return QTreeWidgetItem_QBaseClone((QTreeWidgetItem*)self);
}

QTreeWidget* q_treewidgetitem_tree_widget(void* self) {
    return QTreeWidgetItem_TreeWidget((QTreeWidgetItem*)self);
}

void q_treewidgetitem_set_selected(void* self, bool selectVal) {
    QTreeWidgetItem_SetSelected((QTreeWidgetItem*)self, selectVal);
}

bool q_treewidgetitem_is_selected(void* self) {
    return QTreeWidgetItem_IsSelected((QTreeWidgetItem*)self);
}

void q_treewidgetitem_set_hidden(void* self, bool hide) {
    QTreeWidgetItem_SetHidden((QTreeWidgetItem*)self, hide);
}

bool q_treewidgetitem_is_hidden(void* self) {
    return QTreeWidgetItem_IsHidden((QTreeWidgetItem*)self);
}

void q_treewidgetitem_set_expanded(void* self, bool expand) {
    QTreeWidgetItem_SetExpanded((QTreeWidgetItem*)self, expand);
}

bool q_treewidgetitem_is_expanded(void* self) {
    return QTreeWidgetItem_IsExpanded((QTreeWidgetItem*)self);
}

void q_treewidgetitem_set_first_column_spanned(void* self, bool span) {
    QTreeWidgetItem_SetFirstColumnSpanned((QTreeWidgetItem*)self, span);
}

bool q_treewidgetitem_is_first_column_spanned(void* self) {
    return QTreeWidgetItem_IsFirstColumnSpanned((QTreeWidgetItem*)self);
}

void q_treewidgetitem_set_disabled(void* self, bool disabled) {
    QTreeWidgetItem_SetDisabled((QTreeWidgetItem*)self, disabled);
}

bool q_treewidgetitem_is_disabled(void* self) {
    return QTreeWidgetItem_IsDisabled((QTreeWidgetItem*)self);
}

void q_treewidgetitem_set_child_indicator_policy(void* self, int64_t policy) {
    QTreeWidgetItem_SetChildIndicatorPolicy((QTreeWidgetItem*)self, policy);
}

int64_t q_treewidgetitem_child_indicator_policy(void* self) {
    return QTreeWidgetItem_ChildIndicatorPolicy((QTreeWidgetItem*)self);
}

int64_t q_treewidgetitem_flags(void* self) {
    return QTreeWidgetItem_Flags((QTreeWidgetItem*)self);
}

void q_treewidgetitem_set_flags(void* self, int64_t flags) {
    QTreeWidgetItem_SetFlags((QTreeWidgetItem*)self, flags);
}

const char* q_treewidgetitem_text(void* self, int column) {
    libqt_string _str = QTreeWidgetItem_Text((QTreeWidgetItem*)self, column);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treewidgetitem_set_text(void* self, int column, const char* text) {
    QTreeWidgetItem_SetText((QTreeWidgetItem*)self, column, qstring(text));
}

QIcon* q_treewidgetitem_icon(void* self, int column) {
    return QTreeWidgetItem_Icon((QTreeWidgetItem*)self, column);
}

void q_treewidgetitem_set_icon(void* self, int column, void* icon) {
    QTreeWidgetItem_SetIcon((QTreeWidgetItem*)self, column, (QIcon*)icon);
}

const char* q_treewidgetitem_status_tip(void* self, int column) {
    libqt_string _str = QTreeWidgetItem_StatusTip((QTreeWidgetItem*)self, column);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treewidgetitem_set_status_tip(void* self, int column, const char* statusTip) {
    QTreeWidgetItem_SetStatusTip((QTreeWidgetItem*)self, column, qstring(statusTip));
}

const char* q_treewidgetitem_tool_tip(void* self, int column) {
    libqt_string _str = QTreeWidgetItem_ToolTip((QTreeWidgetItem*)self, column);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treewidgetitem_set_tool_tip(void* self, int column, const char* toolTip) {
    QTreeWidgetItem_SetToolTip((QTreeWidgetItem*)self, column, qstring(toolTip));
}

const char* q_treewidgetitem_whats_this(void* self, int column) {
    libqt_string _str = QTreeWidgetItem_WhatsThis((QTreeWidgetItem*)self, column);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treewidgetitem_set_whats_this(void* self, int column, const char* whatsThis) {
    QTreeWidgetItem_SetWhatsThis((QTreeWidgetItem*)self, column, qstring(whatsThis));
}

QFont* q_treewidgetitem_font(void* self, int column) {
    return QTreeWidgetItem_Font((QTreeWidgetItem*)self, column);
}

void q_treewidgetitem_set_font(void* self, int column, void* font) {
    QTreeWidgetItem_SetFont((QTreeWidgetItem*)self, column, (QFont*)font);
}

int32_t q_treewidgetitem_text_alignment(void* self, int column) {
    return QTreeWidgetItem_TextAlignment((QTreeWidgetItem*)self, column);
}

void q_treewidgetitem_set_text_alignment(void* self, int column, int alignment) {
    QTreeWidgetItem_SetTextAlignment((QTreeWidgetItem*)self, column, alignment);
}

void q_treewidgetitem_set_text_alignment2(void* self, int column, int64_t alignment) {
    QTreeWidgetItem_SetTextAlignment2((QTreeWidgetItem*)self, column, alignment);
}

void q_treewidgetitem_set_text_alignment3(void* self, int column, int64_t alignment) {
    QTreeWidgetItem_SetTextAlignment3((QTreeWidgetItem*)self, column, alignment);
}

QBrush* q_treewidgetitem_background(void* self, int column) {
    return QTreeWidgetItem_Background((QTreeWidgetItem*)self, column);
}

void q_treewidgetitem_set_background(void* self, int column, void* brush) {
    QTreeWidgetItem_SetBackground((QTreeWidgetItem*)self, column, (QBrush*)brush);
}

QBrush* q_treewidgetitem_foreground(void* self, int column) {
    return QTreeWidgetItem_Foreground((QTreeWidgetItem*)self, column);
}

void q_treewidgetitem_set_foreground(void* self, int column, void* brush) {
    QTreeWidgetItem_SetForeground((QTreeWidgetItem*)self, column, (QBrush*)brush);
}

int64_t q_treewidgetitem_check_state(void* self, int column) {
    return QTreeWidgetItem_CheckState((QTreeWidgetItem*)self, column);
}

void q_treewidgetitem_set_check_state(void* self, int column, int64_t state) {
    QTreeWidgetItem_SetCheckState((QTreeWidgetItem*)self, column, state);
}

QSize* q_treewidgetitem_size_hint(void* self, int column) {
    return QTreeWidgetItem_SizeHint((QTreeWidgetItem*)self, column);
}

void q_treewidgetitem_set_size_hint(void* self, int column, void* size) {
    QTreeWidgetItem_SetSizeHint((QTreeWidgetItem*)self, column, (QSize*)size);
}

QVariant* q_treewidgetitem_data(void* self, int column, int role) {
    return QTreeWidgetItem_Data((QTreeWidgetItem*)self, column, role);
}

void q_treewidgetitem_on_data(void* self, QVariant* (*callback)(void*, int, int)) {
    QTreeWidgetItem_OnData((QTreeWidgetItem*)self, (intptr_t)callback);
}

QVariant* q_treewidgetitem_qbase_data(void* self, int column, int role) {
    return QTreeWidgetItem_QBaseData((QTreeWidgetItem*)self, column, role);
}

void q_treewidgetitem_set_data(void* self, int column, int role, void* value) {
    QTreeWidgetItem_SetData((QTreeWidgetItem*)self, column, role, (QVariant*)value);
}

void q_treewidgetitem_on_set_data(void* self, void (*callback)(void*, int, int, void*)) {
    QTreeWidgetItem_OnSetData((QTreeWidgetItem*)self, (intptr_t)callback);
}

void q_treewidgetitem_qbase_set_data(void* self, int column, int role, void* value) {
    QTreeWidgetItem_QBaseSetData((QTreeWidgetItem*)self, column, role, (QVariant*)value);
}

bool q_treewidgetitem_operator_lesser(void* self, void* other) {
    return QTreeWidgetItem_OperatorLesser((QTreeWidgetItem*)self, (QTreeWidgetItem*)other);
}

void q_treewidgetitem_on_operator_lesser(void* self, bool (*callback)(void*, void*)) {
    QTreeWidgetItem_OnOperatorLesser((QTreeWidgetItem*)self, (intptr_t)callback);
}

bool q_treewidgetitem_qbase_operator_lesser(void* self, void* other) {
    return QTreeWidgetItem_QBaseOperatorLesser((QTreeWidgetItem*)self, (QTreeWidgetItem*)other);
}

void q_treewidgetitem_read(void* self, void* in) {
    QTreeWidgetItem_Read((QTreeWidgetItem*)self, (QDataStream*)in);
}

void q_treewidgetitem_on_read(void* self, void (*callback)(void*, void*)) {
    QTreeWidgetItem_OnRead((QTreeWidgetItem*)self, (intptr_t)callback);
}

void q_treewidgetitem_qbase_read(void* self, void* in) {
    QTreeWidgetItem_QBaseRead((QTreeWidgetItem*)self, (QDataStream*)in);
}

void q_treewidgetitem_write(void* self, void* out) {
    QTreeWidgetItem_Write((QTreeWidgetItem*)self, (QDataStream*)out);
}

void q_treewidgetitem_on_write(void* self, void (*callback)(void*, void*)) {
    QTreeWidgetItem_OnWrite((QTreeWidgetItem*)self, (intptr_t)callback);
}

void q_treewidgetitem_qbase_write(void* self, void* out) {
    QTreeWidgetItem_QBaseWrite((QTreeWidgetItem*)self, (QDataStream*)out);
}

void q_treewidgetitem_operator_assign(void* self, void* other) {
    QTreeWidgetItem_OperatorAssign((QTreeWidgetItem*)self, (QTreeWidgetItem*)other);
}

QTreeWidgetItem* q_treewidgetitem_parent(void* self) {
    return QTreeWidgetItem_Parent((QTreeWidgetItem*)self);
}

QTreeWidgetItem* q_treewidgetitem_child(void* self, int index) {
    return QTreeWidgetItem_Child((QTreeWidgetItem*)self, index);
}

int32_t q_treewidgetitem_child_count(void* self) {
    return QTreeWidgetItem_ChildCount((QTreeWidgetItem*)self);
}

int32_t q_treewidgetitem_column_count(void* self) {
    return QTreeWidgetItem_ColumnCount((QTreeWidgetItem*)self);
}

int32_t q_treewidgetitem_index_of_child(void* self, void* child) {
    return QTreeWidgetItem_IndexOfChild((QTreeWidgetItem*)self, (QTreeWidgetItem*)child);
}

void q_treewidgetitem_add_child(void* self, void* child) {
    QTreeWidgetItem_AddChild((QTreeWidgetItem*)self, (QTreeWidgetItem*)child);
}

void q_treewidgetitem_insert_child(void* self, int index, void* child) {
    QTreeWidgetItem_InsertChild((QTreeWidgetItem*)self, index, (QTreeWidgetItem*)child);
}

void q_treewidgetitem_remove_child(void* self, void* child) {
    QTreeWidgetItem_RemoveChild((QTreeWidgetItem*)self, (QTreeWidgetItem*)child);
}

QTreeWidgetItem* q_treewidgetitem_take_child(void* self, int index) {
    return QTreeWidgetItem_TakeChild((QTreeWidgetItem*)self, index);
}

void q_treewidgetitem_add_children(void* self, libqt_list children) {
    QTreeWidgetItem_AddChildren((QTreeWidgetItem*)self, children);
}

void q_treewidgetitem_insert_children(void* self, int index, libqt_list children) {
    QTreeWidgetItem_InsertChildren((QTreeWidgetItem*)self, index, children);
}

libqt_list /* of QTreeWidgetItem* */ q_treewidgetitem_take_children(void* self) {
    libqt_list _arr = QTreeWidgetItem_TakeChildren((QTreeWidgetItem*)self);
    return _arr;
}

int32_t q_treewidgetitem_type(void* self) {
    return QTreeWidgetItem_Type((QTreeWidgetItem*)self);
}

void q_treewidgetitem_sort_children(void* self, int column, int64_t order) {
    QTreeWidgetItem_SortChildren((QTreeWidgetItem*)self, column, order);
}

void q_treewidgetitem_emit_data_changed(void* self) {
    QTreeWidgetItem_EmitDataChanged((QTreeWidgetItem*)self);
}

void q_treewidgetitem_on_emit_data_changed(void* self, void (*callback)()) {
    QTreeWidgetItem_OnEmitDataChanged((QTreeWidgetItem*)self, (intptr_t)callback);
}

void q_treewidgetitem_qbase_emit_data_changed(void* self) {
    QTreeWidgetItem_QBaseEmitDataChanged((QTreeWidgetItem*)self);
}

void q_treewidgetitem_delete(void* self) {
    QTreeWidgetItem_Delete((QTreeWidgetItem*)(self));
}

QTreeWidget* q_treewidget_new(void* parent) {
    return QTreeWidget_new((QWidget*)parent);
}

QTreeWidget* q_treewidget_new2() {
    return QTreeWidget_new2();
}

const QMetaObject* q_treewidget_meta_object(void* self) {
    return QTreeWidget_MetaObject((QTreeWidget*)self);
}

void* q_treewidget_metacast(void* self, const char* param1) {
    return QTreeWidget_Metacast((QTreeWidget*)self, param1);
}

int32_t q_treewidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTreeWidget_Metacall((QTreeWidget*)self, param1, param2, param3);
}

void q_treewidget_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QTreeWidget_OnMetacall((QTreeWidget*)self, (intptr_t)callback);
}

int32_t q_treewidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTreeWidget_QBaseMetacall((QTreeWidget*)self, param1, param2, param3);
}

const char* q_treewidget_tr(const char* s) {
    libqt_string _str = QTreeWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_treewidget_column_count(void* self) {
    return QTreeWidget_ColumnCount((QTreeWidget*)self);
}

void q_treewidget_set_column_count(void* self, int columns) {
    QTreeWidget_SetColumnCount((QTreeWidget*)self, columns);
}

QTreeWidgetItem* q_treewidget_invisible_root_item(void* self) {
    return QTreeWidget_InvisibleRootItem((QTreeWidget*)self);
}

QTreeWidgetItem* q_treewidget_top_level_item(void* self, int index) {
    return QTreeWidget_TopLevelItem((QTreeWidget*)self, index);
}

int32_t q_treewidget_top_level_item_count(void* self) {
    return QTreeWidget_TopLevelItemCount((QTreeWidget*)self);
}

void q_treewidget_insert_top_level_item(void* self, int index, void* item) {
    QTreeWidget_InsertTopLevelItem((QTreeWidget*)self, index, (QTreeWidgetItem*)item);
}

void q_treewidget_add_top_level_item(void* self, void* item) {
    QTreeWidget_AddTopLevelItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

QTreeWidgetItem* q_treewidget_take_top_level_item(void* self, int index) {
    return QTreeWidget_TakeTopLevelItem((QTreeWidget*)self, index);
}

int32_t q_treewidget_index_of_top_level_item(void* self, void* item) {
    return QTreeWidget_IndexOfTopLevelItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

void q_treewidget_insert_top_level_items(void* self, int index, libqt_list items) {
    QTreeWidget_InsertTopLevelItems((QTreeWidget*)self, index, items);
}

void q_treewidget_add_top_level_items(void* self, libqt_list items) {
    QTreeWidget_AddTopLevelItems((QTreeWidget*)self, items);
}

QTreeWidgetItem* q_treewidget_header_item(void* self) {
    return QTreeWidget_HeaderItem((QTreeWidget*)self);
}

void q_treewidget_set_header_item(void* self, void* item) {
    QTreeWidget_SetHeaderItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

void q_treewidget_set_header_labels(void* self, const char* labels[]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_treewidget_set_header_labels");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i) {
        labels_qstr[i] = qstring(labels[i]);
    }
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QTreeWidget_SetHeaderLabels((QTreeWidget*)self, labels_list);
    free(labels_qstr);
}

void q_treewidget_set_header_label(void* self, const char* label) {
    QTreeWidget_SetHeaderLabel((QTreeWidget*)self, qstring(label));
}

QTreeWidgetItem* q_treewidget_current_item(void* self) {
    return QTreeWidget_CurrentItem((QTreeWidget*)self);
}

int32_t q_treewidget_current_column(void* self) {
    return QTreeWidget_CurrentColumn((QTreeWidget*)self);
}

void q_treewidget_set_current_item(void* self, void* item) {
    QTreeWidget_SetCurrentItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

void q_treewidget_set_current_item2(void* self, void* item, int column) {
    QTreeWidget_SetCurrentItem2((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

void q_treewidget_set_current_item3(void* self, void* item, int column, int64_t command) {
    QTreeWidget_SetCurrentItem3((QTreeWidget*)self, (QTreeWidgetItem*)item, column, command);
}

QTreeWidgetItem* q_treewidget_item_at(void* self, void* p) {
    return QTreeWidget_ItemAt((QTreeWidget*)self, (QPoint*)p);
}

QTreeWidgetItem* q_treewidget_item_at2(void* self, int x, int y) {
    return QTreeWidget_ItemAt2((QTreeWidget*)self, x, y);
}

QRect* q_treewidget_visual_item_rect(void* self, void* item) {
    return QTreeWidget_VisualItemRect((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

int32_t q_treewidget_sort_column(void* self) {
    return QTreeWidget_SortColumn((QTreeWidget*)self);
}

void q_treewidget_sort_items(void* self, int column, int64_t order) {
    QTreeWidget_SortItems((QTreeWidget*)self, column, order);
}

void q_treewidget_edit_item(void* self, void* item) {
    QTreeWidget_EditItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

void q_treewidget_open_persistent_editor(void* self, void* item) {
    QTreeWidget_OpenPersistentEditor((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

void q_treewidget_close_persistent_editor(void* self, void* item) {
    QTreeWidget_ClosePersistentEditor((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

bool q_treewidget_is_persistent_editor_open(void* self, void* item) {
    return QTreeWidget_IsPersistentEditorOpen((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

QWidget* q_treewidget_item_widget(void* self, void* item, int column) {
    return QTreeWidget_ItemWidget((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

void q_treewidget_set_item_widget(void* self, void* item, int column, void* widget) {
    QTreeWidget_SetItemWidget((QTreeWidget*)self, (QTreeWidgetItem*)item, column, (QWidget*)widget);
}

void q_treewidget_remove_item_widget(void* self, void* item, int column) {
    QTreeWidget_RemoveItemWidget((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

libqt_list /* of QTreeWidgetItem* */ q_treewidget_selected_items(void* self) {
    libqt_list _arr = QTreeWidget_SelectedItems((QTreeWidget*)self);
    return _arr;
}

libqt_list /* of QTreeWidgetItem* */ q_treewidget_find_items(void* self, const char* text, int64_t flags) {
    libqt_list _arr = QTreeWidget_FindItems((QTreeWidget*)self, qstring(text), flags);
    return _arr;
}

QTreeWidgetItem* q_treewidget_item_above(void* self, void* item) {
    return QTreeWidget_ItemAbove((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

QTreeWidgetItem* q_treewidget_item_below(void* self, void* item) {
    return QTreeWidget_ItemBelow((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

QModelIndex* q_treewidget_index_from_item(void* self, void* item) {
    return QTreeWidget_IndexFromItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

QTreeWidgetItem* q_treewidget_item_from_index(void* self, void* index) {
    return QTreeWidget_ItemFromIndex((QTreeWidget*)self, (QModelIndex*)index);
}

void q_treewidget_set_selection_model(void* self, void* selectionModel) {
    QTreeWidget_SetSelectionModel((QTreeWidget*)self, (QItemSelectionModel*)selectionModel);
}

void q_treewidget_on_set_selection_model(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnSetSelectionModel((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_qbase_set_selection_model(void* self, void* selectionModel) {
    QTreeWidget_QBaseSetSelectionModel((QTreeWidget*)self, (QItemSelectionModel*)selectionModel);
}

void q_treewidget_scroll_to_item(void* self, void* item) {
    QTreeWidget_ScrollToItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

void q_treewidget_expand_item(void* self, void* item) {
    QTreeWidget_ExpandItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

void q_treewidget_collapse_item(void* self, void* item) {
    QTreeWidget_CollapseItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

void q_treewidget_clear(void* self) {
    QTreeWidget_Clear((QTreeWidget*)self);
}

void q_treewidget_item_pressed(void* self, void* item, int column) {
    QTreeWidget_ItemPressed((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

void q_treewidget_on_item_pressed(void* self, void (*callback)(void*, void*, int)) {
    QTreeWidget_Connect_ItemPressed((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_item_clicked(void* self, void* item, int column) {
    QTreeWidget_ItemClicked((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

void q_treewidget_on_item_clicked(void* self, void (*callback)(void*, void*, int)) {
    QTreeWidget_Connect_ItemClicked((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_item_double_clicked(void* self, void* item, int column) {
    QTreeWidget_ItemDoubleClicked((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

void q_treewidget_on_item_double_clicked(void* self, void (*callback)(void*, void*, int)) {
    QTreeWidget_Connect_ItemDoubleClicked((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_item_activated(void* self, void* item, int column) {
    QTreeWidget_ItemActivated((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

void q_treewidget_on_item_activated(void* self, void (*callback)(void*, void*, int)) {
    QTreeWidget_Connect_ItemActivated((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_item_entered(void* self, void* item, int column) {
    QTreeWidget_ItemEntered((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

void q_treewidget_on_item_entered(void* self, void (*callback)(void*, void*, int)) {
    QTreeWidget_Connect_ItemEntered((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_item_changed(void* self, void* item, int column) {
    QTreeWidget_ItemChanged((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

void q_treewidget_on_item_changed(void* self, void (*callback)(void*, void*, int)) {
    QTreeWidget_Connect_ItemChanged((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_item_expanded(void* self, void* item) {
    QTreeWidget_ItemExpanded((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

void q_treewidget_on_item_expanded(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_Connect_ItemExpanded((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_item_collapsed(void* self, void* item) {
    QTreeWidget_ItemCollapsed((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

void q_treewidget_on_item_collapsed(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_Connect_ItemCollapsed((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_current_item_changed(void* self, void* current, void* previous) {
    QTreeWidget_CurrentItemChanged((QTreeWidget*)self, (QTreeWidgetItem*)current, (QTreeWidgetItem*)previous);
}

void q_treewidget_on_current_item_changed(void* self, void (*callback)(void*, void*, void*)) {
    QTreeWidget_Connect_CurrentItemChanged((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_item_selection_changed(void* self) {
    QTreeWidget_ItemSelectionChanged((QTreeWidget*)self);
}

void q_treewidget_on_item_selection_changed(void* self, void (*callback)(void*)) {
    QTreeWidget_Connect_ItemSelectionChanged((QTreeWidget*)self, (intptr_t)callback);
}

bool q_treewidget_event(void* self, void* e) {
    return QTreeWidget_Event((QTreeWidget*)self, (QEvent*)e);
}

void q_treewidget_on_event(void* self, bool (*callback)(void*, void*)) {
    QTreeWidget_OnEvent((QTreeWidget*)self, (intptr_t)callback);
}

bool q_treewidget_qbase_event(void* self, void* e) {
    return QTreeWidget_QBaseEvent((QTreeWidget*)self, (QEvent*)e);
}

const char** q_treewidget_mime_types(void* self) {
    libqt_list _arr = QTreeWidget_MimeTypes((QTreeWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_treewidget_mime_types");
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

void q_treewidget_on_mime_types(void* self, const char** (*callback)()) {
    QTreeWidget_OnMimeTypes((QTreeWidget*)self, (intptr_t)callback);
}

const char** q_treewidget_qbase_mime_types(void* self) {
    libqt_list _arr = QTreeWidget_QBaseMimeTypes((QTreeWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_treewidget_mime_types");
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

QMimeData* q_treewidget_mime_data(void* self, libqt_list items) {
    return QTreeWidget_MimeData((QTreeWidget*)self, items);
}

void q_treewidget_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list)) {
    QTreeWidget_OnMimeData((QTreeWidget*)self, (intptr_t)callback);
}

QMimeData* q_treewidget_qbase_mime_data(void* self, libqt_list items) {
    return QTreeWidget_QBaseMimeData((QTreeWidget*)self, items);
}

bool q_treewidget_drop_mime_data(void* self, void* parent, int index, void* data, int64_t action) {
    return QTreeWidget_DropMimeData((QTreeWidget*)self, (QTreeWidgetItem*)parent, index, (QMimeData*)data, action);
}

void q_treewidget_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int, void*, int64_t)) {
    QTreeWidget_OnDropMimeData((QTreeWidget*)self, (intptr_t)callback);
}

bool q_treewidget_qbase_drop_mime_data(void* self, void* parent, int index, void* data, int64_t action) {
    return QTreeWidget_QBaseDropMimeData((QTreeWidget*)self, (QTreeWidgetItem*)parent, index, (QMimeData*)data, action);
}

int64_t q_treewidget_supported_drop_actions(void* self) {
    return QTreeWidget_SupportedDropActions((QTreeWidget*)self);
}

void q_treewidget_on_supported_drop_actions(void* self, int64_t (*callback)()) {
    QTreeWidget_OnSupportedDropActions((QTreeWidget*)self, (intptr_t)callback);
}

int64_t q_treewidget_qbase_supported_drop_actions(void* self) {
    return QTreeWidget_QBaseSupportedDropActions((QTreeWidget*)self);
}

void q_treewidget_drop_event(void* self, void* event) {
    QTreeWidget_DropEvent((QTreeWidget*)self, (QDropEvent*)event);
}

void q_treewidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnDropEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_qbase_drop_event(void* self, void* event) {
    QTreeWidget_QBaseDropEvent((QTreeWidget*)self, (QDropEvent*)event);
}

const char* q_treewidget_tr2(const char* s, const char* c) {
    libqt_string _str = QTreeWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_treewidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTreeWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treewidget_edit_item2(void* self, void* item, int column) {
    QTreeWidget_EditItem2((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

void q_treewidget_open_persistent_editor2(void* self, void* item, int column) {
    QTreeWidget_OpenPersistentEditor2((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

void q_treewidget_close_persistent_editor2(void* self, void* item, int column) {
    QTreeWidget_ClosePersistentEditor2((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

bool q_treewidget_is_persistent_editor_open2(void* self, void* item, int column) {
    return QTreeWidget_IsPersistentEditorOpen2((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

libqt_list /* of QTreeWidgetItem* */ q_treewidget_find_items3(void* self, const char* text, int64_t flags, int column) {
    libqt_list _arr = QTreeWidget_FindItems3((QTreeWidget*)self, qstring(text), flags, column);
    return _arr;
}

QModelIndex* q_treewidget_index_from_item2(void* self, void* item, int column) {
    return QTreeWidget_IndexFromItem2((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

void q_treewidget_scroll_to_item2(void* self, void* item, int64_t hint) {
    QTreeWidget_ScrollToItem2((QTreeWidget*)self, (QTreeWidgetItem*)item, hint);
}

void q_treewidget_set_model(void* self, void* model) {
    QTreeView_SetModel((QTreeView*)self, (QAbstractItemModel*)model);
}

void q_treewidget_on_set_model(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnSetModel((QTreeView*)self, (intptr_t)callback);
}

void q_treewidget_qbase_set_model(void* self, void* model) {
    QTreeView_QBaseSetModel((QTreeView*)self, (QAbstractItemModel*)model);
}

QHeaderView* q_treewidget_header(void* self) {
    return QTreeView_Header((QTreeView*)self);
}

void q_treewidget_set_header(void* self, void* header) {
    QTreeView_SetHeader((QTreeView*)self, (QHeaderView*)header);
}

int32_t q_treewidget_auto_expand_delay(void* self) {
    return QTreeView_AutoExpandDelay((QTreeView*)self);
}

void q_treewidget_set_auto_expand_delay(void* self, int delay) {
    QTreeView_SetAutoExpandDelay((QTreeView*)self, delay);
}

int32_t q_treewidget_indentation(void* self) {
    return QTreeView_Indentation((QTreeView*)self);
}

void q_treewidget_set_indentation(void* self, int i) {
    QTreeView_SetIndentation((QTreeView*)self, i);
}

void q_treewidget_reset_indentation(void* self) {
    QTreeView_ResetIndentation((QTreeView*)self);
}

bool q_treewidget_root_is_decorated(void* self) {
    return QTreeView_RootIsDecorated((QTreeView*)self);
}

void q_treewidget_set_root_is_decorated(void* self, bool show) {
    QTreeView_SetRootIsDecorated((QTreeView*)self, show);
}

bool q_treewidget_uniform_row_heights(void* self) {
    return QTreeView_UniformRowHeights((QTreeView*)self);
}

void q_treewidget_set_uniform_row_heights(void* self, bool uniform) {
    QTreeView_SetUniformRowHeights((QTreeView*)self, uniform);
}

bool q_treewidget_items_expandable(void* self) {
    return QTreeView_ItemsExpandable((QTreeView*)self);
}

void q_treewidget_set_items_expandable(void* self, bool enable) {
    QTreeView_SetItemsExpandable((QTreeView*)self, enable);
}

bool q_treewidget_expands_on_double_click(void* self) {
    return QTreeView_ExpandsOnDoubleClick((QTreeView*)self);
}

void q_treewidget_set_expands_on_double_click(void* self, bool enable) {
    QTreeView_SetExpandsOnDoubleClick((QTreeView*)self, enable);
}

int32_t q_treewidget_column_viewport_position(void* self, int column) {
    return QTreeView_ColumnViewportPosition((QTreeView*)self, column);
}

int32_t q_treewidget_column_width(void* self, int column) {
    return QTreeView_ColumnWidth((QTreeView*)self, column);
}

void q_treewidget_set_column_width(void* self, int column, int width) {
    QTreeView_SetColumnWidth((QTreeView*)self, column, width);
}

int32_t q_treewidget_column_at(void* self, int x) {
    return QTreeView_ColumnAt((QTreeView*)self, x);
}

bool q_treewidget_is_column_hidden(void* self, int column) {
    return QTreeView_IsColumnHidden((QTreeView*)self, column);
}

void q_treewidget_set_column_hidden(void* self, int column, bool hide) {
    QTreeView_SetColumnHidden((QTreeView*)self, column, hide);
}

bool q_treewidget_is_header_hidden(void* self) {
    return QTreeView_IsHeaderHidden((QTreeView*)self);
}

void q_treewidget_set_header_hidden(void* self, bool hide) {
    QTreeView_SetHeaderHidden((QTreeView*)self, hide);
}

bool q_treewidget_is_row_hidden(void* self, int row, void* parent) {
    return QTreeView_IsRowHidden((QTreeView*)self, row, (QModelIndex*)parent);
}

void q_treewidget_set_row_hidden(void* self, int row, void* parent, bool hide) {
    QTreeView_SetRowHidden((QTreeView*)self, row, (QModelIndex*)parent, hide);
}

bool q_treewidget_is_first_column_spanned(void* self, int row, void* parent) {
    return QTreeView_IsFirstColumnSpanned((QTreeView*)self, row, (QModelIndex*)parent);
}

void q_treewidget_set_first_column_spanned(void* self, int row, void* parent, bool span) {
    QTreeView_SetFirstColumnSpanned((QTreeView*)self, row, (QModelIndex*)parent, span);
}

bool q_treewidget_is_expanded(void* self, void* index) {
    return QTreeView_IsExpanded((QTreeView*)self, (QModelIndex*)index);
}

void q_treewidget_set_expanded(void* self, void* index, bool expand) {
    QTreeView_SetExpanded((QTreeView*)self, (QModelIndex*)index, expand);
}

void q_treewidget_set_sorting_enabled(void* self, bool enable) {
    QTreeView_SetSortingEnabled((QTreeView*)self, enable);
}

bool q_treewidget_is_sorting_enabled(void* self) {
    return QTreeView_IsSortingEnabled((QTreeView*)self);
}

void q_treewidget_set_animated(void* self, bool enable) {
    QTreeView_SetAnimated((QTreeView*)self, enable);
}

bool q_treewidget_is_animated(void* self) {
    return QTreeView_IsAnimated((QTreeView*)self);
}

void q_treewidget_set_all_columns_show_focus(void* self, bool enable) {
    QTreeView_SetAllColumnsShowFocus((QTreeView*)self, enable);
}

bool q_treewidget_all_columns_show_focus(void* self) {
    return QTreeView_AllColumnsShowFocus((QTreeView*)self);
}

void q_treewidget_set_word_wrap(void* self, bool on) {
    QTreeView_SetWordWrap((QTreeView*)self, on);
}

bool q_treewidget_word_wrap(void* self) {
    return QTreeView_WordWrap((QTreeView*)self);
}

void q_treewidget_set_tree_position(void* self, int logicalIndex) {
    QTreeView_SetTreePosition((QTreeView*)self, logicalIndex);
}

int32_t q_treewidget_tree_position(void* self) {
    return QTreeView_TreePosition((QTreeView*)self);
}

QModelIndex* q_treewidget_index_above(void* self, void* index) {
    return QTreeView_IndexAbove((QTreeView*)self, (QModelIndex*)index);
}

QModelIndex* q_treewidget_index_below(void* self, void* index) {
    return QTreeView_IndexBelow((QTreeView*)self, (QModelIndex*)index);
}

void q_treewidget_expanded(void* self, void* index) {
    QTreeView_Expanded((QTreeView*)self, (QModelIndex*)index);
}

void q_treewidget_on_expanded(void* self, void (*callback)(void*, void*)) {
    QTreeView_Connect_Expanded((QTreeView*)self, (intptr_t)callback);
}

void q_treewidget_collapsed(void* self, void* index) {
    QTreeView_Collapsed((QTreeView*)self, (QModelIndex*)index);
}

void q_treewidget_on_collapsed(void* self, void (*callback)(void*, void*)) {
    QTreeView_Connect_Collapsed((QTreeView*)self, (intptr_t)callback);
}

void q_treewidget_hide_column(void* self, int column) {
    QTreeView_HideColumn((QTreeView*)self, column);
}

void q_treewidget_show_column(void* self, int column) {
    QTreeView_ShowColumn((QTreeView*)self, column);
}

void q_treewidget_expand(void* self, void* index) {
    QTreeView_Expand((QTreeView*)self, (QModelIndex*)index);
}

void q_treewidget_collapse(void* self, void* index) {
    QTreeView_Collapse((QTreeView*)self, (QModelIndex*)index);
}

void q_treewidget_resize_column_to_contents(void* self, int column) {
    QTreeView_ResizeColumnToContents((QTreeView*)self, column);
}

void q_treewidget_sort_by_column(void* self, int column, int64_t order) {
    QTreeView_SortByColumn((QTreeView*)self, column, order);
}

void q_treewidget_expand_all(void* self) {
    QTreeView_ExpandAll((QTreeView*)self);
}

void q_treewidget_expand_recursively(void* self, void* index) {
    QTreeView_ExpandRecursively((QTreeView*)self, (QModelIndex*)index);
}

void q_treewidget_collapse_all(void* self) {
    QTreeView_CollapseAll((QTreeView*)self);
}

void q_treewidget_expand_to_depth(void* self, int depth) {
    QTreeView_ExpandToDepth((QTreeView*)self, depth);
}

void q_treewidget_expand_recursively2(void* self, void* index, int depth) {
    QTreeView_ExpandRecursively2((QTreeView*)self, (QModelIndex*)index, depth);
}

QAbstractItemModel* q_treewidget_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

QItemSelectionModel* q_treewidget_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

void q_treewidget_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_treewidget_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

void q_treewidget_set_selection_mode(void* self, int64_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

int64_t q_treewidget_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

void q_treewidget_set_selection_behavior(void* self, int64_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

int64_t q_treewidget_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

QModelIndex* q_treewidget_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

QModelIndex* q_treewidget_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

void q_treewidget_set_edit_triggers(void* self, int64_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

int64_t q_treewidget_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

void q_treewidget_set_vertical_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

int64_t q_treewidget_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

void q_treewidget_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

void q_treewidget_set_horizontal_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

int64_t q_treewidget_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

void q_treewidget_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

void q_treewidget_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

bool q_treewidget_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

void q_treewidget_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

int32_t q_treewidget_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

void q_treewidget_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

bool q_treewidget_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

void q_treewidget_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

bool q_treewidget_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

void q_treewidget_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

bool q_treewidget_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

void q_treewidget_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

bool q_treewidget_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

void q_treewidget_set_drag_drop_mode(void* self, int64_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

int64_t q_treewidget_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

void q_treewidget_set_default_drop_action(void* self, int64_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

int64_t q_treewidget_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

void q_treewidget_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

bool q_treewidget_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

void q_treewidget_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

QSize* q_treewidget_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

void q_treewidget_set_text_elide_mode(void* self, int64_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

int64_t q_treewidget_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

QSize* q_treewidget_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treewidget_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

QWidget* q_treewidget_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treewidget_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_treewidget_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

void q_treewidget_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_treewidget_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

QAbstractItemDelegate* q_treewidget_item_delegate2(void* self, void* index) {
    return QAbstractItemView_ItemDelegate2((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treewidget_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treewidget_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

void q_treewidget_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treewidget_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

void q_treewidget_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

void q_treewidget_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treewidget_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treewidget_on_pressed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)callback);
}

void q_treewidget_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treewidget_on_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)callback);
}

void q_treewidget_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treewidget_on_double_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)callback);
}

void q_treewidget_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treewidget_on_activated(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)callback);
}

void q_treewidget_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treewidget_on_entered(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)callback);
}

void q_treewidget_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

void q_treewidget_on_viewport_entered(void* self, void (*callback)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)callback);
}

void q_treewidget_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

void q_treewidget_on_icon_size_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)callback);
}

int64_t q_treewidget_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_treewidget_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_treewidget_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_treewidget_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int64_t q_treewidget_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_treewidget_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_treewidget_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_treewidget_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_treewidget_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_treewidget_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_treewidget_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_treewidget_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_treewidget_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_treewidget_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_treewidget_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int64_t q_treewidget_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_treewidget_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_treewidget_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_treewidget_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_treewidget_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int64_t q_treewidget_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_treewidget_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int64_t q_treewidget_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_treewidget_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_treewidget_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_treewidget_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_treewidget_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_treewidget_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_treewidget_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_treewidget_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_treewidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_treewidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_treewidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_treewidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_treewidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_treewidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_treewidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_treewidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_treewidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_treewidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_treewidget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_treewidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_treewidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_treewidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_treewidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_treewidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_treewidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_treewidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_treewidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_treewidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_treewidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_treewidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_treewidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_treewidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_treewidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_treewidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_treewidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_treewidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_treewidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_treewidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_treewidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_treewidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_treewidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_treewidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_treewidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_treewidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_treewidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_treewidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_treewidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_treewidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_treewidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_treewidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_treewidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_treewidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_treewidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_treewidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_treewidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_treewidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_treewidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_treewidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_treewidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_treewidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_treewidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_treewidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_treewidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_treewidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_treewidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_treewidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_treewidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_treewidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_treewidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_treewidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_treewidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_treewidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_treewidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_treewidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_treewidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_treewidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_treewidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_treewidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_treewidget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_treewidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_treewidget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_treewidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_treewidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_treewidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_treewidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_treewidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_treewidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_treewidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_treewidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_treewidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_treewidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_treewidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_treewidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_treewidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_treewidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_treewidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_treewidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_treewidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_treewidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_treewidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_treewidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_treewidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_treewidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_treewidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_treewidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_treewidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_treewidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_treewidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_treewidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treewidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_treewidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_treewidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_treewidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treewidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_treewidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treewidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_treewidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treewidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_treewidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_treewidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_treewidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_treewidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treewidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_treewidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_treewidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_treewidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treewidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_treewidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_treewidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treewidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_treewidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treewidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_treewidget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_treewidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_treewidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_treewidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_treewidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_treewidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_treewidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_treewidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_treewidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_treewidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_treewidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_treewidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_treewidget_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_treewidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_treewidget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_treewidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_treewidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_treewidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_treewidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_treewidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_treewidget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_treewidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_treewidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_treewidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_treewidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_treewidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_treewidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_treewidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_treewidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_treewidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_treewidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_treewidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_treewidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_treewidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_treewidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_treewidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_treewidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_treewidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_treewidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_treewidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_treewidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_treewidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_treewidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_treewidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_treewidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_treewidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_treewidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_treewidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_treewidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_treewidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_treewidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_treewidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_treewidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_treewidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_treewidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_treewidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_treewidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_treewidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_treewidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_treewidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_treewidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_treewidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_treewidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_treewidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_treewidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_treewidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_treewidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_treewidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_treewidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_treewidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_treewidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_treewidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_treewidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_treewidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_treewidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_treewidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_treewidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_treewidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_treewidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_treewidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_treewidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_treewidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_treewidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_treewidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_treewidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_treewidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_treewidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_treewidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_treewidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_treewidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_treewidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_treewidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_treewidget_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_treewidget_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_treewidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_treewidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_treewidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_treewidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_treewidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_treewidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_treewidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_treewidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_treewidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_treewidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_treewidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_treewidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_treewidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_treewidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_treewidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_treewidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_treewidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_treewidget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_treewidget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_treewidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_treewidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_treewidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_treewidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_treewidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_treewidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_treewidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_treewidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_treewidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_treewidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_treewidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_treewidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_treewidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_treewidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_treewidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_treewidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_treewidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_treewidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_treewidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_treewidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_treewidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_treewidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_treewidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_treewidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_treewidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_treewidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_treewidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_treewidget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_treewidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_treewidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_treewidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_treewidget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_treewidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_treewidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_treewidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treewidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_treewidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_treewidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_treewidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_treewidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_treewidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_treewidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_treewidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_treewidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_treewidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_treewidget_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_treewidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_treewidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_treewidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_treewidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_treewidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_treewidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_treewidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_treewidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_treewidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_treewidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_treewidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_treewidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_treewidget_dynamic_property_names");
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

QBindingStorage* q_treewidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_treewidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_treewidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_treewidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_treewidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_treewidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_treewidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_treewidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_treewidget_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_treewidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_treewidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_treewidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_treewidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_treewidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_treewidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_treewidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_treewidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_treewidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_treewidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_treewidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_treewidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_treewidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_treewidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_treewidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_treewidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_treewidget_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_treewidget_set_root_index(void* self, void* index) {
    QTreeWidget_SetRootIndex((QTreeWidget*)self, (QModelIndex*)index);
}

void q_treewidget_qbase_set_root_index(void* self, void* index) {
    QTreeWidget_QBaseSetRootIndex((QTreeWidget*)self, (QModelIndex*)index);
}

void q_treewidget_on_set_root_index(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnSetRootIndex((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_keyboard_search(void* self, const char* search) {
    QTreeWidget_KeyboardSearch((QTreeWidget*)self, qstring(search));
}

void q_treewidget_qbase_keyboard_search(void* self, const char* search) {
    QTreeWidget_QBaseKeyboardSearch((QTreeWidget*)self, qstring(search));
}

void q_treewidget_on_keyboard_search(void* self, void (*callback)(void*, const char*)) {
    QTreeWidget_OnKeyboardSearch((QTreeWidget*)self, (intptr_t)callback);
}

QRect* q_treewidget_visual_rect(void* self, void* index) {
    return QTreeWidget_VisualRect((QTreeWidget*)self, (QModelIndex*)index);
}

QRect* q_treewidget_qbase_visual_rect(void* self, void* index) {
    return QTreeWidget_QBaseVisualRect((QTreeWidget*)self, (QModelIndex*)index);
}

void q_treewidget_on_visual_rect(void* self, QRect* (*callback)(void*, void*)) {
    QTreeWidget_OnVisualRect((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_scroll_to(void* self, void* index, int64_t hint) {
    QTreeWidget_ScrollTo((QTreeWidget*)self, (QModelIndex*)index, hint);
}

void q_treewidget_qbase_scroll_to(void* self, void* index, int64_t hint) {
    QTreeWidget_QBaseScrollTo((QTreeWidget*)self, (QModelIndex*)index, hint);
}

void q_treewidget_on_scroll_to(void* self, void (*callback)(void*, void*, int64_t)) {
    QTreeWidget_OnScrollTo((QTreeWidget*)self, (intptr_t)callback);
}

QModelIndex* q_treewidget_index_at(void* self, void* p) {
    return QTreeWidget_IndexAt((QTreeWidget*)self, (QPoint*)p);
}

QModelIndex* q_treewidget_qbase_index_at(void* self, void* p) {
    return QTreeWidget_QBaseIndexAt((QTreeWidget*)self, (QPoint*)p);
}

void q_treewidget_on_index_at(void* self, QModelIndex* (*callback)(void*, void*)) {
    QTreeWidget_OnIndexAt((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_do_items_layout(void* self) {
    QTreeWidget_DoItemsLayout((QTreeWidget*)self);
}

void q_treewidget_qbase_do_items_layout(void* self) {
    QTreeWidget_QBaseDoItemsLayout((QTreeWidget*)self);
}

void q_treewidget_on_do_items_layout(void* self, void (*callback)()) {
    QTreeWidget_OnDoItemsLayout((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_reset(void* self) {
    QTreeWidget_Reset((QTreeWidget*)self);
}

void q_treewidget_qbase_reset(void* self) {
    QTreeWidget_QBaseReset((QTreeWidget*)self);
}

void q_treewidget_on_reset(void* self, void (*callback)()) {
    QTreeWidget_OnReset((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QTreeWidget_DataChanged((QTreeWidget*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_treewidget_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QTreeWidget_QBaseDataChanged((QTreeWidget*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_treewidget_on_data_changed(void* self, void (*callback)(void*, void*, void*, libqt_list)) {
    QTreeWidget_OnDataChanged((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_select_all(void* self) {
    QTreeWidget_SelectAll((QTreeWidget*)self);
}

void q_treewidget_qbase_select_all(void* self) {
    QTreeWidget_QBaseSelectAll((QTreeWidget*)self);
}

void q_treewidget_on_select_all(void* self, void (*callback)()) {
    QTreeWidget_OnSelectAll((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_vertical_scrollbar_value_changed(void* self, int value) {
    QTreeWidget_VerticalScrollbarValueChanged((QTreeWidget*)self, value);
}

void q_treewidget_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QTreeWidget_QBaseVerticalScrollbarValueChanged((QTreeWidget*)self, value);
}

void q_treewidget_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    QTreeWidget_OnVerticalScrollbarValueChanged((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_scroll_contents_by(void* self, int dx, int dy) {
    QTreeWidget_ScrollContentsBy((QTreeWidget*)self, dx, dy);
}

void q_treewidget_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QTreeWidget_QBaseScrollContentsBy((QTreeWidget*)self, dx, dy);
}

void q_treewidget_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    QTreeWidget_OnScrollContentsBy((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_rows_inserted(void* self, void* parent, int start, int end) {
    QTreeWidget_RowsInserted((QTreeWidget*)self, (QModelIndex*)parent, start, end);
}

void q_treewidget_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QTreeWidget_QBaseRowsInserted((QTreeWidget*)self, (QModelIndex*)parent, start, end);
}

void q_treewidget_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QTreeWidget_OnRowsInserted((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTreeWidget_RowsAboutToBeRemoved((QTreeWidget*)self, (QModelIndex*)parent, start, end);
}

void q_treewidget_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTreeWidget_QBaseRowsAboutToBeRemoved((QTreeWidget*)self, (QModelIndex*)parent, start, end);
}

void q_treewidget_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QTreeWidget_OnRowsAboutToBeRemoved((QTreeWidget*)self, (intptr_t)callback);
}

QModelIndex* q_treewidget_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QTreeWidget_MoveCursor((QTreeWidget*)self, cursorAction, modifiers);
}

QModelIndex* q_treewidget_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QTreeWidget_QBaseMoveCursor((QTreeWidget*)self, cursorAction, modifiers);
}

void q_treewidget_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int64_t, int64_t)) {
    QTreeWidget_OnMoveCursor((QTreeWidget*)self, (intptr_t)callback);
}

int32_t q_treewidget_horizontal_offset(void* self) {
    return QTreeWidget_HorizontalOffset((QTreeWidget*)self);
}

int32_t q_treewidget_qbase_horizontal_offset(void* self) {
    return QTreeWidget_QBaseHorizontalOffset((QTreeWidget*)self);
}

void q_treewidget_on_horizontal_offset(void* self, int32_t (*callback)()) {
    QTreeWidget_OnHorizontalOffset((QTreeWidget*)self, (intptr_t)callback);
}

int32_t q_treewidget_vertical_offset(void* self) {
    return QTreeWidget_VerticalOffset((QTreeWidget*)self);
}

int32_t q_treewidget_qbase_vertical_offset(void* self) {
    return QTreeWidget_QBaseVerticalOffset((QTreeWidget*)self);
}

void q_treewidget_on_vertical_offset(void* self, int32_t (*callback)()) {
    QTreeWidget_OnVerticalOffset((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_set_selection(void* self, void* rect, int64_t command) {
    QTreeWidget_SetSelection((QTreeWidget*)self, (QRect*)rect, command);
}

void q_treewidget_qbase_set_selection(void* self, void* rect, int64_t command) {
    QTreeWidget_QBaseSetSelection((QTreeWidget*)self, (QRect*)rect, command);
}

void q_treewidget_on_set_selection(void* self, void (*callback)(void*, void*, int64_t)) {
    QTreeWidget_OnSetSelection((QTreeWidget*)self, (intptr_t)callback);
}

QRegion* q_treewidget_visual_region_for_selection(void* self, void* selection) {
    return QTreeWidget_VisualRegionForSelection((QTreeWidget*)self, (QItemSelection*)selection);
}

QRegion* q_treewidget_qbase_visual_region_for_selection(void* self, void* selection) {
    return QTreeWidget_QBaseVisualRegionForSelection((QTreeWidget*)self, (QItemSelection*)selection);
}

void q_treewidget_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*)) {
    QTreeWidget_OnVisualRegionForSelection((QTreeWidget*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_treewidget_selected_indexes(void* self) {
    libqt_list _arr = QTreeWidget_SelectedIndexes((QTreeWidget*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_treewidget_qbase_selected_indexes(void* self) {
    libqt_list _arr = QTreeWidget_QBaseSelectedIndexes((QTreeWidget*)self);
    return _arr;
}

void q_treewidget_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    QTreeWidget_OnSelectedIndexes((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_change_event(void* self, void* event) {
    QTreeWidget_ChangeEvent((QTreeWidget*)self, (QEvent*)event);
}

void q_treewidget_qbase_change_event(void* self, void* event) {
    QTreeWidget_QBaseChangeEvent((QTreeWidget*)self, (QEvent*)event);
}

void q_treewidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnChangeEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_timer_event(void* self, void* event) {
    QTreeWidget_TimerEvent((QTreeWidget*)self, (QTimerEvent*)event);
}

void q_treewidget_qbase_timer_event(void* self, void* event) {
    QTreeWidget_QBaseTimerEvent((QTreeWidget*)self, (QTimerEvent*)event);
}

void q_treewidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnTimerEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_paint_event(void* self, void* event) {
    QTreeWidget_PaintEvent((QTreeWidget*)self, (QPaintEvent*)event);
}

void q_treewidget_qbase_paint_event(void* self, void* event) {
    QTreeWidget_QBasePaintEvent((QTreeWidget*)self, (QPaintEvent*)event);
}

void q_treewidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnPaintEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_draw_row(void* self, void* painter, void* options, void* index) {
    QTreeWidget_DrawRow((QTreeWidget*)self, (QPainter*)painter, (QStyleOptionViewItem*)options, (QModelIndex*)index);
}

void q_treewidget_qbase_draw_row(void* self, void* painter, void* options, void* index) {
    QTreeWidget_QBaseDrawRow((QTreeWidget*)self, (QPainter*)painter, (QStyleOptionViewItem*)options, (QModelIndex*)index);
}

void q_treewidget_on_draw_row(void* self, void (*callback)(void*, void*, void*, void*)) {
    QTreeWidget_OnDrawRow((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_draw_branches(void* self, void* painter, void* rect, void* index) {
    QTreeWidget_DrawBranches((QTreeWidget*)self, (QPainter*)painter, (QRect*)rect, (QModelIndex*)index);
}

void q_treewidget_qbase_draw_branches(void* self, void* painter, void* rect, void* index) {
    QTreeWidget_QBaseDrawBranches((QTreeWidget*)self, (QPainter*)painter, (QRect*)rect, (QModelIndex*)index);
}

void q_treewidget_on_draw_branches(void* self, void (*callback)(void*, void*, void*, void*)) {
    QTreeWidget_OnDrawBranches((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_mouse_press_event(void* self, void* event) {
    QTreeWidget_MousePressEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

void q_treewidget_qbase_mouse_press_event(void* self, void* event) {
    QTreeWidget_QBaseMousePressEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

void q_treewidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnMousePressEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_mouse_release_event(void* self, void* event) {
    QTreeWidget_MouseReleaseEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

void q_treewidget_qbase_mouse_release_event(void* self, void* event) {
    QTreeWidget_QBaseMouseReleaseEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

void q_treewidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnMouseReleaseEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_mouse_double_click_event(void* self, void* event) {
    QTreeWidget_MouseDoubleClickEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

void q_treewidget_qbase_mouse_double_click_event(void* self, void* event) {
    QTreeWidget_QBaseMouseDoubleClickEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

void q_treewidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnMouseDoubleClickEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_mouse_move_event(void* self, void* event) {
    QTreeWidget_MouseMoveEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

void q_treewidget_qbase_mouse_move_event(void* self, void* event) {
    QTreeWidget_QBaseMouseMoveEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

void q_treewidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnMouseMoveEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_key_press_event(void* self, void* event) {
    QTreeWidget_KeyPressEvent((QTreeWidget*)self, (QKeyEvent*)event);
}

void q_treewidget_qbase_key_press_event(void* self, void* event) {
    QTreeWidget_QBaseKeyPressEvent((QTreeWidget*)self, (QKeyEvent*)event);
}

void q_treewidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnKeyPressEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_drag_move_event(void* self, void* event) {
    QTreeWidget_DragMoveEvent((QTreeWidget*)self, (QDragMoveEvent*)event);
}

void q_treewidget_qbase_drag_move_event(void* self, void* event) {
    QTreeWidget_QBaseDragMoveEvent((QTreeWidget*)self, (QDragMoveEvent*)event);
}

void q_treewidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnDragMoveEvent((QTreeWidget*)self, (intptr_t)callback);
}

bool q_treewidget_viewport_event(void* self, void* event) {
    return QTreeWidget_ViewportEvent((QTreeWidget*)self, (QEvent*)event);
}

bool q_treewidget_qbase_viewport_event(void* self, void* event) {
    return QTreeWidget_QBaseViewportEvent((QTreeWidget*)self, (QEvent*)event);
}

void q_treewidget_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    QTreeWidget_OnViewportEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_update_geometries(void* self) {
    QTreeWidget_UpdateGeometries((QTreeWidget*)self);
}

void q_treewidget_qbase_update_geometries(void* self) {
    QTreeWidget_QBaseUpdateGeometries((QTreeWidget*)self);
}

void q_treewidget_on_update_geometries(void* self, void (*callback)()) {
    QTreeWidget_OnUpdateGeometries((QTreeWidget*)self, (intptr_t)callback);
}

QSize* q_treewidget_viewport_size_hint(void* self) {
    return QTreeWidget_ViewportSizeHint((QTreeWidget*)self);
}

QSize* q_treewidget_qbase_viewport_size_hint(void* self) {
    return QTreeWidget_QBaseViewportSizeHint((QTreeWidget*)self);
}

void q_treewidget_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    QTreeWidget_OnViewportSizeHint((QTreeWidget*)self, (intptr_t)callback);
}

int32_t q_treewidget_size_hint_for_column(void* self, int column) {
    return QTreeWidget_SizeHintForColumn((QTreeWidget*)self, column);
}

int32_t q_treewidget_qbase_size_hint_for_column(void* self, int column) {
    return QTreeWidget_QBaseSizeHintForColumn((QTreeWidget*)self, column);
}

void q_treewidget_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int)) {
    QTreeWidget_OnSizeHintForColumn((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_horizontal_scrollbar_action(void* self, int action) {
    QTreeWidget_HorizontalScrollbarAction((QTreeWidget*)self, action);
}

void q_treewidget_qbase_horizontal_scrollbar_action(void* self, int action) {
    QTreeWidget_QBaseHorizontalScrollbarAction((QTreeWidget*)self, action);
}

void q_treewidget_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int)) {
    QTreeWidget_OnHorizontalScrollbarAction((QTreeWidget*)self, (intptr_t)callback);
}

bool q_treewidget_is_index_hidden(void* self, void* index) {
    return QTreeWidget_IsIndexHidden((QTreeWidget*)self, (QModelIndex*)index);
}

bool q_treewidget_qbase_is_index_hidden(void* self, void* index) {
    return QTreeWidget_QBaseIsIndexHidden((QTreeWidget*)self, (QModelIndex*)index);
}

void q_treewidget_on_is_index_hidden(void* self, bool (*callback)(void*, void*)) {
    QTreeWidget_OnIsIndexHidden((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_selection_changed(void* self, void* selected, void* deselected) {
    QTreeWidget_SelectionChanged((QTreeWidget*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_treewidget_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QTreeWidget_QBaseSelectionChanged((QTreeWidget*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_treewidget_on_selection_changed(void* self, void (*callback)(void*, void*, void*)) {
    QTreeWidget_OnSelectionChanged((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_current_changed(void* self, void* current, void* previous) {
    QTreeWidget_CurrentChanged((QTreeWidget*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_treewidget_qbase_current_changed(void* self, void* current, void* previous) {
    QTreeWidget_QBaseCurrentChanged((QTreeWidget*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_treewidget_on_current_changed(void* self, void (*callback)(void*, void*, void*)) {
    QTreeWidget_OnCurrentChanged((QTreeWidget*)self, (intptr_t)callback);
}

int32_t q_treewidget_size_hint_for_row(void* self, int row) {
    return QTreeWidget_SizeHintForRow((QTreeWidget*)self, row);
}

int32_t q_treewidget_qbase_size_hint_for_row(void* self, int row) {
    return QTreeWidget_QBaseSizeHintForRow((QTreeWidget*)self, row);
}

void q_treewidget_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int)) {
    QTreeWidget_OnSizeHintForRow((QTreeWidget*)self, (intptr_t)callback);
}

QAbstractItemDelegate* q_treewidget_item_delegate_for_index(void* self, void* index) {
    return QTreeWidget_ItemDelegateForIndex((QTreeWidget*)self, (QModelIndex*)index);
}

QAbstractItemDelegate* q_treewidget_qbase_item_delegate_for_index(void* self, void* index) {
    return QTreeWidget_QBaseItemDelegateForIndex((QTreeWidget*)self, (QModelIndex*)index);
}

void q_treewidget_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*)) {
    QTreeWidget_OnItemDelegateForIndex((QTreeWidget*)self, (intptr_t)callback);
}

QVariant* q_treewidget_input_method_query(void* self, int64_t query) {
    return QTreeWidget_InputMethodQuery((QTreeWidget*)self, query);
}

QVariant* q_treewidget_qbase_input_method_query(void* self, int64_t query) {
    return QTreeWidget_QBaseInputMethodQuery((QTreeWidget*)self, query);
}

void q_treewidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QTreeWidget_OnInputMethodQuery((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_update_editor_data(void* self) {
    QTreeWidget_UpdateEditorData((QTreeWidget*)self);
}

void q_treewidget_qbase_update_editor_data(void* self) {
    QTreeWidget_QBaseUpdateEditorData((QTreeWidget*)self);
}

void q_treewidget_on_update_editor_data(void* self, void (*callback)()) {
    QTreeWidget_OnUpdateEditorData((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_update_editor_geometries(void* self) {
    QTreeWidget_UpdateEditorGeometries((QTreeWidget*)self);
}

void q_treewidget_qbase_update_editor_geometries(void* self) {
    QTreeWidget_QBaseUpdateEditorGeometries((QTreeWidget*)self);
}

void q_treewidget_on_update_editor_geometries(void* self, void (*callback)()) {
    QTreeWidget_OnUpdateEditorGeometries((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_vertical_scrollbar_action(void* self, int action) {
    QTreeWidget_VerticalScrollbarAction((QTreeWidget*)self, action);
}

void q_treewidget_qbase_vertical_scrollbar_action(void* self, int action) {
    QTreeWidget_QBaseVerticalScrollbarAction((QTreeWidget*)self, action);
}

void q_treewidget_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int)) {
    QTreeWidget_OnVerticalScrollbarAction((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_horizontal_scrollbar_value_changed(void* self, int value) {
    QTreeWidget_HorizontalScrollbarValueChanged((QTreeWidget*)self, value);
}

void q_treewidget_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QTreeWidget_QBaseHorizontalScrollbarValueChanged((QTreeWidget*)self, value);
}

void q_treewidget_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    QTreeWidget_OnHorizontalScrollbarValueChanged((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_close_editor(void* self, void* editor, int64_t hint) {
    QTreeWidget_CloseEditor((QTreeWidget*)self, (QWidget*)editor, hint);
}

void q_treewidget_qbase_close_editor(void* self, void* editor, int64_t hint) {
    QTreeWidget_QBaseCloseEditor((QTreeWidget*)self, (QWidget*)editor, hint);
}

void q_treewidget_on_close_editor(void* self, void (*callback)(void*, void*, int64_t)) {
    QTreeWidget_OnCloseEditor((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_commit_data(void* self, void* editor) {
    QTreeWidget_CommitData((QTreeWidget*)self, (QWidget*)editor);
}

void q_treewidget_qbase_commit_data(void* self, void* editor) {
    QTreeWidget_QBaseCommitData((QTreeWidget*)self, (QWidget*)editor);
}

void q_treewidget_on_commit_data(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnCommitData((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_editor_destroyed(void* self, void* editor) {
    QTreeWidget_EditorDestroyed((QTreeWidget*)self, (QObject*)editor);
}

void q_treewidget_qbase_editor_destroyed(void* self, void* editor) {
    QTreeWidget_QBaseEditorDestroyed((QTreeWidget*)self, (QObject*)editor);
}

void q_treewidget_on_editor_destroyed(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnEditorDestroyed((QTreeWidget*)self, (intptr_t)callback);
}

bool q_treewidget_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QTreeWidget_Edit2((QTreeWidget*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

bool q_treewidget_qbase_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QTreeWidget_QBaseEdit2((QTreeWidget*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

void q_treewidget_on_edit2(void* self, bool (*callback)(void*, void*, int64_t, void*)) {
    QTreeWidget_OnEdit2((QTreeWidget*)self, (intptr_t)callback);
}

int64_t q_treewidget_selection_command(void* self, void* index, void* event) {
    return QTreeWidget_SelectionCommand((QTreeWidget*)self, (QModelIndex*)index, (QEvent*)event);
}

int64_t q_treewidget_qbase_selection_command(void* self, void* index, void* event) {
    return QTreeWidget_QBaseSelectionCommand((QTreeWidget*)self, (QModelIndex*)index, (QEvent*)event);
}

void q_treewidget_on_selection_command(void* self, int64_t (*callback)(void*, void*, void*)) {
    QTreeWidget_OnSelectionCommand((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_start_drag(void* self, int64_t supportedActions) {
    QTreeWidget_StartDrag((QTreeWidget*)self, supportedActions);
}

void q_treewidget_qbase_start_drag(void* self, int64_t supportedActions) {
    QTreeWidget_QBaseStartDrag((QTreeWidget*)self, supportedActions);
}

void q_treewidget_on_start_drag(void* self, void (*callback)(void*, int64_t)) {
    QTreeWidget_OnStartDrag((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_init_view_item_option(void* self, void* option) {
    QTreeWidget_InitViewItemOption((QTreeWidget*)self, (QStyleOptionViewItem*)option);
}

void q_treewidget_qbase_init_view_item_option(void* self, void* option) {
    QTreeWidget_QBaseInitViewItemOption((QTreeWidget*)self, (QStyleOptionViewItem*)option);
}

void q_treewidget_on_init_view_item_option(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnInitViewItemOption((QTreeWidget*)self, (intptr_t)callback);
}

bool q_treewidget_focus_next_prev_child(void* self, bool next) {
    return QTreeWidget_FocusNextPrevChild((QTreeWidget*)self, next);
}

bool q_treewidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QTreeWidget_QBaseFocusNextPrevChild((QTreeWidget*)self, next);
}

void q_treewidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QTreeWidget_OnFocusNextPrevChild((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_drag_enter_event(void* self, void* event) {
    QTreeWidget_DragEnterEvent((QTreeWidget*)self, (QDragEnterEvent*)event);
}

void q_treewidget_qbase_drag_enter_event(void* self, void* event) {
    QTreeWidget_QBaseDragEnterEvent((QTreeWidget*)self, (QDragEnterEvent*)event);
}

void q_treewidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnDragEnterEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_drag_leave_event(void* self, void* event) {
    QTreeWidget_DragLeaveEvent((QTreeWidget*)self, (QDragLeaveEvent*)event);
}

void q_treewidget_qbase_drag_leave_event(void* self, void* event) {
    QTreeWidget_QBaseDragLeaveEvent((QTreeWidget*)self, (QDragLeaveEvent*)event);
}

void q_treewidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnDragLeaveEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_focus_in_event(void* self, void* event) {
    QTreeWidget_FocusInEvent((QTreeWidget*)self, (QFocusEvent*)event);
}

void q_treewidget_qbase_focus_in_event(void* self, void* event) {
    QTreeWidget_QBaseFocusInEvent((QTreeWidget*)self, (QFocusEvent*)event);
}

void q_treewidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnFocusInEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_focus_out_event(void* self, void* event) {
    QTreeWidget_FocusOutEvent((QTreeWidget*)self, (QFocusEvent*)event);
}

void q_treewidget_qbase_focus_out_event(void* self, void* event) {
    QTreeWidget_QBaseFocusOutEvent((QTreeWidget*)self, (QFocusEvent*)event);
}

void q_treewidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnFocusOutEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_resize_event(void* self, void* event) {
    QTreeWidget_ResizeEvent((QTreeWidget*)self, (QResizeEvent*)event);
}

void q_treewidget_qbase_resize_event(void* self, void* event) {
    QTreeWidget_QBaseResizeEvent((QTreeWidget*)self, (QResizeEvent*)event);
}

void q_treewidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnResizeEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_input_method_event(void* self, void* event) {
    QTreeWidget_InputMethodEvent((QTreeWidget*)self, (QInputMethodEvent*)event);
}

void q_treewidget_qbase_input_method_event(void* self, void* event) {
    QTreeWidget_QBaseInputMethodEvent((QTreeWidget*)self, (QInputMethodEvent*)event);
}

void q_treewidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnInputMethodEvent((QTreeWidget*)self, (intptr_t)callback);
}

bool q_treewidget_event_filter(void* self, void* object, void* event) {
    return QTreeWidget_EventFilter((QTreeWidget*)self, (QObject*)object, (QEvent*)event);
}

bool q_treewidget_qbase_event_filter(void* self, void* object, void* event) {
    return QTreeWidget_QBaseEventFilter((QTreeWidget*)self, (QObject*)object, (QEvent*)event);
}

void q_treewidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTreeWidget_OnEventFilter((QTreeWidget*)self, (intptr_t)callback);
}

QSize* q_treewidget_minimum_size_hint(void* self) {
    return QTreeWidget_MinimumSizeHint((QTreeWidget*)self);
}

QSize* q_treewidget_qbase_minimum_size_hint(void* self) {
    return QTreeWidget_QBaseMinimumSizeHint((QTreeWidget*)self);
}

void q_treewidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QTreeWidget_OnMinimumSizeHint((QTreeWidget*)self, (intptr_t)callback);
}

QSize* q_treewidget_size_hint(void* self) {
    return QTreeWidget_SizeHint((QTreeWidget*)self);
}

QSize* q_treewidget_qbase_size_hint(void* self) {
    return QTreeWidget_QBaseSizeHint((QTreeWidget*)self);
}

void q_treewidget_on_size_hint(void* self, QSize* (*callback)()) {
    QTreeWidget_OnSizeHint((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_setup_viewport(void* self, void* viewport) {
    QTreeWidget_SetupViewport((QTreeWidget*)self, (QWidget*)viewport);
}

void q_treewidget_qbase_setup_viewport(void* self, void* viewport) {
    QTreeWidget_QBaseSetupViewport((QTreeWidget*)self, (QWidget*)viewport);
}

void q_treewidget_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnSetupViewport((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_wheel_event(void* self, void* param1) {
    QTreeWidget_WheelEvent((QTreeWidget*)self, (QWheelEvent*)param1);
}

void q_treewidget_qbase_wheel_event(void* self, void* param1) {
    QTreeWidget_QBaseWheelEvent((QTreeWidget*)self, (QWheelEvent*)param1);
}

void q_treewidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnWheelEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_context_menu_event(void* self, void* param1) {
    QTreeWidget_ContextMenuEvent((QTreeWidget*)self, (QContextMenuEvent*)param1);
}

void q_treewidget_qbase_context_menu_event(void* self, void* param1) {
    QTreeWidget_QBaseContextMenuEvent((QTreeWidget*)self, (QContextMenuEvent*)param1);
}

void q_treewidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnContextMenuEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_init_style_option(void* self, void* option) {
    QTreeWidget_InitStyleOption((QTreeWidget*)self, (QStyleOptionFrame*)option);
}

void q_treewidget_qbase_init_style_option(void* self, void* option) {
    QTreeWidget_QBaseInitStyleOption((QTreeWidget*)self, (QStyleOptionFrame*)option);
}

void q_treewidget_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnInitStyleOption((QTreeWidget*)self, (intptr_t)callback);
}

int32_t q_treewidget_dev_type(void* self) {
    return QTreeWidget_DevType((QTreeWidget*)self);
}

int32_t q_treewidget_qbase_dev_type(void* self) {
    return QTreeWidget_QBaseDevType((QTreeWidget*)self);
}

void q_treewidget_on_dev_type(void* self, int32_t (*callback)()) {
    QTreeWidget_OnDevType((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_set_visible(void* self, bool visible) {
    QTreeWidget_SetVisible((QTreeWidget*)self, visible);
}

void q_treewidget_qbase_set_visible(void* self, bool visible) {
    QTreeWidget_QBaseSetVisible((QTreeWidget*)self, visible);
}

void q_treewidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QTreeWidget_OnSetVisible((QTreeWidget*)self, (intptr_t)callback);
}

int32_t q_treewidget_height_for_width(void* self, int param1) {
    return QTreeWidget_HeightForWidth((QTreeWidget*)self, param1);
}

int32_t q_treewidget_qbase_height_for_width(void* self, int param1) {
    return QTreeWidget_QBaseHeightForWidth((QTreeWidget*)self, param1);
}

void q_treewidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QTreeWidget_OnHeightForWidth((QTreeWidget*)self, (intptr_t)callback);
}

bool q_treewidget_has_height_for_width(void* self) {
    return QTreeWidget_HasHeightForWidth((QTreeWidget*)self);
}

bool q_treewidget_qbase_has_height_for_width(void* self) {
    return QTreeWidget_QBaseHasHeightForWidth((QTreeWidget*)self);
}

void q_treewidget_on_has_height_for_width(void* self, bool (*callback)()) {
    QTreeWidget_OnHasHeightForWidth((QTreeWidget*)self, (intptr_t)callback);
}

QPaintEngine* q_treewidget_paint_engine(void* self) {
    return QTreeWidget_PaintEngine((QTreeWidget*)self);
}

QPaintEngine* q_treewidget_qbase_paint_engine(void* self) {
    return QTreeWidget_QBasePaintEngine((QTreeWidget*)self);
}

void q_treewidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QTreeWidget_OnPaintEngine((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_key_release_event(void* self, void* event) {
    QTreeWidget_KeyReleaseEvent((QTreeWidget*)self, (QKeyEvent*)event);
}

void q_treewidget_qbase_key_release_event(void* self, void* event) {
    QTreeWidget_QBaseKeyReleaseEvent((QTreeWidget*)self, (QKeyEvent*)event);
}

void q_treewidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnKeyReleaseEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_enter_event(void* self, void* event) {
    QTreeWidget_EnterEvent((QTreeWidget*)self, (QEnterEvent*)event);
}

void q_treewidget_qbase_enter_event(void* self, void* event) {
    QTreeWidget_QBaseEnterEvent((QTreeWidget*)self, (QEnterEvent*)event);
}

void q_treewidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnEnterEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_leave_event(void* self, void* event) {
    QTreeWidget_LeaveEvent((QTreeWidget*)self, (QEvent*)event);
}

void q_treewidget_qbase_leave_event(void* self, void* event) {
    QTreeWidget_QBaseLeaveEvent((QTreeWidget*)self, (QEvent*)event);
}

void q_treewidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnLeaveEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_move_event(void* self, void* event) {
    QTreeWidget_MoveEvent((QTreeWidget*)self, (QMoveEvent*)event);
}

void q_treewidget_qbase_move_event(void* self, void* event) {
    QTreeWidget_QBaseMoveEvent((QTreeWidget*)self, (QMoveEvent*)event);
}

void q_treewidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnMoveEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_close_event(void* self, void* event) {
    QTreeWidget_CloseEvent((QTreeWidget*)self, (QCloseEvent*)event);
}

void q_treewidget_qbase_close_event(void* self, void* event) {
    QTreeWidget_QBaseCloseEvent((QTreeWidget*)self, (QCloseEvent*)event);
}

void q_treewidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnCloseEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_tablet_event(void* self, void* event) {
    QTreeWidget_TabletEvent((QTreeWidget*)self, (QTabletEvent*)event);
}

void q_treewidget_qbase_tablet_event(void* self, void* event) {
    QTreeWidget_QBaseTabletEvent((QTreeWidget*)self, (QTabletEvent*)event);
}

void q_treewidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnTabletEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_action_event(void* self, void* event) {
    QTreeWidget_ActionEvent((QTreeWidget*)self, (QActionEvent*)event);
}

void q_treewidget_qbase_action_event(void* self, void* event) {
    QTreeWidget_QBaseActionEvent((QTreeWidget*)self, (QActionEvent*)event);
}

void q_treewidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnActionEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_show_event(void* self, void* event) {
    QTreeWidget_ShowEvent((QTreeWidget*)self, (QShowEvent*)event);
}

void q_treewidget_qbase_show_event(void* self, void* event) {
    QTreeWidget_QBaseShowEvent((QTreeWidget*)self, (QShowEvent*)event);
}

void q_treewidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnShowEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_hide_event(void* self, void* event) {
    QTreeWidget_HideEvent((QTreeWidget*)self, (QHideEvent*)event);
}

void q_treewidget_qbase_hide_event(void* self, void* event) {
    QTreeWidget_QBaseHideEvent((QTreeWidget*)self, (QHideEvent*)event);
}

void q_treewidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnHideEvent((QTreeWidget*)self, (intptr_t)callback);
}

bool q_treewidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTreeWidget_NativeEvent((QTreeWidget*)self, qstring(eventType), message, result);
}

bool q_treewidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTreeWidget_QBaseNativeEvent((QTreeWidget*)self, qstring(eventType), message, result);
}

void q_treewidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QTreeWidget_OnNativeEvent((QTreeWidget*)self, (intptr_t)callback);
}

int32_t q_treewidget_metric(void* self, int64_t param1) {
    return QTreeWidget_Metric((QTreeWidget*)self, param1);
}

int32_t q_treewidget_qbase_metric(void* self, int64_t param1) {
    return QTreeWidget_QBaseMetric((QTreeWidget*)self, param1);
}

void q_treewidget_on_metric(void* self, int32_t (*callback)(void*, int64_t)) {
    QTreeWidget_OnMetric((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_init_painter(void* self, void* painter) {
    QTreeWidget_InitPainter((QTreeWidget*)self, (QPainter*)painter);
}

void q_treewidget_qbase_init_painter(void* self, void* painter) {
    QTreeWidget_QBaseInitPainter((QTreeWidget*)self, (QPainter*)painter);
}

void q_treewidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnInitPainter((QTreeWidget*)self, (intptr_t)callback);
}

QPaintDevice* q_treewidget_redirected(void* self, void* offset) {
    return QTreeWidget_Redirected((QTreeWidget*)self, (QPoint*)offset);
}

QPaintDevice* q_treewidget_qbase_redirected(void* self, void* offset) {
    return QTreeWidget_QBaseRedirected((QTreeWidget*)self, (QPoint*)offset);
}

void q_treewidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QTreeWidget_OnRedirected((QTreeWidget*)self, (intptr_t)callback);
}

QPainter* q_treewidget_shared_painter(void* self) {
    return QTreeWidget_SharedPainter((QTreeWidget*)self);
}

QPainter* q_treewidget_qbase_shared_painter(void* self) {
    return QTreeWidget_QBaseSharedPainter((QTreeWidget*)self);
}

void q_treewidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    QTreeWidget_OnSharedPainter((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_child_event(void* self, void* event) {
    QTreeWidget_ChildEvent((QTreeWidget*)self, (QChildEvent*)event);
}

void q_treewidget_qbase_child_event(void* self, void* event) {
    QTreeWidget_QBaseChildEvent((QTreeWidget*)self, (QChildEvent*)event);
}

void q_treewidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnChildEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_custom_event(void* self, void* event) {
    QTreeWidget_CustomEvent((QTreeWidget*)self, (QEvent*)event);
}

void q_treewidget_qbase_custom_event(void* self, void* event) {
    QTreeWidget_QBaseCustomEvent((QTreeWidget*)self, (QEvent*)event);
}

void q_treewidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnCustomEvent((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_connect_notify(void* self, void* signal) {
    QTreeWidget_ConnectNotify((QTreeWidget*)self, (QMetaMethod*)signal);
}

void q_treewidget_qbase_connect_notify(void* self, void* signal) {
    QTreeWidget_QBaseConnectNotify((QTreeWidget*)self, (QMetaMethod*)signal);
}

void q_treewidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnConnectNotify((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_disconnect_notify(void* self, void* signal) {
    QTreeWidget_DisconnectNotify((QTreeWidget*)self, (QMetaMethod*)signal);
}

void q_treewidget_qbase_disconnect_notify(void* self, void* signal) {
    QTreeWidget_QBaseDisconnectNotify((QTreeWidget*)self, (QMetaMethod*)signal);
}

void q_treewidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnDisconnectNotify((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_column_resized(void* self, int column, int oldSize, int newSize) {
    QTreeWidget_ColumnResized((QTreeWidget*)self, column, oldSize, newSize);
}

void q_treewidget_qbase_column_resized(void* self, int column, int oldSize, int newSize) {
    QTreeWidget_QBaseColumnResized((QTreeWidget*)self, column, oldSize, newSize);
}

void q_treewidget_on_column_resized(void* self, void (*callback)(void*, int, int, int)) {
    QTreeWidget_OnColumnResized((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_column_count_changed(void* self, int oldCount, int newCount) {
    QTreeWidget_ColumnCountChanged((QTreeWidget*)self, oldCount, newCount);
}

void q_treewidget_qbase_column_count_changed(void* self, int oldCount, int newCount) {
    QTreeWidget_QBaseColumnCountChanged((QTreeWidget*)self, oldCount, newCount);
}

void q_treewidget_on_column_count_changed(void* self, void (*callback)(void*, int, int)) {
    QTreeWidget_OnColumnCountChanged((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_column_moved(void* self) {
    QTreeWidget_ColumnMoved((QTreeWidget*)self);
}

void q_treewidget_qbase_column_moved(void* self) {
    QTreeWidget_QBaseColumnMoved((QTreeWidget*)self);
}

void q_treewidget_on_column_moved(void* self, void (*callback)()) {
    QTreeWidget_OnColumnMoved((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_reexpand(void* self) {
    QTreeWidget_Reexpand((QTreeWidget*)self);
}

void q_treewidget_qbase_reexpand(void* self) {
    QTreeWidget_QBaseReexpand((QTreeWidget*)self);
}

void q_treewidget_on_reexpand(void* self, void (*callback)()) {
    QTreeWidget_OnReexpand((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_rows_removed(void* self, void* parent, int first, int last) {
    QTreeWidget_RowsRemoved((QTreeWidget*)self, (QModelIndex*)parent, first, last);
}

void q_treewidget_qbase_rows_removed(void* self, void* parent, int first, int last) {
    QTreeWidget_QBaseRowsRemoved((QTreeWidget*)self, (QModelIndex*)parent, first, last);
}

void q_treewidget_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QTreeWidget_OnRowsRemoved((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_draw_tree(void* self, void* painter, void* region) {
    QTreeWidget_DrawTree((QTreeWidget*)self, (QPainter*)painter, (QRegion*)region);
}

void q_treewidget_qbase_draw_tree(void* self, void* painter, void* region) {
    QTreeWidget_QBaseDrawTree((QTreeWidget*)self, (QPainter*)painter, (QRegion*)region);
}

void q_treewidget_on_draw_tree(void* self, void (*callback)(void*, void*, void*)) {
    QTreeWidget_OnDrawTree((QTreeWidget*)self, (intptr_t)callback);
}

int32_t q_treewidget_index_row_size_hint(void* self, void* index) {
    return QTreeWidget_IndexRowSizeHint((QTreeWidget*)self, (QModelIndex*)index);
}

int32_t q_treewidget_qbase_index_row_size_hint(void* self, void* index) {
    return QTreeWidget_QBaseIndexRowSizeHint((QTreeWidget*)self, (QModelIndex*)index);
}

void q_treewidget_on_index_row_size_hint(void* self, int32_t (*callback)(void*, void*)) {
    QTreeWidget_OnIndexRowSizeHint((QTreeWidget*)self, (intptr_t)callback);
}

int32_t q_treewidget_row_height(void* self, void* index) {
    return QTreeWidget_RowHeight((QTreeWidget*)self, (QModelIndex*)index);
}

int32_t q_treewidget_qbase_row_height(void* self, void* index) {
    return QTreeWidget_QBaseRowHeight((QTreeWidget*)self, (QModelIndex*)index);
}

void q_treewidget_on_row_height(void* self, int32_t (*callback)(void*, void*)) {
    QTreeWidget_OnRowHeight((QTreeWidget*)self, (intptr_t)callback);
}

int64_t q_treewidget_state(void* self) {
    return QTreeWidget_State((QTreeWidget*)self);
}

int64_t q_treewidget_qbase_state(void* self) {
    return QTreeWidget_QBaseState((QTreeWidget*)self);
}

void q_treewidget_on_state(void* self, int64_t (*callback)()) {
    QTreeWidget_OnState((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_set_state(void* self, int64_t state) {
    QTreeWidget_SetState((QTreeWidget*)self, state);
}

void q_treewidget_qbase_set_state(void* self, int64_t state) {
    QTreeWidget_QBaseSetState((QTreeWidget*)self, state);
}

void q_treewidget_on_set_state(void* self, void (*callback)(void*, int64_t)) {
    QTreeWidget_OnSetState((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_schedule_delayed_items_layout(void* self) {
    QTreeWidget_ScheduleDelayedItemsLayout((QTreeWidget*)self);
}

void q_treewidget_qbase_schedule_delayed_items_layout(void* self) {
    QTreeWidget_QBaseScheduleDelayedItemsLayout((QTreeWidget*)self);
}

void q_treewidget_on_schedule_delayed_items_layout(void* self, void (*callback)()) {
    QTreeWidget_OnScheduleDelayedItemsLayout((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_execute_delayed_items_layout(void* self) {
    QTreeWidget_ExecuteDelayedItemsLayout((QTreeWidget*)self);
}

void q_treewidget_qbase_execute_delayed_items_layout(void* self) {
    QTreeWidget_QBaseExecuteDelayedItemsLayout((QTreeWidget*)self);
}

void q_treewidget_on_execute_delayed_items_layout(void* self, void (*callback)()) {
    QTreeWidget_OnExecuteDelayedItemsLayout((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_set_dirty_region(void* self, void* region) {
    QTreeWidget_SetDirtyRegion((QTreeWidget*)self, (QRegion*)region);
}

void q_treewidget_qbase_set_dirty_region(void* self, void* region) {
    QTreeWidget_QBaseSetDirtyRegion((QTreeWidget*)self, (QRegion*)region);
}

void q_treewidget_on_set_dirty_region(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnSetDirtyRegion((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_scroll_dirty_region(void* self, int dx, int dy) {
    QTreeWidget_ScrollDirtyRegion((QTreeWidget*)self, dx, dy);
}

void q_treewidget_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QTreeWidget_QBaseScrollDirtyRegion((QTreeWidget*)self, dx, dy);
}

void q_treewidget_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int)) {
    QTreeWidget_OnScrollDirtyRegion((QTreeWidget*)self, (intptr_t)callback);
}

QPoint* q_treewidget_dirty_region_offset(void* self) {
    return QTreeWidget_DirtyRegionOffset((QTreeWidget*)self);
}

QPoint* q_treewidget_qbase_dirty_region_offset(void* self) {
    return QTreeWidget_QBaseDirtyRegionOffset((QTreeWidget*)self);
}

void q_treewidget_on_dirty_region_offset(void* self, QPoint* (*callback)()) {
    QTreeWidget_OnDirtyRegionOffset((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_start_auto_scroll(void* self) {
    QTreeWidget_StartAutoScroll((QTreeWidget*)self);
}

void q_treewidget_qbase_start_auto_scroll(void* self) {
    QTreeWidget_QBaseStartAutoScroll((QTreeWidget*)self);
}

void q_treewidget_on_start_auto_scroll(void* self, void (*callback)()) {
    QTreeWidget_OnStartAutoScroll((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_stop_auto_scroll(void* self) {
    QTreeWidget_StopAutoScroll((QTreeWidget*)self);
}

void q_treewidget_qbase_stop_auto_scroll(void* self) {
    QTreeWidget_QBaseStopAutoScroll((QTreeWidget*)self);
}

void q_treewidget_on_stop_auto_scroll(void* self, void (*callback)()) {
    QTreeWidget_OnStopAutoScroll((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_do_auto_scroll(void* self) {
    QTreeWidget_DoAutoScroll((QTreeWidget*)self);
}

void q_treewidget_qbase_do_auto_scroll(void* self) {
    QTreeWidget_QBaseDoAutoScroll((QTreeWidget*)self);
}

void q_treewidget_on_do_auto_scroll(void* self, void (*callback)()) {
    QTreeWidget_OnDoAutoScroll((QTreeWidget*)self, (intptr_t)callback);
}

int64_t q_treewidget_drop_indicator_position(void* self) {
    return QTreeWidget_DropIndicatorPosition((QTreeWidget*)self);
}

int64_t q_treewidget_qbase_drop_indicator_position(void* self) {
    return QTreeWidget_QBaseDropIndicatorPosition((QTreeWidget*)self);
}

void q_treewidget_on_drop_indicator_position(void* self, int64_t (*callback)()) {
    QTreeWidget_OnDropIndicatorPosition((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTreeWidget_SetViewportMargins((QTreeWidget*)self, left, top, right, bottom);
}

void q_treewidget_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTreeWidget_QBaseSetViewportMargins((QTreeWidget*)self, left, top, right, bottom);
}

void q_treewidget_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    QTreeWidget_OnSetViewportMargins((QTreeWidget*)self, (intptr_t)callback);
}

QMargins* q_treewidget_viewport_margins(void* self) {
    return QTreeWidget_ViewportMargins((QTreeWidget*)self);
}

QMargins* q_treewidget_qbase_viewport_margins(void* self) {
    return QTreeWidget_QBaseViewportMargins((QTreeWidget*)self);
}

void q_treewidget_on_viewport_margins(void* self, QMargins* (*callback)()) {
    QTreeWidget_OnViewportMargins((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_draw_frame(void* self, void* param1) {
    QTreeWidget_DrawFrame((QTreeWidget*)self, (QPainter*)param1);
}

void q_treewidget_qbase_draw_frame(void* self, void* param1) {
    QTreeWidget_QBaseDrawFrame((QTreeWidget*)self, (QPainter*)param1);
}

void q_treewidget_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    QTreeWidget_OnDrawFrame((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_update_micro_focus(void* self) {
    QTreeWidget_UpdateMicroFocus((QTreeWidget*)self);
}

void q_treewidget_qbase_update_micro_focus(void* self) {
    QTreeWidget_QBaseUpdateMicroFocus((QTreeWidget*)self);
}

void q_treewidget_on_update_micro_focus(void* self, void (*callback)()) {
    QTreeWidget_OnUpdateMicroFocus((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_create(void* self) {
    QTreeWidget_Create((QTreeWidget*)self);
}

void q_treewidget_qbase_create(void* self) {
    QTreeWidget_QBaseCreate((QTreeWidget*)self);
}

void q_treewidget_on_create(void* self, void (*callback)()) {
    QTreeWidget_OnCreate((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_destroy(void* self) {
    QTreeWidget_Destroy((QTreeWidget*)self);
}

void q_treewidget_qbase_destroy(void* self) {
    QTreeWidget_QBaseDestroy((QTreeWidget*)self);
}

void q_treewidget_on_destroy(void* self, void (*callback)()) {
    QTreeWidget_OnDestroy((QTreeWidget*)self, (intptr_t)callback);
}

bool q_treewidget_focus_next_child(void* self) {
    return QTreeWidget_FocusNextChild((QTreeWidget*)self);
}

bool q_treewidget_qbase_focus_next_child(void* self) {
    return QTreeWidget_QBaseFocusNextChild((QTreeWidget*)self);
}

void q_treewidget_on_focus_next_child(void* self, bool (*callback)()) {
    QTreeWidget_OnFocusNextChild((QTreeWidget*)self, (intptr_t)callback);
}

bool q_treewidget_focus_previous_child(void* self) {
    return QTreeWidget_FocusPreviousChild((QTreeWidget*)self);
}

bool q_treewidget_qbase_focus_previous_child(void* self) {
    return QTreeWidget_QBaseFocusPreviousChild((QTreeWidget*)self);
}

void q_treewidget_on_focus_previous_child(void* self, bool (*callback)()) {
    QTreeWidget_OnFocusPreviousChild((QTreeWidget*)self, (intptr_t)callback);
}

QObject* q_treewidget_sender(void* self) {
    return QTreeWidget_Sender((QTreeWidget*)self);
}

QObject* q_treewidget_qbase_sender(void* self) {
    return QTreeWidget_QBaseSender((QTreeWidget*)self);
}

void q_treewidget_on_sender(void* self, QObject* (*callback)()) {
    QTreeWidget_OnSender((QTreeWidget*)self, (intptr_t)callback);
}

int32_t q_treewidget_sender_signal_index(void* self) {
    return QTreeWidget_SenderSignalIndex((QTreeWidget*)self);
}

int32_t q_treewidget_qbase_sender_signal_index(void* self) {
    return QTreeWidget_QBaseSenderSignalIndex((QTreeWidget*)self);
}

void q_treewidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QTreeWidget_OnSenderSignalIndex((QTreeWidget*)self, (intptr_t)callback);
}

int32_t q_treewidget_receivers(void* self, const char* signal) {
    return QTreeWidget_Receivers((QTreeWidget*)self, signal);
}

int32_t q_treewidget_qbase_receivers(void* self, const char* signal) {
    return QTreeWidget_QBaseReceivers((QTreeWidget*)self, signal);
}

void q_treewidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QTreeWidget_OnReceivers((QTreeWidget*)self, (intptr_t)callback);
}

bool q_treewidget_is_signal_connected(void* self, void* signal) {
    return QTreeWidget_IsSignalConnected((QTreeWidget*)self, (QMetaMethod*)signal);
}

bool q_treewidget_qbase_is_signal_connected(void* self, void* signal) {
    return QTreeWidget_QBaseIsSignalConnected((QTreeWidget*)self, (QMetaMethod*)signal);
}

void q_treewidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QTreeWidget_OnIsSignalConnected((QTreeWidget*)self, (intptr_t)callback);
}

double q_treewidget_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QTreeWidget_GetDecodedMetricF((QTreeWidget*)self, metricA, metricB);
}

double q_treewidget_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QTreeWidget_QBaseGetDecodedMetricF((QTreeWidget*)self, metricA, metricB);
}

void q_treewidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int64_t, int64_t)) {
    QTreeWidget_OnGetDecodedMetricF((QTreeWidget*)self, (intptr_t)callback);
}

void q_treewidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_treewidget_delete(void* self) {
    QTreeWidget_Delete((QTreeWidget*)(self));
}
