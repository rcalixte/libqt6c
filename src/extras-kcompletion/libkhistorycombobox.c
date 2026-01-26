#include "libkcombobox.hpp"
#include "libkcompletion.hpp"
#include "libkcompletionbase.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcombobox.hpp"
#include "../libqkeysequence.hpp"
#include "../libqlineedit.hpp"
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
#include "libkhistorycombobox.hpp"
#include "libkhistorycombobox.h"

KHistoryComboBox* k_historycombobox_new(void* parent) {
    return KHistoryComboBox_new((QWidget*)parent);
}

KHistoryComboBox* k_historycombobox_new2() {
    return KHistoryComboBox_new2();
}

KHistoryComboBox* k_historycombobox_new3(bool useCompletion) {
    return KHistoryComboBox_new3(useCompletion);
}

KHistoryComboBox* k_historycombobox_new4(bool useCompletion, void* parent) {
    return KHistoryComboBox_new4(useCompletion, (QWidget*)parent);
}

const QMetaObject* k_historycombobox_meta_object(void* self) {
    return KHistoryComboBox_MetaObject((KHistoryComboBox*)self);
}

void k_historycombobox_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KHistoryComboBox_OnMetaObject((KHistoryComboBox*)self, (intptr_t)callback);
}

const QMetaObject* k_historycombobox_qbase_meta_object(void* self) {
    return KHistoryComboBox_QBaseMetaObject((KHistoryComboBox*)self);
}

void* k_historycombobox_metacast(void* self, const char* param1) {
    return KHistoryComboBox_Metacast((KHistoryComboBox*)self, param1);
}

void k_historycombobox_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KHistoryComboBox_OnMetacast((KHistoryComboBox*)self, (intptr_t)callback);
}

void* k_historycombobox_qbase_metacast(void* self, const char* param1) {
    return KHistoryComboBox_QBaseMetacast((KHistoryComboBox*)self, param1);
}

int32_t k_historycombobox_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KHistoryComboBox_Metacall((KHistoryComboBox*)self, param1, param2, param3);
}

void k_historycombobox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KHistoryComboBox_OnMetacall((KHistoryComboBox*)self, (intptr_t)callback);
}

int32_t k_historycombobox_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KHistoryComboBox_QBaseMetacall((KHistoryComboBox*)self, param1, param2, param3);
}

const char* k_historycombobox_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_historycombobox_set_history_items(void* self, const char* items[static 1]) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_historycombobox_set_history_items\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KHistoryComboBox_SetHistoryItems((KHistoryComboBox*)self, items_list);
    free(items_qstr);
}

void k_historycombobox_set_history_items2(void* self, const char* items[static 1], bool setCompletionList) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_historycombobox_set_history_items2\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KHistoryComboBox_SetHistoryItems2((KHistoryComboBox*)self, items_list, setCompletionList);
    free(items_qstr);
}

