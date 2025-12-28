#include "../libqabstractitemmodel.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcombobox.hpp"
#include "../libqdatetime.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkdatecombobox.hpp"
#include "libkdatecombobox.h"

KDateComboBox* k_datecombobox_new(void* parent) {
    return KDateComboBox_new((QWidget*)parent);
}

KDateComboBox* k_datecombobox_new2() {
    return KDateComboBox_new2();
}

const QMetaObject* k_datecombobox_meta_object(void* self) {
    return KDateComboBox_MetaObject((KDateComboBox*)self);
}

void* k_datecombobox_metacast(void* self, const char* param1) {
    return KDateComboBox_Metacast((KDateComboBox*)self, param1);
}

int32_t k_datecombobox_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDateComboBox_Metacall((KDateComboBox*)self, param1, param2, param3);
}

void k_datecombobox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KDateComboBox_OnMetacall((KDateComboBox*)self, (intptr_t)callback);
}

int32_t k_datecombobox_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDateComboBox_QBaseMetacall((KDateComboBox*)self, param1, param2, param3);
}

const char* k_datecombobox_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDate* k_datecombobox_date(void* self) {
    return KDateComboBox_Date((KDateComboBox*)self);
}

bool k_datecombobox_is_valid(void* self) {
    return KDateComboBox_IsValid((KDateComboBox*)self);
}

bool k_datecombobox_is_null(void* self) {
    return KDateComboBox_IsNull((KDateComboBox*)self);
}

int32_t k_datecombobox_options(void* self) {
    return KDateComboBox_Options((KDateComboBox*)self);
}

int32_t k_datecombobox_display_format(void* self) {
    return KDateComboBox_DisplayFormat((KDateComboBox*)self);
}

QDate* k_datecombobox_minimum_date(void* self) {
    return KDateComboBox_MinimumDate((KDateComboBox*)self);
}

QDate* k_datecombobox_maximum_date(void* self) {
    return KDateComboBox_MaximumDate((KDateComboBox*)self);
}

