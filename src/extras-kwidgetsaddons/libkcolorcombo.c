#include "../libqabstractitemmodel.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
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
#include "libkcolorcombo.hpp"
#include "libkcolorcombo.h"

KColorCombo* k_colorcombo_new(void* parent) {
    return KColorCombo_new((QWidget*)parent);
}

KColorCombo* k_colorcombo_new2() {
    return KColorCombo_new2();
}

const QMetaObject* k_colorcombo_meta_object(void* self) {
    return KColorCombo_MetaObject((KColorCombo*)self);
}

void k_colorcombo_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KColorCombo_OnMetaObject((KColorCombo*)self, (intptr_t)callback);
}

const QMetaObject* k_colorcombo_qbase_meta_object(void* self) {
    return KColorCombo_QBaseMetaObject((KColorCombo*)self);
}

void* k_colorcombo_metacast(void* self, const char* param1) {
    return KColorCombo_Metacast((KColorCombo*)self, param1);
}

void k_colorcombo_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KColorCombo_OnMetacast((KColorCombo*)self, (intptr_t)callback);
}

void* k_colorcombo_qbase_metacast(void* self, const char* param1) {
    return KColorCombo_QBaseMetacast((KColorCombo*)self, param1);
}

int32_t k_colorcombo_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KColorCombo_Metacall((KColorCombo*)self, param1, param2, param3);
}

void k_colorcombo_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KColorCombo_OnMetacall((KColorCombo*)self, (intptr_t)callback);
}

int32_t k_colorcombo_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KColorCombo_QBaseMetacall((KColorCombo*)self, param1, param2, param3);
}

const char* k_colorcombo_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorcombo_set_color(void* self, void* col) {
    KColorCombo_SetColor((KColorCombo*)self, (QColor*)col);
}

QColor* k_colorcombo_color(void* self) {
    return KColorCombo_Color((KColorCombo*)self);
}

bool k_colorcombo_is_custom_color(void* self) {
    return KColorCombo_IsCustomColor((KColorCombo*)self);
}

void k_colorcombo_set_colors(void* self, libqt_list /* of QColor* */ colors) {
    KColorCombo_SetColors((KColorCombo*)self, colors);
}

libqt_list /* of QColor* */ k_colorcombo_colors(void* self) {
    libqt_list _arr = KColorCombo_Colors((KColorCombo*)self);
    return _arr;
}

void k_colorcombo_show_empty_list(void* self) {
    KColorCombo_ShowEmptyList((KColorCombo*)self);
}

void k_colorcombo_activated(void* self, void* col) {
    KColorCombo_Activated((KColorCombo*)self, (QColor*)col);
}