const char** k_historycombobox_history_items(void* self) {
    libqt_list _arr = KHistoryComboBox_HistoryItems((KHistoryComboBox*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_historycombobox_history_items\n");
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

bool k_historycombobox_remove_from_history(void* self, const char* item) {
    return KHistoryComboBox_RemoveFromHistory((KHistoryComboBox*)self, qstring(item));
}

void k_historycombobox_add_to_history(void* self, const char* item) {
    KHistoryComboBox_AddToHistory((KHistoryComboBox*)self, qstring(item));
}

void k_historycombobox_clear_history(void* self) {
    KHistoryComboBox_ClearHistory((KHistoryComboBox*)self);
}

void k_historycombobox_reset(void* self) {
    KHistoryComboBox_Reset((KHistoryComboBox*)self);
}

void k_historycombobox_cleared(void* self) {
    KHistoryComboBox_Cleared((KHistoryComboBox*)self);
}

void k_historycombobox_on_cleared(void* self, void (*callback)(void*)) {
    KHistoryComboBox_Connect_Cleared((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_key_press_event(void* self, void* param1) {
    KHistoryComboBox_KeyPressEvent((KHistoryComboBox*)self, (QKeyEvent*)param1);
}

void k_historycombobox_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnKeyPressEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_qbase_key_press_event(void* self, void* param1) {
    KHistoryComboBox_QBaseKeyPressEvent((KHistoryComboBox*)self, (QKeyEvent*)param1);
}

void k_historycombobox_wheel_event(void* self, void* ev) {
    KHistoryComboBox_WheelEvent((KHistoryComboBox*)self, (QWheelEvent*)ev);
}

void k_historycombobox_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnWheelEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_qbase_wheel_event(void* self, void* ev) {
    KHistoryComboBox_QBaseWheelEvent((KHistoryComboBox*)self, (QWheelEvent*)ev);
}

void k_historycombobox_insert_items(void* self, const char* items[static 1]) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_historycombobox_insert_items\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KHistoryComboBox_InsertItems((KHistoryComboBox*)self, items_list);
    free(items_qstr);
}

void k_historycombobox_on_insert_items(void* self, void (*callback)(void*, const char**)) {
    KHistoryComboBox_OnInsertItems((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_qbase_insert_items(void* self, const char* items[static 1]) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_historycombobox_insert_items\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KHistoryComboBox_QBaseInsertItems((KHistoryComboBox*)self, items_list);
}

bool k_historycombobox_use_completion(void* self) {
    return KHistoryComboBox_UseCompletion((KHistoryComboBox*)self);
}

void k_historycombobox_on_use_completion(void* self, bool (*callback)()) {
    KHistoryComboBox_OnUseCompletion((KHistoryComboBox*)self, (intptr_t)callback);
}

bool k_historycombobox_qbase_use_completion(void* self) {
    return KHistoryComboBox_QBaseUseCompletion((KHistoryComboBox*)self);
}

const char* k_historycombobox_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_historycombobox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_historycombobox_set_edit_url(void* self, void* url) {
    KComboBox_SetEditUrl((KComboBox*)self, (QUrl*)url);
}

void k_historycombobox_add_url(void* self, void* url) {
    KComboBox_AddUrl((KComboBox*)self, (QUrl*)url);
}

void k_historycombobox_add_url2(void* self, void* icon, void* url) {
    KComboBox_AddUrl2((KComboBox*)self, (QIcon*)icon, (QUrl*)url);
}

void k_historycombobox_insert_url(void* self, int index, void* url) {
    KComboBox_InsertUrl((KComboBox*)self, index, (QUrl*)url);
}

void k_historycombobox_insert_url2(void* self, int index, void* icon, void* url) {
    KComboBox_InsertUrl2((KComboBox*)self, index, (QIcon*)icon, (QUrl*)url);
}

void k_historycombobox_change_url(void* self, int index, void* url) {
    KComboBox_ChangeUrl((KComboBox*)self, index, (QUrl*)url);
}

void k_historycombobox_change_url2(void* self, int index, void* icon, void* url) {
    KComboBox_ChangeUrl2((KComboBox*)self, index, (QIcon*)icon, (QUrl*)url);
}

int32_t k_historycombobox_cursor_position(void* self) {
    return KComboBox_CursorPosition((KComboBox*)self);
}

bool k_historycombobox_auto_completion(void* self) {
    return KComboBox_AutoCompletion((KComboBox*)self);
}

bool k_historycombobox_url_drops_enabled(void* self) {
    return KComboBox_UrlDropsEnabled((KComboBox*)self);
}

bool k_historycombobox_contains(void* self, const char* text) {
    return KComboBox_Contains((KComboBox*)self, qstring(text));
}

void k_historycombobox_set_trap_return_key(void* self, bool trap) {
    KComboBox_SetTrapReturnKey((KComboBox*)self, trap);
}

bool k_historycombobox_trap_return_key(void* self) {
    return KComboBox_TrapReturnKey((KComboBox*)self);
}

KCompletionBox* k_historycombobox_completion_box(void* self) {
    return KComboBox_CompletionBox((KComboBox*)self);
}

void k_historycombobox_set_editable(void* self, bool editable) {
    KComboBox_SetEditable((KComboBox*)self, editable);
}

QMenu* k_historycombobox_context_menu(void* self) {
    return KComboBox_ContextMenu((KComboBox*)self);
}

void k_historycombobox_return_pressed(void* self, const char* text) {
    KComboBox_ReturnPressed((KComboBox*)self, qstring(text));
}

void k_historycombobox_on_return_pressed(void* self, void (*callback)(void*, const char*)) {
    KComboBox_Connect_ReturnPressed((KComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_completion(void* self, const char* param1) {
    KComboBox_Completion((KComboBox*)self, qstring(param1));
}

void k_historycombobox_on_completion(void* self, void (*callback)(void*, const char*)) {
    KComboBox_Connect_Completion((KComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_substring_completion(void* self, const char* param1) {
    KComboBox_SubstringCompletion((KComboBox*)self, qstring(param1));
}

void k_historycombobox_on_substring_completion(void* self, void (*callback)(void*, const char*)) {
    KComboBox_Connect_SubstringCompletion((KComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_text_rotation(void* self, int32_t param1) {
    KComboBox_TextRotation((KComboBox*)self, param1);
}

void k_historycombobox_on_text_rotation(void* self, void (*callback)(void*, int32_t)) {
    KComboBox_Connect_TextRotation((KComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_completion_mode_changed(void* self, int32_t param1) {
    KComboBox_CompletionModeChanged((KComboBox*)self, param1);
}

void k_historycombobox_on_completion_mode_changed(void* self, void (*callback)(void*, int32_t)) {
    KComboBox_Connect_CompletionModeChanged((KComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_about_to_show_context_menu(void* self, void* contextMenu) {
    KComboBox_AboutToShowContextMenu((KComboBox*)self, (QMenu*)contextMenu);
}

void k_historycombobox_on_about_to_show_context_menu(void* self, void (*callback)(void*, void*)) {
    KComboBox_Connect_AboutToShowContextMenu((KComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_rotate_text(void* self, int32_t type) {
    KComboBox_RotateText((KComboBox*)self, type);
}

void k_historycombobox_set_current_item(void* self, const char* item) {
    KComboBox_SetCurrentItem((KComboBox*)self, qstring(item));
}

KCompletionBox* k_historycombobox_completion_box1(void* self, bool create) {
    return KComboBox_CompletionBox1((KComboBox*)self, create);
}

void k_historycombobox_set_current_item2(void* self, const char* item, bool insert) {
    KComboBox_SetCurrentItem2((KComboBox*)self, qstring(item), insert);
}

void k_historycombobox_set_current_item3(void* self, const char* item, bool insert, int index) {
    KComboBox_SetCurrentItem3((KComboBox*)self, qstring(item), insert, index);
}

int32_t k_historycombobox_max_visible_items(void* self) {
    return QComboBox_MaxVisibleItems((QComboBox*)self);
}

void k_historycombobox_set_max_visible_items(void* self, int maxItems) {
    QComboBox_SetMaxVisibleItems((QComboBox*)self, maxItems);
}

int32_t k_historycombobox_count(void* self) {
    return QComboBox_Count((QComboBox*)self);
}

void k_historycombobox_set_max_count(void* self, int max) {
    QComboBox_SetMaxCount((QComboBox*)self, max);
}

int32_t k_historycombobox_max_count(void* self) {
    return QComboBox_MaxCount((QComboBox*)self);
}

bool k_historycombobox_duplicates_enabled(void* self) {
    return QComboBox_DuplicatesEnabled((QComboBox*)self);
}

void k_historycombobox_set_duplicates_enabled(void* self, bool enable) {
    QComboBox_SetDuplicatesEnabled((QComboBox*)self, enable);
}

void k_historycombobox_set_frame(void* self, bool frame) {
    QComboBox_SetFrame((QComboBox*)self, frame);
}

bool k_historycombobox_has_frame(void* self) {
    return QComboBox_HasFrame((QComboBox*)self);
}

int32_t k_historycombobox_find_text(void* self, const char* text) {
    return QComboBox_FindText((QComboBox*)self, qstring(text));
}

int32_t k_historycombobox_find_data(void* self, void* data) {
    return QComboBox_FindData((QComboBox*)self, (QVariant*)data);
}

int32_t k_historycombobox_insert_policy(void* self) {
    return QComboBox_InsertPolicy((QComboBox*)self);
}

void k_historycombobox_set_insert_policy(void* self, int32_t policy) {
    QComboBox_SetInsertPolicy((QComboBox*)self, policy);
}

int32_t k_historycombobox_size_adjust_policy(void* self) {
    return QComboBox_SizeAdjustPolicy((QComboBox*)self);
}

void k_historycombobox_set_size_adjust_policy(void* self, int32_t policy) {
    QComboBox_SetSizeAdjustPolicy((QComboBox*)self, policy);
}

int32_t k_historycombobox_minimum_contents_length(void* self) {
    return QComboBox_MinimumContentsLength((QComboBox*)self);
}

void k_historycombobox_set_minimum_contents_length(void* self, int characters) {
    QComboBox_SetMinimumContentsLength((QComboBox*)self, characters);
}

QSize* k_historycombobox_icon_size(void* self) {
    return QComboBox_IconSize((QComboBox*)self);
}

void k_historycombobox_set_icon_size(void* self, void* size) {
    QComboBox_SetIconSize((QComboBox*)self, (QSize*)size);
}

void k_historycombobox_set_placeholder_text(void* self, const char* placeholderText) {
    QComboBox_SetPlaceholderText((QComboBox*)self, qstring(placeholderText));
}

const char* k_historycombobox_placeholder_text(void* self) {
    libqt_string _str = QComboBox_PlaceholderText((QComboBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_historycombobox_is_editable(void* self) {
    return QComboBox_IsEditable((QComboBox*)self);
}

QLineEdit* k_historycombobox_line_edit(void* self) {
    return QComboBox_LineEdit((QComboBox*)self);
}

void k_historycombobox_set_validator(void* self, void* v) {
    QComboBox_SetValidator((QComboBox*)self, (QValidator*)v);
}

const QValidator* k_historycombobox_validator(void* self) {
    return QComboBox_Validator((QComboBox*)self);
}

void k_historycombobox_set_completer(void* self, void* c) {
    QComboBox_SetCompleter((QComboBox*)self, (QCompleter*)c);
}

QCompleter* k_historycombobox_completer(void* self) {
    return QComboBox_Completer((QComboBox*)self);
}

QAbstractItemDelegate* k_historycombobox_item_delegate(void* self) {
    return QComboBox_ItemDelegate((QComboBox*)self);
}

void k_historycombobox_set_item_delegate(void* self, void* delegate) {
    QComboBox_SetItemDelegate((QComboBox*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemModel* k_historycombobox_model(void* self) {
    return QComboBox_Model((QComboBox*)self);
}

QModelIndex* k_historycombobox_root_model_index(void* self) {
    return QComboBox_RootModelIndex((QComboBox*)self);
}

void k_historycombobox_set_root_model_index(void* self, void* index) {
    QComboBox_SetRootModelIndex((QComboBox*)self, (QModelIndex*)index);
}

int32_t k_historycombobox_model_column(void* self) {
    return QComboBox_ModelColumn((QComboBox*)self);
}

void k_historycombobox_set_model_column(void* self, int visibleColumn) {
    QComboBox_SetModelColumn((QComboBox*)self, visibleColumn);
}

int32_t k_historycombobox_current_index(void* self) {
    return QComboBox_CurrentIndex((QComboBox*)self);
}

const char* k_historycombobox_current_text(void* self) {
    libqt_string _str = QComboBox_CurrentText((QComboBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* k_historycombobox_current_data(void* self) {
    return QComboBox_CurrentData((QComboBox*)self);
}

const char* k_historycombobox_item_text(void* self, int index) {
    libqt_string _str = QComboBox_ItemText((QComboBox*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIcon* k_historycombobox_item_icon(void* self, int index) {
    return QComboBox_ItemIcon((QComboBox*)self, index);
}

QVariant* k_historycombobox_item_data(void* self, int index) {
    return QComboBox_ItemData((QComboBox*)self, index);
}

void k_historycombobox_add_item(void* self, const char* text) {
    QComboBox_AddItem((QComboBox*)self, qstring(text));
}

void k_historycombobox_add_item2(void* self, void* icon, const char* text) {
    QComboBox_AddItem2((QComboBox*)self, (QIcon*)icon, qstring(text));
}

void k_historycombobox_add_items(void* self, const char* texts[static 1]) {
    size_t texts_len = libqt_strv_length(texts);
    libqt_string* texts_qstr = (libqt_string*)malloc(texts_len * sizeof(libqt_string));
    if (texts_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_historycombobox_add_items\n");
        abort();
    }
    for (size_t i = 0; i < texts_len; ++i) {
        texts_qstr[i] = qstring(texts[i]);
    }
    libqt_list texts_list = qlist(texts_qstr, texts_len);
    QComboBox_AddItems((QComboBox*)self, texts_list);
    free(texts_qstr);
}

void k_historycombobox_insert_item(void* self, int index, const char* text) {
    QComboBox_InsertItem((QComboBox*)self, index, qstring(text));
}

void k_historycombobox_insert_item2(void* self, int index, void* icon, const char* text) {
    QComboBox_InsertItem2((QComboBox*)self, index, (QIcon*)icon, qstring(text));
}

void k_historycombobox_insert_separator(void* self, int index) {
    QComboBox_InsertSeparator((QComboBox*)self, index);
}

void k_historycombobox_remove_item(void* self, int index) {
    QComboBox_RemoveItem((QComboBox*)self, index);
}

void k_historycombobox_set_item_text(void* self, int index, const char* text) {
    QComboBox_SetItemText((QComboBox*)self, index, qstring(text));
}

void k_historycombobox_set_item_icon(void* self, int index, void* icon) {
    QComboBox_SetItemIcon((QComboBox*)self, index, (QIcon*)icon);
}

void k_historycombobox_set_item_data(void* self, int index, void* value) {
    QComboBox_SetItemData((QComboBox*)self, index, (QVariant*)value);
}

QAbstractItemView* k_historycombobox_view(void* self) {
    return QComboBox_View((QComboBox*)self);
}

void k_historycombobox_set_view(void* self, void* itemView) {
    QComboBox_SetView((QComboBox*)self, (QAbstractItemView*)itemView);
}

QVariant* k_historycombobox_input_method_query2(void* self, int32_t query, void* argument) {
    return QComboBox_InputMethodQuery2((QComboBox*)self, query, (QVariant*)argument);
}

void k_historycombobox_clear(void* self) {
    QComboBox_Clear((QComboBox*)self);
}

void k_historycombobox_clear_edit_text(void* self) {
    QComboBox_ClearEditText((QComboBox*)self);
}

void k_historycombobox_set_edit_text(void* self, const char* text) {
    QComboBox_SetEditText((QComboBox*)self, qstring(text));
}

void k_historycombobox_set_current_index(void* self, int index) {
    QComboBox_SetCurrentIndex((QComboBox*)self, index);
}

void k_historycombobox_set_current_text(void* self, const char* text) {
    QComboBox_SetCurrentText((QComboBox*)self, qstring(text));
}

void k_historycombobox_edit_text_changed(void* self, const char* param1) {
    QComboBox_EditTextChanged((QComboBox*)self, qstring(param1));
}

void k_historycombobox_on_edit_text_changed(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_EditTextChanged((QComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_activated(void* self, int index) {
    QComboBox_Activated((QComboBox*)self, index);
}

void k_historycombobox_on_activated(void* self, void (*callback)(void*, int)) {
    QComboBox_Connect_Activated((QComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_text_activated(void* self, const char* param1) {
    QComboBox_TextActivated((QComboBox*)self, qstring(param1));
}

void k_historycombobox_on_text_activated(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_TextActivated((QComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_highlighted(void* self, int index) {
    QComboBox_Highlighted((QComboBox*)self, index);
}

void k_historycombobox_on_highlighted(void* self, void (*callback)(void*, int)) {
    QComboBox_Connect_Highlighted((QComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_text_highlighted(void* self, const char* param1) {
    QComboBox_TextHighlighted((QComboBox*)self, qstring(param1));
}

void k_historycombobox_on_text_highlighted(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_TextHighlighted((QComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_current_index_changed(void* self, int index) {
    QComboBox_CurrentIndexChanged((QComboBox*)self, index);
}

void k_historycombobox_on_current_index_changed(void* self, void (*callback)(void*, int)) {
    QComboBox_Connect_CurrentIndexChanged((QComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_current_text_changed(void* self, const char* param1) {
    QComboBox_CurrentTextChanged((QComboBox*)self, qstring(param1));
}

void k_historycombobox_on_current_text_changed(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_CurrentTextChanged((QComboBox*)self, (intptr_t)callback);
}

int32_t k_historycombobox_find_text2(void* self, const char* text, int32_t flags) {
    return QComboBox_FindText2((QComboBox*)self, qstring(text), flags);
}

int32_t k_historycombobox_find_data2(void* self, void* data, int role) {
    return QComboBox_FindData2((QComboBox*)self, (QVariant*)data, role);
}

int32_t k_historycombobox_find_data3(void* self, void* data, int role, int32_t flags) {
    return QComboBox_FindData3((QComboBox*)self, (QVariant*)data, role, flags);
}

QVariant* k_historycombobox_current_data1(void* self, int role) {
    return QComboBox_CurrentData1((QComboBox*)self, role);
}

QVariant* k_historycombobox_item_data2(void* self, int index, int role) {
    return QComboBox_ItemData2((QComboBox*)self, index, role);
}

void k_historycombobox_add_item22(void* self, const char* text, void* userData) {
    QComboBox_AddItem22((QComboBox*)self, qstring(text), (QVariant*)userData);
}

void k_historycombobox_add_item3(void* self, void* icon, const char* text, void* userData) {
    QComboBox_AddItem3((QComboBox*)self, (QIcon*)icon, qstring(text), (QVariant*)userData);
}

void k_historycombobox_insert_item3(void* self, int index, const char* text, void* userData) {
    QComboBox_InsertItem3((QComboBox*)self, index, qstring(text), (QVariant*)userData);
}

void k_historycombobox_insert_item4(void* self, int index, void* icon, const char* text, void* userData) {
    QComboBox_InsertItem4((QComboBox*)self, index, (QIcon*)icon, qstring(text), (QVariant*)userData);
}

void k_historycombobox_set_item_data3(void* self, int index, void* value, int role) {
    QComboBox_SetItemData3((QComboBox*)self, index, (QVariant*)value, role);
}

uintptr_t k_historycombobox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_historycombobox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_historycombobox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_historycombobox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_historycombobox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_historycombobox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_historycombobox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_historycombobox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_historycombobox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_historycombobox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_historycombobox_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_historycombobox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_historycombobox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_historycombobox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_historycombobox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_historycombobox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_historycombobox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_historycombobox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_historycombobox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_historycombobox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_historycombobox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_historycombobox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_historycombobox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_historycombobox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_historycombobox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_historycombobox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_historycombobox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_historycombobox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_historycombobox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_historycombobox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_historycombobox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_historycombobox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_historycombobox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_historycombobox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_historycombobox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_historycombobox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_historycombobox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_historycombobox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_historycombobox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_historycombobox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_historycombobox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_historycombobox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_historycombobox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_historycombobox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_historycombobox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_historycombobox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_historycombobox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_historycombobox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_historycombobox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_historycombobox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_historycombobox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_historycombobox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_historycombobox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_historycombobox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_historycombobox_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_historycombobox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_historycombobox_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_historycombobox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_historycombobox_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_historycombobox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_historycombobox_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_historycombobox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_historycombobox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_historycombobox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_historycombobox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_historycombobox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_historycombobox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_historycombobox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_historycombobox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_historycombobox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_historycombobox_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_historycombobox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_historycombobox_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_historycombobox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_historycombobox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_historycombobox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_historycombobox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_historycombobox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_historycombobox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_historycombobox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_historycombobox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_historycombobox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_historycombobox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_historycombobox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_historycombobox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_historycombobox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_historycombobox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_historycombobox_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_historycombobox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_historycombobox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_historycombobox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_historycombobox_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_historycombobox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_historycombobox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_historycombobox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_historycombobox_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_historycombobox_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_historycombobox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_historycombobox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_historycombobox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_historycombobox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_historycombobox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_historycombobox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_historycombobox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_historycombobox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_historycombobox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_historycombobox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_historycombobox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_historycombobox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_historycombobox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_historycombobox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_historycombobox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_historycombobox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_historycombobox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_historycombobox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_historycombobox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_historycombobox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_historycombobox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_historycombobox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_historycombobox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_historycombobox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_historycombobox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_historycombobox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_historycombobox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_historycombobox_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_historycombobox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_historycombobox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_historycombobox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_historycombobox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_historycombobox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_historycombobox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_historycombobox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_historycombobox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_historycombobox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_historycombobox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_historycombobox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_historycombobox_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_historycombobox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_historycombobox_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_historycombobox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_historycombobox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_historycombobox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_historycombobox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_historycombobox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_historycombobox_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_historycombobox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_historycombobox_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_historycombobox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_historycombobox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_historycombobox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_historycombobox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_historycombobox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_historycombobox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_historycombobox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_historycombobox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_historycombobox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_historycombobox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_historycombobox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_historycombobox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_historycombobox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_historycombobox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_historycombobox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_historycombobox_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_historycombobox_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_historycombobox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_historycombobox_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_historycombobox_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_historycombobox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_historycombobox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_historycombobox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_historycombobox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_historycombobox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_historycombobox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_historycombobox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_historycombobox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_historycombobox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_historycombobox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_historycombobox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_historycombobox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_historycombobox_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_historycombobox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_historycombobox_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_historycombobox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_historycombobox_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_historycombobox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_historycombobox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_historycombobox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_historycombobox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_historycombobox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_historycombobox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_historycombobox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_historycombobox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_historycombobox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_historycombobox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_historycombobox_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_historycombobox_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_historycombobox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_historycombobox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_historycombobox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_historycombobox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_historycombobox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_historycombobox_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_historycombobox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_historycombobox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_historycombobox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_historycombobox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_historycombobox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_historycombobox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_historycombobox_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_historycombobox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_historycombobox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_historycombobox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_historycombobox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_historycombobox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_historycombobox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_historycombobox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_historycombobox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_historycombobox_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_historycombobox_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_historycombobox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_historycombobox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_historycombobox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_historycombobox_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_historycombobox_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_historycombobox_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_historycombobox_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_historycombobox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_historycombobox_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_historycombobox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_historycombobox_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_historycombobox_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_historycombobox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_historycombobox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_historycombobox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_historycombobox_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_historycombobox_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_historycombobox_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_historycombobox_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_historycombobox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_historycombobox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_historycombobox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_historycombobox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_historycombobox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_historycombobox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_historycombobox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_historycombobox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_historycombobox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_historycombobox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_historycombobox_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_historycombobox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_historycombobox_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_historycombobox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_historycombobox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_historycombobox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_historycombobox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_historycombobox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_historycombobox_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_historycombobox_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_historycombobox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_historycombobox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_historycombobox_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_historycombobox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_historycombobox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_historycombobox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_historycombobox_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_historycombobox_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_historycombobox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_historycombobox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_historycombobox_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_historycombobox_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_historycombobox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_historycombobox_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_historycombobox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_historycombobox_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_historycombobox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_historycombobox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_historycombobox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_historycombobox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_historycombobox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_historycombobox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_historycombobox_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_historycombobox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_historycombobox_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_historycombobox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_historycombobox_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_historycombobox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_historycombobox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_historycombobox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_historycombobox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_historycombobox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_historycombobox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_historycombobox_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_historycombobox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_historycombobox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_historycombobox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_historycombobox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_historycombobox_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_historycombobox_dynamic_property_names\n");
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

QBindingStorage* k_historycombobox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_historycombobox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_historycombobox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_historycombobox_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_historycombobox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_historycombobox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_historycombobox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_historycombobox_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_historycombobox_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_historycombobox_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_historycombobox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_historycombobox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_historycombobox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_historycombobox_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_historycombobox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_historycombobox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_historycombobox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_historycombobox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_historycombobox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_historycombobox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_historycombobox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_historycombobox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_historycombobox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_historycombobox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_historycombobox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_historycombobox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_historycombobox_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

KCompletion* k_historycombobox_completion_object(void* self) {
    return KCompletionBase_CompletionObject((KCompletionBase*)self);
}

bool k_historycombobox_is_completion_object_auto_deleted(void* self) {
    return KCompletionBase_IsCompletionObjectAutoDeleted((KCompletionBase*)self);
}

void k_historycombobox_set_auto_delete_completion_object(void* self, bool autoDelete) {
    KCompletionBase_SetAutoDeleteCompletionObject((KCompletionBase*)self, autoDelete);
}

void k_historycombobox_set_enable_signals(void* self, bool enable) {
    KCompletionBase_SetEnableSignals((KCompletionBase*)self, enable);
}

bool k_historycombobox_handle_signals(void* self) {
    return KCompletionBase_HandleSignals((KCompletionBase*)self);
}

bool k_historycombobox_emit_signals(void* self) {
    return KCompletionBase_EmitSignals((KCompletionBase*)self);
}

void k_historycombobox_set_emit_signals(void* self, bool emitRotationSignals) {
    KCompletionBase_SetEmitSignals((KCompletionBase*)self, emitRotationSignals);
}

int32_t k_historycombobox_completion_mode(void* self) {
    return KCompletionBase_CompletionMode((KCompletionBase*)self);
}

bool k_historycombobox_set_key_binding(void* self, int32_t item, libqt_list /* of QKeySequence* */ key) {
    return KCompletionBase_SetKeyBinding((KCompletionBase*)self, item, key);
}

libqt_list /* of QKeySequence* */ k_historycombobox_key_binding(void* self, int32_t item) {
    libqt_list _arr = KCompletionBase_KeyBinding((KCompletionBase*)self, item);
    return _arr;
}

void k_historycombobox_use_global_key_bindings(void* self) {
    KCompletionBase_UseGlobalKeyBindings((KCompletionBase*)self);
}

KCompletion* k_historycombobox_comp_obj(void* self) {
    return KCompletionBase_CompObj((KCompletionBase*)self);
}

KCompletion* k_historycombobox_completion_object1(void* self, bool handleSignals) {
    return KCompletionBase_CompletionObject1((KCompletionBase*)self, handleSignals);
}

void k_historycombobox_set_auto_completion(void* self, bool autocomplete) {
    KHistoryComboBox_SetAutoCompletion((KHistoryComboBox*)self, autocomplete);
}

void k_historycombobox_qbase_set_auto_completion(void* self, bool autocomplete) {
    KHistoryComboBox_QBaseSetAutoCompletion((KHistoryComboBox*)self, autocomplete);
}

void k_historycombobox_on_set_auto_completion(void* self, void (*callback)(void*, bool)) {
    KHistoryComboBox_OnSetAutoCompletion((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_set_line_edit(void* self, void* lineEdit) {
    KHistoryComboBox_SetLineEdit((KHistoryComboBox*)self, (QLineEdit*)lineEdit);
}

void k_historycombobox_qbase_set_line_edit(void* self, void* lineEdit) {
    KHistoryComboBox_QBaseSetLineEdit((KHistoryComboBox*)self, (QLineEdit*)lineEdit);
}

void k_historycombobox_on_set_line_edit(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnSetLineEdit((KHistoryComboBox*)self, (intptr_t)callback);
}

QSize* k_historycombobox_minimum_size_hint(void* self) {
    return KHistoryComboBox_MinimumSizeHint((KHistoryComboBox*)self);
}

QSize* k_historycombobox_qbase_minimum_size_hint(void* self) {
    return KHistoryComboBox_QBaseMinimumSizeHint((KHistoryComboBox*)self);
}

void k_historycombobox_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KHistoryComboBox_OnMinimumSizeHint((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_set_completed_text(void* self, const char* completedText) {
    KHistoryComboBox_SetCompletedText((KHistoryComboBox*)self, qstring(completedText));
}

void k_historycombobox_qbase_set_completed_text(void* self, const char* completedText) {
    KHistoryComboBox_QBaseSetCompletedText((KHistoryComboBox*)self, qstring(completedText));
}

void k_historycombobox_on_set_completed_text(void* self, void (*callback)(void*, const char*)) {
    KHistoryComboBox_OnSetCompletedText((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_set_completed_items(void* self, const char* items[static 1], bool autoSuggest) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_historycombobox_set_completed_items\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KHistoryComboBox_SetCompletedItems((KHistoryComboBox*)self, items_list, autoSuggest);
    free(items_qstr);
}

void k_historycombobox_qbase_set_completed_items(void* self, const char* items[static 1], bool autoSuggest) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_historycombobox_set_completed_items\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KHistoryComboBox_QBaseSetCompletedItems((KHistoryComboBox*)self, items_list, autoSuggest);
    free(items_qstr);
}

void k_historycombobox_on_set_completed_items(void* self, void (*callback)(void*, const char**, bool)) {
    KHistoryComboBox_OnSetCompletedItems((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_make_completion(void* self, const char* param1) {
    KHistoryComboBox_MakeCompletion((KHistoryComboBox*)self, qstring(param1));
}

void k_historycombobox_qbase_make_completion(void* self, const char* param1) {
    KHistoryComboBox_QBaseMakeCompletion((KHistoryComboBox*)self, qstring(param1));
}

void k_historycombobox_on_make_completion(void* self, void (*callback)(void*, const char*)) {
    KHistoryComboBox_OnMakeCompletion((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_set_model(void* self, void* model) {
    KHistoryComboBox_SetModel((KHistoryComboBox*)self, (QAbstractItemModel*)model);
}

void k_historycombobox_qbase_set_model(void* self, void* model) {
    KHistoryComboBox_QBaseSetModel((KHistoryComboBox*)self, (QAbstractItemModel*)model);
}

void k_historycombobox_on_set_model(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnSetModel((KHistoryComboBox*)self, (intptr_t)callback);
}

QSize* k_historycombobox_size_hint(void* self) {
    return KHistoryComboBox_SizeHint((KHistoryComboBox*)self);
}

QSize* k_historycombobox_qbase_size_hint(void* self) {
    return KHistoryComboBox_QBaseSizeHint((KHistoryComboBox*)self);
}

void k_historycombobox_on_size_hint(void* self, QSize* (*callback)()) {
    KHistoryComboBox_OnSizeHint((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_show_popup(void* self) {
    KHistoryComboBox_ShowPopup((KHistoryComboBox*)self);
}

void k_historycombobox_qbase_show_popup(void* self) {
    KHistoryComboBox_QBaseShowPopup((KHistoryComboBox*)self);
}

void k_historycombobox_on_show_popup(void* self, void (*callback)()) {
    KHistoryComboBox_OnShowPopup((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_hide_popup(void* self) {
    KHistoryComboBox_HidePopup((KHistoryComboBox*)self);
}

void k_historycombobox_qbase_hide_popup(void* self) {
    KHistoryComboBox_QBaseHidePopup((KHistoryComboBox*)self);
}

void k_historycombobox_on_hide_popup(void* self, void (*callback)()) {
    KHistoryComboBox_OnHidePopup((KHistoryComboBox*)self, (intptr_t)callback);
}

bool k_historycombobox_event(void* self, void* event) {
    return KHistoryComboBox_Event((KHistoryComboBox*)self, (QEvent*)event);
}

bool k_historycombobox_qbase_event(void* self, void* event) {
    return KHistoryComboBox_QBaseEvent((KHistoryComboBox*)self, (QEvent*)event);
}

void k_historycombobox_on_event(void* self, bool (*callback)(void*, void*)) {
    KHistoryComboBox_OnEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

QVariant* k_historycombobox_input_method_query(void* self, int32_t param1) {
    return KHistoryComboBox_InputMethodQuery((KHistoryComboBox*)self, param1);
}

QVariant* k_historycombobox_qbase_input_method_query(void* self, int32_t param1) {
    return KHistoryComboBox_QBaseInputMethodQuery((KHistoryComboBox*)self, param1);
}

void k_historycombobox_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KHistoryComboBox_OnInputMethodQuery((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_focus_in_event(void* self, void* e) {
    KHistoryComboBox_FocusInEvent((KHistoryComboBox*)self, (QFocusEvent*)e);
}

void k_historycombobox_qbase_focus_in_event(void* self, void* e) {
    KHistoryComboBox_QBaseFocusInEvent((KHistoryComboBox*)self, (QFocusEvent*)e);
}

void k_historycombobox_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnFocusInEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_focus_out_event(void* self, void* e) {
    KHistoryComboBox_FocusOutEvent((KHistoryComboBox*)self, (QFocusEvent*)e);
}

void k_historycombobox_qbase_focus_out_event(void* self, void* e) {
    KHistoryComboBox_QBaseFocusOutEvent((KHistoryComboBox*)self, (QFocusEvent*)e);
}

void k_historycombobox_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnFocusOutEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_change_event(void* self, void* e) {
    KHistoryComboBox_ChangeEvent((KHistoryComboBox*)self, (QEvent*)e);
}

void k_historycombobox_qbase_change_event(void* self, void* e) {
    KHistoryComboBox_QBaseChangeEvent((KHistoryComboBox*)self, (QEvent*)e);
}

void k_historycombobox_on_change_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnChangeEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_resize_event(void* self, void* e) {
    KHistoryComboBox_ResizeEvent((KHistoryComboBox*)self, (QResizeEvent*)e);
}

void k_historycombobox_qbase_resize_event(void* self, void* e) {
    KHistoryComboBox_QBaseResizeEvent((KHistoryComboBox*)self, (QResizeEvent*)e);
}

void k_historycombobox_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnResizeEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_paint_event(void* self, void* e) {
    KHistoryComboBox_PaintEvent((KHistoryComboBox*)self, (QPaintEvent*)e);
}

void k_historycombobox_qbase_paint_event(void* self, void* e) {
    KHistoryComboBox_QBasePaintEvent((KHistoryComboBox*)self, (QPaintEvent*)e);
}

void k_historycombobox_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnPaintEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_show_event(void* self, void* e) {
    KHistoryComboBox_ShowEvent((KHistoryComboBox*)self, (QShowEvent*)e);
}

void k_historycombobox_qbase_show_event(void* self, void* e) {
    KHistoryComboBox_QBaseShowEvent((KHistoryComboBox*)self, (QShowEvent*)e);
}

void k_historycombobox_on_show_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnShowEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_hide_event(void* self, void* e) {
    KHistoryComboBox_HideEvent((KHistoryComboBox*)self, (QHideEvent*)e);
}

void k_historycombobox_qbase_hide_event(void* self, void* e) {
    KHistoryComboBox_QBaseHideEvent((KHistoryComboBox*)self, (QHideEvent*)e);
}

void k_historycombobox_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnHideEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_mouse_press_event(void* self, void* e) {
    KHistoryComboBox_MousePressEvent((KHistoryComboBox*)self, (QMouseEvent*)e);
}

void k_historycombobox_qbase_mouse_press_event(void* self, void* e) {
    KHistoryComboBox_QBaseMousePressEvent((KHistoryComboBox*)self, (QMouseEvent*)e);
}

void k_historycombobox_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnMousePressEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_mouse_release_event(void* self, void* e) {
    KHistoryComboBox_MouseReleaseEvent((KHistoryComboBox*)self, (QMouseEvent*)e);
}

void k_historycombobox_qbase_mouse_release_event(void* self, void* e) {
    KHistoryComboBox_QBaseMouseReleaseEvent((KHistoryComboBox*)self, (QMouseEvent*)e);
}

void k_historycombobox_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnMouseReleaseEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_key_release_event(void* self, void* e) {
    KHistoryComboBox_KeyReleaseEvent((KHistoryComboBox*)self, (QKeyEvent*)e);
}

void k_historycombobox_qbase_key_release_event(void* self, void* e) {
    KHistoryComboBox_QBaseKeyReleaseEvent((KHistoryComboBox*)self, (QKeyEvent*)e);
}

void k_historycombobox_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnKeyReleaseEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_context_menu_event(void* self, void* e) {
    KHistoryComboBox_ContextMenuEvent((KHistoryComboBox*)self, (QContextMenuEvent*)e);
}

void k_historycombobox_qbase_context_menu_event(void* self, void* e) {
    KHistoryComboBox_QBaseContextMenuEvent((KHistoryComboBox*)self, (QContextMenuEvent*)e);
}

void k_historycombobox_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnContextMenuEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_input_method_event(void* self, void* param1) {
    KHistoryComboBox_InputMethodEvent((KHistoryComboBox*)self, (QInputMethodEvent*)param1);
}

void k_historycombobox_qbase_input_method_event(void* self, void* param1) {
    KHistoryComboBox_QBaseInputMethodEvent((KHistoryComboBox*)self, (QInputMethodEvent*)param1);
}

void k_historycombobox_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnInputMethodEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_init_style_option(void* self, void* option) {
    KHistoryComboBox_InitStyleOption((KHistoryComboBox*)self, (QStyleOptionComboBox*)option);
}

void k_historycombobox_qbase_init_style_option(void* self, void* option) {
    KHistoryComboBox_QBaseInitStyleOption((KHistoryComboBox*)self, (QStyleOptionComboBox*)option);
}

void k_historycombobox_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnInitStyleOption((KHistoryComboBox*)self, (intptr_t)callback);
}

int32_t k_historycombobox_dev_type(void* self) {
    return KHistoryComboBox_DevType((KHistoryComboBox*)self);
}

int32_t k_historycombobox_qbase_dev_type(void* self) {
    return KHistoryComboBox_QBaseDevType((KHistoryComboBox*)self);
}

void k_historycombobox_on_dev_type(void* self, int32_t (*callback)()) {
    KHistoryComboBox_OnDevType((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_set_visible(void* self, bool visible) {
    KHistoryComboBox_SetVisible((KHistoryComboBox*)self, visible);
}

void k_historycombobox_qbase_set_visible(void* self, bool visible) {
    KHistoryComboBox_QBaseSetVisible((KHistoryComboBox*)self, visible);
}

void k_historycombobox_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KHistoryComboBox_OnSetVisible((KHistoryComboBox*)self, (intptr_t)callback);
}

int32_t k_historycombobox_height_for_width(void* self, int param1) {
    return KHistoryComboBox_HeightForWidth((KHistoryComboBox*)self, param1);
}

int32_t k_historycombobox_qbase_height_for_width(void* self, int param1) {
    return KHistoryComboBox_QBaseHeightForWidth((KHistoryComboBox*)self, param1);
}

void k_historycombobox_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KHistoryComboBox_OnHeightForWidth((KHistoryComboBox*)self, (intptr_t)callback);
}

bool k_historycombobox_has_height_for_width(void* self) {
    return KHistoryComboBox_HasHeightForWidth((KHistoryComboBox*)self);
}

bool k_historycombobox_qbase_has_height_for_width(void* self) {
    return KHistoryComboBox_QBaseHasHeightForWidth((KHistoryComboBox*)self);
}

void k_historycombobox_on_has_height_for_width(void* self, bool (*callback)()) {
    KHistoryComboBox_OnHasHeightForWidth((KHistoryComboBox*)self, (intptr_t)callback);
}

QPaintEngine* k_historycombobox_paint_engine(void* self) {
    return KHistoryComboBox_PaintEngine((KHistoryComboBox*)self);
}

QPaintEngine* k_historycombobox_qbase_paint_engine(void* self) {
    return KHistoryComboBox_QBasePaintEngine((KHistoryComboBox*)self);
}

void k_historycombobox_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KHistoryComboBox_OnPaintEngine((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_mouse_double_click_event(void* self, void* event) {
    KHistoryComboBox_MouseDoubleClickEvent((KHistoryComboBox*)self, (QMouseEvent*)event);
}

void k_historycombobox_qbase_mouse_double_click_event(void* self, void* event) {
    KHistoryComboBox_QBaseMouseDoubleClickEvent((KHistoryComboBox*)self, (QMouseEvent*)event);
}

void k_historycombobox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnMouseDoubleClickEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_mouse_move_event(void* self, void* event) {
    KHistoryComboBox_MouseMoveEvent((KHistoryComboBox*)self, (QMouseEvent*)event);
}

void k_historycombobox_qbase_mouse_move_event(void* self, void* event) {
    KHistoryComboBox_QBaseMouseMoveEvent((KHistoryComboBox*)self, (QMouseEvent*)event);
}

void k_historycombobox_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnMouseMoveEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_enter_event(void* self, void* event) {
    KHistoryComboBox_EnterEvent((KHistoryComboBox*)self, (QEnterEvent*)event);
}

void k_historycombobox_qbase_enter_event(void* self, void* event) {
    KHistoryComboBox_QBaseEnterEvent((KHistoryComboBox*)self, (QEnterEvent*)event);
}

void k_historycombobox_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnEnterEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_leave_event(void* self, void* event) {
    KHistoryComboBox_LeaveEvent((KHistoryComboBox*)self, (QEvent*)event);
}

void k_historycombobox_qbase_leave_event(void* self, void* event) {
    KHistoryComboBox_QBaseLeaveEvent((KHistoryComboBox*)self, (QEvent*)event);
}

void k_historycombobox_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnLeaveEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_move_event(void* self, void* event) {
    KHistoryComboBox_MoveEvent((KHistoryComboBox*)self, (QMoveEvent*)event);
}

void k_historycombobox_qbase_move_event(void* self, void* event) {
    KHistoryComboBox_QBaseMoveEvent((KHistoryComboBox*)self, (QMoveEvent*)event);
}

void k_historycombobox_on_move_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnMoveEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_close_event(void* self, void* event) {
    KHistoryComboBox_CloseEvent((KHistoryComboBox*)self, (QCloseEvent*)event);
}

void k_historycombobox_qbase_close_event(void* self, void* event) {
    KHistoryComboBox_QBaseCloseEvent((KHistoryComboBox*)self, (QCloseEvent*)event);
}

void k_historycombobox_on_close_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnCloseEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_tablet_event(void* self, void* event) {
    KHistoryComboBox_TabletEvent((KHistoryComboBox*)self, (QTabletEvent*)event);
}

void k_historycombobox_qbase_tablet_event(void* self, void* event) {
    KHistoryComboBox_QBaseTabletEvent((KHistoryComboBox*)self, (QTabletEvent*)event);
}

void k_historycombobox_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnTabletEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_action_event(void* self, void* event) {
    KHistoryComboBox_ActionEvent((KHistoryComboBox*)self, (QActionEvent*)event);
}

void k_historycombobox_qbase_action_event(void* self, void* event) {
    KHistoryComboBox_QBaseActionEvent((KHistoryComboBox*)self, (QActionEvent*)event);
}

void k_historycombobox_on_action_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnActionEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_drag_enter_event(void* self, void* event) {
    KHistoryComboBox_DragEnterEvent((KHistoryComboBox*)self, (QDragEnterEvent*)event);
}

void k_historycombobox_qbase_drag_enter_event(void* self, void* event) {
    KHistoryComboBox_QBaseDragEnterEvent((KHistoryComboBox*)self, (QDragEnterEvent*)event);
}

void k_historycombobox_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnDragEnterEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_drag_move_event(void* self, void* event) {
    KHistoryComboBox_DragMoveEvent((KHistoryComboBox*)self, (QDragMoveEvent*)event);
}

void k_historycombobox_qbase_drag_move_event(void* self, void* event) {
    KHistoryComboBox_QBaseDragMoveEvent((KHistoryComboBox*)self, (QDragMoveEvent*)event);
}

void k_historycombobox_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnDragMoveEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_drag_leave_event(void* self, void* event) {
    KHistoryComboBox_DragLeaveEvent((KHistoryComboBox*)self, (QDragLeaveEvent*)event);
}

void k_historycombobox_qbase_drag_leave_event(void* self, void* event) {
    KHistoryComboBox_QBaseDragLeaveEvent((KHistoryComboBox*)self, (QDragLeaveEvent*)event);
}

void k_historycombobox_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnDragLeaveEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_drop_event(void* self, void* event) {
    KHistoryComboBox_DropEvent((KHistoryComboBox*)self, (QDropEvent*)event);
}

void k_historycombobox_qbase_drop_event(void* self, void* event) {
    KHistoryComboBox_QBaseDropEvent((KHistoryComboBox*)self, (QDropEvent*)event);
}

void k_historycombobox_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnDropEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

bool k_historycombobox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KHistoryComboBox_NativeEvent((KHistoryComboBox*)self, qstring(eventType), message, result);
}

bool k_historycombobox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KHistoryComboBox_QBaseNativeEvent((KHistoryComboBox*)self, qstring(eventType), message, result);
}

void k_historycombobox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KHistoryComboBox_OnNativeEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

int32_t k_historycombobox_metric(void* self, int32_t param1) {
    return KHistoryComboBox_Metric((KHistoryComboBox*)self, param1);
}

int32_t k_historycombobox_qbase_metric(void* self, int32_t param1) {
    return KHistoryComboBox_QBaseMetric((KHistoryComboBox*)self, param1);
}

void k_historycombobox_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KHistoryComboBox_OnMetric((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_init_painter(void* self, void* painter) {
    KHistoryComboBox_InitPainter((KHistoryComboBox*)self, (QPainter*)painter);
}

void k_historycombobox_qbase_init_painter(void* self, void* painter) {
    KHistoryComboBox_QBaseInitPainter((KHistoryComboBox*)self, (QPainter*)painter);
}

void k_historycombobox_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnInitPainter((KHistoryComboBox*)self, (intptr_t)callback);
}

QPaintDevice* k_historycombobox_redirected(void* self, void* offset) {
    return KHistoryComboBox_Redirected((KHistoryComboBox*)self, (QPoint*)offset);
}

QPaintDevice* k_historycombobox_qbase_redirected(void* self, void* offset) {
    return KHistoryComboBox_QBaseRedirected((KHistoryComboBox*)self, (QPoint*)offset);
}

void k_historycombobox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KHistoryComboBox_OnRedirected((KHistoryComboBox*)self, (intptr_t)callback);
}

QPainter* k_historycombobox_shared_painter(void* self) {
    return KHistoryComboBox_SharedPainter((KHistoryComboBox*)self);
}

QPainter* k_historycombobox_qbase_shared_painter(void* self) {
    return KHistoryComboBox_QBaseSharedPainter((KHistoryComboBox*)self);
}

void k_historycombobox_on_shared_painter(void* self, QPainter* (*callback)()) {
    KHistoryComboBox_OnSharedPainter((KHistoryComboBox*)self, (intptr_t)callback);
}

bool k_historycombobox_focus_next_prev_child(void* self, bool next) {
    return KHistoryComboBox_FocusNextPrevChild((KHistoryComboBox*)self, next);
}

bool k_historycombobox_qbase_focus_next_prev_child(void* self, bool next) {
    return KHistoryComboBox_QBaseFocusNextPrevChild((KHistoryComboBox*)self, next);
}

void k_historycombobox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KHistoryComboBox_OnFocusNextPrevChild((KHistoryComboBox*)self, (intptr_t)callback);
}

bool k_historycombobox_event_filter(void* self, void* watched, void* event) {
    return KHistoryComboBox_EventFilter((KHistoryComboBox*)self, (QObject*)watched, (QEvent*)event);
}

bool k_historycombobox_qbase_event_filter(void* self, void* watched, void* event) {
    return KHistoryComboBox_QBaseEventFilter((KHistoryComboBox*)self, (QObject*)watched, (QEvent*)event);
}

void k_historycombobox_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KHistoryComboBox_OnEventFilter((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_timer_event(void* self, void* event) {
    KHistoryComboBox_TimerEvent((KHistoryComboBox*)self, (QTimerEvent*)event);
}

void k_historycombobox_qbase_timer_event(void* self, void* event) {
    KHistoryComboBox_QBaseTimerEvent((KHistoryComboBox*)self, (QTimerEvent*)event);
}

void k_historycombobox_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnTimerEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_child_event(void* self, void* event) {
    KHistoryComboBox_ChildEvent((KHistoryComboBox*)self, (QChildEvent*)event);
}

void k_historycombobox_qbase_child_event(void* self, void* event) {
    KHistoryComboBox_QBaseChildEvent((KHistoryComboBox*)self, (QChildEvent*)event);
}

void k_historycombobox_on_child_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnChildEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_custom_event(void* self, void* event) {
    KHistoryComboBox_CustomEvent((KHistoryComboBox*)self, (QEvent*)event);
}

void k_historycombobox_qbase_custom_event(void* self, void* event) {
    KHistoryComboBox_QBaseCustomEvent((KHistoryComboBox*)self, (QEvent*)event);
}

void k_historycombobox_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnCustomEvent((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_connect_notify(void* self, void* signal) {
    KHistoryComboBox_ConnectNotify((KHistoryComboBox*)self, (QMetaMethod*)signal);
}

void k_historycombobox_qbase_connect_notify(void* self, void* signal) {
    KHistoryComboBox_QBaseConnectNotify((KHistoryComboBox*)self, (QMetaMethod*)signal);
}

void k_historycombobox_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnConnectNotify((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_disconnect_notify(void* self, void* signal) {
    KHistoryComboBox_DisconnectNotify((KHistoryComboBox*)self, (QMetaMethod*)signal);
}

void k_historycombobox_qbase_disconnect_notify(void* self, void* signal) {
    KHistoryComboBox_QBaseDisconnectNotify((KHistoryComboBox*)self, (QMetaMethod*)signal);
}

void k_historycombobox_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnDisconnectNotify((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_set_completion_object(void* self, void* completionObject, bool handleSignals) {
    KHistoryComboBox_SetCompletionObject((KHistoryComboBox*)self, (KCompletion*)completionObject, handleSignals);
}

void k_historycombobox_qbase_set_completion_object(void* self, void* completionObject, bool handleSignals) {
    KHistoryComboBox_QBaseSetCompletionObject((KHistoryComboBox*)self, (KCompletion*)completionObject, handleSignals);
}

void k_historycombobox_on_set_completion_object(void* self, void (*callback)(void*, void*, bool)) {
    KHistoryComboBox_OnSetCompletionObject((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_set_handle_signals(void* self, bool handle) {
    KHistoryComboBox_SetHandleSignals((KHistoryComboBox*)self, handle);
}

void k_historycombobox_qbase_set_handle_signals(void* self, bool handle) {
    KHistoryComboBox_QBaseSetHandleSignals((KHistoryComboBox*)self, handle);
}

void k_historycombobox_on_set_handle_signals(void* self, void (*callback)(void*, bool)) {
    KHistoryComboBox_OnSetHandleSignals((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_set_completion_mode(void* self, int32_t mode) {
    KHistoryComboBox_SetCompletionMode((KHistoryComboBox*)self, mode);
}

void k_historycombobox_qbase_set_completion_mode(void* self, int32_t mode) {
    KHistoryComboBox_QBaseSetCompletionMode((KHistoryComboBox*)self, mode);
}

void k_historycombobox_on_set_completion_mode(void* self, void (*callback)(void*, int32_t)) {
    KHistoryComboBox_OnSetCompletionMode((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_virtual_hook(void* self, int id, void* data) {
    KHistoryComboBox_VirtualHook((KHistoryComboBox*)self, id, data);
}

void k_historycombobox_qbase_virtual_hook(void* self, int id, void* data) {
    KHistoryComboBox_QBaseVirtualHook((KHistoryComboBox*)self, id, data);
}

void k_historycombobox_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KHistoryComboBox_OnVirtualHook((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_update_micro_focus(void* self) {
    KHistoryComboBox_UpdateMicroFocus((KHistoryComboBox*)self);
}

void k_historycombobox_qbase_update_micro_focus(void* self) {
    KHistoryComboBox_QBaseUpdateMicroFocus((KHistoryComboBox*)self);
}

void k_historycombobox_on_update_micro_focus(void* self, void (*callback)()) {
    KHistoryComboBox_OnUpdateMicroFocus((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_create(void* self) {
    KHistoryComboBox_Create((KHistoryComboBox*)self);
}

void k_historycombobox_qbase_create(void* self) {
    KHistoryComboBox_QBaseCreate((KHistoryComboBox*)self);
}

void k_historycombobox_on_create(void* self, void (*callback)()) {
    KHistoryComboBox_OnCreate((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_destroy(void* self) {
    KHistoryComboBox_Destroy((KHistoryComboBox*)self);
}

void k_historycombobox_qbase_destroy(void* self) {
    KHistoryComboBox_QBaseDestroy((KHistoryComboBox*)self);
}

void k_historycombobox_on_destroy(void* self, void (*callback)()) {
    KHistoryComboBox_OnDestroy((KHistoryComboBox*)self, (intptr_t)callback);
}

bool k_historycombobox_focus_next_child(void* self) {
    return KHistoryComboBox_FocusNextChild((KHistoryComboBox*)self);
}

bool k_historycombobox_qbase_focus_next_child(void* self) {
    return KHistoryComboBox_QBaseFocusNextChild((KHistoryComboBox*)self);
}

void k_historycombobox_on_focus_next_child(void* self, bool (*callback)()) {
    KHistoryComboBox_OnFocusNextChild((KHistoryComboBox*)self, (intptr_t)callback);
}

bool k_historycombobox_focus_previous_child(void* self) {
    return KHistoryComboBox_FocusPreviousChild((KHistoryComboBox*)self);
}

bool k_historycombobox_qbase_focus_previous_child(void* self) {
    return KHistoryComboBox_QBaseFocusPreviousChild((KHistoryComboBox*)self);
}

void k_historycombobox_on_focus_previous_child(void* self, bool (*callback)()) {
    KHistoryComboBox_OnFocusPreviousChild((KHistoryComboBox*)self, (intptr_t)callback);
}

QObject* k_historycombobox_sender(void* self) {
    return KHistoryComboBox_Sender((KHistoryComboBox*)self);
}

QObject* k_historycombobox_qbase_sender(void* self) {
    return KHistoryComboBox_QBaseSender((KHistoryComboBox*)self);
}

void k_historycombobox_on_sender(void* self, QObject* (*callback)()) {
    KHistoryComboBox_OnSender((KHistoryComboBox*)self, (intptr_t)callback);
}

int32_t k_historycombobox_sender_signal_index(void* self) {
    return KHistoryComboBox_SenderSignalIndex((KHistoryComboBox*)self);
}

int32_t k_historycombobox_qbase_sender_signal_index(void* self) {
    return KHistoryComboBox_QBaseSenderSignalIndex((KHistoryComboBox*)self);
}

void k_historycombobox_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KHistoryComboBox_OnSenderSignalIndex((KHistoryComboBox*)self, (intptr_t)callback);
}

int32_t k_historycombobox_receivers(void* self, const char* signal) {
    return KHistoryComboBox_Receivers((KHistoryComboBox*)self, signal);
}

int32_t k_historycombobox_qbase_receivers(void* self, const char* signal) {
    return KHistoryComboBox_QBaseReceivers((KHistoryComboBox*)self, signal);
}

void k_historycombobox_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KHistoryComboBox_OnReceivers((KHistoryComboBox*)self, (intptr_t)callback);
}

bool k_historycombobox_is_signal_connected(void* self, void* signal) {
    return KHistoryComboBox_IsSignalConnected((KHistoryComboBox*)self, (QMetaMethod*)signal);
}

bool k_historycombobox_qbase_is_signal_connected(void* self, void* signal) {
    return KHistoryComboBox_QBaseIsSignalConnected((KHistoryComboBox*)self, (QMetaMethod*)signal);
}

void k_historycombobox_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KHistoryComboBox_OnIsSignalConnected((KHistoryComboBox*)self, (intptr_t)callback);
}

double k_historycombobox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KHistoryComboBox_GetDecodedMetricF((KHistoryComboBox*)self, metricA, metricB);
}

double k_historycombobox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KHistoryComboBox_QBaseGetDecodedMetricF((KHistoryComboBox*)self, metricA, metricB);
}

void k_historycombobox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KHistoryComboBox_OnGetDecodedMetricF((KHistoryComboBox*)self, (intptr_t)callback);
}

libqt_map /* of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence* */ k_historycombobox_key_binding_map(void* self) {
    // Convert QMap<KCompletionBase::KeyBindingType,QList<QKeySequence>> to libqt_map
    libqt_map _out = KHistoryComboBox_KeyBindingMap((KHistoryComboBox*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_list* _out_values = (libqt_list*)_out.values;
    QKeySequence*** _ret_values = (QKeySequence***)malloc(_ret.len * sizeof(QKeySequence**));
    if (_ret_values == NULL) {
        free(_out.keys);
        free(_out.values);
        fprintf(stderr, "Failed to allocate memory for map value containers in k_historycombobox_key_binding_map\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        libqt_list _value_list = _out_values[i];
        QKeySequence** _ret_arr = (QKeySequence**)malloc((_value_list.len + 1) * sizeof(QKeySequence*));
        if (_ret_arr == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_out.keys);
            free(_ret_values);
            free(_out.values);
            fprintf(stderr, "Failed to allocate memory for map values in k_historycombobox_key_binding_map\n");
            abort();
        }
        memcpy(_ret_arr, _value_list.data.ptr, _value_list.len * sizeof(QKeySequence*));
        _ret_arr[_value_list.len] = NULL;
        _ret_values[i] = _ret_arr;
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        free((QKeySequence**)_out_values[i].data.ptr);
    }
    free(_out.values);
    return _ret;
}

libqt_map /* of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence* */ k_historycombobox_qbase_key_binding_map(void* self) {
    // Convert QMap<KCompletionBase::KeyBindingType,QList<QKeySequence>> to libqt_map
    libqt_map _out = KHistoryComboBox_QBaseKeyBindingMap((KHistoryComboBox*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_list* _out_values = (libqt_list*)_out.values;
    QKeySequence*** _ret_values = (QKeySequence***)malloc(_ret.len * sizeof(QKeySequence**));
    if (_ret_values == NULL) {
        free(_out.keys);
        free(_out.values);
        fprintf(stderr, "Failed to allocate memory for map value containers in k_historycombobox_key_binding_map\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        libqt_list _value_list = _out_values[i];
        QKeySequence** _ret_arr = (QKeySequence**)malloc((_value_list.len + 1) * sizeof(QKeySequence*));
        if (_ret_arr == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_values[j]);
            }
            free(_out.keys);
            free(_ret_values);
            free(_out.values);
            fprintf(stderr, "Failed to allocate memory for map values in k_historycombobox_key_binding_map\n");
            abort();
        }
        memcpy(_ret_arr, _value_list.data.ptr, _value_list.len * sizeof(QKeySequence*));
        _ret_arr[_value_list.len] = NULL;
        _ret_values[i] = _ret_arr;
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        free((QKeySequence**)_out_values[i].data.ptr);
    }
    free(_out.values);
    return _ret;
}

void k_historycombobox_on_key_binding_map(void* self, libqt_map /* of enum KCompletionBase__KeyBindingType to libqt_list of QKeySequence* */ (*callback)()) {
    KHistoryComboBox_OnKeyBindingMap((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_set_key_binding_map(void* self, libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence** */ keyBindingMap) {
    // Convert libqt_map to QMap<KCompletionBase::KeyBindingType,QList<QKeySequence>>
    libqt_map keyBindingMap_ret;
    keyBindingMap_ret.len = keyBindingMap.len;
    keyBindingMap_ret.keys = (int32_t*)malloc(keyBindingMap_ret.len * sizeof(int32_t));
    if (keyBindingMap_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_historycombobox_set_key_binding_map\n");
        abort();
    }
    keyBindingMap_ret.values = (libqt_list*)malloc(keyBindingMap_ret.len * sizeof(libqt_list));
    if (keyBindingMap_ret.values == NULL) {
        free(keyBindingMap_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_historycombobox_set_key_binding_map\n");
        abort();
    }
    int32_t* keyBindingMap_karr = (int32_t*)keyBindingMap.keys;
    int32_t* keyBindingMap_kdest = (int32_t*)keyBindingMap_ret.keys;
    QKeySequence*** keyBindingMap_varr = (QKeySequence***)keyBindingMap.values;
    libqt_list* keyBindingMap_vdest = (libqt_list*)keyBindingMap_ret.values;
    for (size_t i = 0; i < keyBindingMap_ret.len; ++i) {
        keyBindingMap_kdest[i] = keyBindingMap_karr[i];
        size_t keyBindingMap_value_count = 0;
        while (keyBindingMap_varr[i][keyBindingMap_value_count] != NULL) {
            keyBindingMap_value_count++;
        }
        keyBindingMap_vdest[i].len = keyBindingMap_value_count;
        keyBindingMap_vdest[i].data.ptr = (void*)keyBindingMap_varr[i];
    }
    KHistoryComboBox_SetKeyBindingMap((KHistoryComboBox*)self, keyBindingMap_ret);
    free(keyBindingMap_ret.keys);
    free(keyBindingMap_ret.values);
}

void k_historycombobox_qbase_set_key_binding_map(void* self, libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence** */ keyBindingMap) {
    // Convert libqt_map to QMap<KCompletionBase::KeyBindingType,QList<QKeySequence>>
    libqt_map keyBindingMap_ret;
    keyBindingMap_ret.len = keyBindingMap.len;
    keyBindingMap_ret.keys = (int32_t*)malloc(keyBindingMap_ret.len * sizeof(int32_t));
    if (keyBindingMap_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_historycombobox_set_key_binding_map\n");
        abort();
    }
    keyBindingMap_ret.values = (libqt_list*)malloc(keyBindingMap_ret.len * sizeof(libqt_list));
    if (keyBindingMap_ret.values == NULL) {
        free(keyBindingMap_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_historycombobox_set_key_binding_map\n");
        abort();
    }
    int32_t* keyBindingMap_karr = (int32_t*)keyBindingMap.keys;
    int32_t* keyBindingMap_kdest = (int32_t*)keyBindingMap_ret.keys;
    QKeySequence*** keyBindingMap_varr = (QKeySequence***)keyBindingMap.values;
    libqt_list* keyBindingMap_vdest = (libqt_list*)keyBindingMap_ret.values;
    for (size_t i = 0; i < keyBindingMap_ret.len; ++i) {
        keyBindingMap_kdest[i] = keyBindingMap_karr[i];
        size_t keyBindingMap_value_count = 0;
        while (keyBindingMap_varr[i][keyBindingMap_value_count] != NULL) {
            keyBindingMap_value_count++;
        }
        keyBindingMap_vdest[i].len = keyBindingMap_value_count;
        keyBindingMap_vdest[i].data.ptr = (void*)keyBindingMap_varr[i];
    }
    KHistoryComboBox_QBaseSetKeyBindingMap((KHistoryComboBox*)self, keyBindingMap_ret);
    free(keyBindingMap_ret.keys);
    free(keyBindingMap_ret.values);
}

void k_historycombobox_on_set_key_binding_map(void* self, void (*callback)(void*, libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence** */)) {
    KHistoryComboBox_OnSetKeyBindingMap((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_set_delegate(void* self, void* delegate) {
    KHistoryComboBox_SetDelegate((KHistoryComboBox*)self, (KCompletionBase*)delegate);
}

void k_historycombobox_qbase_set_delegate(void* self, void* delegate) {
    KHistoryComboBox_QBaseSetDelegate((KHistoryComboBox*)self, (KCompletionBase*)delegate);
}

void k_historycombobox_on_set_delegate(void* self, void (*callback)(void*, void*)) {
    KHistoryComboBox_OnSetDelegate((KHistoryComboBox*)self, (intptr_t)callback);
}

KCompletionBase* k_historycombobox_delegate(void* self) {
    return KHistoryComboBox_Delegate((KHistoryComboBox*)self);
}

KCompletionBase* k_historycombobox_qbase_delegate(void* self) {
    return KHistoryComboBox_QBaseDelegate((KHistoryComboBox*)self);
}

void k_historycombobox_on_delegate(void* self, KCompletionBase* (*callback)()) {
    KHistoryComboBox_OnDelegate((KHistoryComboBox*)self, (intptr_t)callback);
}

void k_historycombobox_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_historycombobox_delete(void* self) {
    KHistoryComboBox_Delete((KHistoryComboBox*)(self));
}