libqt_map /* of QDate* to const char* */ k_datecombobox_date_map(void* self) {
    // Convert QMap<QDate,QString> to libqt_map
    libqt_map _out = KDateComboBox_DateMap((KDateComboBox*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_values = (libqt_string*)_out.values;
    const char** _ret_values = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in k_datecombobox_date_map");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_values[i] = _out_values[i].data;
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    free(_out_values);
    return _ret;
}

void k_datecombobox_date_entered(void* self, void* date) {
    KDateComboBox_DateEntered((KDateComboBox*)self, (QDate*)date);
}

void k_datecombobox_on_date_entered(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_Connect_DateEntered((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_date_changed(void* self, void* date) {
    KDateComboBox_DateChanged((KDateComboBox*)self, (QDate*)date);
}

void k_datecombobox_on_date_changed(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_Connect_DateChanged((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_date_edited(void* self, void* date) {
    KDateComboBox_DateEdited((KDateComboBox*)self, (QDate*)date);
}

void k_datecombobox_on_date_edited(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_Connect_DateEdited((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_set_date(void* self, void* date) {
    KDateComboBox_SetDate((KDateComboBox*)self, (QDate*)date);
}

void k_datecombobox_set_options(void* self, int32_t options) {
    KDateComboBox_SetOptions((KDateComboBox*)self, options);
}

void k_datecombobox_set_display_format(void* self, int32_t format) {
    KDateComboBox_SetDisplayFormat((KDateComboBox*)self, format);
}

void k_datecombobox_set_date_range(void* self, void* minDate, void* maxDate) {
    KDateComboBox_SetDateRange((KDateComboBox*)self, (QDate*)minDate, (QDate*)maxDate);
}

void k_datecombobox_reset_date_range(void* self) {
    KDateComboBox_ResetDateRange((KDateComboBox*)self);
}

void k_datecombobox_set_minimum_date(void* self, void* minDate) {
    KDateComboBox_SetMinimumDate((KDateComboBox*)self, (QDate*)minDate);
}

void k_datecombobox_reset_minimum_date(void* self) {
    KDateComboBox_ResetMinimumDate((KDateComboBox*)self);
}

void k_datecombobox_set_maximum_date(void* self, void* maxDate) {
    KDateComboBox_SetMaximumDate((KDateComboBox*)self, (QDate*)maxDate);
}

void k_datecombobox_reset_maximum_date(void* self) {
    KDateComboBox_ResetMaximumDate((KDateComboBox*)self);
}

void k_datecombobox_set_date_map(void* self, libqt_map /* of QDate* to const char* */ dateMap) {
    // Convert libqt_map to QMap<QDate,QString>
    libqt_map dateMap_ret;
    dateMap_ret.len = dateMap.len;
    dateMap_ret.keys = malloc(dateMap_ret.len * sizeof(QDate*));
    if (dateMap_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    dateMap_ret.values = malloc(dateMap_ret.len * sizeof(libqt_string));
    if (dateMap_ret.values == NULL) {
        free(dateMap_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    QDate** dateMap_karr = (QDate**)dateMap.keys;
    QDate** dateMap_kdest = (QDate**)dateMap_ret.keys;
    const char** dateMap_varr = (const char**)dateMap.values;
    libqt_string* dateMap_vdest = (libqt_string*)dateMap_ret.values;
    for (size_t i = 0; i < dateMap_ret.len; ++i) {
        dateMap_kdest[i] = dateMap_karr[i];
        dateMap_vdest[i] = qstring(dateMap_varr[i]);
    }
    KDateComboBox_SetDateMap((KDateComboBox*)self, dateMap_ret);
    libqt_free(dateMap_ret.keys);
    libqt_free(dateMap_ret.values);
}

bool k_datecombobox_event_filter(void* self, void* object, void* event) {
    return KDateComboBox_EventFilter((KDateComboBox*)self, (QObject*)object, (QEvent*)event);
}

void k_datecombobox_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KDateComboBox_OnEventFilter((KDateComboBox*)self, (intptr_t)callback);
}

bool k_datecombobox_qbase_event_filter(void* self, void* object, void* event) {
    return KDateComboBox_QBaseEventFilter((KDateComboBox*)self, (QObject*)object, (QEvent*)event);
}

void k_datecombobox_show_popup(void* self) {
    KDateComboBox_ShowPopup((KDateComboBox*)self);
}

void k_datecombobox_on_show_popup(void* self, void (*callback)()) {
    KDateComboBox_OnShowPopup((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_qbase_show_popup(void* self) {
    KDateComboBox_QBaseShowPopup((KDateComboBox*)self);
}

void k_datecombobox_hide_popup(void* self) {
    KDateComboBox_HidePopup((KDateComboBox*)self);
}

void k_datecombobox_on_hide_popup(void* self, void (*callback)()) {
    KDateComboBox_OnHidePopup((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_qbase_hide_popup(void* self) {
    KDateComboBox_QBaseHidePopup((KDateComboBox*)self);
}

void k_datecombobox_mouse_press_event(void* self, void* event) {
    KDateComboBox_MousePressEvent((KDateComboBox*)self, (QMouseEvent*)event);
}

void k_datecombobox_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnMousePressEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_qbase_mouse_press_event(void* self, void* event) {
    KDateComboBox_QBaseMousePressEvent((KDateComboBox*)self, (QMouseEvent*)event);
}

void k_datecombobox_wheel_event(void* self, void* event) {
    KDateComboBox_WheelEvent((KDateComboBox*)self, (QWheelEvent*)event);
}

void k_datecombobox_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnWheelEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_qbase_wheel_event(void* self, void* event) {
    KDateComboBox_QBaseWheelEvent((KDateComboBox*)self, (QWheelEvent*)event);
}

void k_datecombobox_key_press_event(void* self, void* event) {
    KDateComboBox_KeyPressEvent((KDateComboBox*)self, (QKeyEvent*)event);
}

void k_datecombobox_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnKeyPressEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_qbase_key_press_event(void* self, void* event) {
    KDateComboBox_QBaseKeyPressEvent((KDateComboBox*)self, (QKeyEvent*)event);
}

void k_datecombobox_focus_in_event(void* self, void* event) {
    KDateComboBox_FocusInEvent((KDateComboBox*)self, (QFocusEvent*)event);
}

void k_datecombobox_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnFocusInEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_qbase_focus_in_event(void* self, void* event) {
    KDateComboBox_QBaseFocusInEvent((KDateComboBox*)self, (QFocusEvent*)event);
}

void k_datecombobox_focus_out_event(void* self, void* event) {
    KDateComboBox_FocusOutEvent((KDateComboBox*)self, (QFocusEvent*)event);
}

void k_datecombobox_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnFocusOutEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_qbase_focus_out_event(void* self, void* event) {
    KDateComboBox_QBaseFocusOutEvent((KDateComboBox*)self, (QFocusEvent*)event);
}

void k_datecombobox_resize_event(void* self, void* event) {
    KDateComboBox_ResizeEvent((KDateComboBox*)self, (QResizeEvent*)event);
}

void k_datecombobox_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnResizeEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_qbase_resize_event(void* self, void* event) {
    KDateComboBox_QBaseResizeEvent((KDateComboBox*)self, (QResizeEvent*)event);
}

void k_datecombobox_assign_date(void* self, void* date) {
    KDateComboBox_AssignDate((KDateComboBox*)self, (QDate*)date);
}

void k_datecombobox_on_assign_date(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnAssignDate((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_qbase_assign_date(void* self, void* date) {
    KDateComboBox_QBaseAssignDate((KDateComboBox*)self, (QDate*)date);
}

const char* k_datecombobox_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_datecombobox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datecombobox_set_date_range3(void* self, void* minDate, void* maxDate, const char* minWarnMsg) {
    KDateComboBox_SetDateRange3((KDateComboBox*)self, (QDate*)minDate, (QDate*)maxDate, qstring(minWarnMsg));
}

void k_datecombobox_set_date_range4(void* self, void* minDate, void* maxDate, const char* minWarnMsg, const char* maxWarnMsg) {
    KDateComboBox_SetDateRange4((KDateComboBox*)self, (QDate*)minDate, (QDate*)maxDate, qstring(minWarnMsg), qstring(maxWarnMsg));
}

void k_datecombobox_set_minimum_date2(void* self, void* minDate, const char* minWarnMsg) {
    KDateComboBox_SetMinimumDate2((KDateComboBox*)self, (QDate*)minDate, qstring(minWarnMsg));
}

void k_datecombobox_set_maximum_date2(void* self, void* maxDate, const char* maxWarnMsg) {
    KDateComboBox_SetMaximumDate2((KDateComboBox*)self, (QDate*)maxDate, qstring(maxWarnMsg));
}

int32_t k_datecombobox_max_visible_items(void* self) {
    return QComboBox_MaxVisibleItems((QComboBox*)self);
}

void k_datecombobox_set_max_visible_items(void* self, int maxItems) {
    QComboBox_SetMaxVisibleItems((QComboBox*)self, maxItems);
}

int32_t k_datecombobox_count(void* self) {
    return QComboBox_Count((QComboBox*)self);
}

void k_datecombobox_set_max_count(void* self, int max) {
    QComboBox_SetMaxCount((QComboBox*)self, max);
}

int32_t k_datecombobox_max_count(void* self) {
    return QComboBox_MaxCount((QComboBox*)self);
}

bool k_datecombobox_duplicates_enabled(void* self) {
    return QComboBox_DuplicatesEnabled((QComboBox*)self);
}

void k_datecombobox_set_duplicates_enabled(void* self, bool enable) {
    QComboBox_SetDuplicatesEnabled((QComboBox*)self, enable);
}

void k_datecombobox_set_frame(void* self, bool frame) {
    QComboBox_SetFrame((QComboBox*)self, frame);
}

bool k_datecombobox_has_frame(void* self) {
    return QComboBox_HasFrame((QComboBox*)self);
}

int32_t k_datecombobox_find_text(void* self, const char* text) {
    return QComboBox_FindText((QComboBox*)self, qstring(text));
}

int32_t k_datecombobox_find_data(void* self, void* data) {
    return QComboBox_FindData((QComboBox*)self, (QVariant*)data);
}

int32_t k_datecombobox_insert_policy(void* self) {
    return QComboBox_InsertPolicy((QComboBox*)self);
}

void k_datecombobox_set_insert_policy(void* self, int32_t policy) {
    QComboBox_SetInsertPolicy((QComboBox*)self, policy);
}

int32_t k_datecombobox_size_adjust_policy(void* self) {
    return QComboBox_SizeAdjustPolicy((QComboBox*)self);
}

void k_datecombobox_set_size_adjust_policy(void* self, int32_t policy) {
    QComboBox_SetSizeAdjustPolicy((QComboBox*)self, policy);
}

int32_t k_datecombobox_minimum_contents_length(void* self) {
    return QComboBox_MinimumContentsLength((QComboBox*)self);
}

void k_datecombobox_set_minimum_contents_length(void* self, int characters) {
    QComboBox_SetMinimumContentsLength((QComboBox*)self, characters);
}

QSize* k_datecombobox_icon_size(void* self) {
    return QComboBox_IconSize((QComboBox*)self);
}

void k_datecombobox_set_icon_size(void* self, void* size) {
    QComboBox_SetIconSize((QComboBox*)self, (QSize*)size);
}

void k_datecombobox_set_placeholder_text(void* self, const char* placeholderText) {
    QComboBox_SetPlaceholderText((QComboBox*)self, qstring(placeholderText));
}

const char* k_datecombobox_placeholder_text(void* self) {
    libqt_string _str = QComboBox_PlaceholderText((QComboBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_datecombobox_is_editable(void* self) {
    return QComboBox_IsEditable((QComboBox*)self);
}

void k_datecombobox_set_editable(void* self, bool editable) {
    QComboBox_SetEditable((QComboBox*)self, editable);
}

void k_datecombobox_set_line_edit(void* self, void* edit) {
    QComboBox_SetLineEdit((QComboBox*)self, (QLineEdit*)edit);
}

QLineEdit* k_datecombobox_line_edit(void* self) {
    return QComboBox_LineEdit((QComboBox*)self);
}

void k_datecombobox_set_validator(void* self, void* v) {
    QComboBox_SetValidator((QComboBox*)self, (QValidator*)v);
}

const QValidator* k_datecombobox_validator(void* self) {
    return QComboBox_Validator((QComboBox*)self);
}

void k_datecombobox_set_completer(void* self, void* c) {
    QComboBox_SetCompleter((QComboBox*)self, (QCompleter*)c);
}

QCompleter* k_datecombobox_completer(void* self) {
    return QComboBox_Completer((QComboBox*)self);
}

QAbstractItemDelegate* k_datecombobox_item_delegate(void* self) {
    return QComboBox_ItemDelegate((QComboBox*)self);
}

void k_datecombobox_set_item_delegate(void* self, void* delegate) {
    QComboBox_SetItemDelegate((QComboBox*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemModel* k_datecombobox_model(void* self) {
    return QComboBox_Model((QComboBox*)self);
}

QModelIndex* k_datecombobox_root_model_index(void* self) {
    return QComboBox_RootModelIndex((QComboBox*)self);
}

void k_datecombobox_set_root_model_index(void* self, void* index) {
    QComboBox_SetRootModelIndex((QComboBox*)self, (QModelIndex*)index);
}

int32_t k_datecombobox_model_column(void* self) {
    return QComboBox_ModelColumn((QComboBox*)self);
}

void k_datecombobox_set_model_column(void* self, int visibleColumn) {
    QComboBox_SetModelColumn((QComboBox*)self, visibleColumn);
}

int32_t k_datecombobox_current_index(void* self) {
    return QComboBox_CurrentIndex((QComboBox*)self);
}

const char* k_datecombobox_current_text(void* self) {
    libqt_string _str = QComboBox_CurrentText((QComboBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* k_datecombobox_current_data(void* self) {
    return QComboBox_CurrentData((QComboBox*)self);
}

const char* k_datecombobox_item_text(void* self, int index) {
    libqt_string _str = QComboBox_ItemText((QComboBox*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIcon* k_datecombobox_item_icon(void* self, int index) {
    return QComboBox_ItemIcon((QComboBox*)self, index);
}

QVariant* k_datecombobox_item_data(void* self, int index) {
    return QComboBox_ItemData((QComboBox*)self, index);
}

void k_datecombobox_add_item(void* self, const char* text) {
    QComboBox_AddItem((QComboBox*)self, qstring(text));
}

void k_datecombobox_add_item2(void* self, void* icon, const char* text) {
    QComboBox_AddItem2((QComboBox*)self, (QIcon*)icon, qstring(text));
}

void k_datecombobox_add_items(void* self, const char* texts[static 1]) {
    size_t texts_len = libqt_strv_length(texts);
    libqt_string* texts_qstr = (libqt_string*)malloc(texts_len * sizeof(libqt_string));
    if (texts_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_datecombobox_add_items");
        abort();
    }
    for (size_t i = 0; i < texts_len; ++i) {
        texts_qstr[i] = qstring(texts[i]);
    }
    libqt_list texts_list = qlist(texts_qstr, texts_len);
    QComboBox_AddItems((QComboBox*)self, texts_list);
    free(texts_qstr);
}

void k_datecombobox_insert_item(void* self, int index, const char* text) {
    QComboBox_InsertItem((QComboBox*)self, index, qstring(text));
}

void k_datecombobox_insert_item2(void* self, int index, void* icon, const char* text) {
    QComboBox_InsertItem2((QComboBox*)self, index, (QIcon*)icon, qstring(text));
}

void k_datecombobox_insert_items(void* self, int index, const char* texts[static 1]) {
    size_t texts_len = libqt_strv_length(texts);
    libqt_string* texts_qstr = (libqt_string*)malloc(texts_len * sizeof(libqt_string));
    if (texts_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_datecombobox_insert_items");
        abort();
    }
    for (size_t i = 0; i < texts_len; ++i) {
        texts_qstr[i] = qstring(texts[i]);
    }
    libqt_list texts_list = qlist(texts_qstr, texts_len);
    QComboBox_InsertItems((QComboBox*)self, index, texts_list);
    free(texts_qstr);
}

void k_datecombobox_insert_separator(void* self, int index) {
    QComboBox_InsertSeparator((QComboBox*)self, index);
}

void k_datecombobox_remove_item(void* self, int index) {
    QComboBox_RemoveItem((QComboBox*)self, index);
}

void k_datecombobox_set_item_text(void* self, int index, const char* text) {
    QComboBox_SetItemText((QComboBox*)self, index, qstring(text));
}

void k_datecombobox_set_item_icon(void* self, int index, void* icon) {
    QComboBox_SetItemIcon((QComboBox*)self, index, (QIcon*)icon);
}

void k_datecombobox_set_item_data(void* self, int index, void* value) {
    QComboBox_SetItemData((QComboBox*)self, index, (QVariant*)value);
}

QAbstractItemView* k_datecombobox_view(void* self) {
    return QComboBox_View((QComboBox*)self);
}

void k_datecombobox_set_view(void* self, void* itemView) {
    QComboBox_SetView((QComboBox*)self, (QAbstractItemView*)itemView);
}

QVariant* k_datecombobox_input_method_query2(void* self, int64_t query, void* argument) {
    return QComboBox_InputMethodQuery2((QComboBox*)self, query, (QVariant*)argument);
}

void k_datecombobox_clear(void* self) {
    QComboBox_Clear((QComboBox*)self);
}

void k_datecombobox_clear_edit_text(void* self) {
    QComboBox_ClearEditText((QComboBox*)self);
}

void k_datecombobox_set_edit_text(void* self, const char* text) {
    QComboBox_SetEditText((QComboBox*)self, qstring(text));
}

void k_datecombobox_set_current_index(void* self, int index) {
    QComboBox_SetCurrentIndex((QComboBox*)self, index);
}

void k_datecombobox_set_current_text(void* self, const char* text) {
    QComboBox_SetCurrentText((QComboBox*)self, qstring(text));
}

void k_datecombobox_edit_text_changed(void* self, const char* param1) {
    QComboBox_EditTextChanged((QComboBox*)self, qstring(param1));
}

void k_datecombobox_on_edit_text_changed(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_EditTextChanged((QComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_activated(void* self, int index) {
    QComboBox_Activated((QComboBox*)self, index);
}

void k_datecombobox_on_activated(void* self, void (*callback)(void*, int)) {
    QComboBox_Connect_Activated((QComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_text_activated(void* self, const char* param1) {
    QComboBox_TextActivated((QComboBox*)self, qstring(param1));
}

void k_datecombobox_on_text_activated(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_TextActivated((QComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_highlighted(void* self, int index) {
    QComboBox_Highlighted((QComboBox*)self, index);
}

void k_datecombobox_on_highlighted(void* self, void (*callback)(void*, int)) {
    QComboBox_Connect_Highlighted((QComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_text_highlighted(void* self, const char* param1) {
    QComboBox_TextHighlighted((QComboBox*)self, qstring(param1));
}

void k_datecombobox_on_text_highlighted(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_TextHighlighted((QComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_current_index_changed(void* self, int index) {
    QComboBox_CurrentIndexChanged((QComboBox*)self, index);
}

void k_datecombobox_on_current_index_changed(void* self, void (*callback)(void*, int)) {
    QComboBox_Connect_CurrentIndexChanged((QComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_current_text_changed(void* self, const char* param1) {
    QComboBox_CurrentTextChanged((QComboBox*)self, qstring(param1));
}

void k_datecombobox_on_current_text_changed(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_CurrentTextChanged((QComboBox*)self, (intptr_t)callback);
}

int32_t k_datecombobox_find_text2(void* self, const char* text, int32_t flags) {
    return QComboBox_FindText2((QComboBox*)self, qstring(text), flags);
}

int32_t k_datecombobox_find_data2(void* self, void* data, int role) {
    return QComboBox_FindData2((QComboBox*)self, (QVariant*)data, role);
}

int32_t k_datecombobox_find_data3(void* self, void* data, int role, int32_t flags) {
    return QComboBox_FindData3((QComboBox*)self, (QVariant*)data, role, flags);
}

QVariant* k_datecombobox_current_data1(void* self, int role) {
    return QComboBox_CurrentData1((QComboBox*)self, role);
}

QVariant* k_datecombobox_item_data2(void* self, int index, int role) {
    return QComboBox_ItemData2((QComboBox*)self, index, role);
}

void k_datecombobox_add_item22(void* self, const char* text, void* userData) {
    QComboBox_AddItem22((QComboBox*)self, qstring(text), (QVariant*)userData);
}

void k_datecombobox_add_item3(void* self, void* icon, const char* text, void* userData) {
    QComboBox_AddItem3((QComboBox*)self, (QIcon*)icon, qstring(text), (QVariant*)userData);
}

void k_datecombobox_insert_item3(void* self, int index, const char* text, void* userData) {
    QComboBox_InsertItem3((QComboBox*)self, index, qstring(text), (QVariant*)userData);
}

void k_datecombobox_insert_item4(void* self, int index, void* icon, const char* text, void* userData) {
    QComboBox_InsertItem4((QComboBox*)self, index, (QIcon*)icon, qstring(text), (QVariant*)userData);
}

void k_datecombobox_set_item_data3(void* self, int index, void* value, int role) {
    QComboBox_SetItemData3((QComboBox*)self, index, (QVariant*)value, role);
}

uintptr_t k_datecombobox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_datecombobox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_datecombobox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_datecombobox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_datecombobox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_datecombobox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_datecombobox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_datecombobox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_datecombobox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_datecombobox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_datecombobox_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_datecombobox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_datecombobox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_datecombobox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_datecombobox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_datecombobox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_datecombobox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_datecombobox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_datecombobox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_datecombobox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_datecombobox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_datecombobox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_datecombobox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_datecombobox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_datecombobox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_datecombobox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_datecombobox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_datecombobox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_datecombobox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_datecombobox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_datecombobox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_datecombobox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_datecombobox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_datecombobox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_datecombobox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_datecombobox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_datecombobox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_datecombobox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_datecombobox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_datecombobox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_datecombobox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_datecombobox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_datecombobox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_datecombobox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_datecombobox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_datecombobox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_datecombobox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_datecombobox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_datecombobox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_datecombobox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_datecombobox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_datecombobox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_datecombobox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_datecombobox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datecombobox_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datecombobox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datecombobox_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datecombobox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datecombobox_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datecombobox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datecombobox_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datecombobox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_datecombobox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_datecombobox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_datecombobox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_datecombobox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_datecombobox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_datecombobox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_datecombobox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_datecombobox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_datecombobox_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_datecombobox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_datecombobox_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_datecombobox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_datecombobox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_datecombobox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_datecombobox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_datecombobox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_datecombobox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_datecombobox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_datecombobox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_datecombobox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_datecombobox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_datecombobox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_datecombobox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_datecombobox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_datecombobox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_datecombobox_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_datecombobox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_datecombobox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_datecombobox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_datecombobox_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_datecombobox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_datecombobox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_datecombobox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_datecombobox_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_datecombobox_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_datecombobox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_datecombobox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_datecombobox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_datecombobox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datecombobox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_datecombobox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_datecombobox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_datecombobox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datecombobox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_datecombobox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datecombobox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_datecombobox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datecombobox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_datecombobox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_datecombobox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_datecombobox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_datecombobox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datecombobox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_datecombobox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_datecombobox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_datecombobox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datecombobox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_datecombobox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_datecombobox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datecombobox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_datecombobox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datecombobox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_datecombobox_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_datecombobox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_datecombobox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_datecombobox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_datecombobox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_datecombobox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_datecombobox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_datecombobox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_datecombobox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_datecombobox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_datecombobox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_datecombobox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_datecombobox_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_datecombobox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_datecombobox_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_datecombobox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_datecombobox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_datecombobox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_datecombobox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_datecombobox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_datecombobox_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_datecombobox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_datecombobox_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_datecombobox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_datecombobox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_datecombobox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_datecombobox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_datecombobox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_datecombobox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_datecombobox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_datecombobox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_datecombobox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_datecombobox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_datecombobox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_datecombobox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_datecombobox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_datecombobox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_datecombobox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_datecombobox_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_datecombobox_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_datecombobox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_datecombobox_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_datecombobox_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_datecombobox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_datecombobox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_datecombobox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_datecombobox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_datecombobox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_datecombobox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_datecombobox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_datecombobox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_datecombobox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_datecombobox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_datecombobox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_datecombobox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_datecombobox_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_datecombobox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_datecombobox_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_datecombobox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_datecombobox_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_datecombobox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_datecombobox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_datecombobox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_datecombobox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_datecombobox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_datecombobox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_datecombobox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_datecombobox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_datecombobox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_datecombobox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_datecombobox_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_datecombobox_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_datecombobox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_datecombobox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_datecombobox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_datecombobox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_datecombobox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_datecombobox_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_datecombobox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_datecombobox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_datecombobox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_datecombobox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_datecombobox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_datecombobox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_datecombobox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_datecombobox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_datecombobox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_datecombobox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_datecombobox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_datecombobox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_datecombobox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_datecombobox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_datecombobox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_datecombobox_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_datecombobox_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_datecombobox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_datecombobox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_datecombobox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_datecombobox_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_datecombobox_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_datecombobox_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_datecombobox_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_datecombobox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_datecombobox_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_datecombobox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_datecombobox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_datecombobox_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_datecombobox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_datecombobox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_datecombobox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_datecombobox_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_datecombobox_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_datecombobox_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_datecombobox_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_datecombobox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_datecombobox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_datecombobox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_datecombobox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_datecombobox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_datecombobox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_datecombobox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_datecombobox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_datecombobox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_datecombobox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_datecombobox_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_datecombobox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_datecombobox_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_datecombobox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_datecombobox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_datecombobox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_datecombobox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_datecombobox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_datecombobox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_datecombobox_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_datecombobox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_datecombobox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_datecombobox_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_datecombobox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_datecombobox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_datecombobox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_datecombobox_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_datecombobox_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_datecombobox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_datecombobox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_datecombobox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_datecombobox_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_datecombobox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_datecombobox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_datecombobox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datecombobox_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_datecombobox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_datecombobox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_datecombobox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_datecombobox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_datecombobox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_datecombobox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_datecombobox_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_datecombobox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_datecombobox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_datecombobox_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_datecombobox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_datecombobox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_datecombobox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_datecombobox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_datecombobox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_datecombobox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_datecombobox_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_datecombobox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_datecombobox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_datecombobox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_datecombobox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_datecombobox_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_datecombobox_dynamic_property_names");
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

QBindingStorage* k_datecombobox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_datecombobox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_datecombobox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_datecombobox_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_datecombobox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_datecombobox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_datecombobox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_datecombobox_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_datecombobox_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_datecombobox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_datecombobox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_datecombobox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_datecombobox_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_datecombobox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_datecombobox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_datecombobox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_datecombobox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_datecombobox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_datecombobox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_datecombobox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_datecombobox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_datecombobox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_datecombobox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_datecombobox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_datecombobox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_datecombobox_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_datecombobox_set_model(void* self, void* model) {
    KDateComboBox_SetModel((KDateComboBox*)self, (QAbstractItemModel*)model);
}

void k_datecombobox_qbase_set_model(void* self, void* model) {
    KDateComboBox_QBaseSetModel((KDateComboBox*)self, (QAbstractItemModel*)model);
}

void k_datecombobox_on_set_model(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnSetModel((KDateComboBox*)self, (intptr_t)callback);
}

QSize* k_datecombobox_size_hint(void* self) {
    return KDateComboBox_SizeHint((KDateComboBox*)self);
}

QSize* k_datecombobox_qbase_size_hint(void* self) {
    return KDateComboBox_QBaseSizeHint((KDateComboBox*)self);
}

void k_datecombobox_on_size_hint(void* self, QSize* (*callback)()) {
    KDateComboBox_OnSizeHint((KDateComboBox*)self, (intptr_t)callback);
}

QSize* k_datecombobox_minimum_size_hint(void* self) {
    return KDateComboBox_MinimumSizeHint((KDateComboBox*)self);
}

QSize* k_datecombobox_qbase_minimum_size_hint(void* self) {
    return KDateComboBox_QBaseMinimumSizeHint((KDateComboBox*)self);
}

void k_datecombobox_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KDateComboBox_OnMinimumSizeHint((KDateComboBox*)self, (intptr_t)callback);
}

bool k_datecombobox_event(void* self, void* event) {
    return KDateComboBox_Event((KDateComboBox*)self, (QEvent*)event);
}

bool k_datecombobox_qbase_event(void* self, void* event) {
    return KDateComboBox_QBaseEvent((KDateComboBox*)self, (QEvent*)event);
}

void k_datecombobox_on_event(void* self, bool (*callback)(void*, void*)) {
    KDateComboBox_OnEvent((KDateComboBox*)self, (intptr_t)callback);
}

QVariant* k_datecombobox_input_method_query(void* self, int64_t param1) {
    return KDateComboBox_InputMethodQuery((KDateComboBox*)self, param1);
}

QVariant* k_datecombobox_qbase_input_method_query(void* self, int64_t param1) {
    return KDateComboBox_QBaseInputMethodQuery((KDateComboBox*)self, param1);
}

void k_datecombobox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KDateComboBox_OnInputMethodQuery((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_change_event(void* self, void* e) {
    KDateComboBox_ChangeEvent((KDateComboBox*)self, (QEvent*)e);
}

void k_datecombobox_qbase_change_event(void* self, void* e) {
    KDateComboBox_QBaseChangeEvent((KDateComboBox*)self, (QEvent*)e);
}

void k_datecombobox_on_change_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnChangeEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_paint_event(void* self, void* e) {
    KDateComboBox_PaintEvent((KDateComboBox*)self, (QPaintEvent*)e);
}

void k_datecombobox_qbase_paint_event(void* self, void* e) {
    KDateComboBox_QBasePaintEvent((KDateComboBox*)self, (QPaintEvent*)e);
}

void k_datecombobox_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnPaintEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_show_event(void* self, void* e) {
    KDateComboBox_ShowEvent((KDateComboBox*)self, (QShowEvent*)e);
}

void k_datecombobox_qbase_show_event(void* self, void* e) {
    KDateComboBox_QBaseShowEvent((KDateComboBox*)self, (QShowEvent*)e);
}

void k_datecombobox_on_show_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnShowEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_hide_event(void* self, void* e) {
    KDateComboBox_HideEvent((KDateComboBox*)self, (QHideEvent*)e);
}

void k_datecombobox_qbase_hide_event(void* self, void* e) {
    KDateComboBox_QBaseHideEvent((KDateComboBox*)self, (QHideEvent*)e);
}

void k_datecombobox_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnHideEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_mouse_release_event(void* self, void* e) {
    KDateComboBox_MouseReleaseEvent((KDateComboBox*)self, (QMouseEvent*)e);
}

void k_datecombobox_qbase_mouse_release_event(void* self, void* e) {
    KDateComboBox_QBaseMouseReleaseEvent((KDateComboBox*)self, (QMouseEvent*)e);
}

void k_datecombobox_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnMouseReleaseEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_key_release_event(void* self, void* e) {
    KDateComboBox_KeyReleaseEvent((KDateComboBox*)self, (QKeyEvent*)e);
}

void k_datecombobox_qbase_key_release_event(void* self, void* e) {
    KDateComboBox_QBaseKeyReleaseEvent((KDateComboBox*)self, (QKeyEvent*)e);
}

void k_datecombobox_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnKeyReleaseEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_context_menu_event(void* self, void* e) {
    KDateComboBox_ContextMenuEvent((KDateComboBox*)self, (QContextMenuEvent*)e);
}

void k_datecombobox_qbase_context_menu_event(void* self, void* e) {
    KDateComboBox_QBaseContextMenuEvent((KDateComboBox*)self, (QContextMenuEvent*)e);
}

void k_datecombobox_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnContextMenuEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_input_method_event(void* self, void* param1) {
    KDateComboBox_InputMethodEvent((KDateComboBox*)self, (QInputMethodEvent*)param1);
}

void k_datecombobox_qbase_input_method_event(void* self, void* param1) {
    KDateComboBox_QBaseInputMethodEvent((KDateComboBox*)self, (QInputMethodEvent*)param1);
}

void k_datecombobox_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnInputMethodEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_init_style_option(void* self, void* option) {
    KDateComboBox_InitStyleOption((KDateComboBox*)self, (QStyleOptionComboBox*)option);
}

void k_datecombobox_qbase_init_style_option(void* self, void* option) {
    KDateComboBox_QBaseInitStyleOption((KDateComboBox*)self, (QStyleOptionComboBox*)option);
}

void k_datecombobox_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnInitStyleOption((KDateComboBox*)self, (intptr_t)callback);
}

int32_t k_datecombobox_dev_type(void* self) {
    return KDateComboBox_DevType((KDateComboBox*)self);
}

int32_t k_datecombobox_qbase_dev_type(void* self) {
    return KDateComboBox_QBaseDevType((KDateComboBox*)self);
}

void k_datecombobox_on_dev_type(void* self, int32_t (*callback)()) {
    KDateComboBox_OnDevType((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_set_visible(void* self, bool visible) {
    KDateComboBox_SetVisible((KDateComboBox*)self, visible);
}

void k_datecombobox_qbase_set_visible(void* self, bool visible) {
    KDateComboBox_QBaseSetVisible((KDateComboBox*)self, visible);
}

void k_datecombobox_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KDateComboBox_OnSetVisible((KDateComboBox*)self, (intptr_t)callback);
}

int32_t k_datecombobox_height_for_width(void* self, int param1) {
    return KDateComboBox_HeightForWidth((KDateComboBox*)self, param1);
}

int32_t k_datecombobox_qbase_height_for_width(void* self, int param1) {
    return KDateComboBox_QBaseHeightForWidth((KDateComboBox*)self, param1);
}

void k_datecombobox_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KDateComboBox_OnHeightForWidth((KDateComboBox*)self, (intptr_t)callback);
}

bool k_datecombobox_has_height_for_width(void* self) {
    return KDateComboBox_HasHeightForWidth((KDateComboBox*)self);
}

bool k_datecombobox_qbase_has_height_for_width(void* self) {
    return KDateComboBox_QBaseHasHeightForWidth((KDateComboBox*)self);
}

void k_datecombobox_on_has_height_for_width(void* self, bool (*callback)()) {
    KDateComboBox_OnHasHeightForWidth((KDateComboBox*)self, (intptr_t)callback);
}

QPaintEngine* k_datecombobox_paint_engine(void* self) {
    return KDateComboBox_PaintEngine((KDateComboBox*)self);
}

QPaintEngine* k_datecombobox_qbase_paint_engine(void* self) {
    return KDateComboBox_QBasePaintEngine((KDateComboBox*)self);
}

void k_datecombobox_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KDateComboBox_OnPaintEngine((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_mouse_double_click_event(void* self, void* event) {
    KDateComboBox_MouseDoubleClickEvent((KDateComboBox*)self, (QMouseEvent*)event);
}

void k_datecombobox_qbase_mouse_double_click_event(void* self, void* event) {
    KDateComboBox_QBaseMouseDoubleClickEvent((KDateComboBox*)self, (QMouseEvent*)event);
}

void k_datecombobox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnMouseDoubleClickEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_mouse_move_event(void* self, void* event) {
    KDateComboBox_MouseMoveEvent((KDateComboBox*)self, (QMouseEvent*)event);
}

void k_datecombobox_qbase_mouse_move_event(void* self, void* event) {
    KDateComboBox_QBaseMouseMoveEvent((KDateComboBox*)self, (QMouseEvent*)event);
}

void k_datecombobox_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnMouseMoveEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_enter_event(void* self, void* event) {
    KDateComboBox_EnterEvent((KDateComboBox*)self, (QEnterEvent*)event);
}

void k_datecombobox_qbase_enter_event(void* self, void* event) {
    KDateComboBox_QBaseEnterEvent((KDateComboBox*)self, (QEnterEvent*)event);
}

void k_datecombobox_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnEnterEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_leave_event(void* self, void* event) {
    KDateComboBox_LeaveEvent((KDateComboBox*)self, (QEvent*)event);
}

void k_datecombobox_qbase_leave_event(void* self, void* event) {
    KDateComboBox_QBaseLeaveEvent((KDateComboBox*)self, (QEvent*)event);
}

void k_datecombobox_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnLeaveEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_move_event(void* self, void* event) {
    KDateComboBox_MoveEvent((KDateComboBox*)self, (QMoveEvent*)event);
}

void k_datecombobox_qbase_move_event(void* self, void* event) {
    KDateComboBox_QBaseMoveEvent((KDateComboBox*)self, (QMoveEvent*)event);
}

void k_datecombobox_on_move_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnMoveEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_close_event(void* self, void* event) {
    KDateComboBox_CloseEvent((KDateComboBox*)self, (QCloseEvent*)event);
}

void k_datecombobox_qbase_close_event(void* self, void* event) {
    KDateComboBox_QBaseCloseEvent((KDateComboBox*)self, (QCloseEvent*)event);
}

void k_datecombobox_on_close_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnCloseEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_tablet_event(void* self, void* event) {
    KDateComboBox_TabletEvent((KDateComboBox*)self, (QTabletEvent*)event);
}

void k_datecombobox_qbase_tablet_event(void* self, void* event) {
    KDateComboBox_QBaseTabletEvent((KDateComboBox*)self, (QTabletEvent*)event);
}

void k_datecombobox_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnTabletEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_action_event(void* self, void* event) {
    KDateComboBox_ActionEvent((KDateComboBox*)self, (QActionEvent*)event);
}

void k_datecombobox_qbase_action_event(void* self, void* event) {
    KDateComboBox_QBaseActionEvent((KDateComboBox*)self, (QActionEvent*)event);
}

void k_datecombobox_on_action_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnActionEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_drag_enter_event(void* self, void* event) {
    KDateComboBox_DragEnterEvent((KDateComboBox*)self, (QDragEnterEvent*)event);
}

void k_datecombobox_qbase_drag_enter_event(void* self, void* event) {
    KDateComboBox_QBaseDragEnterEvent((KDateComboBox*)self, (QDragEnterEvent*)event);
}

void k_datecombobox_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnDragEnterEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_drag_move_event(void* self, void* event) {
    KDateComboBox_DragMoveEvent((KDateComboBox*)self, (QDragMoveEvent*)event);
}

void k_datecombobox_qbase_drag_move_event(void* self, void* event) {
    KDateComboBox_QBaseDragMoveEvent((KDateComboBox*)self, (QDragMoveEvent*)event);
}

void k_datecombobox_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnDragMoveEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_drag_leave_event(void* self, void* event) {
    KDateComboBox_DragLeaveEvent((KDateComboBox*)self, (QDragLeaveEvent*)event);
}

void k_datecombobox_qbase_drag_leave_event(void* self, void* event) {
    KDateComboBox_QBaseDragLeaveEvent((KDateComboBox*)self, (QDragLeaveEvent*)event);
}

void k_datecombobox_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnDragLeaveEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_drop_event(void* self, void* event) {
    KDateComboBox_DropEvent((KDateComboBox*)self, (QDropEvent*)event);
}

void k_datecombobox_qbase_drop_event(void* self, void* event) {
    KDateComboBox_QBaseDropEvent((KDateComboBox*)self, (QDropEvent*)event);
}

void k_datecombobox_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnDropEvent((KDateComboBox*)self, (intptr_t)callback);
}

bool k_datecombobox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KDateComboBox_NativeEvent((KDateComboBox*)self, qstring(eventType), message, result);
}

bool k_datecombobox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KDateComboBox_QBaseNativeEvent((KDateComboBox*)self, qstring(eventType), message, result);
}

void k_datecombobox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KDateComboBox_OnNativeEvent((KDateComboBox*)self, (intptr_t)callback);
}

int32_t k_datecombobox_metric(void* self, int32_t param1) {
    return KDateComboBox_Metric((KDateComboBox*)self, param1);
}

int32_t k_datecombobox_qbase_metric(void* self, int32_t param1) {
    return KDateComboBox_QBaseMetric((KDateComboBox*)self, param1);
}

void k_datecombobox_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KDateComboBox_OnMetric((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_init_painter(void* self, void* painter) {
    KDateComboBox_InitPainter((KDateComboBox*)self, (QPainter*)painter);
}

void k_datecombobox_qbase_init_painter(void* self, void* painter) {
    KDateComboBox_QBaseInitPainter((KDateComboBox*)self, (QPainter*)painter);
}

void k_datecombobox_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnInitPainter((KDateComboBox*)self, (intptr_t)callback);
}

QPaintDevice* k_datecombobox_redirected(void* self, void* offset) {
    return KDateComboBox_Redirected((KDateComboBox*)self, (QPoint*)offset);
}

QPaintDevice* k_datecombobox_qbase_redirected(void* self, void* offset) {
    return KDateComboBox_QBaseRedirected((KDateComboBox*)self, (QPoint*)offset);
}

void k_datecombobox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KDateComboBox_OnRedirected((KDateComboBox*)self, (intptr_t)callback);
}

QPainter* k_datecombobox_shared_painter(void* self) {
    return KDateComboBox_SharedPainter((KDateComboBox*)self);
}

QPainter* k_datecombobox_qbase_shared_painter(void* self) {
    return KDateComboBox_QBaseSharedPainter((KDateComboBox*)self);
}

void k_datecombobox_on_shared_painter(void* self, QPainter* (*callback)()) {
    KDateComboBox_OnSharedPainter((KDateComboBox*)self, (intptr_t)callback);
}

bool k_datecombobox_focus_next_prev_child(void* self, bool next) {
    return KDateComboBox_FocusNextPrevChild((KDateComboBox*)self, next);
}

bool k_datecombobox_qbase_focus_next_prev_child(void* self, bool next) {
    return KDateComboBox_QBaseFocusNextPrevChild((KDateComboBox*)self, next);
}

void k_datecombobox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KDateComboBox_OnFocusNextPrevChild((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_timer_event(void* self, void* event) {
    KDateComboBox_TimerEvent((KDateComboBox*)self, (QTimerEvent*)event);
}

void k_datecombobox_qbase_timer_event(void* self, void* event) {
    KDateComboBox_QBaseTimerEvent((KDateComboBox*)self, (QTimerEvent*)event);
}

void k_datecombobox_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnTimerEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_child_event(void* self, void* event) {
    KDateComboBox_ChildEvent((KDateComboBox*)self, (QChildEvent*)event);
}

void k_datecombobox_qbase_child_event(void* self, void* event) {
    KDateComboBox_QBaseChildEvent((KDateComboBox*)self, (QChildEvent*)event);
}

void k_datecombobox_on_child_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnChildEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_custom_event(void* self, void* event) {
    KDateComboBox_CustomEvent((KDateComboBox*)self, (QEvent*)event);
}

void k_datecombobox_qbase_custom_event(void* self, void* event) {
    KDateComboBox_QBaseCustomEvent((KDateComboBox*)self, (QEvent*)event);
}

void k_datecombobox_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnCustomEvent((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_connect_notify(void* self, void* signal) {
    KDateComboBox_ConnectNotify((KDateComboBox*)self, (QMetaMethod*)signal);
}

void k_datecombobox_qbase_connect_notify(void* self, void* signal) {
    KDateComboBox_QBaseConnectNotify((KDateComboBox*)self, (QMetaMethod*)signal);
}

void k_datecombobox_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnConnectNotify((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_disconnect_notify(void* self, void* signal) {
    KDateComboBox_DisconnectNotify((KDateComboBox*)self, (QMetaMethod*)signal);
}

void k_datecombobox_qbase_disconnect_notify(void* self, void* signal) {
    KDateComboBox_QBaseDisconnectNotify((KDateComboBox*)self, (QMetaMethod*)signal);
}

void k_datecombobox_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KDateComboBox_OnDisconnectNotify((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_update_micro_focus(void* self) {
    KDateComboBox_UpdateMicroFocus((KDateComboBox*)self);
}

void k_datecombobox_qbase_update_micro_focus(void* self) {
    KDateComboBox_QBaseUpdateMicroFocus((KDateComboBox*)self);
}

void k_datecombobox_on_update_micro_focus(void* self, void (*callback)()) {
    KDateComboBox_OnUpdateMicroFocus((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_create(void* self) {
    KDateComboBox_Create((KDateComboBox*)self);
}

void k_datecombobox_qbase_create(void* self) {
    KDateComboBox_QBaseCreate((KDateComboBox*)self);
}

void k_datecombobox_on_create(void* self, void (*callback)()) {
    KDateComboBox_OnCreate((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_destroy(void* self) {
    KDateComboBox_Destroy((KDateComboBox*)self);
}

void k_datecombobox_qbase_destroy(void* self) {
    KDateComboBox_QBaseDestroy((KDateComboBox*)self);
}

void k_datecombobox_on_destroy(void* self, void (*callback)()) {
    KDateComboBox_OnDestroy((KDateComboBox*)self, (intptr_t)callback);
}

bool k_datecombobox_focus_next_child(void* self) {
    return KDateComboBox_FocusNextChild((KDateComboBox*)self);
}

bool k_datecombobox_qbase_focus_next_child(void* self) {
    return KDateComboBox_QBaseFocusNextChild((KDateComboBox*)self);
}

void k_datecombobox_on_focus_next_child(void* self, bool (*callback)()) {
    KDateComboBox_OnFocusNextChild((KDateComboBox*)self, (intptr_t)callback);
}

bool k_datecombobox_focus_previous_child(void* self) {
    return KDateComboBox_FocusPreviousChild((KDateComboBox*)self);
}

bool k_datecombobox_qbase_focus_previous_child(void* self) {
    return KDateComboBox_QBaseFocusPreviousChild((KDateComboBox*)self);
}

void k_datecombobox_on_focus_previous_child(void* self, bool (*callback)()) {
    KDateComboBox_OnFocusPreviousChild((KDateComboBox*)self, (intptr_t)callback);
}

QObject* k_datecombobox_sender(void* self) {
    return KDateComboBox_Sender((KDateComboBox*)self);
}

QObject* k_datecombobox_qbase_sender(void* self) {
    return KDateComboBox_QBaseSender((KDateComboBox*)self);
}

void k_datecombobox_on_sender(void* self, QObject* (*callback)()) {
    KDateComboBox_OnSender((KDateComboBox*)self, (intptr_t)callback);
}

int32_t k_datecombobox_sender_signal_index(void* self) {
    return KDateComboBox_SenderSignalIndex((KDateComboBox*)self);
}

int32_t k_datecombobox_qbase_sender_signal_index(void* self) {
    return KDateComboBox_QBaseSenderSignalIndex((KDateComboBox*)self);
}

void k_datecombobox_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KDateComboBox_OnSenderSignalIndex((KDateComboBox*)self, (intptr_t)callback);
}

int32_t k_datecombobox_receivers(void* self, const char* signal) {
    return KDateComboBox_Receivers((KDateComboBox*)self, signal);
}

int32_t k_datecombobox_qbase_receivers(void* self, const char* signal) {
    return KDateComboBox_QBaseReceivers((KDateComboBox*)self, signal);
}

void k_datecombobox_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KDateComboBox_OnReceivers((KDateComboBox*)self, (intptr_t)callback);
}

bool k_datecombobox_is_signal_connected(void* self, void* signal) {
    return KDateComboBox_IsSignalConnected((KDateComboBox*)self, (QMetaMethod*)signal);
}

bool k_datecombobox_qbase_is_signal_connected(void* self, void* signal) {
    return KDateComboBox_QBaseIsSignalConnected((KDateComboBox*)self, (QMetaMethod*)signal);
}

void k_datecombobox_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KDateComboBox_OnIsSignalConnected((KDateComboBox*)self, (intptr_t)callback);
}

double k_datecombobox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KDateComboBox_GetDecodedMetricF((KDateComboBox*)self, metricA, metricB);
}

double k_datecombobox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KDateComboBox_QBaseGetDecodedMetricF((KDateComboBox*)self, metricA, metricB);
}

void k_datecombobox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KDateComboBox_OnGetDecodedMetricF((KDateComboBox*)self, (intptr_t)callback);
}

void k_datecombobox_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_datecombobox_delete(void* self) {
    KDateComboBox_Delete((KDateComboBox*)(self));
}