void k_colorcombo_on_activated(void* self, void (*callback)(void*, void*)) {
    KColorCombo_Connect_Activated((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_highlighted(void* self, void* col) {
    KColorCombo_Highlighted((KColorCombo*)self, (QColor*)col);
}

void k_colorcombo_on_highlighted(void* self, void (*callback)(void*, void*)) {
    KColorCombo_Connect_Highlighted((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_paint_event(void* self, void* event) {
    KColorCombo_PaintEvent((KColorCombo*)self, (QPaintEvent*)event);
}

void k_colorcombo_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnPaintEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_qbase_paint_event(void* self, void* event) {
    KColorCombo_QBasePaintEvent((KColorCombo*)self, (QPaintEvent*)event);
}

const char* k_colorcombo_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_colorcombo_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_colorcombo_max_visible_items(void* self) {
    return QComboBox_MaxVisibleItems((QComboBox*)self);
}

void k_colorcombo_set_max_visible_items(void* self, int maxItems) {
    QComboBox_SetMaxVisibleItems((QComboBox*)self, maxItems);
}

int32_t k_colorcombo_count(void* self) {
    return QComboBox_Count((QComboBox*)self);
}

void k_colorcombo_set_max_count(void* self, int max) {
    QComboBox_SetMaxCount((QComboBox*)self, max);
}

int32_t k_colorcombo_max_count(void* self) {
    return QComboBox_MaxCount((QComboBox*)self);
}

bool k_colorcombo_duplicates_enabled(void* self) {
    return QComboBox_DuplicatesEnabled((QComboBox*)self);
}

void k_colorcombo_set_duplicates_enabled(void* self, bool enable) {
    QComboBox_SetDuplicatesEnabled((QComboBox*)self, enable);
}

void k_colorcombo_set_frame(void* self, bool frame) {
    QComboBox_SetFrame((QComboBox*)self, frame);
}

bool k_colorcombo_has_frame(void* self) {
    return QComboBox_HasFrame((QComboBox*)self);
}

int32_t k_colorcombo_find_text(void* self, const char* text) {
    return QComboBox_FindText((QComboBox*)self, qstring(text));
}

int32_t k_colorcombo_find_data(void* self, void* data) {
    return QComboBox_FindData((QComboBox*)self, (QVariant*)data);
}

int32_t k_colorcombo_insert_policy(void* self) {
    return QComboBox_InsertPolicy((QComboBox*)self);
}

void k_colorcombo_set_insert_policy(void* self, int32_t policy) {
    QComboBox_SetInsertPolicy((QComboBox*)self, policy);
}

int32_t k_colorcombo_size_adjust_policy(void* self) {
    return QComboBox_SizeAdjustPolicy((QComboBox*)self);
}

void k_colorcombo_set_size_adjust_policy(void* self, int32_t policy) {
    QComboBox_SetSizeAdjustPolicy((QComboBox*)self, policy);
}

int32_t k_colorcombo_minimum_contents_length(void* self) {
    return QComboBox_MinimumContentsLength((QComboBox*)self);
}

void k_colorcombo_set_minimum_contents_length(void* self, int characters) {
    QComboBox_SetMinimumContentsLength((QComboBox*)self, characters);
}

QSize* k_colorcombo_icon_size(void* self) {
    return QComboBox_IconSize((QComboBox*)self);
}

void k_colorcombo_set_icon_size(void* self, void* size) {
    QComboBox_SetIconSize((QComboBox*)self, (QSize*)size);
}

void k_colorcombo_set_placeholder_text(void* self, const char* placeholderText) {
    QComboBox_SetPlaceholderText((QComboBox*)self, qstring(placeholderText));
}

const char* k_colorcombo_placeholder_text(void* self) {
    libqt_string _str = QComboBox_PlaceholderText((QComboBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_colorcombo_is_editable(void* self) {
    return QComboBox_IsEditable((QComboBox*)self);
}

void k_colorcombo_set_editable(void* self, bool editable) {
    QComboBox_SetEditable((QComboBox*)self, editable);
}

void k_colorcombo_set_line_edit(void* self, void* edit) {
    QComboBox_SetLineEdit((QComboBox*)self, (QLineEdit*)edit);
}

QLineEdit* k_colorcombo_line_edit(void* self) {
    return QComboBox_LineEdit((QComboBox*)self);
}

void k_colorcombo_set_validator(void* self, void* v) {
    QComboBox_SetValidator((QComboBox*)self, (QValidator*)v);
}

const QValidator* k_colorcombo_validator(void* self) {
    return QComboBox_Validator((QComboBox*)self);
}

void k_colorcombo_set_completer(void* self, void* c) {
    QComboBox_SetCompleter((QComboBox*)self, (QCompleter*)c);
}

QCompleter* k_colorcombo_completer(void* self) {
    return QComboBox_Completer((QComboBox*)self);
}

QAbstractItemDelegate* k_colorcombo_item_delegate(void* self) {
    return QComboBox_ItemDelegate((QComboBox*)self);
}

void k_colorcombo_set_item_delegate(void* self, void* delegate) {
    QComboBox_SetItemDelegate((QComboBox*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemModel* k_colorcombo_model(void* self) {
    return QComboBox_Model((QComboBox*)self);
}

QModelIndex* k_colorcombo_root_model_index(void* self) {
    return QComboBox_RootModelIndex((QComboBox*)self);
}

void k_colorcombo_set_root_model_index(void* self, void* index) {
    QComboBox_SetRootModelIndex((QComboBox*)self, (QModelIndex*)index);
}

int32_t k_colorcombo_model_column(void* self) {
    return QComboBox_ModelColumn((QComboBox*)self);
}

void k_colorcombo_set_model_column(void* self, int visibleColumn) {
    QComboBox_SetModelColumn((QComboBox*)self, visibleColumn);
}

int32_t k_colorcombo_current_index(void* self) {
    return QComboBox_CurrentIndex((QComboBox*)self);
}

const char* k_colorcombo_current_text(void* self) {
    libqt_string _str = QComboBox_CurrentText((QComboBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* k_colorcombo_current_data(void* self) {
    return QComboBox_CurrentData((QComboBox*)self);
}

const char* k_colorcombo_item_text(void* self, int index) {
    libqt_string _str = QComboBox_ItemText((QComboBox*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIcon* k_colorcombo_item_icon(void* self, int index) {
    return QComboBox_ItemIcon((QComboBox*)self, index);
}

QVariant* k_colorcombo_item_data(void* self, int index) {
    return QComboBox_ItemData((QComboBox*)self, index);
}

void k_colorcombo_add_item(void* self, const char* text) {
    QComboBox_AddItem((QComboBox*)self, qstring(text));
}

void k_colorcombo_add_item2(void* self, void* icon, const char* text) {
    QComboBox_AddItem2((QComboBox*)self, (QIcon*)icon, qstring(text));
}

void k_colorcombo_add_items(void* self, const char* texts[static 1]) {
    size_t texts_len = libqt_strv_length(texts);
    libqt_string* texts_qstr = (libqt_string*)malloc(texts_len * sizeof(libqt_string));
    if (texts_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_colorcombo_add_items\n");
        abort();
    }
    for (size_t i = 0; i < texts_len; ++i) {
        texts_qstr[i] = qstring(texts[i]);
    }
    libqt_list texts_list = qlist(texts_qstr, texts_len);
    QComboBox_AddItems((QComboBox*)self, texts_list);
    free(texts_qstr);
}

void k_colorcombo_insert_item(void* self, int index, const char* text) {
    QComboBox_InsertItem((QComboBox*)self, index, qstring(text));
}

void k_colorcombo_insert_item2(void* self, int index, void* icon, const char* text) {
    QComboBox_InsertItem2((QComboBox*)self, index, (QIcon*)icon, qstring(text));
}

void k_colorcombo_insert_items(void* self, int index, const char* texts[static 1]) {
    size_t texts_len = libqt_strv_length(texts);
    libqt_string* texts_qstr = (libqt_string*)malloc(texts_len * sizeof(libqt_string));
    if (texts_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_colorcombo_insert_items\n");
        abort();
    }
    for (size_t i = 0; i < texts_len; ++i) {
        texts_qstr[i] = qstring(texts[i]);
    }
    libqt_list texts_list = qlist(texts_qstr, texts_len);
    QComboBox_InsertItems((QComboBox*)self, index, texts_list);
    free(texts_qstr);
}

void k_colorcombo_insert_separator(void* self, int index) {
    QComboBox_InsertSeparator((QComboBox*)self, index);
}

void k_colorcombo_remove_item(void* self, int index) {
    QComboBox_RemoveItem((QComboBox*)self, index);
}

void k_colorcombo_set_item_text(void* self, int index, const char* text) {
    QComboBox_SetItemText((QComboBox*)self, index, qstring(text));
}

void k_colorcombo_set_item_icon(void* self, int index, void* icon) {
    QComboBox_SetItemIcon((QComboBox*)self, index, (QIcon*)icon);
}

void k_colorcombo_set_item_data(void* self, int index, void* value) {
    QComboBox_SetItemData((QComboBox*)self, index, (QVariant*)value);
}

QAbstractItemView* k_colorcombo_view(void* self) {
    return QComboBox_View((QComboBox*)self);
}

void k_colorcombo_set_view(void* self, void* itemView) {
    QComboBox_SetView((QComboBox*)self, (QAbstractItemView*)itemView);
}

QVariant* k_colorcombo_input_method_query2(void* self, int32_t query, void* argument) {
    return QComboBox_InputMethodQuery2((QComboBox*)self, query, (QVariant*)argument);
}

void k_colorcombo_clear(void* self) {
    QComboBox_Clear((QComboBox*)self);
}

void k_colorcombo_clear_edit_text(void* self) {
    QComboBox_ClearEditText((QComboBox*)self);
}

void k_colorcombo_set_edit_text(void* self, const char* text) {
    QComboBox_SetEditText((QComboBox*)self, qstring(text));
}

void k_colorcombo_set_current_index(void* self, int index) {
    QComboBox_SetCurrentIndex((QComboBox*)self, index);
}

void k_colorcombo_set_current_text(void* self, const char* text) {
    QComboBox_SetCurrentText((QComboBox*)self, qstring(text));
}

void k_colorcombo_edit_text_changed(void* self, const char* param1) {
    QComboBox_EditTextChanged((QComboBox*)self, qstring(param1));
}

void k_colorcombo_on_edit_text_changed(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_EditTextChanged((QComboBox*)self, (intptr_t)callback);
}

void k_colorcombo_text_activated(void* self, const char* param1) {
    QComboBox_TextActivated((QComboBox*)self, qstring(param1));
}

void k_colorcombo_on_text_activated(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_TextActivated((QComboBox*)self, (intptr_t)callback);
}

void k_colorcombo_text_highlighted(void* self, const char* param1) {
    QComboBox_TextHighlighted((QComboBox*)self, qstring(param1));
}

void k_colorcombo_on_text_highlighted(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_TextHighlighted((QComboBox*)self, (intptr_t)callback);
}

void k_colorcombo_current_index_changed(void* self, int index) {
    QComboBox_CurrentIndexChanged((QComboBox*)self, index);
}

void k_colorcombo_on_current_index_changed(void* self, void (*callback)(void*, int)) {
    QComboBox_Connect_CurrentIndexChanged((QComboBox*)self, (intptr_t)callback);
}

void k_colorcombo_current_text_changed(void* self, const char* param1) {
    QComboBox_CurrentTextChanged((QComboBox*)self, qstring(param1));
}

void k_colorcombo_on_current_text_changed(void* self, void (*callback)(void*, const char*)) {
    QComboBox_Connect_CurrentTextChanged((QComboBox*)self, (intptr_t)callback);
}

int32_t k_colorcombo_find_text2(void* self, const char* text, int32_t flags) {
    return QComboBox_FindText2((QComboBox*)self, qstring(text), flags);
}

int32_t k_colorcombo_find_data2(void* self, void* data, int role) {
    return QComboBox_FindData2((QComboBox*)self, (QVariant*)data, role);
}

int32_t k_colorcombo_find_data3(void* self, void* data, int role, int32_t flags) {
    return QComboBox_FindData3((QComboBox*)self, (QVariant*)data, role, flags);
}

QVariant* k_colorcombo_current_data1(void* self, int role) {
    return QComboBox_CurrentData1((QComboBox*)self, role);
}

QVariant* k_colorcombo_item_data2(void* self, int index, int role) {
    return QComboBox_ItemData2((QComboBox*)self, index, role);
}

void k_colorcombo_add_item22(void* self, const char* text, void* userData) {
    QComboBox_AddItem22((QComboBox*)self, qstring(text), (QVariant*)userData);
}

void k_colorcombo_add_item3(void* self, void* icon, const char* text, void* userData) {
    QComboBox_AddItem3((QComboBox*)self, (QIcon*)icon, qstring(text), (QVariant*)userData);
}

void k_colorcombo_insert_item3(void* self, int index, const char* text, void* userData) {
    QComboBox_InsertItem3((QComboBox*)self, index, qstring(text), (QVariant*)userData);
}

void k_colorcombo_insert_item4(void* self, int index, void* icon, const char* text, void* userData) {
    QComboBox_InsertItem4((QComboBox*)self, index, (QIcon*)icon, qstring(text), (QVariant*)userData);
}

void k_colorcombo_set_item_data3(void* self, int index, void* value, int role) {
    QComboBox_SetItemData3((QComboBox*)self, index, (QVariant*)value, role);
}

uintptr_t k_colorcombo_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_colorcombo_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_colorcombo_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_colorcombo_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_colorcombo_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_colorcombo_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_colorcombo_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_colorcombo_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_colorcombo_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_colorcombo_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_colorcombo_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_colorcombo_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_colorcombo_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_colorcombo_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_colorcombo_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_colorcombo_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_colorcombo_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_colorcombo_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_colorcombo_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_colorcombo_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_colorcombo_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_colorcombo_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_colorcombo_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_colorcombo_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_colorcombo_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_colorcombo_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_colorcombo_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_colorcombo_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_colorcombo_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_colorcombo_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_colorcombo_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_colorcombo_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_colorcombo_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_colorcombo_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_colorcombo_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_colorcombo_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_colorcombo_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_colorcombo_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_colorcombo_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_colorcombo_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_colorcombo_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_colorcombo_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_colorcombo_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_colorcombo_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_colorcombo_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_colorcombo_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_colorcombo_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_colorcombo_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_colorcombo_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_colorcombo_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_colorcombo_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_colorcombo_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_colorcombo_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_colorcombo_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_colorcombo_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_colorcombo_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_colorcombo_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_colorcombo_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_colorcombo_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_colorcombo_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_colorcombo_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_colorcombo_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_colorcombo_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_colorcombo_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_colorcombo_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_colorcombo_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_colorcombo_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_colorcombo_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_colorcombo_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_colorcombo_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_colorcombo_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_colorcombo_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_colorcombo_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_colorcombo_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_colorcombo_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_colorcombo_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_colorcombo_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_colorcombo_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_colorcombo_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_colorcombo_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_colorcombo_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_colorcombo_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_colorcombo_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_colorcombo_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_colorcombo_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_colorcombo_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_colorcombo_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_colorcombo_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_colorcombo_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_colorcombo_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_colorcombo_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_colorcombo_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_colorcombo_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_colorcombo_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_colorcombo_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_colorcombo_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_colorcombo_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_colorcombo_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_colorcombo_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_colorcombo_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_colorcombo_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorcombo_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_colorcombo_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_colorcombo_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_colorcombo_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorcombo_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_colorcombo_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorcombo_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_colorcombo_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorcombo_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_colorcombo_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_colorcombo_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_colorcombo_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_colorcombo_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorcombo_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_colorcombo_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_colorcombo_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_colorcombo_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorcombo_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_colorcombo_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_colorcombo_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorcombo_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_colorcombo_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorcombo_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_colorcombo_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_colorcombo_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_colorcombo_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_colorcombo_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_colorcombo_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_colorcombo_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_colorcombo_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_colorcombo_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_colorcombo_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_colorcombo_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_colorcombo_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_colorcombo_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_colorcombo_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_colorcombo_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_colorcombo_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_colorcombo_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_colorcombo_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_colorcombo_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_colorcombo_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_colorcombo_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_colorcombo_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_colorcombo_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_colorcombo_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_colorcombo_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_colorcombo_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_colorcombo_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_colorcombo_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_colorcombo_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_colorcombo_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_colorcombo_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_colorcombo_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_colorcombo_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_colorcombo_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_colorcombo_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_colorcombo_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_colorcombo_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_colorcombo_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_colorcombo_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_colorcombo_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_colorcombo_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_colorcombo_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_colorcombo_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_colorcombo_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_colorcombo_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_colorcombo_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_colorcombo_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_colorcombo_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_colorcombo_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_colorcombo_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_colorcombo_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_colorcombo_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_colorcombo_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_colorcombo_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_colorcombo_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_colorcombo_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_colorcombo_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_colorcombo_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_colorcombo_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_colorcombo_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_colorcombo_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_colorcombo_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_colorcombo_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_colorcombo_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_colorcombo_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_colorcombo_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_colorcombo_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_colorcombo_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_colorcombo_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_colorcombo_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_colorcombo_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_colorcombo_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_colorcombo_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_colorcombo_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_colorcombo_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_colorcombo_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_colorcombo_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_colorcombo_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_colorcombo_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_colorcombo_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_colorcombo_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_colorcombo_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_colorcombo_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_colorcombo_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_colorcombo_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_colorcombo_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_colorcombo_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_colorcombo_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_colorcombo_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_colorcombo_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_colorcombo_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_colorcombo_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_colorcombo_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_colorcombo_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_colorcombo_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_colorcombo_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_colorcombo_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_colorcombo_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_colorcombo_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_colorcombo_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_colorcombo_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_colorcombo_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_colorcombo_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_colorcombo_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_colorcombo_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_colorcombo_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_colorcombo_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_colorcombo_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_colorcombo_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_colorcombo_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_colorcombo_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_colorcombo_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_colorcombo_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_colorcombo_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_colorcombo_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_colorcombo_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_colorcombo_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_colorcombo_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_colorcombo_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_colorcombo_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_colorcombo_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_colorcombo_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_colorcombo_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_colorcombo_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_colorcombo_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_colorcombo_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_colorcombo_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_colorcombo_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_colorcombo_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_colorcombo_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_colorcombo_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_colorcombo_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_colorcombo_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_colorcombo_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_colorcombo_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_colorcombo_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_colorcombo_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_colorcombo_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_colorcombo_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_colorcombo_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_colorcombo_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_colorcombo_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_colorcombo_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_colorcombo_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_colorcombo_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_colorcombo_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_colorcombo_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_colorcombo_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_colorcombo_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_colorcombo_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorcombo_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_colorcombo_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_colorcombo_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_colorcombo_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_colorcombo_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_colorcombo_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_colorcombo_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_colorcombo_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_colorcombo_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_colorcombo_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_colorcombo_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_colorcombo_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_colorcombo_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_colorcombo_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_colorcombo_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_colorcombo_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_colorcombo_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_colorcombo_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_colorcombo_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_colorcombo_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_colorcombo_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_colorcombo_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_colorcombo_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_colorcombo_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_colorcombo_dynamic_property_names\n");
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

QBindingStorage* k_colorcombo_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_colorcombo_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_colorcombo_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_colorcombo_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_colorcombo_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_colorcombo_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_colorcombo_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_colorcombo_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_colorcombo_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_colorcombo_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_colorcombo_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_colorcombo_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_colorcombo_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_colorcombo_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_colorcombo_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_colorcombo_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_colorcombo_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_colorcombo_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_colorcombo_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_colorcombo_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_colorcombo_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_colorcombo_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_colorcombo_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_colorcombo_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_colorcombo_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_colorcombo_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_colorcombo_set_model(void* self, void* model) {
    KColorCombo_SetModel((KColorCombo*)self, (QAbstractItemModel*)model);
}

void k_colorcombo_qbase_set_model(void* self, void* model) {
    KColorCombo_QBaseSetModel((KColorCombo*)self, (QAbstractItemModel*)model);
}

void k_colorcombo_on_set_model(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnSetModel((KColorCombo*)self, (intptr_t)callback);
}

QSize* k_colorcombo_size_hint(void* self) {
    return KColorCombo_SizeHint((KColorCombo*)self);
}

QSize* k_colorcombo_qbase_size_hint(void* self) {
    return KColorCombo_QBaseSizeHint((KColorCombo*)self);
}

void k_colorcombo_on_size_hint(void* self, QSize* (*callback)()) {
    KColorCombo_OnSizeHint((KColorCombo*)self, (intptr_t)callback);
}

QSize* k_colorcombo_minimum_size_hint(void* self) {
    return KColorCombo_MinimumSizeHint((KColorCombo*)self);
}

QSize* k_colorcombo_qbase_minimum_size_hint(void* self) {
    return KColorCombo_QBaseMinimumSizeHint((KColorCombo*)self);
}

void k_colorcombo_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KColorCombo_OnMinimumSizeHint((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_show_popup(void* self) {
    KColorCombo_ShowPopup((KColorCombo*)self);
}

void k_colorcombo_qbase_show_popup(void* self) {
    KColorCombo_QBaseShowPopup((KColorCombo*)self);
}

void k_colorcombo_on_show_popup(void* self, void (*callback)()) {
    KColorCombo_OnShowPopup((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_hide_popup(void* self) {
    KColorCombo_HidePopup((KColorCombo*)self);
}

void k_colorcombo_qbase_hide_popup(void* self) {
    KColorCombo_QBaseHidePopup((KColorCombo*)self);
}

void k_colorcombo_on_hide_popup(void* self, void (*callback)()) {
    KColorCombo_OnHidePopup((KColorCombo*)self, (intptr_t)callback);
}

bool k_colorcombo_event(void* self, void* event) {
    return KColorCombo_Event((KColorCombo*)self, (QEvent*)event);
}

bool k_colorcombo_qbase_event(void* self, void* event) {
    return KColorCombo_QBaseEvent((KColorCombo*)self, (QEvent*)event);
}

void k_colorcombo_on_event(void* self, bool (*callback)(void*, void*)) {
    KColorCombo_OnEvent((KColorCombo*)self, (intptr_t)callback);
}

QVariant* k_colorcombo_input_method_query(void* self, int32_t param1) {
    return KColorCombo_InputMethodQuery((KColorCombo*)self, param1);
}

QVariant* k_colorcombo_qbase_input_method_query(void* self, int32_t param1) {
    return KColorCombo_QBaseInputMethodQuery((KColorCombo*)self, param1);
}

void k_colorcombo_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KColorCombo_OnInputMethodQuery((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_focus_in_event(void* self, void* e) {
    KColorCombo_FocusInEvent((KColorCombo*)self, (QFocusEvent*)e);
}

void k_colorcombo_qbase_focus_in_event(void* self, void* e) {
    KColorCombo_QBaseFocusInEvent((KColorCombo*)self, (QFocusEvent*)e);
}

void k_colorcombo_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnFocusInEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_focus_out_event(void* self, void* e) {
    KColorCombo_FocusOutEvent((KColorCombo*)self, (QFocusEvent*)e);
}

void k_colorcombo_qbase_focus_out_event(void* self, void* e) {
    KColorCombo_QBaseFocusOutEvent((KColorCombo*)self, (QFocusEvent*)e);
}

void k_colorcombo_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnFocusOutEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_change_event(void* self, void* e) {
    KColorCombo_ChangeEvent((KColorCombo*)self, (QEvent*)e);
}

void k_colorcombo_qbase_change_event(void* self, void* e) {
    KColorCombo_QBaseChangeEvent((KColorCombo*)self, (QEvent*)e);
}

void k_colorcombo_on_change_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnChangeEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_resize_event(void* self, void* e) {
    KColorCombo_ResizeEvent((KColorCombo*)self, (QResizeEvent*)e);
}

void k_colorcombo_qbase_resize_event(void* self, void* e) {
    KColorCombo_QBaseResizeEvent((KColorCombo*)self, (QResizeEvent*)e);
}

void k_colorcombo_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnResizeEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_show_event(void* self, void* e) {
    KColorCombo_ShowEvent((KColorCombo*)self, (QShowEvent*)e);
}

void k_colorcombo_qbase_show_event(void* self, void* e) {
    KColorCombo_QBaseShowEvent((KColorCombo*)self, (QShowEvent*)e);
}

void k_colorcombo_on_show_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnShowEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_hide_event(void* self, void* e) {
    KColorCombo_HideEvent((KColorCombo*)self, (QHideEvent*)e);
}

void k_colorcombo_qbase_hide_event(void* self, void* e) {
    KColorCombo_QBaseHideEvent((KColorCombo*)self, (QHideEvent*)e);
}

void k_colorcombo_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnHideEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_mouse_press_event(void* self, void* e) {
    KColorCombo_MousePressEvent((KColorCombo*)self, (QMouseEvent*)e);
}

void k_colorcombo_qbase_mouse_press_event(void* self, void* e) {
    KColorCombo_QBaseMousePressEvent((KColorCombo*)self, (QMouseEvent*)e);
}

void k_colorcombo_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnMousePressEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_mouse_release_event(void* self, void* e) {
    KColorCombo_MouseReleaseEvent((KColorCombo*)self, (QMouseEvent*)e);
}

void k_colorcombo_qbase_mouse_release_event(void* self, void* e) {
    KColorCombo_QBaseMouseReleaseEvent((KColorCombo*)self, (QMouseEvent*)e);
}

void k_colorcombo_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnMouseReleaseEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_key_press_event(void* self, void* e) {
    KColorCombo_KeyPressEvent((KColorCombo*)self, (QKeyEvent*)e);
}

void k_colorcombo_qbase_key_press_event(void* self, void* e) {
    KColorCombo_QBaseKeyPressEvent((KColorCombo*)self, (QKeyEvent*)e);
}

void k_colorcombo_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnKeyPressEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_key_release_event(void* self, void* e) {
    KColorCombo_KeyReleaseEvent((KColorCombo*)self, (QKeyEvent*)e);
}

void k_colorcombo_qbase_key_release_event(void* self, void* e) {
    KColorCombo_QBaseKeyReleaseEvent((KColorCombo*)self, (QKeyEvent*)e);
}

void k_colorcombo_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnKeyReleaseEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_wheel_event(void* self, void* e) {
    KColorCombo_WheelEvent((KColorCombo*)self, (QWheelEvent*)e);
}

void k_colorcombo_qbase_wheel_event(void* self, void* e) {
    KColorCombo_QBaseWheelEvent((KColorCombo*)self, (QWheelEvent*)e);
}

void k_colorcombo_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnWheelEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_context_menu_event(void* self, void* e) {
    KColorCombo_ContextMenuEvent((KColorCombo*)self, (QContextMenuEvent*)e);
}

void k_colorcombo_qbase_context_menu_event(void* self, void* e) {
    KColorCombo_QBaseContextMenuEvent((KColorCombo*)self, (QContextMenuEvent*)e);
}

void k_colorcombo_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnContextMenuEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_input_method_event(void* self, void* param1) {
    KColorCombo_InputMethodEvent((KColorCombo*)self, (QInputMethodEvent*)param1);
}

void k_colorcombo_qbase_input_method_event(void* self, void* param1) {
    KColorCombo_QBaseInputMethodEvent((KColorCombo*)self, (QInputMethodEvent*)param1);
}

void k_colorcombo_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnInputMethodEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_init_style_option(void* self, void* option) {
    KColorCombo_InitStyleOption((KColorCombo*)self, (QStyleOptionComboBox*)option);
}

void k_colorcombo_qbase_init_style_option(void* self, void* option) {
    KColorCombo_QBaseInitStyleOption((KColorCombo*)self, (QStyleOptionComboBox*)option);
}

void k_colorcombo_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnInitStyleOption((KColorCombo*)self, (intptr_t)callback);
}

int32_t k_colorcombo_dev_type(void* self) {
    return KColorCombo_DevType((KColorCombo*)self);
}

int32_t k_colorcombo_qbase_dev_type(void* self) {
    return KColorCombo_QBaseDevType((KColorCombo*)self);
}

void k_colorcombo_on_dev_type(void* self, int32_t (*callback)()) {
    KColorCombo_OnDevType((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_set_visible(void* self, bool visible) {
    KColorCombo_SetVisible((KColorCombo*)self, visible);
}

void k_colorcombo_qbase_set_visible(void* self, bool visible) {
    KColorCombo_QBaseSetVisible((KColorCombo*)self, visible);
}

void k_colorcombo_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KColorCombo_OnSetVisible((KColorCombo*)self, (intptr_t)callback);
}

int32_t k_colorcombo_height_for_width(void* self, int param1) {
    return KColorCombo_HeightForWidth((KColorCombo*)self, param1);
}

int32_t k_colorcombo_qbase_height_for_width(void* self, int param1) {
    return KColorCombo_QBaseHeightForWidth((KColorCombo*)self, param1);
}

void k_colorcombo_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KColorCombo_OnHeightForWidth((KColorCombo*)self, (intptr_t)callback);
}

bool k_colorcombo_has_height_for_width(void* self) {
    return KColorCombo_HasHeightForWidth((KColorCombo*)self);
}

bool k_colorcombo_qbase_has_height_for_width(void* self) {
    return KColorCombo_QBaseHasHeightForWidth((KColorCombo*)self);
}

void k_colorcombo_on_has_height_for_width(void* self, bool (*callback)()) {
    KColorCombo_OnHasHeightForWidth((KColorCombo*)self, (intptr_t)callback);
}

QPaintEngine* k_colorcombo_paint_engine(void* self) {
    return KColorCombo_PaintEngine((KColorCombo*)self);
}

QPaintEngine* k_colorcombo_qbase_paint_engine(void* self) {
    return KColorCombo_QBasePaintEngine((KColorCombo*)self);
}

void k_colorcombo_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KColorCombo_OnPaintEngine((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_mouse_double_click_event(void* self, void* event) {
    KColorCombo_MouseDoubleClickEvent((KColorCombo*)self, (QMouseEvent*)event);
}

void k_colorcombo_qbase_mouse_double_click_event(void* self, void* event) {
    KColorCombo_QBaseMouseDoubleClickEvent((KColorCombo*)self, (QMouseEvent*)event);
}

void k_colorcombo_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnMouseDoubleClickEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_mouse_move_event(void* self, void* event) {
    KColorCombo_MouseMoveEvent((KColorCombo*)self, (QMouseEvent*)event);
}

void k_colorcombo_qbase_mouse_move_event(void* self, void* event) {
    KColorCombo_QBaseMouseMoveEvent((KColorCombo*)self, (QMouseEvent*)event);
}

void k_colorcombo_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnMouseMoveEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_enter_event(void* self, void* event) {
    KColorCombo_EnterEvent((KColorCombo*)self, (QEnterEvent*)event);
}

void k_colorcombo_qbase_enter_event(void* self, void* event) {
    KColorCombo_QBaseEnterEvent((KColorCombo*)self, (QEnterEvent*)event);
}

void k_colorcombo_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnEnterEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_leave_event(void* self, void* event) {
    KColorCombo_LeaveEvent((KColorCombo*)self, (QEvent*)event);
}

void k_colorcombo_qbase_leave_event(void* self, void* event) {
    KColorCombo_QBaseLeaveEvent((KColorCombo*)self, (QEvent*)event);
}

void k_colorcombo_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnLeaveEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_move_event(void* self, void* event) {
    KColorCombo_MoveEvent((KColorCombo*)self, (QMoveEvent*)event);
}

void k_colorcombo_qbase_move_event(void* self, void* event) {
    KColorCombo_QBaseMoveEvent((KColorCombo*)self, (QMoveEvent*)event);
}

void k_colorcombo_on_move_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnMoveEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_close_event(void* self, void* event) {
    KColorCombo_CloseEvent((KColorCombo*)self, (QCloseEvent*)event);
}

void k_colorcombo_qbase_close_event(void* self, void* event) {
    KColorCombo_QBaseCloseEvent((KColorCombo*)self, (QCloseEvent*)event);
}

void k_colorcombo_on_close_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnCloseEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_tablet_event(void* self, void* event) {
    KColorCombo_TabletEvent((KColorCombo*)self, (QTabletEvent*)event);
}

void k_colorcombo_qbase_tablet_event(void* self, void* event) {
    KColorCombo_QBaseTabletEvent((KColorCombo*)self, (QTabletEvent*)event);
}

void k_colorcombo_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnTabletEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_action_event(void* self, void* event) {
    KColorCombo_ActionEvent((KColorCombo*)self, (QActionEvent*)event);
}

void k_colorcombo_qbase_action_event(void* self, void* event) {
    KColorCombo_QBaseActionEvent((KColorCombo*)self, (QActionEvent*)event);
}

void k_colorcombo_on_action_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnActionEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_drag_enter_event(void* self, void* event) {
    KColorCombo_DragEnterEvent((KColorCombo*)self, (QDragEnterEvent*)event);
}

void k_colorcombo_qbase_drag_enter_event(void* self, void* event) {
    KColorCombo_QBaseDragEnterEvent((KColorCombo*)self, (QDragEnterEvent*)event);
}

void k_colorcombo_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnDragEnterEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_drag_move_event(void* self, void* event) {
    KColorCombo_DragMoveEvent((KColorCombo*)self, (QDragMoveEvent*)event);
}

void k_colorcombo_qbase_drag_move_event(void* self, void* event) {
    KColorCombo_QBaseDragMoveEvent((KColorCombo*)self, (QDragMoveEvent*)event);
}

void k_colorcombo_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnDragMoveEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_drag_leave_event(void* self, void* event) {
    KColorCombo_DragLeaveEvent((KColorCombo*)self, (QDragLeaveEvent*)event);
}

void k_colorcombo_qbase_drag_leave_event(void* self, void* event) {
    KColorCombo_QBaseDragLeaveEvent((KColorCombo*)self, (QDragLeaveEvent*)event);
}

void k_colorcombo_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnDragLeaveEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_drop_event(void* self, void* event) {
    KColorCombo_DropEvent((KColorCombo*)self, (QDropEvent*)event);
}

void k_colorcombo_qbase_drop_event(void* self, void* event) {
    KColorCombo_QBaseDropEvent((KColorCombo*)self, (QDropEvent*)event);
}

void k_colorcombo_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnDropEvent((KColorCombo*)self, (intptr_t)callback);
}

bool k_colorcombo_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KColorCombo_NativeEvent((KColorCombo*)self, qstring(eventType), message, result);
}

bool k_colorcombo_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KColorCombo_QBaseNativeEvent((KColorCombo*)self, qstring(eventType), message, result);
}

void k_colorcombo_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KColorCombo_OnNativeEvent((KColorCombo*)self, (intptr_t)callback);
}

int32_t k_colorcombo_metric(void* self, int32_t param1) {
    return KColorCombo_Metric((KColorCombo*)self, param1);
}

int32_t k_colorcombo_qbase_metric(void* self, int32_t param1) {
    return KColorCombo_QBaseMetric((KColorCombo*)self, param1);
}

void k_colorcombo_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KColorCombo_OnMetric((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_init_painter(void* self, void* painter) {
    KColorCombo_InitPainter((KColorCombo*)self, (QPainter*)painter);
}

void k_colorcombo_qbase_init_painter(void* self, void* painter) {
    KColorCombo_QBaseInitPainter((KColorCombo*)self, (QPainter*)painter);
}

void k_colorcombo_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnInitPainter((KColorCombo*)self, (intptr_t)callback);
}

QPaintDevice* k_colorcombo_redirected(void* self, void* offset) {
    return KColorCombo_Redirected((KColorCombo*)self, (QPoint*)offset);
}

QPaintDevice* k_colorcombo_qbase_redirected(void* self, void* offset) {
    return KColorCombo_QBaseRedirected((KColorCombo*)self, (QPoint*)offset);
}

void k_colorcombo_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KColorCombo_OnRedirected((KColorCombo*)self, (intptr_t)callback);
}

QPainter* k_colorcombo_shared_painter(void* self) {
    return KColorCombo_SharedPainter((KColorCombo*)self);
}

QPainter* k_colorcombo_qbase_shared_painter(void* self) {
    return KColorCombo_QBaseSharedPainter((KColorCombo*)self);
}

void k_colorcombo_on_shared_painter(void* self, QPainter* (*callback)()) {
    KColorCombo_OnSharedPainter((KColorCombo*)self, (intptr_t)callback);
}

bool k_colorcombo_focus_next_prev_child(void* self, bool next) {
    return KColorCombo_FocusNextPrevChild((KColorCombo*)self, next);
}

bool k_colorcombo_qbase_focus_next_prev_child(void* self, bool next) {
    return KColorCombo_QBaseFocusNextPrevChild((KColorCombo*)self, next);
}

void k_colorcombo_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KColorCombo_OnFocusNextPrevChild((KColorCombo*)self, (intptr_t)callback);
}

bool k_colorcombo_event_filter(void* self, void* watched, void* event) {
    return KColorCombo_EventFilter((KColorCombo*)self, (QObject*)watched, (QEvent*)event);
}

bool k_colorcombo_qbase_event_filter(void* self, void* watched, void* event) {
    return KColorCombo_QBaseEventFilter((KColorCombo*)self, (QObject*)watched, (QEvent*)event);
}

void k_colorcombo_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KColorCombo_OnEventFilter((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_timer_event(void* self, void* event) {
    KColorCombo_TimerEvent((KColorCombo*)self, (QTimerEvent*)event);
}

void k_colorcombo_qbase_timer_event(void* self, void* event) {
    KColorCombo_QBaseTimerEvent((KColorCombo*)self, (QTimerEvent*)event);
}

void k_colorcombo_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnTimerEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_child_event(void* self, void* event) {
    KColorCombo_ChildEvent((KColorCombo*)self, (QChildEvent*)event);
}

void k_colorcombo_qbase_child_event(void* self, void* event) {
    KColorCombo_QBaseChildEvent((KColorCombo*)self, (QChildEvent*)event);
}

void k_colorcombo_on_child_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnChildEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_custom_event(void* self, void* event) {
    KColorCombo_CustomEvent((KColorCombo*)self, (QEvent*)event);
}

void k_colorcombo_qbase_custom_event(void* self, void* event) {
    KColorCombo_QBaseCustomEvent((KColorCombo*)self, (QEvent*)event);
}

void k_colorcombo_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnCustomEvent((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_connect_notify(void* self, void* signal) {
    KColorCombo_ConnectNotify((KColorCombo*)self, (QMetaMethod*)signal);
}

void k_colorcombo_qbase_connect_notify(void* self, void* signal) {
    KColorCombo_QBaseConnectNotify((KColorCombo*)self, (QMetaMethod*)signal);
}

void k_colorcombo_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnConnectNotify((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_disconnect_notify(void* self, void* signal) {
    KColorCombo_DisconnectNotify((KColorCombo*)self, (QMetaMethod*)signal);
}

void k_colorcombo_qbase_disconnect_notify(void* self, void* signal) {
    KColorCombo_QBaseDisconnectNotify((KColorCombo*)self, (QMetaMethod*)signal);
}

void k_colorcombo_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KColorCombo_OnDisconnectNotify((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_update_micro_focus(void* self) {
    KColorCombo_UpdateMicroFocus((KColorCombo*)self);
}

void k_colorcombo_qbase_update_micro_focus(void* self) {
    KColorCombo_QBaseUpdateMicroFocus((KColorCombo*)self);
}

void k_colorcombo_on_update_micro_focus(void* self, void (*callback)()) {
    KColorCombo_OnUpdateMicroFocus((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_create(void* self) {
    KColorCombo_Create((KColorCombo*)self);
}

void k_colorcombo_qbase_create(void* self) {
    KColorCombo_QBaseCreate((KColorCombo*)self);
}

void k_colorcombo_on_create(void* self, void (*callback)()) {
    KColorCombo_OnCreate((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_destroy(void* self) {
    KColorCombo_Destroy((KColorCombo*)self);
}

void k_colorcombo_qbase_destroy(void* self) {
    KColorCombo_QBaseDestroy((KColorCombo*)self);
}

void k_colorcombo_on_destroy(void* self, void (*callback)()) {
    KColorCombo_OnDestroy((KColorCombo*)self, (intptr_t)callback);
}

bool k_colorcombo_focus_next_child(void* self) {
    return KColorCombo_FocusNextChild((KColorCombo*)self);
}

bool k_colorcombo_qbase_focus_next_child(void* self) {
    return KColorCombo_QBaseFocusNextChild((KColorCombo*)self);
}

void k_colorcombo_on_focus_next_child(void* self, bool (*callback)()) {
    KColorCombo_OnFocusNextChild((KColorCombo*)self, (intptr_t)callback);
}

bool k_colorcombo_focus_previous_child(void* self) {
    return KColorCombo_FocusPreviousChild((KColorCombo*)self);
}

bool k_colorcombo_qbase_focus_previous_child(void* self) {
    return KColorCombo_QBaseFocusPreviousChild((KColorCombo*)self);
}

void k_colorcombo_on_focus_previous_child(void* self, bool (*callback)()) {
    KColorCombo_OnFocusPreviousChild((KColorCombo*)self, (intptr_t)callback);
}

QObject* k_colorcombo_sender(void* self) {
    return KColorCombo_Sender((KColorCombo*)self);
}

QObject* k_colorcombo_qbase_sender(void* self) {
    return KColorCombo_QBaseSender((KColorCombo*)self);
}

void k_colorcombo_on_sender(void* self, QObject* (*callback)()) {
    KColorCombo_OnSender((KColorCombo*)self, (intptr_t)callback);
}

int32_t k_colorcombo_sender_signal_index(void* self) {
    return KColorCombo_SenderSignalIndex((KColorCombo*)self);
}

int32_t k_colorcombo_qbase_sender_signal_index(void* self) {
    return KColorCombo_QBaseSenderSignalIndex((KColorCombo*)self);
}

void k_colorcombo_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KColorCombo_OnSenderSignalIndex((KColorCombo*)self, (intptr_t)callback);
}

int32_t k_colorcombo_receivers(void* self, const char* signal) {
    return KColorCombo_Receivers((KColorCombo*)self, signal);
}

int32_t k_colorcombo_qbase_receivers(void* self, const char* signal) {
    return KColorCombo_QBaseReceivers((KColorCombo*)self, signal);
}

void k_colorcombo_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KColorCombo_OnReceivers((KColorCombo*)self, (intptr_t)callback);
}

bool k_colorcombo_is_signal_connected(void* self, void* signal) {
    return KColorCombo_IsSignalConnected((KColorCombo*)self, (QMetaMethod*)signal);
}

bool k_colorcombo_qbase_is_signal_connected(void* self, void* signal) {
    return KColorCombo_QBaseIsSignalConnected((KColorCombo*)self, (QMetaMethod*)signal);
}

void k_colorcombo_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KColorCombo_OnIsSignalConnected((KColorCombo*)self, (intptr_t)callback);
}

double k_colorcombo_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KColorCombo_GetDecodedMetricF((KColorCombo*)self, metricA, metricB);
}

double k_colorcombo_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KColorCombo_QBaseGetDecodedMetricF((KColorCombo*)self, metricA, metricB);
}

void k_colorcombo_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KColorCombo_OnGetDecodedMetricF((KColorCombo*)self, (intptr_t)callback);
}

void k_colorcombo_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_colorcombo_delete(void* self) {
    KColorCombo_Delete((KColorCombo*)(self));
}
