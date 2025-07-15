#include "libqabstractitemmodel.hpp"
#include "libqevent.hpp"
#include "libqcombobox.hpp"
#include "libqfont.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqfontcombobox.hpp"
#include "libqfontcombobox.h"

QFontComboBox* q_fontcombobox_new(void* parent) {
    return QFontComboBox_new((QWidget*)parent);
}

QFontComboBox* q_fontcombobox_new2() {
    return QFontComboBox_new2();
}

const QMetaObject* q_fontcombobox_meta_object(void* self) {
    return QFontComboBox_MetaObject((QFontComboBox*)self);
}

void* q_fontcombobox_metacast(void* self, const char* param1) {
    return QFontComboBox_Metacast((QFontComboBox*)self, param1);
}

int32_t q_fontcombobox_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFontComboBox_Metacall((QFontComboBox*)self, param1, param2, param3);
}

void q_fontcombobox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QFontComboBox_OnMetacall((QFontComboBox*)self, (intptr_t)slot);
}

int32_t q_fontcombobox_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFontComboBox_QBaseMetacall((QFontComboBox*)self, param1, param2, param3);
}

const char* q_fontcombobox_tr(const char* s) {
    libqt_string _str = QFontComboBox_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontcombobox_set_writing_system(void* self, int64_t writingSystem) {
    QFontComboBox_SetWritingSystem((QFontComboBox*)self, writingSystem);
}

int64_t q_fontcombobox_writing_system(void* self) {
    return QFontComboBox_WritingSystem((QFontComboBox*)self);
}

void q_fontcombobox_set_font_filters(void* self, int64_t filters) {
    QFontComboBox_SetFontFilters((QFontComboBox*)self, filters);
}

int64_t q_fontcombobox_font_filters(void* self) {
    return QFontComboBox_FontFilters((QFontComboBox*)self);
}

QFont* q_fontcombobox_current_font(void* self) {
    return QFontComboBox_CurrentFont((QFontComboBox*)self);
}

QSize* q_fontcombobox_size_hint(void* self) {
    return QFontComboBox_SizeHint((QFontComboBox*)self);
}

void q_fontcombobox_on_size_hint(void* self, QSize* (*slot)()) {
    QFontComboBox_OnSizeHint((QFontComboBox*)self, (intptr_t)slot);
}

QSize* q_fontcombobox_qbase_size_hint(void* self) {
    return QFontComboBox_QBaseSizeHint((QFontComboBox*)self);
}

void q_fontcombobox_set_sample_text_for_system(void* self, int64_t writingSystem, const char* sampleText) {
    QFontComboBox_SetSampleTextForSystem((QFontComboBox*)self, writingSystem, qstring(sampleText));
}

const char* q_fontcombobox_sample_text_for_system(void* self, int64_t writingSystem) {
    libqt_string _str = QFontComboBox_SampleTextForSystem((QFontComboBox*)self, writingSystem);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontcombobox_set_sample_text_for_font(void* self, const char* fontFamily, const char* sampleText) {
    QFontComboBox_SetSampleTextForFont((QFontComboBox*)self, qstring(fontFamily), qstring(sampleText));
}

const char* q_fontcombobox_sample_text_for_font(void* self, const char* fontFamily) {
    libqt_string _str = QFontComboBox_SampleTextForFont((QFontComboBox*)self, qstring(fontFamily));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontcombobox_set_display_font(void* self, const char* fontFamily, void* font) {
    QFontComboBox_SetDisplayFont((QFontComboBox*)self, qstring(fontFamily), (QFont*)font);
}

void q_fontcombobox_set_current_font(void* self, void* f) {
    QFontComboBox_SetCurrentFont((QFontComboBox*)self, (QFont*)f);
}

void q_fontcombobox_current_font_changed(void* self, void* f) {
    QFontComboBox_CurrentFontChanged((QFontComboBox*)self, (QFont*)f);
}

void q_fontcombobox_on_current_font_changed(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_Connect_CurrentFontChanged((QFontComboBox*)self, (intptr_t)slot);
}

bool q_fontcombobox_event(void* self, void* e) {
    return QFontComboBox_Event((QFontComboBox*)self, (QEvent*)e);
}

void q_fontcombobox_on_event(void* self, bool (*slot)(void*, void*)) {
    QFontComboBox_OnEvent((QFontComboBox*)self, (intptr_t)slot);
}

bool q_fontcombobox_qbase_event(void* self, void* e) {
    return QFontComboBox_QBaseEvent((QFontComboBox*)self, (QEvent*)e);
}

const char* q_fontcombobox_tr2(const char* s, const char* c) {
    libqt_string _str = QFontComboBox_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fontcombobox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QFontComboBox_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_fontcombobox_max_visible_items(void* self) {
    return QComboBox_MaxVisibleItems((QComboBox*)self);
}

void q_fontcombobox_set_max_visible_items(void* self, int maxItems) {
    QComboBox_SetMaxVisibleItems((QComboBox*)self, maxItems);
}

int32_t q_fontcombobox_count(void* self) {
    return QComboBox_Count((QComboBox*)self);
}

void q_fontcombobox_set_max_count(void* self, int max) {
    QComboBox_SetMaxCount((QComboBox*)self, max);
}

int32_t q_fontcombobox_max_count(void* self) {
    return QComboBox_MaxCount((QComboBox*)self);
}

bool q_fontcombobox_duplicates_enabled(void* self) {
    return QComboBox_DuplicatesEnabled((QComboBox*)self);
}

void q_fontcombobox_set_duplicates_enabled(void* self, bool enable) {
    QComboBox_SetDuplicatesEnabled((QComboBox*)self, enable);
}

void q_fontcombobox_set_frame(void* self, bool frame) {
    QComboBox_SetFrame((QComboBox*)self, frame);
}

bool q_fontcombobox_has_frame(void* self) {
    return QComboBox_HasFrame((QComboBox*)self);
}

int32_t q_fontcombobox_find_text(void* self, const char* text) {
    return QComboBox_FindText((QComboBox*)self, qstring(text));
}

int32_t q_fontcombobox_find_data(void* self, void* data) {
    return QComboBox_FindData((QComboBox*)self, (QVariant*)data);
}

int64_t q_fontcombobox_insert_policy(void* self) {
    return QComboBox_InsertPolicy((QComboBox*)self);
}

void q_fontcombobox_set_insert_policy(void* self, int64_t policy) {
    QComboBox_SetInsertPolicy((QComboBox*)self, policy);
}

int64_t q_fontcombobox_size_adjust_policy(void* self) {
    return QComboBox_SizeAdjustPolicy((QComboBox*)self);
}

void q_fontcombobox_set_size_adjust_policy(void* self, int64_t policy) {
    QComboBox_SetSizeAdjustPolicy((QComboBox*)self, policy);
}

int32_t q_fontcombobox_minimum_contents_length(void* self) {
    return QComboBox_MinimumContentsLength((QComboBox*)self);
}

void q_fontcombobox_set_minimum_contents_length(void* self, int characters) {
    QComboBox_SetMinimumContentsLength((QComboBox*)self, characters);
}

QSize* q_fontcombobox_icon_size(void* self) {
    return QComboBox_IconSize((QComboBox*)self);
}

void q_fontcombobox_set_icon_size(void* self, void* size) {
    QComboBox_SetIconSize((QComboBox*)self, (QSize*)size);
}

void q_fontcombobox_set_placeholder_text(void* self, const char* placeholderText) {
    QComboBox_SetPlaceholderText((QComboBox*)self, qstring(placeholderText));
}

const char* q_fontcombobox_placeholder_text(void* self) {
    libqt_string _str = QComboBox_PlaceholderText((QComboBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_fontcombobox_is_editable(void* self) {
    return QComboBox_IsEditable((QComboBox*)self);
}

void q_fontcombobox_set_editable(void* self, bool editable) {
    QComboBox_SetEditable((QComboBox*)self, editable);
}

void q_fontcombobox_set_line_edit(void* self, void* edit) {
    QComboBox_SetLineEdit((QComboBox*)self, (QLineEdit*)edit);
}

QLineEdit* q_fontcombobox_line_edit(void* self) {
    return QComboBox_LineEdit((QComboBox*)self);
}

void q_fontcombobox_set_validator(void* self, void* v) {
    QComboBox_SetValidator((QComboBox*)self, (QValidator*)v);
}

const QValidator* q_fontcombobox_validator(void* self) {
    return QComboBox_Validator((QComboBox*)self);
}

void q_fontcombobox_set_completer(void* self, void* c) {
    QComboBox_SetCompleter((QComboBox*)self, (QCompleter*)c);
}

QCompleter* q_fontcombobox_completer(void* self) {
    return QComboBox_Completer((QComboBox*)self);
}

QAbstractItemDelegate* q_fontcombobox_item_delegate(void* self) {
    return QComboBox_ItemDelegate((QComboBox*)self);
}

void q_fontcombobox_set_item_delegate(void* self, void* delegate) {
    QComboBox_SetItemDelegate((QComboBox*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemModel* q_fontcombobox_model(void* self) {
    return QComboBox_Model((QComboBox*)self);
}

QModelIndex* q_fontcombobox_root_model_index(void* self) {
    return QComboBox_RootModelIndex((QComboBox*)self);
}

void q_fontcombobox_set_root_model_index(void* self, void* index) {
    QComboBox_SetRootModelIndex((QComboBox*)self, (QModelIndex*)index);
}

int32_t q_fontcombobox_model_column(void* self) {
    return QComboBox_ModelColumn((QComboBox*)self);
}

void q_fontcombobox_set_model_column(void* self, int visibleColumn) {
    QComboBox_SetModelColumn((QComboBox*)self, visibleColumn);
}

int32_t q_fontcombobox_current_index(void* self) {
    return QComboBox_CurrentIndex((QComboBox*)self);
}

const char* q_fontcombobox_current_text(void* self) {
    libqt_string _str = QComboBox_CurrentText((QComboBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* q_fontcombobox_current_data(void* self) {
    return QComboBox_CurrentData((QComboBox*)self);
}

const char* q_fontcombobox_item_text(void* self, int index) {
    libqt_string _str = QComboBox_ItemText((QComboBox*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIcon* q_fontcombobox_item_icon(void* self, int index) {
    return QComboBox_ItemIcon((QComboBox*)self, index);
}

QVariant* q_fontcombobox_item_data(void* self, int index) {
    return QComboBox_ItemData((QComboBox*)self, index);
}

void q_fontcombobox_add_item(void* self, const char* text) {
    QComboBox_AddItem((QComboBox*)self, qstring(text));
}

void q_fontcombobox_add_item2(void* self, void* icon, const char* text) {
    QComboBox_AddItem2((QComboBox*)self, (QIcon*)icon, qstring(text));
}

void q_fontcombobox_add_items(void* self, const char* texts[]) {
    size_t texts_len = libqt_strv_length(texts);
    libqt_string* texts_qstr = malloc(texts_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < texts_len; ++_i) {
        texts_qstr[_i] = qstring(texts[_i]);
    }
    libqt_list texts_list = qlist(texts_qstr, texts_len);
    QComboBox_AddItems((QComboBox*)self, texts_list);
}

void q_fontcombobox_insert_item(void* self, int index, const char* text) {
    QComboBox_InsertItem((QComboBox*)self, index, qstring(text));
}

void q_fontcombobox_insert_item2(void* self, int index, void* icon, const char* text) {
    QComboBox_InsertItem2((QComboBox*)self, index, (QIcon*)icon, qstring(text));
}

void q_fontcombobox_insert_items(void* self, int index, const char* texts[]) {
    size_t texts_len = libqt_strv_length(texts);
    libqt_string* texts_qstr = malloc(texts_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < texts_len; ++_i) {
        texts_qstr[_i] = qstring(texts[_i]);
    }
    libqt_list texts_list = qlist(texts_qstr, texts_len);
    QComboBox_InsertItems((QComboBox*)self, index, texts_list);
}

void q_fontcombobox_insert_separator(void* self, int index) {
    QComboBox_InsertSeparator((QComboBox*)self, index);
}

void q_fontcombobox_remove_item(void* self, int index) {
    QComboBox_RemoveItem((QComboBox*)self, index);
}

void q_fontcombobox_set_item_text(void* self, int index, const char* text) {
    QComboBox_SetItemText((QComboBox*)self, index, qstring(text));
}

void q_fontcombobox_set_item_icon(void* self, int index, void* icon) {
    QComboBox_SetItemIcon((QComboBox*)self, index, (QIcon*)icon);
}

void q_fontcombobox_set_item_data(void* self, int index, void* value) {
    QComboBox_SetItemData((QComboBox*)self, index, (QVariant*)value);
}

QAbstractItemView* q_fontcombobox_view(void* self) {
    return QComboBox_View((QComboBox*)self);
}

void q_fontcombobox_set_view(void* self, void* itemView) {
    QComboBox_SetView((QComboBox*)self, (QAbstractItemView*)itemView);
}

QVariant* q_fontcombobox_input_method_query2(void* self, int64_t query, void* argument) {
    return QComboBox_InputMethodQuery2((QComboBox*)self, query, (QVariant*)argument);
}

void q_fontcombobox_clear(void* self) {
    QComboBox_Clear((QComboBox*)self);
}

void q_fontcombobox_clear_edit_text(void* self) {
    QComboBox_ClearEditText((QComboBox*)self);
}

void q_fontcombobox_set_edit_text(void* self, const char* text) {
    QComboBox_SetEditText((QComboBox*)self, qstring(text));
}

void q_fontcombobox_set_current_index(void* self, int index) {
    QComboBox_SetCurrentIndex((QComboBox*)self, index);
}

void q_fontcombobox_set_current_text(void* self, const char* text) {
    QComboBox_SetCurrentText((QComboBox*)self, qstring(text));
}

void q_fontcombobox_edit_text_changed(void* self, const char* param1) {
    QComboBox_EditTextChanged((QComboBox*)self, qstring(param1));
}

void q_fontcombobox_on_edit_text_changed(void* self, void (*slot)(void*, const char*)) {
    QComboBox_Connect_EditTextChanged((QComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_activated(void* self, int index) {
    QComboBox_Activated((QComboBox*)self, index);
}

void q_fontcombobox_on_activated(void* self, void (*slot)(void*, int)) {
    QComboBox_Connect_Activated((QComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_text_activated(void* self, const char* param1) {
    QComboBox_TextActivated((QComboBox*)self, qstring(param1));
}

void q_fontcombobox_on_text_activated(void* self, void (*slot)(void*, const char*)) {
    QComboBox_Connect_TextActivated((QComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_highlighted(void* self, int index) {
    QComboBox_Highlighted((QComboBox*)self, index);
}

void q_fontcombobox_on_highlighted(void* self, void (*slot)(void*, int)) {
    QComboBox_Connect_Highlighted((QComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_text_highlighted(void* self, const char* param1) {
    QComboBox_TextHighlighted((QComboBox*)self, qstring(param1));
}

void q_fontcombobox_on_text_highlighted(void* self, void (*slot)(void*, const char*)) {
    QComboBox_Connect_TextHighlighted((QComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_current_index_changed(void* self, int index) {
    QComboBox_CurrentIndexChanged((QComboBox*)self, index);
}

void q_fontcombobox_on_current_index_changed(void* self, void (*slot)(void*, int)) {
    QComboBox_Connect_CurrentIndexChanged((QComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_current_text_changed(void* self, const char* param1) {
    QComboBox_CurrentTextChanged((QComboBox*)self, qstring(param1));
}

void q_fontcombobox_on_current_text_changed(void* self, void (*slot)(void*, const char*)) {
    QComboBox_Connect_CurrentTextChanged((QComboBox*)self, (intptr_t)slot);
}

int32_t q_fontcombobox_find_text2(void* self, const char* text, int64_t flags) {
    return QComboBox_FindText2((QComboBox*)self, qstring(text), flags);
}

int32_t q_fontcombobox_find_data2(void* self, void* data, int role) {
    return QComboBox_FindData2((QComboBox*)self, (QVariant*)data, role);
}

int32_t q_fontcombobox_find_data3(void* self, void* data, int role, int64_t flags) {
    return QComboBox_FindData3((QComboBox*)self, (QVariant*)data, role, flags);
}

QVariant* q_fontcombobox_current_data1(void* self, int role) {
    return QComboBox_CurrentData1((QComboBox*)self, role);
}

QVariant* q_fontcombobox_item_data2(void* self, int index, int role) {
    return QComboBox_ItemData2((QComboBox*)self, index, role);
}

void q_fontcombobox_add_item22(void* self, const char* text, void* userData) {
    QComboBox_AddItem22((QComboBox*)self, qstring(text), (QVariant*)userData);
}

void q_fontcombobox_add_item3(void* self, void* icon, const char* text, void* userData) {
    QComboBox_AddItem3((QComboBox*)self, (QIcon*)icon, qstring(text), (QVariant*)userData);
}

void q_fontcombobox_insert_item3(void* self, int index, const char* text, void* userData) {
    QComboBox_InsertItem3((QComboBox*)self, index, qstring(text), (QVariant*)userData);
}

void q_fontcombobox_insert_item4(void* self, int index, void* icon, const char* text, void* userData) {
    QComboBox_InsertItem4((QComboBox*)self, index, (QIcon*)icon, qstring(text), (QVariant*)userData);
}

void q_fontcombobox_set_item_data3(void* self, int index, void* value, int role) {
    QComboBox_SetItemData3((QComboBox*)self, index, (QVariant*)value, role);
}

uintptr_t q_fontcombobox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_fontcombobox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_fontcombobox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_fontcombobox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_fontcombobox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_fontcombobox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_fontcombobox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_fontcombobox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_fontcombobox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_fontcombobox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_fontcombobox_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_fontcombobox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_fontcombobox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_fontcombobox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_fontcombobox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_fontcombobox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_fontcombobox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_fontcombobox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_fontcombobox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_fontcombobox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_fontcombobox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_fontcombobox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_fontcombobox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_fontcombobox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_fontcombobox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_fontcombobox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_fontcombobox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_fontcombobox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_fontcombobox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_fontcombobox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_fontcombobox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_fontcombobox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_fontcombobox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_fontcombobox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_fontcombobox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_fontcombobox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_fontcombobox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_fontcombobox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_fontcombobox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_fontcombobox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_fontcombobox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_fontcombobox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_fontcombobox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_fontcombobox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_fontcombobox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_fontcombobox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_fontcombobox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_fontcombobox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_fontcombobox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_fontcombobox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_fontcombobox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_fontcombobox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_fontcombobox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_fontcombobox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_fontcombobox_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_fontcombobox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_fontcombobox_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_fontcombobox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_fontcombobox_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_fontcombobox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_fontcombobox_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_fontcombobox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_fontcombobox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_fontcombobox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_fontcombobox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_fontcombobox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_fontcombobox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_fontcombobox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_fontcombobox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_fontcombobox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_fontcombobox_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_fontcombobox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_fontcombobox_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_fontcombobox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_fontcombobox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_fontcombobox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_fontcombobox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_fontcombobox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_fontcombobox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_fontcombobox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_fontcombobox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_fontcombobox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_fontcombobox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_fontcombobox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_fontcombobox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_fontcombobox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_fontcombobox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_fontcombobox_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_fontcombobox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_fontcombobox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_fontcombobox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_fontcombobox_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_fontcombobox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_fontcombobox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_fontcombobox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_fontcombobox_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_fontcombobox_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_fontcombobox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_fontcombobox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_fontcombobox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fontcombobox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontcombobox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_fontcombobox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_fontcombobox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_fontcombobox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontcombobox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_fontcombobox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontcombobox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_fontcombobox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontcombobox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_fontcombobox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_fontcombobox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_fontcombobox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_fontcombobox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontcombobox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_fontcombobox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_fontcombobox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_fontcombobox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontcombobox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_fontcombobox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fontcombobox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontcombobox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_fontcombobox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontcombobox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_fontcombobox_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_fontcombobox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_fontcombobox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_fontcombobox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_fontcombobox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_fontcombobox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_fontcombobox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_fontcombobox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_fontcombobox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_fontcombobox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_fontcombobox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_fontcombobox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_fontcombobox_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_fontcombobox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_fontcombobox_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_fontcombobox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_fontcombobox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_fontcombobox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_fontcombobox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_fontcombobox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_fontcombobox_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_fontcombobox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_fontcombobox_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_fontcombobox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_fontcombobox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_fontcombobox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_fontcombobox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_fontcombobox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_fontcombobox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_fontcombobox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_fontcombobox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_fontcombobox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_fontcombobox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_fontcombobox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_fontcombobox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_fontcombobox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_fontcombobox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_fontcombobox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_fontcombobox_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_fontcombobox_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_fontcombobox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_fontcombobox_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_fontcombobox_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_fontcombobox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_fontcombobox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_fontcombobox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_fontcombobox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_fontcombobox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_fontcombobox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_fontcombobox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_fontcombobox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_fontcombobox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_fontcombobox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_fontcombobox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_fontcombobox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_fontcombobox_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_fontcombobox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_fontcombobox_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_fontcombobox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_fontcombobox_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_fontcombobox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_fontcombobox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_fontcombobox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_fontcombobox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_fontcombobox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_fontcombobox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_fontcombobox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_fontcombobox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_fontcombobox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_fontcombobox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_fontcombobox_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_fontcombobox_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_fontcombobox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_fontcombobox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_fontcombobox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_fontcombobox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_fontcombobox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_fontcombobox_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_fontcombobox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_fontcombobox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_fontcombobox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_fontcombobox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_fontcombobox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_fontcombobox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_fontcombobox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_fontcombobox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_fontcombobox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_fontcombobox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_fontcombobox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_fontcombobox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_fontcombobox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_fontcombobox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_fontcombobox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_fontcombobox_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_fontcombobox_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_fontcombobox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_fontcombobox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_fontcombobox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_fontcombobox_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_fontcombobox_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_fontcombobox_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_fontcombobox_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_fontcombobox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_fontcombobox_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_fontcombobox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_fontcombobox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_fontcombobox_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_fontcombobox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_fontcombobox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_fontcombobox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_fontcombobox_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_fontcombobox_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_fontcombobox_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_fontcombobox_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_fontcombobox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_fontcombobox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_fontcombobox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_fontcombobox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_fontcombobox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_fontcombobox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_fontcombobox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_fontcombobox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_fontcombobox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_fontcombobox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_fontcombobox_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_fontcombobox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_fontcombobox_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_fontcombobox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_fontcombobox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_fontcombobox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_fontcombobox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_fontcombobox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_fontcombobox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_fontcombobox_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_fontcombobox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_fontcombobox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_fontcombobox_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_fontcombobox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_fontcombobox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_fontcombobox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_fontcombobox_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_fontcombobox_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_fontcombobox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_fontcombobox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_fontcombobox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_fontcombobox_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_fontcombobox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_fontcombobox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_fontcombobox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontcombobox_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_fontcombobox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_fontcombobox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_fontcombobox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_fontcombobox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_fontcombobox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_fontcombobox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_fontcombobox_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_fontcombobox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_fontcombobox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_fontcombobox_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_fontcombobox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_fontcombobox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_fontcombobox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_fontcombobox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_fontcombobox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_fontcombobox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_fontcombobox_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_fontcombobox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_fontcombobox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_fontcombobox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_fontcombobox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_fontcombobox_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_fontcombobox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_fontcombobox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_fontcombobox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_fontcombobox_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_fontcombobox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_fontcombobox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_fontcombobox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_fontcombobox_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_fontcombobox_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_fontcombobox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_fontcombobox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_fontcombobox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_fontcombobox_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_fontcombobox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_fontcombobox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_fontcombobox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_fontcombobox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_fontcombobox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_fontcombobox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_fontcombobox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_fontcombobox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_fontcombobox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_fontcombobox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_fontcombobox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_fontcombobox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_fontcombobox_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_fontcombobox_set_model(void* self, void* model) {
    QFontComboBox_SetModel((QFontComboBox*)self, (QAbstractItemModel*)model);
}

void q_fontcombobox_qbase_set_model(void* self, void* model) {
    QFontComboBox_QBaseSetModel((QFontComboBox*)self, (QAbstractItemModel*)model);
}

void q_fontcombobox_on_set_model(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnSetModel((QFontComboBox*)self, (intptr_t)slot);
}

QSize* q_fontcombobox_minimum_size_hint(void* self) {
    return QFontComboBox_MinimumSizeHint((QFontComboBox*)self);
}

QSize* q_fontcombobox_qbase_minimum_size_hint(void* self) {
    return QFontComboBox_QBaseMinimumSizeHint((QFontComboBox*)self);
}

void q_fontcombobox_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QFontComboBox_OnMinimumSizeHint((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_show_popup(void* self) {
    QFontComboBox_ShowPopup((QFontComboBox*)self);
}

void q_fontcombobox_qbase_show_popup(void* self) {
    QFontComboBox_QBaseShowPopup((QFontComboBox*)self);
}

void q_fontcombobox_on_show_popup(void* self, void (*slot)()) {
    QFontComboBox_OnShowPopup((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_hide_popup(void* self) {
    QFontComboBox_HidePopup((QFontComboBox*)self);
}

void q_fontcombobox_qbase_hide_popup(void* self) {
    QFontComboBox_QBaseHidePopup((QFontComboBox*)self);
}

void q_fontcombobox_on_hide_popup(void* self, void (*slot)()) {
    QFontComboBox_OnHidePopup((QFontComboBox*)self, (intptr_t)slot);
}

QVariant* q_fontcombobox_input_method_query(void* self, int64_t param1) {
    return QFontComboBox_InputMethodQuery((QFontComboBox*)self, param1);
}

QVariant* q_fontcombobox_qbase_input_method_query(void* self, int64_t param1) {
    return QFontComboBox_QBaseInputMethodQuery((QFontComboBox*)self, param1);
}

void q_fontcombobox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QFontComboBox_OnInputMethodQuery((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_focus_in_event(void* self, void* e) {
    QFontComboBox_FocusInEvent((QFontComboBox*)self, (QFocusEvent*)e);
}

void q_fontcombobox_qbase_focus_in_event(void* self, void* e) {
    QFontComboBox_QBaseFocusInEvent((QFontComboBox*)self, (QFocusEvent*)e);
}

void q_fontcombobox_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnFocusInEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_focus_out_event(void* self, void* e) {
    QFontComboBox_FocusOutEvent((QFontComboBox*)self, (QFocusEvent*)e);
}

void q_fontcombobox_qbase_focus_out_event(void* self, void* e) {
    QFontComboBox_QBaseFocusOutEvent((QFontComboBox*)self, (QFocusEvent*)e);
}

void q_fontcombobox_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnFocusOutEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_change_event(void* self, void* e) {
    QFontComboBox_ChangeEvent((QFontComboBox*)self, (QEvent*)e);
}

void q_fontcombobox_qbase_change_event(void* self, void* e) {
    QFontComboBox_QBaseChangeEvent((QFontComboBox*)self, (QEvent*)e);
}

void q_fontcombobox_on_change_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnChangeEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_resize_event(void* self, void* e) {
    QFontComboBox_ResizeEvent((QFontComboBox*)self, (QResizeEvent*)e);
}

void q_fontcombobox_qbase_resize_event(void* self, void* e) {
    QFontComboBox_QBaseResizeEvent((QFontComboBox*)self, (QResizeEvent*)e);
}

void q_fontcombobox_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnResizeEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_paint_event(void* self, void* e) {
    QFontComboBox_PaintEvent((QFontComboBox*)self, (QPaintEvent*)e);
}

void q_fontcombobox_qbase_paint_event(void* self, void* e) {
    QFontComboBox_QBasePaintEvent((QFontComboBox*)self, (QPaintEvent*)e);
}

void q_fontcombobox_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnPaintEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_show_event(void* self, void* e) {
    QFontComboBox_ShowEvent((QFontComboBox*)self, (QShowEvent*)e);
}

void q_fontcombobox_qbase_show_event(void* self, void* e) {
    QFontComboBox_QBaseShowEvent((QFontComboBox*)self, (QShowEvent*)e);
}

void q_fontcombobox_on_show_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnShowEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_hide_event(void* self, void* e) {
    QFontComboBox_HideEvent((QFontComboBox*)self, (QHideEvent*)e);
}

void q_fontcombobox_qbase_hide_event(void* self, void* e) {
    QFontComboBox_QBaseHideEvent((QFontComboBox*)self, (QHideEvent*)e);
}

void q_fontcombobox_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnHideEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_mouse_press_event(void* self, void* e) {
    QFontComboBox_MousePressEvent((QFontComboBox*)self, (QMouseEvent*)e);
}

void q_fontcombobox_qbase_mouse_press_event(void* self, void* e) {
    QFontComboBox_QBaseMousePressEvent((QFontComboBox*)self, (QMouseEvent*)e);
}

void q_fontcombobox_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnMousePressEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_mouse_release_event(void* self, void* e) {
    QFontComboBox_MouseReleaseEvent((QFontComboBox*)self, (QMouseEvent*)e);
}

void q_fontcombobox_qbase_mouse_release_event(void* self, void* e) {
    QFontComboBox_QBaseMouseReleaseEvent((QFontComboBox*)self, (QMouseEvent*)e);
}

void q_fontcombobox_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnMouseReleaseEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_key_press_event(void* self, void* e) {
    QFontComboBox_KeyPressEvent((QFontComboBox*)self, (QKeyEvent*)e);
}

void q_fontcombobox_qbase_key_press_event(void* self, void* e) {
    QFontComboBox_QBaseKeyPressEvent((QFontComboBox*)self, (QKeyEvent*)e);
}

void q_fontcombobox_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnKeyPressEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_key_release_event(void* self, void* e) {
    QFontComboBox_KeyReleaseEvent((QFontComboBox*)self, (QKeyEvent*)e);
}

void q_fontcombobox_qbase_key_release_event(void* self, void* e) {
    QFontComboBox_QBaseKeyReleaseEvent((QFontComboBox*)self, (QKeyEvent*)e);
}

void q_fontcombobox_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnKeyReleaseEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_wheel_event(void* self, void* e) {
    QFontComboBox_WheelEvent((QFontComboBox*)self, (QWheelEvent*)e);
}

void q_fontcombobox_qbase_wheel_event(void* self, void* e) {
    QFontComboBox_QBaseWheelEvent((QFontComboBox*)self, (QWheelEvent*)e);
}

void q_fontcombobox_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnWheelEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_context_menu_event(void* self, void* e) {
    QFontComboBox_ContextMenuEvent((QFontComboBox*)self, (QContextMenuEvent*)e);
}

void q_fontcombobox_qbase_context_menu_event(void* self, void* e) {
    QFontComboBox_QBaseContextMenuEvent((QFontComboBox*)self, (QContextMenuEvent*)e);
}

void q_fontcombobox_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnContextMenuEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_input_method_event(void* self, void* param1) {
    QFontComboBox_InputMethodEvent((QFontComboBox*)self, (QInputMethodEvent*)param1);
}

void q_fontcombobox_qbase_input_method_event(void* self, void* param1) {
    QFontComboBox_QBaseInputMethodEvent((QFontComboBox*)self, (QInputMethodEvent*)param1);
}

void q_fontcombobox_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnInputMethodEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_init_style_option(void* self, void* option) {
    QFontComboBox_InitStyleOption((QFontComboBox*)self, (QStyleOptionComboBox*)option);
}

void q_fontcombobox_qbase_init_style_option(void* self, void* option) {
    QFontComboBox_QBaseInitStyleOption((QFontComboBox*)self, (QStyleOptionComboBox*)option);
}

void q_fontcombobox_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnInitStyleOption((QFontComboBox*)self, (intptr_t)slot);
}

int32_t q_fontcombobox_dev_type(void* self) {
    return QFontComboBox_DevType((QFontComboBox*)self);
}

int32_t q_fontcombobox_qbase_dev_type(void* self) {
    return QFontComboBox_QBaseDevType((QFontComboBox*)self);
}

void q_fontcombobox_on_dev_type(void* self, int32_t (*slot)()) {
    QFontComboBox_OnDevType((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_set_visible(void* self, bool visible) {
    QFontComboBox_SetVisible((QFontComboBox*)self, visible);
}

void q_fontcombobox_qbase_set_visible(void* self, bool visible) {
    QFontComboBox_QBaseSetVisible((QFontComboBox*)self, visible);
}

void q_fontcombobox_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QFontComboBox_OnSetVisible((QFontComboBox*)self, (intptr_t)slot);
}

int32_t q_fontcombobox_height_for_width(void* self, int param1) {
    return QFontComboBox_HeightForWidth((QFontComboBox*)self, param1);
}

int32_t q_fontcombobox_qbase_height_for_width(void* self, int param1) {
    return QFontComboBox_QBaseHeightForWidth((QFontComboBox*)self, param1);
}

void q_fontcombobox_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QFontComboBox_OnHeightForWidth((QFontComboBox*)self, (intptr_t)slot);
}

bool q_fontcombobox_has_height_for_width(void* self) {
    return QFontComboBox_HasHeightForWidth((QFontComboBox*)self);
}

bool q_fontcombobox_qbase_has_height_for_width(void* self) {
    return QFontComboBox_QBaseHasHeightForWidth((QFontComboBox*)self);
}

void q_fontcombobox_on_has_height_for_width(void* self, bool (*slot)()) {
    QFontComboBox_OnHasHeightForWidth((QFontComboBox*)self, (intptr_t)slot);
}

QPaintEngine* q_fontcombobox_paint_engine(void* self) {
    return QFontComboBox_PaintEngine((QFontComboBox*)self);
}

QPaintEngine* q_fontcombobox_qbase_paint_engine(void* self) {
    return QFontComboBox_QBasePaintEngine((QFontComboBox*)self);
}

void q_fontcombobox_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QFontComboBox_OnPaintEngine((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_mouse_double_click_event(void* self, void* event) {
    QFontComboBox_MouseDoubleClickEvent((QFontComboBox*)self, (QMouseEvent*)event);
}

void q_fontcombobox_qbase_mouse_double_click_event(void* self, void* event) {
    QFontComboBox_QBaseMouseDoubleClickEvent((QFontComboBox*)self, (QMouseEvent*)event);
}

void q_fontcombobox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnMouseDoubleClickEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_mouse_move_event(void* self, void* event) {
    QFontComboBox_MouseMoveEvent((QFontComboBox*)self, (QMouseEvent*)event);
}

void q_fontcombobox_qbase_mouse_move_event(void* self, void* event) {
    QFontComboBox_QBaseMouseMoveEvent((QFontComboBox*)self, (QMouseEvent*)event);
}

void q_fontcombobox_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnMouseMoveEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_enter_event(void* self, void* event) {
    QFontComboBox_EnterEvent((QFontComboBox*)self, (QEnterEvent*)event);
}

void q_fontcombobox_qbase_enter_event(void* self, void* event) {
    QFontComboBox_QBaseEnterEvent((QFontComboBox*)self, (QEnterEvent*)event);
}

void q_fontcombobox_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnEnterEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_leave_event(void* self, void* event) {
    QFontComboBox_LeaveEvent((QFontComboBox*)self, (QEvent*)event);
}

void q_fontcombobox_qbase_leave_event(void* self, void* event) {
    QFontComboBox_QBaseLeaveEvent((QFontComboBox*)self, (QEvent*)event);
}

void q_fontcombobox_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnLeaveEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_move_event(void* self, void* event) {
    QFontComboBox_MoveEvent((QFontComboBox*)self, (QMoveEvent*)event);
}

void q_fontcombobox_qbase_move_event(void* self, void* event) {
    QFontComboBox_QBaseMoveEvent((QFontComboBox*)self, (QMoveEvent*)event);
}

void q_fontcombobox_on_move_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnMoveEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_close_event(void* self, void* event) {
    QFontComboBox_CloseEvent((QFontComboBox*)self, (QCloseEvent*)event);
}

void q_fontcombobox_qbase_close_event(void* self, void* event) {
    QFontComboBox_QBaseCloseEvent((QFontComboBox*)self, (QCloseEvent*)event);
}

void q_fontcombobox_on_close_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnCloseEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_tablet_event(void* self, void* event) {
    QFontComboBox_TabletEvent((QFontComboBox*)self, (QTabletEvent*)event);
}

void q_fontcombobox_qbase_tablet_event(void* self, void* event) {
    QFontComboBox_QBaseTabletEvent((QFontComboBox*)self, (QTabletEvent*)event);
}

void q_fontcombobox_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnTabletEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_action_event(void* self, void* event) {
    QFontComboBox_ActionEvent((QFontComboBox*)self, (QActionEvent*)event);
}

void q_fontcombobox_qbase_action_event(void* self, void* event) {
    QFontComboBox_QBaseActionEvent((QFontComboBox*)self, (QActionEvent*)event);
}

void q_fontcombobox_on_action_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnActionEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_drag_enter_event(void* self, void* event) {
    QFontComboBox_DragEnterEvent((QFontComboBox*)self, (QDragEnterEvent*)event);
}

void q_fontcombobox_qbase_drag_enter_event(void* self, void* event) {
    QFontComboBox_QBaseDragEnterEvent((QFontComboBox*)self, (QDragEnterEvent*)event);
}

void q_fontcombobox_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnDragEnterEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_drag_move_event(void* self, void* event) {
    QFontComboBox_DragMoveEvent((QFontComboBox*)self, (QDragMoveEvent*)event);
}

void q_fontcombobox_qbase_drag_move_event(void* self, void* event) {
    QFontComboBox_QBaseDragMoveEvent((QFontComboBox*)self, (QDragMoveEvent*)event);
}

void q_fontcombobox_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnDragMoveEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_drag_leave_event(void* self, void* event) {
    QFontComboBox_DragLeaveEvent((QFontComboBox*)self, (QDragLeaveEvent*)event);
}

void q_fontcombobox_qbase_drag_leave_event(void* self, void* event) {
    QFontComboBox_QBaseDragLeaveEvent((QFontComboBox*)self, (QDragLeaveEvent*)event);
}

void q_fontcombobox_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnDragLeaveEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_drop_event(void* self, void* event) {
    QFontComboBox_DropEvent((QFontComboBox*)self, (QDropEvent*)event);
}

void q_fontcombobox_qbase_drop_event(void* self, void* event) {
    QFontComboBox_QBaseDropEvent((QFontComboBox*)self, (QDropEvent*)event);
}

void q_fontcombobox_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnDropEvent((QFontComboBox*)self, (intptr_t)slot);
}

bool q_fontcombobox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QFontComboBox_NativeEvent((QFontComboBox*)self, qstring(eventType), message, result);
}

bool q_fontcombobox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QFontComboBox_QBaseNativeEvent((QFontComboBox*)self, qstring(eventType), message, result);
}

void q_fontcombobox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QFontComboBox_OnNativeEvent((QFontComboBox*)self, (intptr_t)slot);
}

int32_t q_fontcombobox_metric(void* self, int64_t param1) {
    return QFontComboBox_Metric((QFontComboBox*)self, param1);
}

int32_t q_fontcombobox_qbase_metric(void* self, int64_t param1) {
    return QFontComboBox_QBaseMetric((QFontComboBox*)self, param1);
}

void q_fontcombobox_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QFontComboBox_OnMetric((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_init_painter(void* self, void* painter) {
    QFontComboBox_InitPainter((QFontComboBox*)self, (QPainter*)painter);
}

void q_fontcombobox_qbase_init_painter(void* self, void* painter) {
    QFontComboBox_QBaseInitPainter((QFontComboBox*)self, (QPainter*)painter);
}

void q_fontcombobox_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnInitPainter((QFontComboBox*)self, (intptr_t)slot);
}

QPaintDevice* q_fontcombobox_redirected(void* self, void* offset) {
    return QFontComboBox_Redirected((QFontComboBox*)self, (QPoint*)offset);
}

QPaintDevice* q_fontcombobox_qbase_redirected(void* self, void* offset) {
    return QFontComboBox_QBaseRedirected((QFontComboBox*)self, (QPoint*)offset);
}

void q_fontcombobox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QFontComboBox_OnRedirected((QFontComboBox*)self, (intptr_t)slot);
}

QPainter* q_fontcombobox_shared_painter(void* self) {
    return QFontComboBox_SharedPainter((QFontComboBox*)self);
}

QPainter* q_fontcombobox_qbase_shared_painter(void* self) {
    return QFontComboBox_QBaseSharedPainter((QFontComboBox*)self);
}

void q_fontcombobox_on_shared_painter(void* self, QPainter* (*slot)()) {
    QFontComboBox_OnSharedPainter((QFontComboBox*)self, (intptr_t)slot);
}

bool q_fontcombobox_focus_next_prev_child(void* self, bool next) {
    return QFontComboBox_FocusNextPrevChild((QFontComboBox*)self, next);
}

bool q_fontcombobox_qbase_focus_next_prev_child(void* self, bool next) {
    return QFontComboBox_QBaseFocusNextPrevChild((QFontComboBox*)self, next);
}

void q_fontcombobox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QFontComboBox_OnFocusNextPrevChild((QFontComboBox*)self, (intptr_t)slot);
}

bool q_fontcombobox_event_filter(void* self, void* watched, void* event) {
    return QFontComboBox_EventFilter((QFontComboBox*)self, (QObject*)watched, (QEvent*)event);
}

bool q_fontcombobox_qbase_event_filter(void* self, void* watched, void* event) {
    return QFontComboBox_QBaseEventFilter((QFontComboBox*)self, (QObject*)watched, (QEvent*)event);
}

void q_fontcombobox_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QFontComboBox_OnEventFilter((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_timer_event(void* self, void* event) {
    QFontComboBox_TimerEvent((QFontComboBox*)self, (QTimerEvent*)event);
}

void q_fontcombobox_qbase_timer_event(void* self, void* event) {
    QFontComboBox_QBaseTimerEvent((QFontComboBox*)self, (QTimerEvent*)event);
}

void q_fontcombobox_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnTimerEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_child_event(void* self, void* event) {
    QFontComboBox_ChildEvent((QFontComboBox*)self, (QChildEvent*)event);
}

void q_fontcombobox_qbase_child_event(void* self, void* event) {
    QFontComboBox_QBaseChildEvent((QFontComboBox*)self, (QChildEvent*)event);
}

void q_fontcombobox_on_child_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnChildEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_custom_event(void* self, void* event) {
    QFontComboBox_CustomEvent((QFontComboBox*)self, (QEvent*)event);
}

void q_fontcombobox_qbase_custom_event(void* self, void* event) {
    QFontComboBox_QBaseCustomEvent((QFontComboBox*)self, (QEvent*)event);
}

void q_fontcombobox_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnCustomEvent((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_connect_notify(void* self, void* signal) {
    QFontComboBox_ConnectNotify((QFontComboBox*)self, (QMetaMethod*)signal);
}

void q_fontcombobox_qbase_connect_notify(void* self, void* signal) {
    QFontComboBox_QBaseConnectNotify((QFontComboBox*)self, (QMetaMethod*)signal);
}

void q_fontcombobox_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnConnectNotify((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_disconnect_notify(void* self, void* signal) {
    QFontComboBox_DisconnectNotify((QFontComboBox*)self, (QMetaMethod*)signal);
}

void q_fontcombobox_qbase_disconnect_notify(void* self, void* signal) {
    QFontComboBox_QBaseDisconnectNotify((QFontComboBox*)self, (QMetaMethod*)signal);
}

void q_fontcombobox_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QFontComboBox_OnDisconnectNotify((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_update_micro_focus(void* self) {
    QFontComboBox_UpdateMicroFocus((QFontComboBox*)self);
}

void q_fontcombobox_qbase_update_micro_focus(void* self) {
    QFontComboBox_QBaseUpdateMicroFocus((QFontComboBox*)self);
}

void q_fontcombobox_on_update_micro_focus(void* self, void (*slot)()) {
    QFontComboBox_OnUpdateMicroFocus((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_create(void* self) {
    QFontComboBox_Create((QFontComboBox*)self);
}

void q_fontcombobox_qbase_create(void* self) {
    QFontComboBox_QBaseCreate((QFontComboBox*)self);
}

void q_fontcombobox_on_create(void* self, void (*slot)()) {
    QFontComboBox_OnCreate((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_destroy(void* self) {
    QFontComboBox_Destroy((QFontComboBox*)self);
}

void q_fontcombobox_qbase_destroy(void* self) {
    QFontComboBox_QBaseDestroy((QFontComboBox*)self);
}

void q_fontcombobox_on_destroy(void* self, void (*slot)()) {
    QFontComboBox_OnDestroy((QFontComboBox*)self, (intptr_t)slot);
}

bool q_fontcombobox_focus_next_child(void* self) {
    return QFontComboBox_FocusNextChild((QFontComboBox*)self);
}

bool q_fontcombobox_qbase_focus_next_child(void* self) {
    return QFontComboBox_QBaseFocusNextChild((QFontComboBox*)self);
}

void q_fontcombobox_on_focus_next_child(void* self, bool (*slot)()) {
    QFontComboBox_OnFocusNextChild((QFontComboBox*)self, (intptr_t)slot);
}

bool q_fontcombobox_focus_previous_child(void* self) {
    return QFontComboBox_FocusPreviousChild((QFontComboBox*)self);
}

bool q_fontcombobox_qbase_focus_previous_child(void* self) {
    return QFontComboBox_QBaseFocusPreviousChild((QFontComboBox*)self);
}

void q_fontcombobox_on_focus_previous_child(void* self, bool (*slot)()) {
    QFontComboBox_OnFocusPreviousChild((QFontComboBox*)self, (intptr_t)slot);
}

QObject* q_fontcombobox_sender(void* self) {
    return QFontComboBox_Sender((QFontComboBox*)self);
}

QObject* q_fontcombobox_qbase_sender(void* self) {
    return QFontComboBox_QBaseSender((QFontComboBox*)self);
}

void q_fontcombobox_on_sender(void* self, QObject* (*slot)()) {
    QFontComboBox_OnSender((QFontComboBox*)self, (intptr_t)slot);
}

int32_t q_fontcombobox_sender_signal_index(void* self) {
    return QFontComboBox_SenderSignalIndex((QFontComboBox*)self);
}

int32_t q_fontcombobox_qbase_sender_signal_index(void* self) {
    return QFontComboBox_QBaseSenderSignalIndex((QFontComboBox*)self);
}

void q_fontcombobox_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QFontComboBox_OnSenderSignalIndex((QFontComboBox*)self, (intptr_t)slot);
}

int32_t q_fontcombobox_receivers(void* self, const char* signal) {
    return QFontComboBox_Receivers((QFontComboBox*)self, signal);
}

int32_t q_fontcombobox_qbase_receivers(void* self, const char* signal) {
    return QFontComboBox_QBaseReceivers((QFontComboBox*)self, signal);
}

void q_fontcombobox_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QFontComboBox_OnReceivers((QFontComboBox*)self, (intptr_t)slot);
}

bool q_fontcombobox_is_signal_connected(void* self, void* signal) {
    return QFontComboBox_IsSignalConnected((QFontComboBox*)self, (QMetaMethod*)signal);
}

bool q_fontcombobox_qbase_is_signal_connected(void* self, void* signal) {
    return QFontComboBox_QBaseIsSignalConnected((QFontComboBox*)self, (QMetaMethod*)signal);
}

void q_fontcombobox_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QFontComboBox_OnIsSignalConnected((QFontComboBox*)self, (intptr_t)slot);
}

double q_fontcombobox_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QFontComboBox_GetDecodedMetricF((QFontComboBox*)self, metricA, metricB);
}

double q_fontcombobox_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QFontComboBox_QBaseGetDecodedMetricF((QFontComboBox*)self, metricA, metricB);
}

void q_fontcombobox_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QFontComboBox_OnGetDecodedMetricF((QFontComboBox*)self, (intptr_t)slot);
}

void q_fontcombobox_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_fontcombobox_delete(void* self) {
    QFontComboBox_Delete((QFontComboBox*)(self));
}
