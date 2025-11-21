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
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libdictionarycombobox.hpp"
#include "libdictionarycombobox.h"

Sonnet__DictionaryComboBox* k_sonnet__dictionarycombobox_new(void* parent) {
    return Sonnet__DictionaryComboBox_new((QWidget*)parent);
}

Sonnet__DictionaryComboBox* k_sonnet__dictionarycombobox_new2() {
    return Sonnet__DictionaryComboBox_new2();
}

const QMetaObject* k_sonnet__dictionarycombobox_meta_object(void* self) {
    return Sonnet__DictionaryComboBox_MetaObject((Sonnet__DictionaryComboBox*)self);
}

void* k_sonnet__dictionarycombobox_metacast(void* self, const char* param1) {
    return Sonnet__DictionaryComboBox_Metacast((Sonnet__DictionaryComboBox*)self, param1);
}

int32_t k_sonnet__dictionarycombobox_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Sonnet__DictionaryComboBox_Metacall((Sonnet__DictionaryComboBox*)self, param1, param2, param3);
}

void k_sonnet__dictionarycombobox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Sonnet__DictionaryComboBox_OnMetacall((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

int32_t k_sonnet__dictionarycombobox_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Sonnet__DictionaryComboBox_QBaseMetacall((Sonnet__DictionaryComboBox*)self, param1, param2, param3);
}

const char* k_sonnet__dictionarycombobox_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dictionarycombobox_reload_combo(void* self) {
    Sonnet__DictionaryComboBox_ReloadCombo((Sonnet__DictionaryComboBox*)self);
}

const char* k_sonnet__dictionarycombobox_current_dictionary_name(void* self) {
    libqt_string _str = Sonnet__DictionaryComboBox_CurrentDictionaryName((Sonnet__DictionaryComboBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__dictionarycombobox_current_dictionary(void* self) {
    libqt_string _str = Sonnet__DictionaryComboBox_CurrentDictionary((Sonnet__DictionaryComboBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dictionarycombobox_set_current_by_dictionary_name(void* self, const char* dictionaryName) {
    Sonnet__DictionaryComboBox_SetCurrentByDictionaryName((Sonnet__DictionaryComboBox*)self, qstring(dictionaryName));
}

bool k_sonnet__dictionarycombobox_assign_by_dictionnary(void* self, const char* dictionary) {
    return Sonnet__DictionaryComboBox_AssignByDictionnary((Sonnet__DictionaryComboBox*)self, qstring(dictionary));
}

bool k_sonnet__dictionarycombobox_assign_dictionnary_name(void* self, const char* name) {
    return Sonnet__DictionaryComboBox_AssignDictionnaryName((Sonnet__DictionaryComboBox*)self, qstring(name));
}

void k_sonnet__dictionarycombobox_set_current_by_dictionary(void* self, const char* dictionary) {
    Sonnet__DictionaryComboBox_SetCurrentByDictionary((Sonnet__DictionaryComboBox*)self, qstring(dictionary));
}

void k_sonnet__dictionarycombobox_dictionary_changed(void* self, const char* dictionary) {
    Sonnet__DictionaryComboBox_DictionaryChanged((Sonnet__DictionaryComboBox*)self, qstring(dictionary));
}

void k_sonnet__dictionarycombobox_on_dictionary_changed(void* self, void (*callback)(void*, const char*)) {
    Sonnet__DictionaryComboBox_Connect_DictionaryChanged((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_dictionary_name_changed(void* self, const char* dictionaryName) {
    Sonnet__DictionaryComboBox_DictionaryNameChanged((Sonnet__DictionaryComboBox*)self, qstring(dictionaryName));
}

void k_sonnet__dictionarycombobox_on_dictionary_name_changed(void* self, void (*callback)(void*, const char*)) {
    Sonnet__DictionaryComboBox_Connect_DictionaryNameChanged((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

const char* k_sonnet__dictionarycombobox_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__dictionarycombobox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_sonnet__dictionarycombobox_max_visible_items(void* self) {
    return QComboBox_MaxVisibleItems((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_max_visible_items(void* self, int maxItems) {
    QComboBox_SetMaxVisibleItems((QComboBox*)self, maxItems);
}

int32_t k_sonnet__dictionarycombobox_count(void* self) {
    return QComboBox_Count((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_max_count(void* self, int max) {
    QComboBox_SetMaxCount((QComboBox*)self, max);
}

int32_t k_sonnet__dictionarycombobox_max_count(void* self) {
    return QComboBox_MaxCount((QComboBox*)self);
}

bool k_sonnet__dictionarycombobox_duplicates_enabled(void* self) {
    return QComboBox_DuplicatesEnabled((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_duplicates_enabled(void* self, bool enable) {
    QComboBox_SetDuplicatesEnabled((QComboBox*)self, enable);
}

void k_sonnet__dictionarycombobox_set_frame(void* self, bool frame) {
    QComboBox_SetFrame((QComboBox*)self, frame);
}

bool k_sonnet__dictionarycombobox_has_frame(void* self) {
    return QComboBox_HasFrame((QComboBox*)self);
}

int32_t k_sonnet__dictionarycombobox_find_text(void* self, const char* text) {
    return QComboBox_FindText((QComboBox*)self, qstring(text));
}

int32_t k_sonnet__dictionarycombobox_find_data(void* self, void* data) {
    return QComboBox_FindData((QComboBox*)self, (QVariant*)data);
}

int32_t k_sonnet__dictionarycombobox_insert_policy(void* self) {
    return QComboBox_InsertPolicy((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_insert_policy(void* self, int32_t policy) {
    QComboBox_SetInsertPolicy((QComboBox*)self, policy);
}

int32_t k_sonnet__dictionarycombobox_size_adjust_policy(void* self) {
    return QComboBox_SizeAdjustPolicy((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_size_adjust_policy(void* self, int32_t policy) {
    QComboBox_SetSizeAdjustPolicy((QComboBox*)self, policy);
}

int32_t k_sonnet__dictionarycombobox_minimum_contents_length(void* self) {
    return QComboBox_MinimumContentsLength((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_minimum_contents_length(void* self, int characters) {
    QComboBox_SetMinimumContentsLength((QComboBox*)self, characters);
}

QSize* k_sonnet__dictionarycombobox_icon_size(void* self) {
    return QComboBox_IconSize((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_icon_size(void* self, void* size) {
    QComboBox_SetIconSize((QComboBox*)self, (QSize*)size);
}

void k_sonnet__dictionarycombobox_set_placeholder_text(void* self, const char* placeholderText) {
    QComboBox_SetPlaceholderText((QComboBox*)self, qstring(placeholderText));
}

const char* k_sonnet__dictionarycombobox_placeholder_text(void* self) {
    libqt_string _str = QComboBox_PlaceholderText((QComboBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_sonnet__dictionarycombobox_is_editable(void* self) {
    return QComboBox_IsEditable((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_editable(void* self, bool editable) {
    QComboBox_SetEditable((QComboBox*)self, editable);
}

void k_sonnet__dictionarycombobox_set_line_edit(void* self, void* edit) {
    QComboBox_SetLineEdit((QComboBox*)self, (QLineEdit*)edit);
}

QLineEdit* k_sonnet__dictionarycombobox_line_edit(void* self) {
    return QComboBox_LineEdit((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_validator(void* self, void* v) {
    QComboBox_SetValidator((QComboBox*)self, (QValidator*)v);
}

const QValidator* k_sonnet__dictionarycombobox_validator(void* self) {
    return QComboBox_Validator((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_completer(void* self, void* c) {
    QComboBox_SetCompleter((QComboBox*)self, (QCompleter*)c);
}

QCompleter* k_sonnet__dictionarycombobox_completer(void* self) {
    return QComboBox_Completer((QComboBox*)self);
}

QAbstractItemDelegate* k_sonnet__dictionarycombobox_item_delegate(void* self) {
    return QComboBox_ItemDelegate((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_item_delegate(void* self, void* delegate) {
    QComboBox_SetItemDelegate((QComboBox*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemModel* k_sonnet__dictionarycombobox_model(void* self) {
    return QComboBox_Model((QComboBox*)self);
}

QModelIndex* k_sonnet__dictionarycombobox_root_model_index(void* self) {
    return QComboBox_RootModelIndex((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_root_model_index(void* self, void* index) {
    QComboBox_SetRootModelIndex((QComboBox*)self, (QModelIndex*)index);
}

int32_t k_sonnet__dictionarycombobox_model_column(void* self) {
    return QComboBox_ModelColumn((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_model_column(void* self, int visibleColumn) {
    QComboBox_SetModelColumn((QComboBox*)self, visibleColumn);
}

int32_t k_sonnet__dictionarycombobox_current_index(void* self) {
    return QComboBox_CurrentIndex((QComboBox*)self);
}

const char* k_sonnet__dictionarycombobox_current_text(void* self) {
    libqt_string _str = QComboBox_CurrentText((QComboBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* k_sonnet__dictionarycombobox_current_data(void* self) {
    return QComboBox_CurrentData((QComboBox*)self);
}

const char* k_sonnet__dictionarycombobox_item_text(void* self, int index) {
    libqt_string _str = QComboBox_ItemText((QComboBox*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIcon* k_sonnet__dictionarycombobox_item_icon(void* self, int index) {
    return QComboBox_ItemIcon((QComboBox*)self, index);
}

QVariant* k_sonnet__dictionarycombobox_item_data(void* self, int index) {
    return QComboBox_ItemData((QComboBox*)self, index);
}

void k_sonnet__dictionarycombobox_add_item(void* self, const char* text) {
    QComboBox_AddItem((QComboBox*)self, qstring(text));
}

void k_sonnet__dictionarycombobox_add_item2(void* self, void* icon, const char* text) {
    QComboBox_AddItem2((QComboBox*)self, (QIcon*)icon, qstring(text));
}

void k_sonnet__dictionarycombobox_add_items(void* self, const char* texts[static 1]) {
    size_t texts_len = libqt_strv_length(texts);
    libqt_string* texts_qstr = (libqt_string*)malloc(texts_len * sizeof(libqt_string));
    if (texts_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__dictionarycombobox_add_items");
        abort();
    }
    for (size_t i = 0; i < texts_len; ++i) {
        texts_qstr[i] = qstring(texts[i]);
    }
    libqt_list texts_list = qlist(texts_qstr, texts_len);
    QComboBox_AddItems((QComboBox*)self, texts_list);
    free(texts_qstr);
}

void k_sonnet__dictionarycombobox_insert_item(void* self, int index, const char* text) {
    QComboBox_InsertItem((QComboBox*)self, index, qstring(text));
}

void k_sonnet__dictionarycombobox_insert_item2(void* self, int index, void* icon, const char* text) {
    QComboBox_InsertItem2((QComboBox*)self, index, (QIcon*)icon, qstring(text));
}

void k_sonnet__dictionarycombobox_insert_items(void* self, int index, const char* texts[static 1]) {
    size_t texts_len = libqt_strv_length(texts);
    libqt_string* texts_qstr = (libqt_string*)malloc(texts_len * sizeof(libqt_string));
    if (texts_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__dictionarycombobox_insert_items");
        abort();
    }
    for (size_t i = 0; i < texts_len; ++i) {
        texts_qstr[i] = qstring(texts[i]);
    }
    libqt_list texts_list = qlist(texts_qstr, texts_len);
    QComboBox_InsertItems((QComboBox*)self, index, texts_list);
    free(texts_qstr);
}

void k_sonnet__dictionarycombobox_insert_separator(void* self, int index) {
    QComboBox_InsertSeparator((QComboBox*)self, index);
}

void k_sonnet__dictionarycombobox_remove_item(void* self, int index) {
    QComboBox_RemoveItem((QComboBox*)self, index);
}

void k_sonnet__dictionarycombobox_set_item_text(void* self, int index, const char* text) {
    QComboBox_SetItemText((QComboBox*)self, index, qstring(text));
}

void k_sonnet__dictionarycombobox_set_item_icon(void* self, int index, void* icon) {
    QComboBox_SetItemIcon((QComboBox*)self, index, (QIcon*)icon);
}

void k_sonnet__dictionarycombobox_set_item_data(void* self, int index, void* value) {
    QComboBox_SetItemData((QComboBox*)self, index, (QVariant*)value);
}

QAbstractItemView* k_sonnet__dictionarycombobox_view(void* self) {
    return QComboBox_View((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_view(void* self, void* itemView) {
    QComboBox_SetView((QComboBox*)self, (QAbstractItemView*)itemView);
}

QVariant* k_sonnet__dictionarycombobox_input_method_query2(void* self, int64_t query, void* argument) {
    return QComboBox_InputMethodQuery2((QComboBox*)self, query, (QVariant*)argument);
}

void k_sonnet__dictionarycombobox_clear(void* self) {
    QComboBox_Clear((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_clear_edit_text(void* self) {
    QComboBox_ClearEditText((QComboBox*)self);
}

void k_sonnet__dictionarycombobox_set_edit_text(void* self, const char* text) {
    QComboBox_SetEditText((QComboBox*)self, qstring(text));
}

void k_sonnet__dictionarycombobox_set_current_index(void* self, int index) {
    QComboBox_SetCurrentIndex((QComboBox*)self, index);
}

void k_sonnet__dictionarycombobox_set_current_text(void* self, const char* text) {
    QComboBox_SetCurrentText((QComboBox*)self, qstring(text));
}

void k_sonnet__dictionarycombobox_edit_text_changed(void* self, const char* param1) {
    QComboBox_EditTextChanged((QComboBox*)self, qstring(param1));
}

void k_sonnet__dictionarycombobox_on_edit_text_changed(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_EditTextChanged((QComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_activated(void* self, int index) {
    QComboBox_Activated((QComboBox*)self, index);
}

void k_sonnet__dictionarycombobox_on_activated(void* self, void (*callback)(void*, int)) {
    QComboBox_Connect_Activated((QComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_text_activated(void* self, const char* param1) {
    QComboBox_TextActivated((QComboBox*)self, qstring(param1));
}

void k_sonnet__dictionarycombobox_on_text_activated(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_TextActivated((QComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_highlighted(void* self, int index) {
    QComboBox_Highlighted((QComboBox*)self, index);
}

void k_sonnet__dictionarycombobox_on_highlighted(void* self, void (*callback)(void*, int)) {
    QComboBox_Connect_Highlighted((QComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_text_highlighted(void* self, const char* param1) {
    QComboBox_TextHighlighted((QComboBox*)self, qstring(param1));
}

void k_sonnet__dictionarycombobox_on_text_highlighted(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_TextHighlighted((QComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_current_index_changed(void* self, int index) {
    QComboBox_CurrentIndexChanged((QComboBox*)self, index);
}

void k_sonnet__dictionarycombobox_on_current_index_changed(void* self, void (*callback)(void*, int)) {
    QComboBox_Connect_CurrentIndexChanged((QComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_current_text_changed(void* self, const char* param1) {
    QComboBox_CurrentTextChanged((QComboBox*)self, qstring(param1));
}

void k_sonnet__dictionarycombobox_on_current_text_changed(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_CurrentTextChanged((QComboBox*)self, (intptr_t)callback);
}

int32_t k_sonnet__dictionarycombobox_find_text2(void* self, const char* text, int32_t flags) {
    return QComboBox_FindText2((QComboBox*)self, qstring(text), flags);
}

int32_t k_sonnet__dictionarycombobox_find_data2(void* self, void* data, int role) {
    return QComboBox_FindData2((QComboBox*)self, (QVariant*)data, role);
}

int32_t k_sonnet__dictionarycombobox_find_data3(void* self, void* data, int role, int32_t flags) {
    return QComboBox_FindData3((QComboBox*)self, (QVariant*)data, role, flags);
}

QVariant* k_sonnet__dictionarycombobox_current_data1(void* self, int role) {
    return QComboBox_CurrentData1((QComboBox*)self, role);
}

QVariant* k_sonnet__dictionarycombobox_item_data2(void* self, int index, int role) {
    return QComboBox_ItemData2((QComboBox*)self, index, role);
}

void k_sonnet__dictionarycombobox_add_item22(void* self, const char* text, void* userData) {
    QComboBox_AddItem22((QComboBox*)self, qstring(text), (QVariant*)userData);
}

void k_sonnet__dictionarycombobox_add_item3(void* self, void* icon, const char* text, void* userData) {
    QComboBox_AddItem3((QComboBox*)self, (QIcon*)icon, qstring(text), (QVariant*)userData);
}

void k_sonnet__dictionarycombobox_insert_item3(void* self, int index, const char* text, void* userData) {
    QComboBox_InsertItem3((QComboBox*)self, index, qstring(text), (QVariant*)userData);
}

void k_sonnet__dictionarycombobox_insert_item4(void* self, int index, void* icon, const char* text, void* userData) {
    QComboBox_InsertItem4((QComboBox*)self, index, (QIcon*)icon, qstring(text), (QVariant*)userData);
}

void k_sonnet__dictionarycombobox_set_item_data3(void* self, int index, void* value, int role) {
    QComboBox_SetItemData3((QComboBox*)self, index, (QVariant*)value, role);
}

uintptr_t k_sonnet__dictionarycombobox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_sonnet__dictionarycombobox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_sonnet__dictionarycombobox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_sonnet__dictionarycombobox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_sonnet__dictionarycombobox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_sonnet__dictionarycombobox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_sonnet__dictionarycombobox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_sonnet__dictionarycombobox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_sonnet__dictionarycombobox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_sonnet__dictionarycombobox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_sonnet__dictionarycombobox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_sonnet__dictionarycombobox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_sonnet__dictionarycombobox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_sonnet__dictionarycombobox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_sonnet__dictionarycombobox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_sonnet__dictionarycombobox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_sonnet__dictionarycombobox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_sonnet__dictionarycombobox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_sonnet__dictionarycombobox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_sonnet__dictionarycombobox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_sonnet__dictionarycombobox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_sonnet__dictionarycombobox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_sonnet__dictionarycombobox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_sonnet__dictionarycombobox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_sonnet__dictionarycombobox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_sonnet__dictionarycombobox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_sonnet__dictionarycombobox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_sonnet__dictionarycombobox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_sonnet__dictionarycombobox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_sonnet__dictionarycombobox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_sonnet__dictionarycombobox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_sonnet__dictionarycombobox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_sonnet__dictionarycombobox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_sonnet__dictionarycombobox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_sonnet__dictionarycombobox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_sonnet__dictionarycombobox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_sonnet__dictionarycombobox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_sonnet__dictionarycombobox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_sonnet__dictionarycombobox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_sonnet__dictionarycombobox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_sonnet__dictionarycombobox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_sonnet__dictionarycombobox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_sonnet__dictionarycombobox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_sonnet__dictionarycombobox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_sonnet__dictionarycombobox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_sonnet__dictionarycombobox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_sonnet__dictionarycombobox_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_sonnet__dictionarycombobox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_sonnet__dictionarycombobox_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_sonnet__dictionarycombobox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_sonnet__dictionarycombobox_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_sonnet__dictionarycombobox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_sonnet__dictionarycombobox_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_sonnet__dictionarycombobox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_sonnet__dictionarycombobox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_sonnet__dictionarycombobox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_sonnet__dictionarycombobox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_sonnet__dictionarycombobox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_sonnet__dictionarycombobox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_sonnet__dictionarycombobox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_sonnet__dictionarycombobox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_sonnet__dictionarycombobox_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_sonnet__dictionarycombobox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_sonnet__dictionarycombobox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_sonnet__dictionarycombobox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_sonnet__dictionarycombobox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_sonnet__dictionarycombobox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_sonnet__dictionarycombobox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_sonnet__dictionarycombobox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_sonnet__dictionarycombobox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_sonnet__dictionarycombobox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_sonnet__dictionarycombobox_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_sonnet__dictionarycombobox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_sonnet__dictionarycombobox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_sonnet__dictionarycombobox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_sonnet__dictionarycombobox_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_sonnet__dictionarycombobox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_sonnet__dictionarycombobox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_sonnet__dictionarycombobox_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_sonnet__dictionarycombobox_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_sonnet__dictionarycombobox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_sonnet__dictionarycombobox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_sonnet__dictionarycombobox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__dictionarycombobox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dictionarycombobox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_sonnet__dictionarycombobox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_sonnet__dictionarycombobox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dictionarycombobox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_sonnet__dictionarycombobox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dictionarycombobox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_sonnet__dictionarycombobox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dictionarycombobox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_sonnet__dictionarycombobox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_sonnet__dictionarycombobox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dictionarycombobox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_sonnet__dictionarycombobox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_sonnet__dictionarycombobox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dictionarycombobox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_sonnet__dictionarycombobox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__dictionarycombobox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dictionarycombobox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_sonnet__dictionarycombobox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dictionarycombobox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_sonnet__dictionarycombobox_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_sonnet__dictionarycombobox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_sonnet__dictionarycombobox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_sonnet__dictionarycombobox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_sonnet__dictionarycombobox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_sonnet__dictionarycombobox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_sonnet__dictionarycombobox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_sonnet__dictionarycombobox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_sonnet__dictionarycombobox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_sonnet__dictionarycombobox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_sonnet__dictionarycombobox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_sonnet__dictionarycombobox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_sonnet__dictionarycombobox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_sonnet__dictionarycombobox_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_sonnet__dictionarycombobox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_sonnet__dictionarycombobox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_sonnet__dictionarycombobox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_sonnet__dictionarycombobox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_sonnet__dictionarycombobox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_sonnet__dictionarycombobox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_sonnet__dictionarycombobox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_sonnet__dictionarycombobox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_sonnet__dictionarycombobox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_sonnet__dictionarycombobox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_sonnet__dictionarycombobox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_sonnet__dictionarycombobox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_sonnet__dictionarycombobox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_sonnet__dictionarycombobox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_sonnet__dictionarycombobox_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_sonnet__dictionarycombobox_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_sonnet__dictionarycombobox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_sonnet__dictionarycombobox_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_sonnet__dictionarycombobox_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_sonnet__dictionarycombobox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_sonnet__dictionarycombobox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_sonnet__dictionarycombobox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_sonnet__dictionarycombobox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_sonnet__dictionarycombobox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_sonnet__dictionarycombobox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_sonnet__dictionarycombobox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_sonnet__dictionarycombobox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_sonnet__dictionarycombobox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_sonnet__dictionarycombobox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_sonnet__dictionarycombobox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_sonnet__dictionarycombobox_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_sonnet__dictionarycombobox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_sonnet__dictionarycombobox_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_sonnet__dictionarycombobox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_sonnet__dictionarycombobox_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_sonnet__dictionarycombobox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_sonnet__dictionarycombobox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_sonnet__dictionarycombobox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_sonnet__dictionarycombobox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_sonnet__dictionarycombobox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_sonnet__dictionarycombobox_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_sonnet__dictionarycombobox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_sonnet__dictionarycombobox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_sonnet__dictionarycombobox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_sonnet__dictionarycombobox_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_sonnet__dictionarycombobox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_sonnet__dictionarycombobox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_sonnet__dictionarycombobox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_sonnet__dictionarycombobox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_sonnet__dictionarycombobox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_sonnet__dictionarycombobox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_sonnet__dictionarycombobox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_sonnet__dictionarycombobox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_sonnet__dictionarycombobox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_sonnet__dictionarycombobox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_sonnet__dictionarycombobox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_sonnet__dictionarycombobox_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_sonnet__dictionarycombobox_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_sonnet__dictionarycombobox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_sonnet__dictionarycombobox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_sonnet__dictionarycombobox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_sonnet__dictionarycombobox_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_sonnet__dictionarycombobox_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_sonnet__dictionarycombobox_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_sonnet__dictionarycombobox_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_sonnet__dictionarycombobox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_sonnet__dictionarycombobox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_sonnet__dictionarycombobox_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_sonnet__dictionarycombobox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_sonnet__dictionarycombobox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_sonnet__dictionarycombobox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_sonnet__dictionarycombobox_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_sonnet__dictionarycombobox_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_sonnet__dictionarycombobox_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_sonnet__dictionarycombobox_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_sonnet__dictionarycombobox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_sonnet__dictionarycombobox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_sonnet__dictionarycombobox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_sonnet__dictionarycombobox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_sonnet__dictionarycombobox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_sonnet__dictionarycombobox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_sonnet__dictionarycombobox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_sonnet__dictionarycombobox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_sonnet__dictionarycombobox_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_sonnet__dictionarycombobox_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_sonnet__dictionarycombobox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_sonnet__dictionarycombobox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_sonnet__dictionarycombobox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_sonnet__dictionarycombobox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_sonnet__dictionarycombobox_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_sonnet__dictionarycombobox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_sonnet__dictionarycombobox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_sonnet__dictionarycombobox_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_sonnet__dictionarycombobox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_sonnet__dictionarycombobox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_sonnet__dictionarycombobox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_sonnet__dictionarycombobox_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_sonnet__dictionarycombobox_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_sonnet__dictionarycombobox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_sonnet__dictionarycombobox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_sonnet__dictionarycombobox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_sonnet__dictionarycombobox_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_sonnet__dictionarycombobox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_sonnet__dictionarycombobox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_sonnet__dictionarycombobox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dictionarycombobox_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_sonnet__dictionarycombobox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_sonnet__dictionarycombobox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_sonnet__dictionarycombobox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_sonnet__dictionarycombobox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_sonnet__dictionarycombobox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_sonnet__dictionarycombobox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_sonnet__dictionarycombobox_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_sonnet__dictionarycombobox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_sonnet__dictionarycombobox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_sonnet__dictionarycombobox_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_sonnet__dictionarycombobox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_sonnet__dictionarycombobox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_sonnet__dictionarycombobox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_sonnet__dictionarycombobox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_sonnet__dictionarycombobox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_sonnet__dictionarycombobox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_sonnet__dictionarycombobox_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_sonnet__dictionarycombobox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_sonnet__dictionarycombobox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_sonnet__dictionarycombobox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_sonnet__dictionarycombobox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_sonnet__dictionarycombobox_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__dictionarycombobox_dynamic_property_names");
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

QBindingStorage* k_sonnet__dictionarycombobox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_sonnet__dictionarycombobox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_sonnet__dictionarycombobox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_sonnet__dictionarycombobox_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_sonnet__dictionarycombobox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_sonnet__dictionarycombobox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_sonnet__dictionarycombobox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_sonnet__dictionarycombobox_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_sonnet__dictionarycombobox_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_sonnet__dictionarycombobox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_sonnet__dictionarycombobox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_sonnet__dictionarycombobox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_sonnet__dictionarycombobox_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_sonnet__dictionarycombobox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_sonnet__dictionarycombobox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_sonnet__dictionarycombobox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_sonnet__dictionarycombobox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_sonnet__dictionarycombobox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_sonnet__dictionarycombobox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_sonnet__dictionarycombobox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_sonnet__dictionarycombobox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_sonnet__dictionarycombobox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_sonnet__dictionarycombobox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_sonnet__dictionarycombobox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_sonnet__dictionarycombobox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_sonnet__dictionarycombobox_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_sonnet__dictionarycombobox_set_model(void* self, void* model) {
    Sonnet__DictionaryComboBox_SetModel((Sonnet__DictionaryComboBox*)self, (QAbstractItemModel*)model);
}

void k_sonnet__dictionarycombobox_qbase_set_model(void* self, void* model) {
    Sonnet__DictionaryComboBox_QBaseSetModel((Sonnet__DictionaryComboBox*)self, (QAbstractItemModel*)model);
}

void k_sonnet__dictionarycombobox_on_set_model(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnSetModel((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

QSize* k_sonnet__dictionarycombobox_size_hint(void* self) {
    return Sonnet__DictionaryComboBox_SizeHint((Sonnet__DictionaryComboBox*)self);
}

QSize* k_sonnet__dictionarycombobox_qbase_size_hint(void* self) {
    return Sonnet__DictionaryComboBox_QBaseSizeHint((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_size_hint(void* self, QSize* (*callback)()) {
    Sonnet__DictionaryComboBox_OnSizeHint((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

QSize* k_sonnet__dictionarycombobox_minimum_size_hint(void* self) {
    return Sonnet__DictionaryComboBox_MinimumSizeHint((Sonnet__DictionaryComboBox*)self);
}

QSize* k_sonnet__dictionarycombobox_qbase_minimum_size_hint(void* self) {
    return Sonnet__DictionaryComboBox_QBaseMinimumSizeHint((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    Sonnet__DictionaryComboBox_OnMinimumSizeHint((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_show_popup(void* self) {
    Sonnet__DictionaryComboBox_ShowPopup((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_qbase_show_popup(void* self) {
    Sonnet__DictionaryComboBox_QBaseShowPopup((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_show_popup(void* self, void (*callback)()) {
    Sonnet__DictionaryComboBox_OnShowPopup((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_hide_popup(void* self) {
    Sonnet__DictionaryComboBox_HidePopup((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_qbase_hide_popup(void* self) {
    Sonnet__DictionaryComboBox_QBaseHidePopup((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_hide_popup(void* self, void (*callback)()) {
    Sonnet__DictionaryComboBox_OnHidePopup((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

bool k_sonnet__dictionarycombobox_event(void* self, void* event) {
    return Sonnet__DictionaryComboBox_Event((Sonnet__DictionaryComboBox*)self, (QEvent*)event);
}

bool k_sonnet__dictionarycombobox_qbase_event(void* self, void* event) {
    return Sonnet__DictionaryComboBox_QBaseEvent((Sonnet__DictionaryComboBox*)self, (QEvent*)event);
}

void k_sonnet__dictionarycombobox_on_event(void* self, bool (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

QVariant* k_sonnet__dictionarycombobox_input_method_query(void* self, int64_t param1) {
    return Sonnet__DictionaryComboBox_InputMethodQuery((Sonnet__DictionaryComboBox*)self, param1);
}

QVariant* k_sonnet__dictionarycombobox_qbase_input_method_query(void* self, int64_t param1) {
    return Sonnet__DictionaryComboBox_QBaseInputMethodQuery((Sonnet__DictionaryComboBox*)self, param1);
}

void k_sonnet__dictionarycombobox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    Sonnet__DictionaryComboBox_OnInputMethodQuery((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_focus_in_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_FocusInEvent((Sonnet__DictionaryComboBox*)self, (QFocusEvent*)e);
}

void k_sonnet__dictionarycombobox_qbase_focus_in_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_QBaseFocusInEvent((Sonnet__DictionaryComboBox*)self, (QFocusEvent*)e);
}

void k_sonnet__dictionarycombobox_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnFocusInEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_focus_out_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_FocusOutEvent((Sonnet__DictionaryComboBox*)self, (QFocusEvent*)e);
}

void k_sonnet__dictionarycombobox_qbase_focus_out_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_QBaseFocusOutEvent((Sonnet__DictionaryComboBox*)self, (QFocusEvent*)e);
}

void k_sonnet__dictionarycombobox_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnFocusOutEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_change_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_ChangeEvent((Sonnet__DictionaryComboBox*)self, (QEvent*)e);
}

void k_sonnet__dictionarycombobox_qbase_change_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_QBaseChangeEvent((Sonnet__DictionaryComboBox*)self, (QEvent*)e);
}

void k_sonnet__dictionarycombobox_on_change_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnChangeEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_resize_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_ResizeEvent((Sonnet__DictionaryComboBox*)self, (QResizeEvent*)e);
}

void k_sonnet__dictionarycombobox_qbase_resize_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_QBaseResizeEvent((Sonnet__DictionaryComboBox*)self, (QResizeEvent*)e);
}

void k_sonnet__dictionarycombobox_on_resize_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnResizeEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_paint_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_PaintEvent((Sonnet__DictionaryComboBox*)self, (QPaintEvent*)e);
}

void k_sonnet__dictionarycombobox_qbase_paint_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_QBasePaintEvent((Sonnet__DictionaryComboBox*)self, (QPaintEvent*)e);
}

void k_sonnet__dictionarycombobox_on_paint_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnPaintEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_show_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_ShowEvent((Sonnet__DictionaryComboBox*)self, (QShowEvent*)e);
}

void k_sonnet__dictionarycombobox_qbase_show_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_QBaseShowEvent((Sonnet__DictionaryComboBox*)self, (QShowEvent*)e);
}

void k_sonnet__dictionarycombobox_on_show_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnShowEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_hide_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_HideEvent((Sonnet__DictionaryComboBox*)self, (QHideEvent*)e);
}

void k_sonnet__dictionarycombobox_qbase_hide_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_QBaseHideEvent((Sonnet__DictionaryComboBox*)self, (QHideEvent*)e);
}

void k_sonnet__dictionarycombobox_on_hide_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnHideEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_mouse_press_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_MousePressEvent((Sonnet__DictionaryComboBox*)self, (QMouseEvent*)e);
}

void k_sonnet__dictionarycombobox_qbase_mouse_press_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_QBaseMousePressEvent((Sonnet__DictionaryComboBox*)self, (QMouseEvent*)e);
}

void k_sonnet__dictionarycombobox_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnMousePressEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_mouse_release_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_MouseReleaseEvent((Sonnet__DictionaryComboBox*)self, (QMouseEvent*)e);
}

void k_sonnet__dictionarycombobox_qbase_mouse_release_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_QBaseMouseReleaseEvent((Sonnet__DictionaryComboBox*)self, (QMouseEvent*)e);
}

void k_sonnet__dictionarycombobox_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnMouseReleaseEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_key_press_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_KeyPressEvent((Sonnet__DictionaryComboBox*)self, (QKeyEvent*)e);
}

void k_sonnet__dictionarycombobox_qbase_key_press_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_QBaseKeyPressEvent((Sonnet__DictionaryComboBox*)self, (QKeyEvent*)e);
}

void k_sonnet__dictionarycombobox_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnKeyPressEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_key_release_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_KeyReleaseEvent((Sonnet__DictionaryComboBox*)self, (QKeyEvent*)e);
}

void k_sonnet__dictionarycombobox_qbase_key_release_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_QBaseKeyReleaseEvent((Sonnet__DictionaryComboBox*)self, (QKeyEvent*)e);
}

void k_sonnet__dictionarycombobox_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnKeyReleaseEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_wheel_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_WheelEvent((Sonnet__DictionaryComboBox*)self, (QWheelEvent*)e);
}

void k_sonnet__dictionarycombobox_qbase_wheel_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_QBaseWheelEvent((Sonnet__DictionaryComboBox*)self, (QWheelEvent*)e);
}

void k_sonnet__dictionarycombobox_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnWheelEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_context_menu_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_ContextMenuEvent((Sonnet__DictionaryComboBox*)self, (QContextMenuEvent*)e);
}

void k_sonnet__dictionarycombobox_qbase_context_menu_event(void* self, void* e) {
    Sonnet__DictionaryComboBox_QBaseContextMenuEvent((Sonnet__DictionaryComboBox*)self, (QContextMenuEvent*)e);
}

void k_sonnet__dictionarycombobox_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnContextMenuEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_input_method_event(void* self, void* param1) {
    Sonnet__DictionaryComboBox_InputMethodEvent((Sonnet__DictionaryComboBox*)self, (QInputMethodEvent*)param1);
}

void k_sonnet__dictionarycombobox_qbase_input_method_event(void* self, void* param1) {
    Sonnet__DictionaryComboBox_QBaseInputMethodEvent((Sonnet__DictionaryComboBox*)self, (QInputMethodEvent*)param1);
}

void k_sonnet__dictionarycombobox_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnInputMethodEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_init_style_option(void* self, void* option) {
    Sonnet__DictionaryComboBox_InitStyleOption((Sonnet__DictionaryComboBox*)self, (QStyleOptionComboBox*)option);
}

void k_sonnet__dictionarycombobox_qbase_init_style_option(void* self, void* option) {
    Sonnet__DictionaryComboBox_QBaseInitStyleOption((Sonnet__DictionaryComboBox*)self, (QStyleOptionComboBox*)option);
}

void k_sonnet__dictionarycombobox_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnInitStyleOption((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

int32_t k_sonnet__dictionarycombobox_dev_type(void* self) {
    return Sonnet__DictionaryComboBox_DevType((Sonnet__DictionaryComboBox*)self);
}

int32_t k_sonnet__dictionarycombobox_qbase_dev_type(void* self) {
    return Sonnet__DictionaryComboBox_QBaseDevType((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_dev_type(void* self, int32_t (*callback)()) {
    Sonnet__DictionaryComboBox_OnDevType((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_set_visible(void* self, bool visible) {
    Sonnet__DictionaryComboBox_SetVisible((Sonnet__DictionaryComboBox*)self, visible);
}

void k_sonnet__dictionarycombobox_qbase_set_visible(void* self, bool visible) {
    Sonnet__DictionaryComboBox_QBaseSetVisible((Sonnet__DictionaryComboBox*)self, visible);
}

void k_sonnet__dictionarycombobox_on_set_visible(void* self, void (*callback)(void*, bool)) {
    Sonnet__DictionaryComboBox_OnSetVisible((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

int32_t k_sonnet__dictionarycombobox_height_for_width(void* self, int param1) {
    return Sonnet__DictionaryComboBox_HeightForWidth((Sonnet__DictionaryComboBox*)self, param1);
}

int32_t k_sonnet__dictionarycombobox_qbase_height_for_width(void* self, int param1) {
    return Sonnet__DictionaryComboBox_QBaseHeightForWidth((Sonnet__DictionaryComboBox*)self, param1);
}

void k_sonnet__dictionarycombobox_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    Sonnet__DictionaryComboBox_OnHeightForWidth((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

bool k_sonnet__dictionarycombobox_has_height_for_width(void* self) {
    return Sonnet__DictionaryComboBox_HasHeightForWidth((Sonnet__DictionaryComboBox*)self);
}

bool k_sonnet__dictionarycombobox_qbase_has_height_for_width(void* self) {
    return Sonnet__DictionaryComboBox_QBaseHasHeightForWidth((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_has_height_for_width(void* self, bool (*callback)()) {
    Sonnet__DictionaryComboBox_OnHasHeightForWidth((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

QPaintEngine* k_sonnet__dictionarycombobox_paint_engine(void* self) {
    return Sonnet__DictionaryComboBox_PaintEngine((Sonnet__DictionaryComboBox*)self);
}

QPaintEngine* k_sonnet__dictionarycombobox_qbase_paint_engine(void* self) {
    return Sonnet__DictionaryComboBox_QBasePaintEngine((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    Sonnet__DictionaryComboBox_OnPaintEngine((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_mouse_double_click_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_MouseDoubleClickEvent((Sonnet__DictionaryComboBox*)self, (QMouseEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_mouse_double_click_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseMouseDoubleClickEvent((Sonnet__DictionaryComboBox*)self, (QMouseEvent*)event);
}

void k_sonnet__dictionarycombobox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnMouseDoubleClickEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_mouse_move_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_MouseMoveEvent((Sonnet__DictionaryComboBox*)self, (QMouseEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_mouse_move_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseMouseMoveEvent((Sonnet__DictionaryComboBox*)self, (QMouseEvent*)event);
}

void k_sonnet__dictionarycombobox_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnMouseMoveEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_enter_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_EnterEvent((Sonnet__DictionaryComboBox*)self, (QEnterEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_enter_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseEnterEvent((Sonnet__DictionaryComboBox*)self, (QEnterEvent*)event);
}

void k_sonnet__dictionarycombobox_on_enter_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnEnterEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_leave_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_LeaveEvent((Sonnet__DictionaryComboBox*)self, (QEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_leave_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseLeaveEvent((Sonnet__DictionaryComboBox*)self, (QEvent*)event);
}

void k_sonnet__dictionarycombobox_on_leave_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnLeaveEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_move_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_MoveEvent((Sonnet__DictionaryComboBox*)self, (QMoveEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_move_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseMoveEvent((Sonnet__DictionaryComboBox*)self, (QMoveEvent*)event);
}

void k_sonnet__dictionarycombobox_on_move_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnMoveEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_close_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_CloseEvent((Sonnet__DictionaryComboBox*)self, (QCloseEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_close_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseCloseEvent((Sonnet__DictionaryComboBox*)self, (QCloseEvent*)event);
}

void k_sonnet__dictionarycombobox_on_close_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnCloseEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_tablet_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_TabletEvent((Sonnet__DictionaryComboBox*)self, (QTabletEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_tablet_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseTabletEvent((Sonnet__DictionaryComboBox*)self, (QTabletEvent*)event);
}

void k_sonnet__dictionarycombobox_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnTabletEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_action_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_ActionEvent((Sonnet__DictionaryComboBox*)self, (QActionEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_action_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseActionEvent((Sonnet__DictionaryComboBox*)self, (QActionEvent*)event);
}

void k_sonnet__dictionarycombobox_on_action_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnActionEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_drag_enter_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_DragEnterEvent((Sonnet__DictionaryComboBox*)self, (QDragEnterEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_drag_enter_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseDragEnterEvent((Sonnet__DictionaryComboBox*)self, (QDragEnterEvent*)event);
}

void k_sonnet__dictionarycombobox_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnDragEnterEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_drag_move_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_DragMoveEvent((Sonnet__DictionaryComboBox*)self, (QDragMoveEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_drag_move_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseDragMoveEvent((Sonnet__DictionaryComboBox*)self, (QDragMoveEvent*)event);
}

void k_sonnet__dictionarycombobox_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnDragMoveEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_drag_leave_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_DragLeaveEvent((Sonnet__DictionaryComboBox*)self, (QDragLeaveEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_drag_leave_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseDragLeaveEvent((Sonnet__DictionaryComboBox*)self, (QDragLeaveEvent*)event);
}

void k_sonnet__dictionarycombobox_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnDragLeaveEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_drop_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_DropEvent((Sonnet__DictionaryComboBox*)self, (QDropEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_drop_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseDropEvent((Sonnet__DictionaryComboBox*)self, (QDropEvent*)event);
}

void k_sonnet__dictionarycombobox_on_drop_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnDropEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

bool k_sonnet__dictionarycombobox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return Sonnet__DictionaryComboBox_NativeEvent((Sonnet__DictionaryComboBox*)self, qstring(eventType), message, result);
}

bool k_sonnet__dictionarycombobox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return Sonnet__DictionaryComboBox_QBaseNativeEvent((Sonnet__DictionaryComboBox*)self, qstring(eventType), message, result);
}

void k_sonnet__dictionarycombobox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    Sonnet__DictionaryComboBox_OnNativeEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

int32_t k_sonnet__dictionarycombobox_metric(void* self, int32_t param1) {
    return Sonnet__DictionaryComboBox_Metric((Sonnet__DictionaryComboBox*)self, param1);
}

int32_t k_sonnet__dictionarycombobox_qbase_metric(void* self, int32_t param1) {
    return Sonnet__DictionaryComboBox_QBaseMetric((Sonnet__DictionaryComboBox*)self, param1);
}

void k_sonnet__dictionarycombobox_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    Sonnet__DictionaryComboBox_OnMetric((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_init_painter(void* self, void* painter) {
    Sonnet__DictionaryComboBox_InitPainter((Sonnet__DictionaryComboBox*)self, (QPainter*)painter);
}

void k_sonnet__dictionarycombobox_qbase_init_painter(void* self, void* painter) {
    Sonnet__DictionaryComboBox_QBaseInitPainter((Sonnet__DictionaryComboBox*)self, (QPainter*)painter);
}

void k_sonnet__dictionarycombobox_on_init_painter(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnInitPainter((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

QPaintDevice* k_sonnet__dictionarycombobox_redirected(void* self, void* offset) {
    return Sonnet__DictionaryComboBox_Redirected((Sonnet__DictionaryComboBox*)self, (QPoint*)offset);
}

QPaintDevice* k_sonnet__dictionarycombobox_qbase_redirected(void* self, void* offset) {
    return Sonnet__DictionaryComboBox_QBaseRedirected((Sonnet__DictionaryComboBox*)self, (QPoint*)offset);
}

void k_sonnet__dictionarycombobox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnRedirected((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

QPainter* k_sonnet__dictionarycombobox_shared_painter(void* self) {
    return Sonnet__DictionaryComboBox_SharedPainter((Sonnet__DictionaryComboBox*)self);
}

QPainter* k_sonnet__dictionarycombobox_qbase_shared_painter(void* self) {
    return Sonnet__DictionaryComboBox_QBaseSharedPainter((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_shared_painter(void* self, QPainter* (*callback)()) {
    Sonnet__DictionaryComboBox_OnSharedPainter((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

bool k_sonnet__dictionarycombobox_focus_next_prev_child(void* self, bool next) {
    return Sonnet__DictionaryComboBox_FocusNextPrevChild((Sonnet__DictionaryComboBox*)self, next);
}

bool k_sonnet__dictionarycombobox_qbase_focus_next_prev_child(void* self, bool next) {
    return Sonnet__DictionaryComboBox_QBaseFocusNextPrevChild((Sonnet__DictionaryComboBox*)self, next);
}

void k_sonnet__dictionarycombobox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    Sonnet__DictionaryComboBox_OnFocusNextPrevChild((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

bool k_sonnet__dictionarycombobox_event_filter(void* self, void* watched, void* event) {
    return Sonnet__DictionaryComboBox_EventFilter((Sonnet__DictionaryComboBox*)self, (QObject*)watched, (QEvent*)event);
}

bool k_sonnet__dictionarycombobox_qbase_event_filter(void* self, void* watched, void* event) {
    return Sonnet__DictionaryComboBox_QBaseEventFilter((Sonnet__DictionaryComboBox*)self, (QObject*)watched, (QEvent*)event);
}

void k_sonnet__dictionarycombobox_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Sonnet__DictionaryComboBox_OnEventFilter((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_timer_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_TimerEvent((Sonnet__DictionaryComboBox*)self, (QTimerEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_timer_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseTimerEvent((Sonnet__DictionaryComboBox*)self, (QTimerEvent*)event);
}

void k_sonnet__dictionarycombobox_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnTimerEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_child_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_ChildEvent((Sonnet__DictionaryComboBox*)self, (QChildEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_child_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseChildEvent((Sonnet__DictionaryComboBox*)self, (QChildEvent*)event);
}

void k_sonnet__dictionarycombobox_on_child_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnChildEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_custom_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_CustomEvent((Sonnet__DictionaryComboBox*)self, (QEvent*)event);
}

void k_sonnet__dictionarycombobox_qbase_custom_event(void* self, void* event) {
    Sonnet__DictionaryComboBox_QBaseCustomEvent((Sonnet__DictionaryComboBox*)self, (QEvent*)event);
}

void k_sonnet__dictionarycombobox_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnCustomEvent((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_connect_notify(void* self, void* signal) {
    Sonnet__DictionaryComboBox_ConnectNotify((Sonnet__DictionaryComboBox*)self, (QMetaMethod*)signal);
}

void k_sonnet__dictionarycombobox_qbase_connect_notify(void* self, void* signal) {
    Sonnet__DictionaryComboBox_QBaseConnectNotify((Sonnet__DictionaryComboBox*)self, (QMetaMethod*)signal);
}

void k_sonnet__dictionarycombobox_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnConnectNotify((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_disconnect_notify(void* self, void* signal) {
    Sonnet__DictionaryComboBox_DisconnectNotify((Sonnet__DictionaryComboBox*)self, (QMetaMethod*)signal);
}

void k_sonnet__dictionarycombobox_qbase_disconnect_notify(void* self, void* signal) {
    Sonnet__DictionaryComboBox_QBaseDisconnectNotify((Sonnet__DictionaryComboBox*)self, (QMetaMethod*)signal);
}

void k_sonnet__dictionarycombobox_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnDisconnectNotify((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_update_micro_focus(void* self) {
    Sonnet__DictionaryComboBox_UpdateMicroFocus((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_qbase_update_micro_focus(void* self) {
    Sonnet__DictionaryComboBox_QBaseUpdateMicroFocus((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_update_micro_focus(void* self, void (*callback)()) {
    Sonnet__DictionaryComboBox_OnUpdateMicroFocus((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_create(void* self) {
    Sonnet__DictionaryComboBox_Create((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_qbase_create(void* self) {
    Sonnet__DictionaryComboBox_QBaseCreate((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_create(void* self, void (*callback)()) {
    Sonnet__DictionaryComboBox_OnCreate((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_destroy(void* self) {
    Sonnet__DictionaryComboBox_Destroy((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_qbase_destroy(void* self) {
    Sonnet__DictionaryComboBox_QBaseDestroy((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_destroy(void* self, void (*callback)()) {
    Sonnet__DictionaryComboBox_OnDestroy((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

bool k_sonnet__dictionarycombobox_focus_next_child(void* self) {
    return Sonnet__DictionaryComboBox_FocusNextChild((Sonnet__DictionaryComboBox*)self);
}

bool k_sonnet__dictionarycombobox_qbase_focus_next_child(void* self) {
    return Sonnet__DictionaryComboBox_QBaseFocusNextChild((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_focus_next_child(void* self, bool (*callback)()) {
    Sonnet__DictionaryComboBox_OnFocusNextChild((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

bool k_sonnet__dictionarycombobox_focus_previous_child(void* self) {
    return Sonnet__DictionaryComboBox_FocusPreviousChild((Sonnet__DictionaryComboBox*)self);
}

bool k_sonnet__dictionarycombobox_qbase_focus_previous_child(void* self) {
    return Sonnet__DictionaryComboBox_QBaseFocusPreviousChild((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_focus_previous_child(void* self, bool (*callback)()) {
    Sonnet__DictionaryComboBox_OnFocusPreviousChild((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

QObject* k_sonnet__dictionarycombobox_sender(void* self) {
    return Sonnet__DictionaryComboBox_Sender((Sonnet__DictionaryComboBox*)self);
}

QObject* k_sonnet__dictionarycombobox_qbase_sender(void* self) {
    return Sonnet__DictionaryComboBox_QBaseSender((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_sender(void* self, QObject* (*callback)()) {
    Sonnet__DictionaryComboBox_OnSender((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

int32_t k_sonnet__dictionarycombobox_sender_signal_index(void* self) {
    return Sonnet__DictionaryComboBox_SenderSignalIndex((Sonnet__DictionaryComboBox*)self);
}

int32_t k_sonnet__dictionarycombobox_qbase_sender_signal_index(void* self) {
    return Sonnet__DictionaryComboBox_QBaseSenderSignalIndex((Sonnet__DictionaryComboBox*)self);
}

void k_sonnet__dictionarycombobox_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Sonnet__DictionaryComboBox_OnSenderSignalIndex((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

int32_t k_sonnet__dictionarycombobox_receivers(void* self, const char* signal) {
    return Sonnet__DictionaryComboBox_Receivers((Sonnet__DictionaryComboBox*)self, signal);
}

int32_t k_sonnet__dictionarycombobox_qbase_receivers(void* self, const char* signal) {
    return Sonnet__DictionaryComboBox_QBaseReceivers((Sonnet__DictionaryComboBox*)self, signal);
}

void k_sonnet__dictionarycombobox_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Sonnet__DictionaryComboBox_OnReceivers((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

bool k_sonnet__dictionarycombobox_is_signal_connected(void* self, void* signal) {
    return Sonnet__DictionaryComboBox_IsSignalConnected((Sonnet__DictionaryComboBox*)self, (QMetaMethod*)signal);
}

bool k_sonnet__dictionarycombobox_qbase_is_signal_connected(void* self, void* signal) {
    return Sonnet__DictionaryComboBox_QBaseIsSignalConnected((Sonnet__DictionaryComboBox*)self, (QMetaMethod*)signal);
}

void k_sonnet__dictionarycombobox_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Sonnet__DictionaryComboBox_OnIsSignalConnected((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

double k_sonnet__dictionarycombobox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return Sonnet__DictionaryComboBox_GetDecodedMetricF((Sonnet__DictionaryComboBox*)self, metricA, metricB);
}

double k_sonnet__dictionarycombobox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return Sonnet__DictionaryComboBox_QBaseGetDecodedMetricF((Sonnet__DictionaryComboBox*)self, metricA, metricB);
}

void k_sonnet__dictionarycombobox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    Sonnet__DictionaryComboBox_OnGetDecodedMetricF((Sonnet__DictionaryComboBox*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_sonnet__dictionarycombobox_delete(void* self) {
    Sonnet__DictionaryComboBox_Delete((Sonnet__DictionaryComboBox*)(self));
}
