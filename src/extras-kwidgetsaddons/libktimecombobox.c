#include "../libqabstractitemmodel.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcombobox.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqdatetime.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libktimecombobox.hpp"
#include "libktimecombobox.h"

KTimeComboBox* k_timecombobox_new(void* parent) {
    return KTimeComboBox_new((QWidget*)parent);
}

KTimeComboBox* k_timecombobox_new2() {
    return KTimeComboBox_new2();
}

const QMetaObject* k_timecombobox_meta_object(void* self) {
    return KTimeComboBox_MetaObject((KTimeComboBox*)self);
}

void k_timecombobox_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KTimeComboBox_OnMetaObject((KTimeComboBox*)self, (intptr_t)callback);
}

const QMetaObject* k_timecombobox_super_meta_object(void* self) {
    return KTimeComboBox_SuperMetaObject((KTimeComboBox*)self);
}

void* k_timecombobox_metacast(void* self, const char* param1) {
    return KTimeComboBox_Metacast((KTimeComboBox*)self, param1);
}

void k_timecombobox_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KTimeComboBox_OnMetacast((KTimeComboBox*)self, (intptr_t)callback);
}

void* k_timecombobox_super_metacast(void* self, const char* param1) {
    return KTimeComboBox_SuperMetacast((KTimeComboBox*)self, param1);
}

int32_t k_timecombobox_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTimeComboBox_Metacall((KTimeComboBox*)self, param1, param2, param3);
}

void k_timecombobox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KTimeComboBox_OnMetacall((KTimeComboBox*)self, (intptr_t)callback);
}

int32_t k_timecombobox_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTimeComboBox_SuperMetacall((KTimeComboBox*)self, param1, param2, param3);
}

const char* k_timecombobox_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTime* k_timecombobox_time(void* self) {
    return KTimeComboBox_Time((KTimeComboBox*)self);
}

bool k_timecombobox_is_valid(void* self) {
    return KTimeComboBox_IsValid((KTimeComboBox*)self);
}

bool k_timecombobox_is_null(void* self) {
    return KTimeComboBox_IsNull((KTimeComboBox*)self);
}

int32_t k_timecombobox_options(void* self) {
    return KTimeComboBox_Options((KTimeComboBox*)self);
}

int32_t k_timecombobox_display_format(void* self) {
    return KTimeComboBox_DisplayFormat((KTimeComboBox*)self);
}

QTime* k_timecombobox_minimum_time(void* self) {
    return KTimeComboBox_MinimumTime((KTimeComboBox*)self);
}

void k_timecombobox_reset_minimum_time(void* self) {
    KTimeComboBox_ResetMinimumTime((KTimeComboBox*)self);
}

QTime* k_timecombobox_maximum_time(void* self) {
    return KTimeComboBox_MaximumTime((KTimeComboBox*)self);
}

void k_timecombobox_reset_maximum_time(void* self) {
    KTimeComboBox_ResetMaximumTime((KTimeComboBox*)self);
}

void k_timecombobox_set_time_range(void* self, void* minTime, void* maxTime) {
    KTimeComboBox_SetTimeRange((KTimeComboBox*)self, (QTime*)minTime, (QTime*)maxTime);
}

void k_timecombobox_reset_time_range(void* self) {
    KTimeComboBox_ResetTimeRange((KTimeComboBox*)self);
}

int32_t k_timecombobox_time_list_interval(void* self) {
    return KTimeComboBox_TimeListInterval((KTimeComboBox*)self);
}

libqt_list /* of QTime* */ k_timecombobox_time_list(void* self) {
    libqt_list _arr = KTimeComboBox_TimeList((KTimeComboBox*)self);
    return _arr;
}

void k_timecombobox_time_entered(void* self, void* time) {
    KTimeComboBox_TimeEntered((KTimeComboBox*)self, (QTime*)time);
}

void k_timecombobox_on_time_entered(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_Connect_TimeEntered((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_time_changed(void* self, void* time) {
    KTimeComboBox_TimeChanged((KTimeComboBox*)self, (QTime*)time);
}

void k_timecombobox_on_time_changed(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_Connect_TimeChanged((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_time_edited(void* self, void* time) {
    KTimeComboBox_TimeEdited((KTimeComboBox*)self, (QTime*)time);
}

void k_timecombobox_on_time_edited(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_Connect_TimeEdited((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_set_time(void* self, void* time) {
    KTimeComboBox_SetTime((KTimeComboBox*)self, (QTime*)time);
}

void k_timecombobox_set_options(void* self, int32_t options) {
    KTimeComboBox_SetOptions((KTimeComboBox*)self, options);
}

void k_timecombobox_set_display_format(void* self, int32_t format) {
    KTimeComboBox_SetDisplayFormat((KTimeComboBox*)self, format);
}

void k_timecombobox_set_minimum_time(void* self, void* minTime) {
    KTimeComboBox_SetMinimumTime((KTimeComboBox*)self, (QTime*)minTime);
}

void k_timecombobox_set_maximum_time(void* self, void* maxTime) {
    KTimeComboBox_SetMaximumTime((KTimeComboBox*)self, (QTime*)maxTime);
}

void k_timecombobox_set_time_list_interval(void* self, int minutes) {
    KTimeComboBox_SetTimeListInterval((KTimeComboBox*)self, minutes);
}

void k_timecombobox_set_time_list(void* self, libqt_list /* of QTime* */ timeList) {
    KTimeComboBox_SetTimeList((KTimeComboBox*)self, timeList);
}

bool k_timecombobox_event_filter(void* self, void* object, void* event) {
    return KTimeComboBox_EventFilter((KTimeComboBox*)self, (QObject*)object, (QEvent*)event);
}

void k_timecombobox_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KTimeComboBox_OnEventFilter((KTimeComboBox*)self, (intptr_t)callback);
}

bool k_timecombobox_super_event_filter(void* self, void* object, void* event) {
    return KTimeComboBox_SuperEventFilter((KTimeComboBox*)self, (QObject*)object, (QEvent*)event);
}

void k_timecombobox_show_popup(void* self) {
    KTimeComboBox_ShowPopup((KTimeComboBox*)self);
}

void k_timecombobox_on_show_popup(void* self, void (*callback)()) {
    KTimeComboBox_OnShowPopup((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_super_show_popup(void* self) {
    KTimeComboBox_SuperShowPopup((KTimeComboBox*)self);
}

void k_timecombobox_hide_popup(void* self) {
    KTimeComboBox_HidePopup((KTimeComboBox*)self);
}

void k_timecombobox_on_hide_popup(void* self, void (*callback)()) {
    KTimeComboBox_OnHidePopup((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_super_hide_popup(void* self) {
    KTimeComboBox_SuperHidePopup((KTimeComboBox*)self);
}

void k_timecombobox_mouse_press_event(void* self, void* event) {
    KTimeComboBox_MousePressEvent((KTimeComboBox*)self, (QMouseEvent*)event);
}

void k_timecombobox_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnMousePressEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_super_mouse_press_event(void* self, void* event) {
    KTimeComboBox_SuperMousePressEvent((KTimeComboBox*)self, (QMouseEvent*)event);
}

void k_timecombobox_wheel_event(void* self, void* event) {
    KTimeComboBox_WheelEvent((KTimeComboBox*)self, (QWheelEvent*)event);
}

void k_timecombobox_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnWheelEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_super_wheel_event(void* self, void* event) {
    KTimeComboBox_SuperWheelEvent((KTimeComboBox*)self, (QWheelEvent*)event);
}

void k_timecombobox_key_press_event(void* self, void* event) {
    KTimeComboBox_KeyPressEvent((KTimeComboBox*)self, (QKeyEvent*)event);
}

void k_timecombobox_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnKeyPressEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_super_key_press_event(void* self, void* event) {
    KTimeComboBox_SuperKeyPressEvent((KTimeComboBox*)self, (QKeyEvent*)event);
}

void k_timecombobox_focus_in_event(void* self, void* event) {
    KTimeComboBox_FocusInEvent((KTimeComboBox*)self, (QFocusEvent*)event);
}

void k_timecombobox_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnFocusInEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_super_focus_in_event(void* self, void* event) {
    KTimeComboBox_SuperFocusInEvent((KTimeComboBox*)self, (QFocusEvent*)event);
}

void k_timecombobox_focus_out_event(void* self, void* event) {
    KTimeComboBox_FocusOutEvent((KTimeComboBox*)self, (QFocusEvent*)event);
}

void k_timecombobox_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnFocusOutEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_super_focus_out_event(void* self, void* event) {
    KTimeComboBox_SuperFocusOutEvent((KTimeComboBox*)self, (QFocusEvent*)event);
}

void k_timecombobox_resize_event(void* self, void* event) {
    KTimeComboBox_ResizeEvent((KTimeComboBox*)self, (QResizeEvent*)event);
}

void k_timecombobox_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnResizeEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_super_resize_event(void* self, void* event) {
    KTimeComboBox_SuperResizeEvent((KTimeComboBox*)self, (QResizeEvent*)event);
}

void k_timecombobox_assign_time(void* self, void* time) {
    KTimeComboBox_AssignTime((KTimeComboBox*)self, (QTime*)time);
}

void k_timecombobox_on_assign_time(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnAssignTime((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_super_assign_time(void* self, void* time) {
    KTimeComboBox_SuperAssignTime((KTimeComboBox*)self, (QTime*)time);
}

const char* k_timecombobox_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_timecombobox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_timecombobox_set_time_range3(void* self, void* minTime, void* maxTime, const char* minWarnMsg) {
    KTimeComboBox_SetTimeRange3((KTimeComboBox*)self, (QTime*)minTime, (QTime*)maxTime, qstring(minWarnMsg));
}

void k_timecombobox_set_time_range4(void* self, void* minTime, void* maxTime, const char* minWarnMsg, const char* maxWarnMsg) {
    KTimeComboBox_SetTimeRange4((KTimeComboBox*)self, (QTime*)minTime, (QTime*)maxTime, qstring(minWarnMsg), qstring(maxWarnMsg));
}

void k_timecombobox_set_minimum_time2(void* self, void* minTime, const char* minWarnMsg) {
    KTimeComboBox_SetMinimumTime2((KTimeComboBox*)self, (QTime*)minTime, qstring(minWarnMsg));
}

void k_timecombobox_set_maximum_time2(void* self, void* maxTime, const char* maxWarnMsg) {
    KTimeComboBox_SetMaximumTime2((KTimeComboBox*)self, (QTime*)maxTime, qstring(maxWarnMsg));
}

void k_timecombobox_set_time_list2(void* self, libqt_list /* of QTime* */ timeList, const char* minWarnMsg) {
    KTimeComboBox_SetTimeList2((KTimeComboBox*)self, timeList, qstring(minWarnMsg));
}

void k_timecombobox_set_time_list3(void* self, libqt_list /* of QTime* */ timeList, const char* minWarnMsg, const char* maxWarnMsg) {
    KTimeComboBox_SetTimeList3((KTimeComboBox*)self, timeList, qstring(minWarnMsg), qstring(maxWarnMsg));
}

int32_t k_timecombobox_max_visible_items(void* self) {
    return QComboBox_MaxVisibleItems((QComboBox*)self);
}

void k_timecombobox_set_max_visible_items(void* self, int maxItems) {
    QComboBox_SetMaxVisibleItems((QComboBox*)self, maxItems);
}

int32_t k_timecombobox_count(void* self) {
    return QComboBox_Count((QComboBox*)self);
}

void k_timecombobox_set_max_count(void* self, int max) {
    QComboBox_SetMaxCount((QComboBox*)self, max);
}

int32_t k_timecombobox_max_count(void* self) {
    return QComboBox_MaxCount((QComboBox*)self);
}

bool k_timecombobox_duplicates_enabled(void* self) {
    return QComboBox_DuplicatesEnabled((QComboBox*)self);
}

void k_timecombobox_set_duplicates_enabled(void* self, bool enable) {
    QComboBox_SetDuplicatesEnabled((QComboBox*)self, enable);
}

void k_timecombobox_set_frame(void* self, bool frame) {
    QComboBox_SetFrame((QComboBox*)self, frame);
}

bool k_timecombobox_has_frame(void* self) {
    return QComboBox_HasFrame((QComboBox*)self);
}

int32_t k_timecombobox_find_text(void* self, const char* text) {
    return QComboBox_FindText((QComboBox*)self, qstring(text));
}

int32_t k_timecombobox_find_data(void* self, void* data) {
    return QComboBox_FindData((QComboBox*)self, (QVariant*)data);
}

int32_t k_timecombobox_insert_policy(void* self) {
    return QComboBox_InsertPolicy((QComboBox*)self);
}

void k_timecombobox_set_insert_policy(void* self, int32_t policy) {
    QComboBox_SetInsertPolicy((QComboBox*)self, policy);
}

int32_t k_timecombobox_size_adjust_policy(void* self) {
    return QComboBox_SizeAdjustPolicy((QComboBox*)self);
}

void k_timecombobox_set_size_adjust_policy(void* self, int32_t policy) {
    QComboBox_SetSizeAdjustPolicy((QComboBox*)self, policy);
}

int32_t k_timecombobox_minimum_contents_length(void* self) {
    return QComboBox_MinimumContentsLength((QComboBox*)self);
}

void k_timecombobox_set_minimum_contents_length(void* self, int characters) {
    QComboBox_SetMinimumContentsLength((QComboBox*)self, characters);
}

QSize* k_timecombobox_icon_size(void* self) {
    return QComboBox_IconSize((QComboBox*)self);
}

void k_timecombobox_set_icon_size(void* self, void* size) {
    QComboBox_SetIconSize((QComboBox*)self, (QSize*)size);
}

void k_timecombobox_set_placeholder_text(void* self, const char* placeholderText) {
    QComboBox_SetPlaceholderText((QComboBox*)self, qstring(placeholderText));
}

const char* k_timecombobox_placeholder_text(void* self) {
    libqt_string _str = QComboBox_PlaceholderText((QComboBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_timecombobox_is_editable(void* self) {
    return QComboBox_IsEditable((QComboBox*)self);
}

void k_timecombobox_set_editable(void* self, bool editable) {
    QComboBox_SetEditable((QComboBox*)self, editable);
}

void k_timecombobox_set_line_edit(void* self, void* edit) {
    QComboBox_SetLineEdit((QComboBox*)self, (QLineEdit*)edit);
}

QLineEdit* k_timecombobox_line_edit(void* self) {
    return QComboBox_LineEdit((QComboBox*)self);
}

void k_timecombobox_set_validator(void* self, void* v) {
    QComboBox_SetValidator((QComboBox*)self, (QValidator*)v);
}

const QValidator* k_timecombobox_validator(void* self) {
    return QComboBox_Validator((QComboBox*)self);
}

void k_timecombobox_set_completer(void* self, void* c) {
    QComboBox_SetCompleter((QComboBox*)self, (QCompleter*)c);
}

QCompleter* k_timecombobox_completer(void* self) {
    return QComboBox_Completer((QComboBox*)self);
}

QAbstractItemDelegate* k_timecombobox_item_delegate(void* self) {
    return QComboBox_ItemDelegate((QComboBox*)self);
}

void k_timecombobox_set_item_delegate(void* self, void* delegate) {
    QComboBox_SetItemDelegate((QComboBox*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemModel* k_timecombobox_model(void* self) {
    return QComboBox_Model((QComboBox*)self);
}

QModelIndex* k_timecombobox_root_model_index(void* self) {
    return QComboBox_RootModelIndex((QComboBox*)self);
}

void k_timecombobox_set_root_model_index(void* self, void* index) {
    QComboBox_SetRootModelIndex((QComboBox*)self, (QModelIndex*)index);
}

int32_t k_timecombobox_model_column(void* self) {
    return QComboBox_ModelColumn((QComboBox*)self);
}

void k_timecombobox_set_model_column(void* self, int visibleColumn) {
    QComboBox_SetModelColumn((QComboBox*)self, visibleColumn);
}

int32_t k_timecombobox_current_index(void* self) {
    return QComboBox_CurrentIndex((QComboBox*)self);
}

const char* k_timecombobox_current_text(void* self) {
    libqt_string _str = QComboBox_CurrentText((QComboBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* k_timecombobox_current_data(void* self) {
    return QComboBox_CurrentData((QComboBox*)self);
}

const char* k_timecombobox_item_text(void* self, int index) {
    libqt_string _str = QComboBox_ItemText((QComboBox*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIcon* k_timecombobox_item_icon(void* self, int index) {
    return QComboBox_ItemIcon((QComboBox*)self, index);
}

QVariant* k_timecombobox_item_data(void* self, int index) {
    return QComboBox_ItemData((QComboBox*)self, index);
}

void k_timecombobox_add_item(void* self, const char* text) {
    QComboBox_AddItem((QComboBox*)self, qstring(text));
}

void k_timecombobox_add_item2(void* self, void* icon, const char* text) {
    QComboBox_AddItem2((QComboBox*)self, (QIcon*)icon, qstring(text));
}

void k_timecombobox_add_items(void* self, const char* texts[static 1]) {
    size_t texts_len = libqt_strv_length(texts);
    libqt_string* texts_qstr = (libqt_string*)malloc(texts_len * sizeof(libqt_string));
    if (texts_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_timecombobox_add_items\n");
        abort();
    }
    for (size_t i = 0; i < texts_len; ++i) {
        texts_qstr[i] = qstring(texts[i]);
    }
    libqt_list texts_list = qlist(texts_qstr, texts_len);
    QComboBox_AddItems((QComboBox*)self, texts_list);
    free(texts_qstr);
}

void k_timecombobox_insert_item(void* self, int index, const char* text) {
    QComboBox_InsertItem((QComboBox*)self, index, qstring(text));
}

void k_timecombobox_insert_item2(void* self, int index, void* icon, const char* text) {
    QComboBox_InsertItem2((QComboBox*)self, index, (QIcon*)icon, qstring(text));
}

void k_timecombobox_insert_items(void* self, int index, const char* texts[static 1]) {
    size_t texts_len = libqt_strv_length(texts);
    libqt_string* texts_qstr = (libqt_string*)malloc(texts_len * sizeof(libqt_string));
    if (texts_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_timecombobox_insert_items\n");
        abort();
    }
    for (size_t i = 0; i < texts_len; ++i) {
        texts_qstr[i] = qstring(texts[i]);
    }
    libqt_list texts_list = qlist(texts_qstr, texts_len);
    QComboBox_InsertItems((QComboBox*)self, index, texts_list);
    free(texts_qstr);
}

void k_timecombobox_insert_separator(void* self, int index) {
    QComboBox_InsertSeparator((QComboBox*)self, index);
}

void k_timecombobox_remove_item(void* self, int index) {
    QComboBox_RemoveItem((QComboBox*)self, index);
}

void k_timecombobox_set_item_text(void* self, int index, const char* text) {
    QComboBox_SetItemText((QComboBox*)self, index, qstring(text));
}

void k_timecombobox_set_item_icon(void* self, int index, void* icon) {
    QComboBox_SetItemIcon((QComboBox*)self, index, (QIcon*)icon);
}

void k_timecombobox_set_item_data(void* self, int index, void* value) {
    QComboBox_SetItemData((QComboBox*)self, index, (QVariant*)value);
}

QAbstractItemView* k_timecombobox_view(void* self) {
    return QComboBox_View((QComboBox*)self);
}

void k_timecombobox_set_view(void* self, void* itemView) {
    QComboBox_SetView((QComboBox*)self, (QAbstractItemView*)itemView);
}

QVariant* k_timecombobox_input_method_query2(void* self, int32_t query, void* argument) {
    return QComboBox_InputMethodQuery2((QComboBox*)self, query, (QVariant*)argument);
}

void k_timecombobox_clear(void* self) {
    QComboBox_Clear((QComboBox*)self);
}

void k_timecombobox_clear_edit_text(void* self) {
    QComboBox_ClearEditText((QComboBox*)self);
}

void k_timecombobox_set_edit_text(void* self, const char* text) {
    QComboBox_SetEditText((QComboBox*)self, qstring(text));
}

void k_timecombobox_set_current_index(void* self, int index) {
    QComboBox_SetCurrentIndex((QComboBox*)self, index);
}

void k_timecombobox_set_current_text(void* self, const char* text) {
    QComboBox_SetCurrentText((QComboBox*)self, qstring(text));
}

void k_timecombobox_edit_text_changed(void* self, const char* param1) {
    QComboBox_EditTextChanged((QComboBox*)self, qstring(param1));
}

void k_timecombobox_on_edit_text_changed(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_EditTextChanged((QComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_activated(void* self, int index) {
    QComboBox_Activated((QComboBox*)self, index);
}

void k_timecombobox_on_activated(void* self, void (*callback)(void*, int)) {
    QComboBox_Connect_Activated((QComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_text_activated(void* self, const char* param1) {
    QComboBox_TextActivated((QComboBox*)self, qstring(param1));
}

void k_timecombobox_on_text_activated(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_TextActivated((QComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_highlighted(void* self, int index) {
    QComboBox_Highlighted((QComboBox*)self, index);
}

void k_timecombobox_on_highlighted(void* self, void (*callback)(void*, int)) {
    QComboBox_Connect_Highlighted((QComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_text_highlighted(void* self, const char* param1) {
    QComboBox_TextHighlighted((QComboBox*)self, qstring(param1));
}

void k_timecombobox_on_text_highlighted(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_TextHighlighted((QComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_current_index_changed(void* self, int index) {
    QComboBox_CurrentIndexChanged((QComboBox*)self, index);
}

void k_timecombobox_on_current_index_changed(void* self, void (*callback)(void*, int)) {
    QComboBox_Connect_CurrentIndexChanged((QComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_current_text_changed(void* self, const char* param1) {
    QComboBox_CurrentTextChanged((QComboBox*)self, qstring(param1));
}

void k_timecombobox_on_current_text_changed(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_CurrentTextChanged((QComboBox*)self, (intptr_t)callback);
}

int32_t k_timecombobox_find_text2(void* self, const char* text, int32_t flags) {
    return QComboBox_FindText2((QComboBox*)self, qstring(text), flags);
}

int32_t k_timecombobox_find_data2(void* self, void* data, int role) {
    return QComboBox_FindData2((QComboBox*)self, (QVariant*)data, role);
}

int32_t k_timecombobox_find_data3(void* self, void* data, int role, int32_t flags) {
    return QComboBox_FindData3((QComboBox*)self, (QVariant*)data, role, flags);
}

QVariant* k_timecombobox_current_data1(void* self, int role) {
    return QComboBox_CurrentData1((QComboBox*)self, role);
}

QVariant* k_timecombobox_item_data2(void* self, int index, int role) {
    return QComboBox_ItemData2((QComboBox*)self, index, role);
}

void k_timecombobox_add_item22(void* self, const char* text, void* userData) {
    QComboBox_AddItem22((QComboBox*)self, qstring(text), (QVariant*)userData);
}

void k_timecombobox_add_item3(void* self, void* icon, const char* text, void* userData) {
    QComboBox_AddItem3((QComboBox*)self, (QIcon*)icon, qstring(text), (QVariant*)userData);
}

void k_timecombobox_insert_item3(void* self, int index, const char* text, void* userData) {
    QComboBox_InsertItem3((QComboBox*)self, index, qstring(text), (QVariant*)userData);
}

void k_timecombobox_insert_item4(void* self, int index, void* icon, const char* text, void* userData) {
    QComboBox_InsertItem4((QComboBox*)self, index, (QIcon*)icon, qstring(text), (QVariant*)userData);
}

void k_timecombobox_set_item_data3(void* self, int index, void* value, int role) {
    QComboBox_SetItemData3((QComboBox*)self, index, (QVariant*)value, role);
}

uintptr_t k_timecombobox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_timecombobox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_timecombobox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_timecombobox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_timecombobox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_timecombobox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_timecombobox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_timecombobox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_timecombobox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_timecombobox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_timecombobox_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_timecombobox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_timecombobox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_timecombobox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_timecombobox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_timecombobox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_timecombobox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_timecombobox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_timecombobox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_timecombobox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_timecombobox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_timecombobox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_timecombobox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_timecombobox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_timecombobox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_timecombobox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_timecombobox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_timecombobox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_timecombobox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_timecombobox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_timecombobox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_timecombobox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_timecombobox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_timecombobox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_timecombobox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_timecombobox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_timecombobox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_timecombobox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_timecombobox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_timecombobox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_timecombobox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_timecombobox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_timecombobox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_timecombobox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_timecombobox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_timecombobox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_timecombobox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_timecombobox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_timecombobox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_timecombobox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_timecombobox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_timecombobox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_timecombobox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_timecombobox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_timecombobox_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_timecombobox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_timecombobox_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_timecombobox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_timecombobox_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_timecombobox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_timecombobox_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_timecombobox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_timecombobox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_timecombobox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_timecombobox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_timecombobox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_timecombobox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_timecombobox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_timecombobox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_timecombobox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_timecombobox_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_timecombobox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_timecombobox_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_timecombobox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_timecombobox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_timecombobox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_timecombobox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_timecombobox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_timecombobox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_timecombobox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_timecombobox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_timecombobox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_timecombobox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_timecombobox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_timecombobox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_timecombobox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_timecombobox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_timecombobox_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_timecombobox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_timecombobox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_timecombobox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_timecombobox_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_timecombobox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_timecombobox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_timecombobox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_timecombobox_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_timecombobox_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_timecombobox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_timecombobox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_timecombobox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_timecombobox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_timecombobox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_timecombobox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_timecombobox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_timecombobox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_timecombobox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_timecombobox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_timecombobox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_timecombobox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_timecombobox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_timecombobox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_timecombobox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_timecombobox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_timecombobox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_timecombobox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_timecombobox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_timecombobox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_timecombobox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_timecombobox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_timecombobox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_timecombobox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_timecombobox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_timecombobox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_timecombobox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_timecombobox_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_timecombobox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_timecombobox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_timecombobox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_timecombobox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_timecombobox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_timecombobox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_timecombobox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_timecombobox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_timecombobox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_timecombobox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_timecombobox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_timecombobox_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_timecombobox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_timecombobox_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_timecombobox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_timecombobox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_timecombobox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_timecombobox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_timecombobox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_timecombobox_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_timecombobox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_timecombobox_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_timecombobox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_timecombobox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_timecombobox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_timecombobox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_timecombobox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_timecombobox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_timecombobox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_timecombobox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_timecombobox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_timecombobox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_timecombobox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_timecombobox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_timecombobox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_timecombobox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_timecombobox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_timecombobox_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_timecombobox_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_timecombobox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_timecombobox_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_timecombobox_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_timecombobox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_timecombobox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_timecombobox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_timecombobox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_timecombobox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_timecombobox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_timecombobox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_timecombobox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_timecombobox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_timecombobox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_timecombobox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_timecombobox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_timecombobox_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_timecombobox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_timecombobox_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_timecombobox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_timecombobox_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_timecombobox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_timecombobox_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_timecombobox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_timecombobox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_timecombobox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_timecombobox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_timecombobox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_timecombobox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_timecombobox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_timecombobox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_timecombobox_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_timecombobox_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_timecombobox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_timecombobox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_timecombobox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_timecombobox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_timecombobox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_timecombobox_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_timecombobox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_timecombobox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_timecombobox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_timecombobox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_timecombobox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_timecombobox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_timecombobox_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_timecombobox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_timecombobox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_timecombobox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_timecombobox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_timecombobox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_timecombobox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_timecombobox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_timecombobox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_timecombobox_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_timecombobox_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_timecombobox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_timecombobox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_timecombobox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_timecombobox_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_timecombobox_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_timecombobox_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_timecombobox_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_timecombobox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_timecombobox_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_timecombobox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_timecombobox_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_timecombobox_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_timecombobox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_timecombobox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_timecombobox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_timecombobox_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_timecombobox_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_timecombobox_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_timecombobox_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_timecombobox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_timecombobox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_timecombobox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_timecombobox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_timecombobox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_timecombobox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_timecombobox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_timecombobox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_timecombobox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_timecombobox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_timecombobox_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_timecombobox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_timecombobox_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_timecombobox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_timecombobox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_timecombobox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_timecombobox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_timecombobox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_timecombobox_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_timecombobox_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_timecombobox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_timecombobox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_timecombobox_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_timecombobox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_timecombobox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_timecombobox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_timecombobox_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_timecombobox_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_timecombobox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_timecombobox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_timecombobox_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_timecombobox_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_timecombobox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_timecombobox_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_timecombobox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_timecombobox_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_timecombobox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_timecombobox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_timecombobox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_timecombobox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_timecombobox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_timecombobox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_timecombobox_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_timecombobox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_timecombobox_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_timecombobox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_timecombobox_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_timecombobox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_timecombobox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_timecombobox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_timecombobox_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_timecombobox_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_timecombobox_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_timecombobox_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_timecombobox_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_timecombobox_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_timecombobox_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_timecombobox_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_timecombobox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_timecombobox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_timecombobox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_timecombobox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_timecombobox_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_timecombobox_dynamic_property_names\n");
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

QBindingStorage* k_timecombobox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_timecombobox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_timecombobox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_timecombobox_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_timecombobox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_timecombobox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_timecombobox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_timecombobox_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_timecombobox_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_timecombobox_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_timecombobox_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_timecombobox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_timecombobox_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_timecombobox_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_timecombobox_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_timecombobox_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_timecombobox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_timecombobox_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_timecombobox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_timecombobox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_timecombobox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_timecombobox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_timecombobox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_timecombobox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_timecombobox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_timecombobox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_timecombobox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_timecombobox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_timecombobox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_timecombobox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_timecombobox_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_timecombobox_set_model(void* self, void* model) {
    KTimeComboBox_SetModel((KTimeComboBox*)self, (QAbstractItemModel*)model);
}

void k_timecombobox_super_set_model(void* self, void* model) {
    KTimeComboBox_SuperSetModel((KTimeComboBox*)self, (QAbstractItemModel*)model);
}

void k_timecombobox_on_set_model(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnSetModel((KTimeComboBox*)self, (intptr_t)callback);
}

QSize* k_timecombobox_size_hint(void* self) {
    return KTimeComboBox_SizeHint((KTimeComboBox*)self);
}

QSize* k_timecombobox_super_size_hint(void* self) {
    return KTimeComboBox_SuperSizeHint((KTimeComboBox*)self);
}

void k_timecombobox_on_size_hint(void* self, QSize* (*callback)()) {
    KTimeComboBox_OnSizeHint((KTimeComboBox*)self, (intptr_t)callback);
}

QSize* k_timecombobox_minimum_size_hint(void* self) {
    return KTimeComboBox_MinimumSizeHint((KTimeComboBox*)self);
}

QSize* k_timecombobox_super_minimum_size_hint(void* self) {
    return KTimeComboBox_SuperMinimumSizeHint((KTimeComboBox*)self);
}

void k_timecombobox_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KTimeComboBox_OnMinimumSizeHint((KTimeComboBox*)self, (intptr_t)callback);
}

bool k_timecombobox_event(void* self, void* event) {
    return KTimeComboBox_Event((KTimeComboBox*)self, (QEvent*)event);
}

bool k_timecombobox_super_event(void* self, void* event) {
    return KTimeComboBox_SuperEvent((KTimeComboBox*)self, (QEvent*)event);
}

void k_timecombobox_on_event(void* self, bool (*callback)(void*, void*)) {
    KTimeComboBox_OnEvent((KTimeComboBox*)self, (intptr_t)callback);
}

QVariant* k_timecombobox_input_method_query(void* self, int32_t param1) {
    return KTimeComboBox_InputMethodQuery((KTimeComboBox*)self, param1);
}

QVariant* k_timecombobox_super_input_method_query(void* self, int32_t param1) {
    return KTimeComboBox_SuperInputMethodQuery((KTimeComboBox*)self, param1);
}

void k_timecombobox_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KTimeComboBox_OnInputMethodQuery((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_change_event(void* self, void* e) {
    KTimeComboBox_ChangeEvent((KTimeComboBox*)self, (QEvent*)e);
}

void k_timecombobox_super_change_event(void* self, void* e) {
    KTimeComboBox_SuperChangeEvent((KTimeComboBox*)self, (QEvent*)e);
}

void k_timecombobox_on_change_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnChangeEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_paint_event(void* self, void* e) {
    KTimeComboBox_PaintEvent((KTimeComboBox*)self, (QPaintEvent*)e);
}

void k_timecombobox_super_paint_event(void* self, void* e) {
    KTimeComboBox_SuperPaintEvent((KTimeComboBox*)self, (QPaintEvent*)e);
}

void k_timecombobox_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnPaintEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_show_event(void* self, void* e) {
    KTimeComboBox_ShowEvent((KTimeComboBox*)self, (QShowEvent*)e);
}

void k_timecombobox_super_show_event(void* self, void* e) {
    KTimeComboBox_SuperShowEvent((KTimeComboBox*)self, (QShowEvent*)e);
}

void k_timecombobox_on_show_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnShowEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_hide_event(void* self, void* e) {
    KTimeComboBox_HideEvent((KTimeComboBox*)self, (QHideEvent*)e);
}

void k_timecombobox_super_hide_event(void* self, void* e) {
    KTimeComboBox_SuperHideEvent((KTimeComboBox*)self, (QHideEvent*)e);
}

void k_timecombobox_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnHideEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_mouse_release_event(void* self, void* e) {
    KTimeComboBox_MouseReleaseEvent((KTimeComboBox*)self, (QMouseEvent*)e);
}

void k_timecombobox_super_mouse_release_event(void* self, void* e) {
    KTimeComboBox_SuperMouseReleaseEvent((KTimeComboBox*)self, (QMouseEvent*)e);
}

void k_timecombobox_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnMouseReleaseEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_key_release_event(void* self, void* e) {
    KTimeComboBox_KeyReleaseEvent((KTimeComboBox*)self, (QKeyEvent*)e);
}

void k_timecombobox_super_key_release_event(void* self, void* e) {
    KTimeComboBox_SuperKeyReleaseEvent((KTimeComboBox*)self, (QKeyEvent*)e);
}

void k_timecombobox_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnKeyReleaseEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_context_menu_event(void* self, void* e) {
    KTimeComboBox_ContextMenuEvent((KTimeComboBox*)self, (QContextMenuEvent*)e);
}

void k_timecombobox_super_context_menu_event(void* self, void* e) {
    KTimeComboBox_SuperContextMenuEvent((KTimeComboBox*)self, (QContextMenuEvent*)e);
}

void k_timecombobox_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnContextMenuEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_input_method_event(void* self, void* param1) {
    KTimeComboBox_InputMethodEvent((KTimeComboBox*)self, (QInputMethodEvent*)param1);
}

void k_timecombobox_super_input_method_event(void* self, void* param1) {
    KTimeComboBox_SuperInputMethodEvent((KTimeComboBox*)self, (QInputMethodEvent*)param1);
}

void k_timecombobox_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnInputMethodEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_init_style_option(void* self, void* option) {
    KTimeComboBox_InitStyleOption((KTimeComboBox*)self, (QStyleOptionComboBox*)option);
}

void k_timecombobox_super_init_style_option(void* self, void* option) {
    KTimeComboBox_SuperInitStyleOption((KTimeComboBox*)self, (QStyleOptionComboBox*)option);
}

void k_timecombobox_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnInitStyleOption((KTimeComboBox*)self, (intptr_t)callback);
}

int32_t k_timecombobox_dev_type(void* self) {
    return KTimeComboBox_DevType((KTimeComboBox*)self);
}

int32_t k_timecombobox_super_dev_type(void* self) {
    return KTimeComboBox_SuperDevType((KTimeComboBox*)self);
}

void k_timecombobox_on_dev_type(void* self, int32_t (*callback)()) {
    KTimeComboBox_OnDevType((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_set_visible(void* self, bool visible) {
    KTimeComboBox_SetVisible((KTimeComboBox*)self, visible);
}

void k_timecombobox_super_set_visible(void* self, bool visible) {
    KTimeComboBox_SuperSetVisible((KTimeComboBox*)self, visible);
}

void k_timecombobox_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KTimeComboBox_OnSetVisible((KTimeComboBox*)self, (intptr_t)callback);
}

int32_t k_timecombobox_height_for_width(void* self, int param1) {
    return KTimeComboBox_HeightForWidth((KTimeComboBox*)self, param1);
}

int32_t k_timecombobox_super_height_for_width(void* self, int param1) {
    return KTimeComboBox_SuperHeightForWidth((KTimeComboBox*)self, param1);
}

void k_timecombobox_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KTimeComboBox_OnHeightForWidth((KTimeComboBox*)self, (intptr_t)callback);
}

bool k_timecombobox_has_height_for_width(void* self) {
    return KTimeComboBox_HasHeightForWidth((KTimeComboBox*)self);
}

bool k_timecombobox_super_has_height_for_width(void* self) {
    return KTimeComboBox_SuperHasHeightForWidth((KTimeComboBox*)self);
}

void k_timecombobox_on_has_height_for_width(void* self, bool (*callback)()) {
    KTimeComboBox_OnHasHeightForWidth((KTimeComboBox*)self, (intptr_t)callback);
}

QPaintEngine* k_timecombobox_paint_engine(void* self) {
    return KTimeComboBox_PaintEngine((KTimeComboBox*)self);
}

QPaintEngine* k_timecombobox_super_paint_engine(void* self) {
    return KTimeComboBox_SuperPaintEngine((KTimeComboBox*)self);
}

void k_timecombobox_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KTimeComboBox_OnPaintEngine((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_mouse_double_click_event(void* self, void* event) {
    KTimeComboBox_MouseDoubleClickEvent((KTimeComboBox*)self, (QMouseEvent*)event);
}

void k_timecombobox_super_mouse_double_click_event(void* self, void* event) {
    KTimeComboBox_SuperMouseDoubleClickEvent((KTimeComboBox*)self, (QMouseEvent*)event);
}

void k_timecombobox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnMouseDoubleClickEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_mouse_move_event(void* self, void* event) {
    KTimeComboBox_MouseMoveEvent((KTimeComboBox*)self, (QMouseEvent*)event);
}

void k_timecombobox_super_mouse_move_event(void* self, void* event) {
    KTimeComboBox_SuperMouseMoveEvent((KTimeComboBox*)self, (QMouseEvent*)event);
}

void k_timecombobox_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnMouseMoveEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_enter_event(void* self, void* event) {
    KTimeComboBox_EnterEvent((KTimeComboBox*)self, (QEnterEvent*)event);
}

void k_timecombobox_super_enter_event(void* self, void* event) {
    KTimeComboBox_SuperEnterEvent((KTimeComboBox*)self, (QEnterEvent*)event);
}

void k_timecombobox_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnEnterEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_leave_event(void* self, void* event) {
    KTimeComboBox_LeaveEvent((KTimeComboBox*)self, (QEvent*)event);
}

void k_timecombobox_super_leave_event(void* self, void* event) {
    KTimeComboBox_SuperLeaveEvent((KTimeComboBox*)self, (QEvent*)event);
}

void k_timecombobox_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnLeaveEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_move_event(void* self, void* event) {
    KTimeComboBox_MoveEvent((KTimeComboBox*)self, (QMoveEvent*)event);
}

void k_timecombobox_super_move_event(void* self, void* event) {
    KTimeComboBox_SuperMoveEvent((KTimeComboBox*)self, (QMoveEvent*)event);
}

void k_timecombobox_on_move_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnMoveEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_close_event(void* self, void* event) {
    KTimeComboBox_CloseEvent((KTimeComboBox*)self, (QCloseEvent*)event);
}

void k_timecombobox_super_close_event(void* self, void* event) {
    KTimeComboBox_SuperCloseEvent((KTimeComboBox*)self, (QCloseEvent*)event);
}

void k_timecombobox_on_close_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnCloseEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_tablet_event(void* self, void* event) {
    KTimeComboBox_TabletEvent((KTimeComboBox*)self, (QTabletEvent*)event);
}

void k_timecombobox_super_tablet_event(void* self, void* event) {
    KTimeComboBox_SuperTabletEvent((KTimeComboBox*)self, (QTabletEvent*)event);
}

void k_timecombobox_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnTabletEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_action_event(void* self, void* event) {
    KTimeComboBox_ActionEvent((KTimeComboBox*)self, (QActionEvent*)event);
}

void k_timecombobox_super_action_event(void* self, void* event) {
    KTimeComboBox_SuperActionEvent((KTimeComboBox*)self, (QActionEvent*)event);
}

void k_timecombobox_on_action_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnActionEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_drag_enter_event(void* self, void* event) {
    KTimeComboBox_DragEnterEvent((KTimeComboBox*)self, (QDragEnterEvent*)event);
}

void k_timecombobox_super_drag_enter_event(void* self, void* event) {
    KTimeComboBox_SuperDragEnterEvent((KTimeComboBox*)self, (QDragEnterEvent*)event);
}

void k_timecombobox_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnDragEnterEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_drag_move_event(void* self, void* event) {
    KTimeComboBox_DragMoveEvent((KTimeComboBox*)self, (QDragMoveEvent*)event);
}

void k_timecombobox_super_drag_move_event(void* self, void* event) {
    KTimeComboBox_SuperDragMoveEvent((KTimeComboBox*)self, (QDragMoveEvent*)event);
}

void k_timecombobox_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnDragMoveEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_drag_leave_event(void* self, void* event) {
    KTimeComboBox_DragLeaveEvent((KTimeComboBox*)self, (QDragLeaveEvent*)event);
}

void k_timecombobox_super_drag_leave_event(void* self, void* event) {
    KTimeComboBox_SuperDragLeaveEvent((KTimeComboBox*)self, (QDragLeaveEvent*)event);
}

void k_timecombobox_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnDragLeaveEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_drop_event(void* self, void* event) {
    KTimeComboBox_DropEvent((KTimeComboBox*)self, (QDropEvent*)event);
}

void k_timecombobox_super_drop_event(void* self, void* event) {
    KTimeComboBox_SuperDropEvent((KTimeComboBox*)self, (QDropEvent*)event);
}

void k_timecombobox_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnDropEvent((KTimeComboBox*)self, (intptr_t)callback);
}

bool k_timecombobox_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KTimeComboBox_NativeEvent((KTimeComboBox*)self, qstring(eventType), message, result);
}

bool k_timecombobox_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KTimeComboBox_SuperNativeEvent((KTimeComboBox*)self, qstring(eventType), message, result);
}

void k_timecombobox_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    KTimeComboBox_OnNativeEvent((KTimeComboBox*)self, (intptr_t)callback);
}

int32_t k_timecombobox_metric(void* self, int32_t param1) {
    return KTimeComboBox_Metric((KTimeComboBox*)self, param1);
}

int32_t k_timecombobox_super_metric(void* self, int32_t param1) {
    return KTimeComboBox_SuperMetric((KTimeComboBox*)self, param1);
}

void k_timecombobox_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KTimeComboBox_OnMetric((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_init_painter(void* self, void* painter) {
    KTimeComboBox_InitPainter((KTimeComboBox*)self, (QPainter*)painter);
}

void k_timecombobox_super_init_painter(void* self, void* painter) {
    KTimeComboBox_SuperInitPainter((KTimeComboBox*)self, (QPainter*)painter);
}

void k_timecombobox_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnInitPainter((KTimeComboBox*)self, (intptr_t)callback);
}

QPaintDevice* k_timecombobox_redirected(void* self, void* offset) {
    return KTimeComboBox_Redirected((KTimeComboBox*)self, (QPoint*)offset);
}

QPaintDevice* k_timecombobox_super_redirected(void* self, void* offset) {
    return KTimeComboBox_SuperRedirected((KTimeComboBox*)self, (QPoint*)offset);
}

void k_timecombobox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KTimeComboBox_OnRedirected((KTimeComboBox*)self, (intptr_t)callback);
}

QPainter* k_timecombobox_shared_painter(void* self) {
    return KTimeComboBox_SharedPainter((KTimeComboBox*)self);
}

QPainter* k_timecombobox_super_shared_painter(void* self) {
    return KTimeComboBox_SuperSharedPainter((KTimeComboBox*)self);
}

void k_timecombobox_on_shared_painter(void* self, QPainter* (*callback)()) {
    KTimeComboBox_OnSharedPainter((KTimeComboBox*)self, (intptr_t)callback);
}

bool k_timecombobox_focus_next_prev_child(void* self, bool next) {
    return KTimeComboBox_FocusNextPrevChild((KTimeComboBox*)self, next);
}

bool k_timecombobox_super_focus_next_prev_child(void* self, bool next) {
    return KTimeComboBox_SuperFocusNextPrevChild((KTimeComboBox*)self, next);
}

void k_timecombobox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KTimeComboBox_OnFocusNextPrevChild((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_timer_event(void* self, void* event) {
    KTimeComboBox_TimerEvent((KTimeComboBox*)self, (QTimerEvent*)event);
}

void k_timecombobox_super_timer_event(void* self, void* event) {
    KTimeComboBox_SuperTimerEvent((KTimeComboBox*)self, (QTimerEvent*)event);
}

void k_timecombobox_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnTimerEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_child_event(void* self, void* event) {
    KTimeComboBox_ChildEvent((KTimeComboBox*)self, (QChildEvent*)event);
}

void k_timecombobox_super_child_event(void* self, void* event) {
    KTimeComboBox_SuperChildEvent((KTimeComboBox*)self, (QChildEvent*)event);
}

void k_timecombobox_on_child_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnChildEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_custom_event(void* self, void* event) {
    KTimeComboBox_CustomEvent((KTimeComboBox*)self, (QEvent*)event);
}

void k_timecombobox_super_custom_event(void* self, void* event) {
    KTimeComboBox_SuperCustomEvent((KTimeComboBox*)self, (QEvent*)event);
}

void k_timecombobox_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnCustomEvent((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_connect_notify(void* self, void* signal) {
    KTimeComboBox_ConnectNotify((KTimeComboBox*)self, (QMetaMethod*)signal);
}

void k_timecombobox_super_connect_notify(void* self, void* signal) {
    KTimeComboBox_SuperConnectNotify((KTimeComboBox*)self, (QMetaMethod*)signal);
}

void k_timecombobox_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnConnectNotify((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_disconnect_notify(void* self, void* signal) {
    KTimeComboBox_DisconnectNotify((KTimeComboBox*)self, (QMetaMethod*)signal);
}

void k_timecombobox_super_disconnect_notify(void* self, void* signal) {
    KTimeComboBox_SuperDisconnectNotify((KTimeComboBox*)self, (QMetaMethod*)signal);
}

void k_timecombobox_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KTimeComboBox_OnDisconnectNotify((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_update_micro_focus(void* self) {
    KTimeComboBox_UpdateMicroFocus((KTimeComboBox*)self);
}

void k_timecombobox_super_update_micro_focus(void* self) {
    KTimeComboBox_SuperUpdateMicroFocus((KTimeComboBox*)self);
}

void k_timecombobox_on_update_micro_focus(void* self, void (*callback)()) {
    KTimeComboBox_OnUpdateMicroFocus((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_create(void* self) {
    KTimeComboBox_Create((KTimeComboBox*)self);
}

void k_timecombobox_super_create(void* self) {
    KTimeComboBox_SuperCreate((KTimeComboBox*)self);
}

void k_timecombobox_on_create(void* self, void (*callback)()) {
    KTimeComboBox_OnCreate((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_destroy(void* self) {
    KTimeComboBox_Destroy((KTimeComboBox*)self);
}

void k_timecombobox_super_destroy(void* self) {
    KTimeComboBox_SuperDestroy((KTimeComboBox*)self);
}

void k_timecombobox_on_destroy(void* self, void (*callback)()) {
    KTimeComboBox_OnDestroy((KTimeComboBox*)self, (intptr_t)callback);
}

bool k_timecombobox_focus_next_child(void* self) {
    return KTimeComboBox_FocusNextChild((KTimeComboBox*)self);
}

bool k_timecombobox_super_focus_next_child(void* self) {
    return KTimeComboBox_SuperFocusNextChild((KTimeComboBox*)self);
}

void k_timecombobox_on_focus_next_child(void* self, bool (*callback)()) {
    KTimeComboBox_OnFocusNextChild((KTimeComboBox*)self, (intptr_t)callback);
}

bool k_timecombobox_focus_previous_child(void* self) {
    return KTimeComboBox_FocusPreviousChild((KTimeComboBox*)self);
}

bool k_timecombobox_super_focus_previous_child(void* self) {
    return KTimeComboBox_SuperFocusPreviousChild((KTimeComboBox*)self);
}

void k_timecombobox_on_focus_previous_child(void* self, bool (*callback)()) {
    KTimeComboBox_OnFocusPreviousChild((KTimeComboBox*)self, (intptr_t)callback);
}

QObject* k_timecombobox_sender(void* self) {
    return KTimeComboBox_Sender((KTimeComboBox*)self);
}

QObject* k_timecombobox_super_sender(void* self) {
    return KTimeComboBox_SuperSender((KTimeComboBox*)self);
}

void k_timecombobox_on_sender(void* self, QObject* (*callback)()) {
    KTimeComboBox_OnSender((KTimeComboBox*)self, (intptr_t)callback);
}

int32_t k_timecombobox_sender_signal_index(void* self) {
    return KTimeComboBox_SenderSignalIndex((KTimeComboBox*)self);
}

int32_t k_timecombobox_super_sender_signal_index(void* self) {
    return KTimeComboBox_SuperSenderSignalIndex((KTimeComboBox*)self);
}

void k_timecombobox_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KTimeComboBox_OnSenderSignalIndex((KTimeComboBox*)self, (intptr_t)callback);
}

int32_t k_timecombobox_receivers(void* self, const char* signal) {
    return KTimeComboBox_Receivers((KTimeComboBox*)self, signal);
}

int32_t k_timecombobox_super_receivers(void* self, const char* signal) {
    return KTimeComboBox_SuperReceivers((KTimeComboBox*)self, signal);
}

void k_timecombobox_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KTimeComboBox_OnReceivers((KTimeComboBox*)self, (intptr_t)callback);
}

bool k_timecombobox_is_signal_connected(void* self, void* signal) {
    return KTimeComboBox_IsSignalConnected((KTimeComboBox*)self, (QMetaMethod*)signal);
}

bool k_timecombobox_super_is_signal_connected(void* self, void* signal) {
    return KTimeComboBox_SuperIsSignalConnected((KTimeComboBox*)self, (QMetaMethod*)signal);
}

void k_timecombobox_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KTimeComboBox_OnIsSignalConnected((KTimeComboBox*)self, (intptr_t)callback);
}

double k_timecombobox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KTimeComboBox_GetDecodedMetricF((KTimeComboBox*)self, metricA, metricB);
}

double k_timecombobox_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KTimeComboBox_SuperGetDecodedMetricF((KTimeComboBox*)self, metricA, metricB);
}

void k_timecombobox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KTimeComboBox_OnGetDecodedMetricF((KTimeComboBox*)self, (intptr_t)callback);
}

void k_timecombobox_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_timecombobox_delete(void* self) {
    KTimeComboBox_Delete((KTimeComboBox*)(self));
}
