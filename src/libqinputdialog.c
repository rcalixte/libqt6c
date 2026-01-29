#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqdialog.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqinputdialog.hpp"
#include "libqinputdialog.h"

QInputDialog* q_inputdialog_new(void* parent) {
    return QInputDialog_new((QWidget*)parent);
}

QInputDialog* q_inputdialog_new2() {
    return QInputDialog_new2();
}

QInputDialog* q_inputdialog_new3(void* parent, int32_t flags) {
    return QInputDialog_new3((QWidget*)parent, flags);
}

const QMetaObject* q_inputdialog_meta_object(void* self) {
    return QInputDialog_MetaObject((QInputDialog*)self);
}

void q_inputdialog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QInputDialog_OnMetaObject((QInputDialog*)self, (intptr_t)callback);
}

const QMetaObject* q_inputdialog_qbase_meta_object(void* self) {
    return QInputDialog_QBaseMetaObject((QInputDialog*)self);
}

void* q_inputdialog_metacast(void* self, const char* param1) {
    return QInputDialog_Metacast((QInputDialog*)self, param1);
}

void q_inputdialog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QInputDialog_OnMetacast((QInputDialog*)self, (intptr_t)callback);
}

void* q_inputdialog_qbase_metacast(void* self, const char* param1) {
    return QInputDialog_QBaseMetacast((QInputDialog*)self, param1);
}

int32_t q_inputdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QInputDialog_Metacall((QInputDialog*)self, param1, param2, param3);
}

void q_inputdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QInputDialog_OnMetacall((QInputDialog*)self, (intptr_t)callback);
}

int32_t q_inputdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QInputDialog_QBaseMetacall((QInputDialog*)self, param1, param2, param3);
}

const char* q_inputdialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdialog_set_input_mode(void* self, int32_t mode) {
    QInputDialog_SetInputMode((QInputDialog*)self, mode);
}

int32_t q_inputdialog_input_mode(void* self) {
    return QInputDialog_InputMode((QInputDialog*)self);
}

void q_inputdialog_set_label_text(void* self, const char* text) {
    QInputDialog_SetLabelText((QInputDialog*)self, qstring(text));
}

const char* q_inputdialog_label_text(void* self) {
    libqt_string _str = QInputDialog_LabelText((QInputDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdialog_set_option(void* self, int32_t option) {
    QInputDialog_SetOption((QInputDialog*)self, option);
}

bool q_inputdialog_test_option(void* self, int32_t option) {
    return QInputDialog_TestOption((QInputDialog*)self, option);
}

void q_inputdialog_set_options(void* self, int32_t options) {
    QInputDialog_SetOptions((QInputDialog*)self, options);
}

int32_t q_inputdialog_options(void* self) {
    return QInputDialog_Options((QInputDialog*)self);
}

void q_inputdialog_set_text_value(void* self, const char* text) {
    QInputDialog_SetTextValue((QInputDialog*)self, qstring(text));
}

const char* q_inputdialog_text_value(void* self) {
    libqt_string _str = QInputDialog_TextValue((QInputDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdialog_set_text_echo_mode(void* self, int32_t mode) {
    QInputDialog_SetTextEchoMode((QInputDialog*)self, mode);
}

int32_t q_inputdialog_text_echo_mode(void* self) {
    return QInputDialog_TextEchoMode((QInputDialog*)self);
}

void q_inputdialog_set_combo_box_editable(void* self, bool editable) {
    QInputDialog_SetComboBoxEditable((QInputDialog*)self, editable);
}

bool q_inputdialog_is_combo_box_editable(void* self) {
    return QInputDialog_IsComboBoxEditable((QInputDialog*)self);
}

void q_inputdialog_set_combo_box_items(void* self, const char* items[static 1]) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_inputdialog_set_combo_box_items\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    QInputDialog_SetComboBoxItems((QInputDialog*)self, items_list);
    free(items_qstr);
}

const char** q_inputdialog_combo_box_items(void* self) {
    libqt_list _arr = QInputDialog_ComboBoxItems((QInputDialog*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_inputdialog_combo_box_items\n");
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

void q_inputdialog_set_int_value(void* self, int value) {
    QInputDialog_SetIntValue((QInputDialog*)self, value);
}

int32_t q_inputdialog_int_value(void* self) {
    return QInputDialog_IntValue((QInputDialog*)self);
}

void q_inputdialog_set_int_minimum(void* self, int min) {
    QInputDialog_SetIntMinimum((QInputDialog*)self, min);
}

int32_t q_inputdialog_int_minimum(void* self) {
    return QInputDialog_IntMinimum((QInputDialog*)self);
}

void q_inputdialog_set_int_maximum(void* self, int max) {
    QInputDialog_SetIntMaximum((QInputDialog*)self, max);
}

int32_t q_inputdialog_int_maximum(void* self) {
    return QInputDialog_IntMaximum((QInputDialog*)self);
}

void q_inputdialog_set_int_range(void* self, int min, int max) {
    QInputDialog_SetIntRange((QInputDialog*)self, min, max);
}

void q_inputdialog_set_int_step(void* self, int step) {
    QInputDialog_SetIntStep((QInputDialog*)self, step);
}

int32_t q_inputdialog_int_step(void* self) {
    return QInputDialog_IntStep((QInputDialog*)self);
}

void q_inputdialog_set_double_value(void* self, double value) {
    QInputDialog_SetDoubleValue((QInputDialog*)self, value);
}

double q_inputdialog_double_value(void* self) {
    return QInputDialog_DoubleValue((QInputDialog*)self);
}

void q_inputdialog_set_double_minimum(void* self, double min) {
    QInputDialog_SetDoubleMinimum((QInputDialog*)self, min);
}

double q_inputdialog_double_minimum(void* self) {
    return QInputDialog_DoubleMinimum((QInputDialog*)self);
}

void q_inputdialog_set_double_maximum(void* self, double max) {
    QInputDialog_SetDoubleMaximum((QInputDialog*)self, max);
}

double q_inputdialog_double_maximum(void* self) {
    return QInputDialog_DoubleMaximum((QInputDialog*)self);
}

void q_inputdialog_set_double_range(void* self, double min, double max) {
    QInputDialog_SetDoubleRange((QInputDialog*)self, min, max);
}

void q_inputdialog_set_double_decimals(void* self, int decimals) {
    QInputDialog_SetDoubleDecimals((QInputDialog*)self, decimals);
}

int32_t q_inputdialog_double_decimals(void* self) {
    return QInputDialog_DoubleDecimals((QInputDialog*)self);
}

void q_inputdialog_set_ok_button_text(void* self, const char* text) {
    QInputDialog_SetOkButtonText((QInputDialog*)self, qstring(text));
}

const char* q_inputdialog_ok_button_text(void* self) {
    libqt_string _str = QInputDialog_OkButtonText((QInputDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdialog_set_cancel_button_text(void* self, const char* text) {
    QInputDialog_SetCancelButtonText((QInputDialog*)self, qstring(text));
}

const char* q_inputdialog_cancel_button_text(void* self) {
    libqt_string _str = QInputDialog_CancelButtonText((QInputDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_inputdialog_minimum_size_hint(void* self) {
    return QInputDialog_MinimumSizeHint((QInputDialog*)self);
}

void q_inputdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QInputDialog_OnMinimumSizeHint((QInputDialog*)self, (intptr_t)callback);
}

QSize* q_inputdialog_qbase_minimum_size_hint(void* self) {
    return QInputDialog_QBaseMinimumSizeHint((QInputDialog*)self);
}

QSize* q_inputdialog_size_hint(void* self) {
    return QInputDialog_SizeHint((QInputDialog*)self);
}

void q_inputdialog_on_size_hint(void* self, QSize* (*callback)()) {
    QInputDialog_OnSizeHint((QInputDialog*)self, (intptr_t)callback);
}

QSize* q_inputdialog_qbase_size_hint(void* self) {
    return QInputDialog_QBaseSizeHint((QInputDialog*)self);
}

void q_inputdialog_set_visible(void* self, bool visible) {
    QInputDialog_SetVisible((QInputDialog*)self, visible);
}

void q_inputdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QInputDialog_OnSetVisible((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_qbase_set_visible(void* self, bool visible) {
    QInputDialog_QBaseSetVisible((QInputDialog*)self, visible);
}

const char* q_inputdialog_get_text(void* parent, const char* title, const char* label) {
    libqt_string _str = QInputDialog_GetText((QWidget*)parent, qstring(title), qstring(label));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_multi_line_text(void* parent, const char* title, const char* label) {
    libqt_string _str = QInputDialog_GetMultiLineText((QWidget*)parent, qstring(title), qstring(label));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_item(void* parent, const char* title, const char* label, const char* items[static 1]) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_inputdialog_get_item\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    libqt_string _str = QInputDialog_GetItem((QWidget*)parent, qstring(title), qstring(label), items_list);
    free(items_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_inputdialog_get_int(void* parent, const char* title, const char* label) {
    return QInputDialog_GetInt((QWidget*)parent, qstring(title), qstring(label));
}

double q_inputdialog_get_double(void* parent, const char* title, const char* label) {
    return QInputDialog_GetDouble((QWidget*)parent, qstring(title), qstring(label));
}

void q_inputdialog_set_double_step(void* self, double step) {
    QInputDialog_SetDoubleStep((QInputDialog*)self, step);
}

double q_inputdialog_double_step(void* self) {
    return QInputDialog_DoubleStep((QInputDialog*)self);
}

void q_inputdialog_text_value_changed(void* self, const char* text) {
    QInputDialog_TextValueChanged((QInputDialog*)self, qstring(text));
}

void q_inputdialog_on_text_value_changed(void* self, void (*callback)(void*, const char*)) {
    QInputDialog_Connect_TextValueChanged((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_text_value_selected(void* self, const char* text) {
    QInputDialog_TextValueSelected((QInputDialog*)self, qstring(text));
}

void q_inputdialog_on_text_value_selected(void* self, void (*callback)(void*, const char*)) {
    QInputDialog_Connect_TextValueSelected((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_int_value_changed(void* self, int value) {
    QInputDialog_IntValueChanged((QInputDialog*)self, value);
}

void q_inputdialog_on_int_value_changed(void* self, void (*callback)(void*, int)) {
    QInputDialog_Connect_IntValueChanged((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_int_value_selected(void* self, int value) {
    QInputDialog_IntValueSelected((QInputDialog*)self, value);
}

void q_inputdialog_on_int_value_selected(void* self, void (*callback)(void*, int)) {
    QInputDialog_Connect_IntValueSelected((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_double_value_changed(void* self, double value) {
    QInputDialog_DoubleValueChanged((QInputDialog*)self, value);
}

void q_inputdialog_on_double_value_changed(void* self, void (*callback)(void*, double)) {
    QInputDialog_Connect_DoubleValueChanged((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_double_value_selected(void* self, double value) {
    QInputDialog_DoubleValueSelected((QInputDialog*)self, value);
}

void q_inputdialog_on_double_value_selected(void* self, void (*callback)(void*, double)) {
    QInputDialog_Connect_DoubleValueSelected((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_done(void* self, int result) {
    QInputDialog_Done((QInputDialog*)self, result);
}

void q_inputdialog_on_done(void* self, void (*callback)(void*, int)) {
    QInputDialog_OnDone((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_qbase_done(void* self, int result) {
    QInputDialog_QBaseDone((QInputDialog*)self, result);
}

const char* q_inputdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdialog_set_option2(void* self, int32_t option, bool on) {
    QInputDialog_SetOption2((QInputDialog*)self, option, on);
}

const char* q_inputdialog_get_text4(void* parent, const char* title, const char* label, int32_t echo) {
    libqt_string _str = QInputDialog_GetText4((QWidget*)parent, qstring(title), qstring(label), echo);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_text5(void* parent, const char* title, const char* label, int32_t echo, const char* text) {
    libqt_string _str = QInputDialog_GetText5((QWidget*)parent, qstring(title), qstring(label), echo, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_text6(void* parent, const char* title, const char* label, int32_t echo, const char* text, bool* ok) {
    libqt_string _str = QInputDialog_GetText6((QWidget*)parent, qstring(title), qstring(label), echo, qstring(text), (bool*)ok);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_text7(void* parent, const char* title, const char* label, int32_t echo, const char* text, bool* ok, int32_t flags) {
    libqt_string _str = QInputDialog_GetText7((QWidget*)parent, qstring(title), qstring(label), echo, qstring(text), (bool*)ok, flags);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_text8(void* parent, const char* title, const char* label, int32_t echo, const char* text, bool* ok, int32_t flags, int32_t inputMethodHints) {
    libqt_string _str = QInputDialog_GetText8((QWidget*)parent, qstring(title), qstring(label), echo, qstring(text), (bool*)ok, flags, inputMethodHints);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_multi_line_text4(void* parent, const char* title, const char* label, const char* text) {
    libqt_string _str = QInputDialog_GetMultiLineText4((QWidget*)parent, qstring(title), qstring(label), qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_multi_line_text5(void* parent, const char* title, const char* label, const char* text, bool* ok) {
    libqt_string _str = QInputDialog_GetMultiLineText5((QWidget*)parent, qstring(title), qstring(label), qstring(text), (bool*)ok);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_multi_line_text6(void* parent, const char* title, const char* label, const char* text, bool* ok, int32_t flags) {
    libqt_string _str = QInputDialog_GetMultiLineText6((QWidget*)parent, qstring(title), qstring(label), qstring(text), (bool*)ok, flags);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_multi_line_text7(void* parent, const char* title, const char* label, const char* text, bool* ok, int32_t flags, int32_t inputMethodHints) {
    libqt_string _str = QInputDialog_GetMultiLineText7((QWidget*)parent, qstring(title), qstring(label), qstring(text), (bool*)ok, flags, inputMethodHints);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_item5(void* parent, const char* title, const char* label, const char* items[static 1], int current) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_inputdialog_get_item5\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    libqt_string _str = QInputDialog_GetItem5((QWidget*)parent, qstring(title), qstring(label), items_list, current);
    free(items_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_item6(void* parent, const char* title, const char* label, const char* items[static 1], int current, bool editable) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_inputdialog_get_item6\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    libqt_string _str = QInputDialog_GetItem6((QWidget*)parent, qstring(title), qstring(label), items_list, current, editable);
    free(items_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_item7(void* parent, const char* title, const char* label, const char* items[static 1], int current, bool editable, bool* ok) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_inputdialog_get_item7\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    libqt_string _str = QInputDialog_GetItem7((QWidget*)parent, qstring(title), qstring(label), items_list, current, editable, (bool*)ok);
    free(items_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_item8(void* parent, const char* title, const char* label, const char* items[static 1], int current, bool editable, bool* ok, int32_t flags) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_inputdialog_get_item8\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    libqt_string _str = QInputDialog_GetItem8((QWidget*)parent, qstring(title), qstring(label), items_list, current, editable, (bool*)ok, flags);
    free(items_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_get_item9(void* parent, const char* title, const char* label, const char* items[static 1], int current, bool editable, bool* ok, int32_t flags, int32_t inputMethodHints) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_inputdialog_get_item9\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    libqt_string _str = QInputDialog_GetItem9((QWidget*)parent, qstring(title), qstring(label), items_list, current, editable, (bool*)ok, flags, inputMethodHints);
    free(items_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_inputdialog_get_int4(void* parent, const char* title, const char* label, int value) {
    return QInputDialog_GetInt4((QWidget*)parent, qstring(title), qstring(label), value);
}

int32_t q_inputdialog_get_int5(void* parent, const char* title, const char* label, int value, int minValue) {
    return QInputDialog_GetInt5((QWidget*)parent, qstring(title), qstring(label), value, minValue);
}

int32_t q_inputdialog_get_int6(void* parent, const char* title, const char* label, int value, int minValue, int maxValue) {
    return QInputDialog_GetInt6((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue);
}

int32_t q_inputdialog_get_int7(void* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step) {
    return QInputDialog_GetInt7((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue, step);
}

int32_t q_inputdialog_get_int8(void* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step, bool* ok) {
    return QInputDialog_GetInt8((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue, step, (bool*)ok);
}

int32_t q_inputdialog_get_int9(void* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step, bool* ok, int32_t flags) {
    return QInputDialog_GetInt9((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue, step, (bool*)ok, flags);
}

double q_inputdialog_get_double4(void* parent, const char* title, const char* label, double value) {
    return QInputDialog_GetDouble4((QWidget*)parent, qstring(title), qstring(label), value);
}

double q_inputdialog_get_double5(void* parent, const char* title, const char* label, double value, double minValue) {
    return QInputDialog_GetDouble5((QWidget*)parent, qstring(title), qstring(label), value, minValue);
}

double q_inputdialog_get_double6(void* parent, const char* title, const char* label, double value, double minValue, double maxValue) {
    return QInputDialog_GetDouble6((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue);
}

double q_inputdialog_get_double7(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals) {
    return QInputDialog_GetDouble7((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue, decimals);
}

double q_inputdialog_get_double8(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok) {
    return QInputDialog_GetDouble8((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue, decimals, (bool*)ok);
}

double q_inputdialog_get_double9(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok, int32_t flags) {
    return QInputDialog_GetDouble9((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue, decimals, (bool*)ok, flags);
}

double q_inputdialog_get_double10(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok, int32_t flags, double step) {
    return QInputDialog_GetDouble10((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue, decimals, (bool*)ok, flags, step);
}

int32_t q_inputdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void q_inputdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool q_inputdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void q_inputdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void q_inputdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void q_inputdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void q_inputdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void q_inputdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void q_inputdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void q_inputdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void q_inputdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t q_inputdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_inputdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_inputdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_inputdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_inputdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_inputdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_inputdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_inputdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_inputdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_inputdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_inputdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_inputdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_inputdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_inputdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_inputdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_inputdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_inputdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_inputdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_inputdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_inputdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_inputdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_inputdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_inputdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_inputdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_inputdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_inputdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_inputdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_inputdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_inputdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_inputdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_inputdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_inputdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_inputdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_inputdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_inputdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_inputdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_inputdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_inputdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_inputdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_inputdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_inputdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_inputdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_inputdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_inputdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_inputdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_inputdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_inputdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_inputdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_inputdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_inputdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_inputdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_inputdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_inputdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_inputdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_inputdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_inputdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_inputdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_inputdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_inputdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_inputdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_inputdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_inputdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_inputdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_inputdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_inputdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_inputdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_inputdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_inputdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_inputdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_inputdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_inputdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_inputdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_inputdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_inputdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_inputdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_inputdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_inputdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_inputdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_inputdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_inputdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_inputdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_inputdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_inputdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_inputdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_inputdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_inputdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_inputdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_inputdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_inputdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_inputdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_inputdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_inputdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_inputdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_inputdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_inputdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_inputdialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_inputdialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_inputdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_inputdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_inputdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_inputdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_inputdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_inputdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_inputdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_inputdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_inputdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_inputdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_inputdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_inputdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_inputdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_inputdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_inputdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_inputdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_inputdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_inputdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_inputdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_inputdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_inputdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_inputdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_inputdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_inputdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_inputdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_inputdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_inputdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_inputdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_inputdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_inputdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_inputdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_inputdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_inputdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_inputdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_inputdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_inputdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_inputdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_inputdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_inputdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_inputdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_inputdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_inputdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_inputdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_inputdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_inputdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_inputdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_inputdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_inputdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_inputdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_inputdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_inputdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_inputdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_inputdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_inputdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_inputdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_inputdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_inputdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_inputdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_inputdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_inputdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_inputdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_inputdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_inputdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_inputdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_inputdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_inputdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_inputdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_inputdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_inputdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_inputdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_inputdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_inputdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_inputdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_inputdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_inputdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_inputdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_inputdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_inputdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_inputdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_inputdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_inputdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_inputdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_inputdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_inputdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_inputdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_inputdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_inputdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_inputdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_inputdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_inputdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_inputdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_inputdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_inputdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_inputdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_inputdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_inputdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_inputdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_inputdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_inputdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_inputdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_inputdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_inputdialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_inputdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_inputdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_inputdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_inputdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_inputdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_inputdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_inputdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_inputdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_inputdialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_inputdialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_inputdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_inputdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_inputdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_inputdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_inputdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_inputdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_inputdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_inputdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_inputdialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_inputdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_inputdialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_inputdialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_inputdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_inputdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_inputdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_inputdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_inputdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_inputdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_inputdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_inputdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_inputdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_inputdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_inputdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_inputdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_inputdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_inputdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_inputdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_inputdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_inputdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_inputdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_inputdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_inputdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_inputdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_inputdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_inputdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_inputdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_inputdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_inputdialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_inputdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_inputdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_inputdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_inputdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_inputdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_inputdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_inputdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_inputdialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_inputdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_inputdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_inputdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_inputdialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_inputdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_inputdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_inputdialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_inputdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_inputdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_inputdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_inputdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_inputdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_inputdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_inputdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_inputdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_inputdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_inputdialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_inputdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_inputdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_inputdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_inputdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_inputdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_inputdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_inputdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_inputdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_inputdialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_inputdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_inputdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_inputdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_inputdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_inputdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_inputdialog_dynamic_property_names\n");
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

QBindingStorage* q_inputdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_inputdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_inputdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_inputdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_inputdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_inputdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_inputdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_inputdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_inputdialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_inputdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_inputdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_inputdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_inputdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_inputdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_inputdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_inputdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_inputdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_inputdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_inputdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_inputdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_inputdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_inputdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_inputdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_inputdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_inputdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_inputdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_inputdialog_open(void* self) {
    QInputDialog_Open((QInputDialog*)self);
}

void q_inputdialog_qbase_open(void* self) {
    QInputDialog_QBaseOpen((QInputDialog*)self);
}

void q_inputdialog_on_open(void* self, void (*callback)()) {
    QInputDialog_OnOpen((QInputDialog*)self, (intptr_t)callback);
}

int32_t q_inputdialog_exec(void* self) {
    return QInputDialog_Exec((QInputDialog*)self);
}

int32_t q_inputdialog_qbase_exec(void* self) {
    return QInputDialog_QBaseExec((QInputDialog*)self);
}

void q_inputdialog_on_exec(void* self, int32_t (*callback)()) {
    QInputDialog_OnExec((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_accept(void* self) {
    QInputDialog_Accept((QInputDialog*)self);
}

void q_inputdialog_qbase_accept(void* self) {
    QInputDialog_QBaseAccept((QInputDialog*)self);
}

void q_inputdialog_on_accept(void* self, void (*callback)()) {
    QInputDialog_OnAccept((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_reject(void* self) {
    QInputDialog_Reject((QInputDialog*)self);
}

void q_inputdialog_qbase_reject(void* self) {
    QInputDialog_QBaseReject((QInputDialog*)self);
}

void q_inputdialog_on_reject(void* self, void (*callback)()) {
    QInputDialog_OnReject((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_key_press_event(void* self, void* param1) {
    QInputDialog_KeyPressEvent((QInputDialog*)self, (QKeyEvent*)param1);
}

void q_inputdialog_qbase_key_press_event(void* self, void* param1) {
    QInputDialog_QBaseKeyPressEvent((QInputDialog*)self, (QKeyEvent*)param1);
}

void q_inputdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnKeyPressEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_close_event(void* self, void* param1) {
    QInputDialog_CloseEvent((QInputDialog*)self, (QCloseEvent*)param1);
}

void q_inputdialog_qbase_close_event(void* self, void* param1) {
    QInputDialog_QBaseCloseEvent((QInputDialog*)self, (QCloseEvent*)param1);
}

void q_inputdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnCloseEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_show_event(void* self, void* param1) {
    QInputDialog_ShowEvent((QInputDialog*)self, (QShowEvent*)param1);
}

void q_inputdialog_qbase_show_event(void* self, void* param1) {
    QInputDialog_QBaseShowEvent((QInputDialog*)self, (QShowEvent*)param1);
}

void q_inputdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnShowEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_resize_event(void* self, void* param1) {
    QInputDialog_ResizeEvent((QInputDialog*)self, (QResizeEvent*)param1);
}

void q_inputdialog_qbase_resize_event(void* self, void* param1) {
    QInputDialog_QBaseResizeEvent((QInputDialog*)self, (QResizeEvent*)param1);
}

void q_inputdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnResizeEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_context_menu_event(void* self, void* param1) {
    QInputDialog_ContextMenuEvent((QInputDialog*)self, (QContextMenuEvent*)param1);
}

void q_inputdialog_qbase_context_menu_event(void* self, void* param1) {
    QInputDialog_QBaseContextMenuEvent((QInputDialog*)self, (QContextMenuEvent*)param1);
}

void q_inputdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnContextMenuEvent((QInputDialog*)self, (intptr_t)callback);
}

bool q_inputdialog_event_filter(void* self, void* param1, void* param2) {
    return QInputDialog_EventFilter((QInputDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_inputdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QInputDialog_QBaseEventFilter((QInputDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void q_inputdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QInputDialog_OnEventFilter((QInputDialog*)self, (intptr_t)callback);
}

int32_t q_inputdialog_dev_type(void* self) {
    return QInputDialog_DevType((QInputDialog*)self);
}

int32_t q_inputdialog_qbase_dev_type(void* self) {
    return QInputDialog_QBaseDevType((QInputDialog*)self);
}

void q_inputdialog_on_dev_type(void* self, int32_t (*callback)()) {
    QInputDialog_OnDevType((QInputDialog*)self, (intptr_t)callback);
}

int32_t q_inputdialog_height_for_width(void* self, int param1) {
    return QInputDialog_HeightForWidth((QInputDialog*)self, param1);
}

int32_t q_inputdialog_qbase_height_for_width(void* self, int param1) {
    return QInputDialog_QBaseHeightForWidth((QInputDialog*)self, param1);
}

void q_inputdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QInputDialog_OnHeightForWidth((QInputDialog*)self, (intptr_t)callback);
}

bool q_inputdialog_has_height_for_width(void* self) {
    return QInputDialog_HasHeightForWidth((QInputDialog*)self);
}

bool q_inputdialog_qbase_has_height_for_width(void* self) {
    return QInputDialog_QBaseHasHeightForWidth((QInputDialog*)self);
}

void q_inputdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    QInputDialog_OnHasHeightForWidth((QInputDialog*)self, (intptr_t)callback);
}

QPaintEngine* q_inputdialog_paint_engine(void* self) {
    return QInputDialog_PaintEngine((QInputDialog*)self);
}

QPaintEngine* q_inputdialog_qbase_paint_engine(void* self) {
    return QInputDialog_QBasePaintEngine((QInputDialog*)self);
}

void q_inputdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QInputDialog_OnPaintEngine((QInputDialog*)self, (intptr_t)callback);
}

bool q_inputdialog_event(void* self, void* event) {
    return QInputDialog_Event((QInputDialog*)self, (QEvent*)event);
}

bool q_inputdialog_qbase_event(void* self, void* event) {
    return QInputDialog_QBaseEvent((QInputDialog*)self, (QEvent*)event);
}

void q_inputdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    QInputDialog_OnEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_mouse_press_event(void* self, void* event) {
    QInputDialog_MousePressEvent((QInputDialog*)self, (QMouseEvent*)event);
}

void q_inputdialog_qbase_mouse_press_event(void* self, void* event) {
    QInputDialog_QBaseMousePressEvent((QInputDialog*)self, (QMouseEvent*)event);
}

void q_inputdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnMousePressEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_mouse_release_event(void* self, void* event) {
    QInputDialog_MouseReleaseEvent((QInputDialog*)self, (QMouseEvent*)event);
}

void q_inputdialog_qbase_mouse_release_event(void* self, void* event) {
    QInputDialog_QBaseMouseReleaseEvent((QInputDialog*)self, (QMouseEvent*)event);
}

void q_inputdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnMouseReleaseEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_mouse_double_click_event(void* self, void* event) {
    QInputDialog_MouseDoubleClickEvent((QInputDialog*)self, (QMouseEvent*)event);
}

void q_inputdialog_qbase_mouse_double_click_event(void* self, void* event) {
    QInputDialog_QBaseMouseDoubleClickEvent((QInputDialog*)self, (QMouseEvent*)event);
}

void q_inputdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnMouseDoubleClickEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_mouse_move_event(void* self, void* event) {
    QInputDialog_MouseMoveEvent((QInputDialog*)self, (QMouseEvent*)event);
}

void q_inputdialog_qbase_mouse_move_event(void* self, void* event) {
    QInputDialog_QBaseMouseMoveEvent((QInputDialog*)self, (QMouseEvent*)event);
}

void q_inputdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnMouseMoveEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_wheel_event(void* self, void* event) {
    QInputDialog_WheelEvent((QInputDialog*)self, (QWheelEvent*)event);
}

void q_inputdialog_qbase_wheel_event(void* self, void* event) {
    QInputDialog_QBaseWheelEvent((QInputDialog*)self, (QWheelEvent*)event);
}

void q_inputdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnWheelEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_key_release_event(void* self, void* event) {
    QInputDialog_KeyReleaseEvent((QInputDialog*)self, (QKeyEvent*)event);
}

void q_inputdialog_qbase_key_release_event(void* self, void* event) {
    QInputDialog_QBaseKeyReleaseEvent((QInputDialog*)self, (QKeyEvent*)event);
}

void q_inputdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnKeyReleaseEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_focus_in_event(void* self, void* event) {
    QInputDialog_FocusInEvent((QInputDialog*)self, (QFocusEvent*)event);
}

void q_inputdialog_qbase_focus_in_event(void* self, void* event) {
    QInputDialog_QBaseFocusInEvent((QInputDialog*)self, (QFocusEvent*)event);
}

void q_inputdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnFocusInEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_focus_out_event(void* self, void* event) {
    QInputDialog_FocusOutEvent((QInputDialog*)self, (QFocusEvent*)event);
}

void q_inputdialog_qbase_focus_out_event(void* self, void* event) {
    QInputDialog_QBaseFocusOutEvent((QInputDialog*)self, (QFocusEvent*)event);
}

void q_inputdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnFocusOutEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_enter_event(void* self, void* event) {
    QInputDialog_EnterEvent((QInputDialog*)self, (QEnterEvent*)event);
}

void q_inputdialog_qbase_enter_event(void* self, void* event) {
    QInputDialog_QBaseEnterEvent((QInputDialog*)self, (QEnterEvent*)event);
}

void q_inputdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnEnterEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_leave_event(void* self, void* event) {
    QInputDialog_LeaveEvent((QInputDialog*)self, (QEvent*)event);
}

void q_inputdialog_qbase_leave_event(void* self, void* event) {
    QInputDialog_QBaseLeaveEvent((QInputDialog*)self, (QEvent*)event);
}

void q_inputdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnLeaveEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_paint_event(void* self, void* event) {
    QInputDialog_PaintEvent((QInputDialog*)self, (QPaintEvent*)event);
}

void q_inputdialog_qbase_paint_event(void* self, void* event) {
    QInputDialog_QBasePaintEvent((QInputDialog*)self, (QPaintEvent*)event);
}

void q_inputdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnPaintEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_move_event(void* self, void* event) {
    QInputDialog_MoveEvent((QInputDialog*)self, (QMoveEvent*)event);
}

void q_inputdialog_qbase_move_event(void* self, void* event) {
    QInputDialog_QBaseMoveEvent((QInputDialog*)self, (QMoveEvent*)event);
}

void q_inputdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnMoveEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_tablet_event(void* self, void* event) {
    QInputDialog_TabletEvent((QInputDialog*)self, (QTabletEvent*)event);
}

void q_inputdialog_qbase_tablet_event(void* self, void* event) {
    QInputDialog_QBaseTabletEvent((QInputDialog*)self, (QTabletEvent*)event);
}

void q_inputdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnTabletEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_action_event(void* self, void* event) {
    QInputDialog_ActionEvent((QInputDialog*)self, (QActionEvent*)event);
}

void q_inputdialog_qbase_action_event(void* self, void* event) {
    QInputDialog_QBaseActionEvent((QInputDialog*)self, (QActionEvent*)event);
}

void q_inputdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnActionEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_drag_enter_event(void* self, void* event) {
    QInputDialog_DragEnterEvent((QInputDialog*)self, (QDragEnterEvent*)event);
}

void q_inputdialog_qbase_drag_enter_event(void* self, void* event) {
    QInputDialog_QBaseDragEnterEvent((QInputDialog*)self, (QDragEnterEvent*)event);
}

void q_inputdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnDragEnterEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_drag_move_event(void* self, void* event) {
    QInputDialog_DragMoveEvent((QInputDialog*)self, (QDragMoveEvent*)event);
}

void q_inputdialog_qbase_drag_move_event(void* self, void* event) {
    QInputDialog_QBaseDragMoveEvent((QInputDialog*)self, (QDragMoveEvent*)event);
}

void q_inputdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnDragMoveEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_drag_leave_event(void* self, void* event) {
    QInputDialog_DragLeaveEvent((QInputDialog*)self, (QDragLeaveEvent*)event);
}

void q_inputdialog_qbase_drag_leave_event(void* self, void* event) {
    QInputDialog_QBaseDragLeaveEvent((QInputDialog*)self, (QDragLeaveEvent*)event);
}

void q_inputdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnDragLeaveEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_drop_event(void* self, void* event) {
    QInputDialog_DropEvent((QInputDialog*)self, (QDropEvent*)event);
}

void q_inputdialog_qbase_drop_event(void* self, void* event) {
    QInputDialog_QBaseDropEvent((QInputDialog*)self, (QDropEvent*)event);
}

void q_inputdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnDropEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_hide_event(void* self, void* event) {
    QInputDialog_HideEvent((QInputDialog*)self, (QHideEvent*)event);
}

void q_inputdialog_qbase_hide_event(void* self, void* event) {
    QInputDialog_QBaseHideEvent((QInputDialog*)self, (QHideEvent*)event);
}

void q_inputdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnHideEvent((QInputDialog*)self, (intptr_t)callback);
}

bool q_inputdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QInputDialog_NativeEvent((QInputDialog*)self, qstring(eventType), message, result);
}

bool q_inputdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QInputDialog_QBaseNativeEvent((QInputDialog*)self, qstring(eventType), message, result);
}

void q_inputdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QInputDialog_OnNativeEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_change_event(void* self, void* param1) {
    QInputDialog_ChangeEvent((QInputDialog*)self, (QEvent*)param1);
}

void q_inputdialog_qbase_change_event(void* self, void* param1) {
    QInputDialog_QBaseChangeEvent((QInputDialog*)self, (QEvent*)param1);
}

void q_inputdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnChangeEvent((QInputDialog*)self, (intptr_t)callback);
}

int32_t q_inputdialog_metric(void* self, int32_t param1) {
    return QInputDialog_Metric((QInputDialog*)self, param1);
}

int32_t q_inputdialog_qbase_metric(void* self, int32_t param1) {
    return QInputDialog_QBaseMetric((QInputDialog*)self, param1);
}

void q_inputdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QInputDialog_OnMetric((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_init_painter(void* self, void* painter) {
    QInputDialog_InitPainter((QInputDialog*)self, (QPainter*)painter);
}

void q_inputdialog_qbase_init_painter(void* self, void* painter) {
    QInputDialog_QBaseInitPainter((QInputDialog*)self, (QPainter*)painter);
}

void q_inputdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnInitPainter((QInputDialog*)self, (intptr_t)callback);
}

QPaintDevice* q_inputdialog_redirected(void* self, void* offset) {
    return QInputDialog_Redirected((QInputDialog*)self, (QPoint*)offset);
}

QPaintDevice* q_inputdialog_qbase_redirected(void* self, void* offset) {
    return QInputDialog_QBaseRedirected((QInputDialog*)self, (QPoint*)offset);
}

void q_inputdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QInputDialog_OnRedirected((QInputDialog*)self, (intptr_t)callback);
}

QPainter* q_inputdialog_shared_painter(void* self) {
    return QInputDialog_SharedPainter((QInputDialog*)self);
}

QPainter* q_inputdialog_qbase_shared_painter(void* self) {
    return QInputDialog_QBaseSharedPainter((QInputDialog*)self);
}

void q_inputdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    QInputDialog_OnSharedPainter((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_input_method_event(void* self, void* param1) {
    QInputDialog_InputMethodEvent((QInputDialog*)self, (QInputMethodEvent*)param1);
}

void q_inputdialog_qbase_input_method_event(void* self, void* param1) {
    QInputDialog_QBaseInputMethodEvent((QInputDialog*)self, (QInputMethodEvent*)param1);
}

void q_inputdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnInputMethodEvent((QInputDialog*)self, (intptr_t)callback);
}

QVariant* q_inputdialog_input_method_query(void* self, int32_t param1) {
    return QInputDialog_InputMethodQuery((QInputDialog*)self, param1);
}

QVariant* q_inputdialog_qbase_input_method_query(void* self, int32_t param1) {
    return QInputDialog_QBaseInputMethodQuery((QInputDialog*)self, param1);
}

void q_inputdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QInputDialog_OnInputMethodQuery((QInputDialog*)self, (intptr_t)callback);
}

bool q_inputdialog_focus_next_prev_child(void* self, bool next) {
    return QInputDialog_FocusNextPrevChild((QInputDialog*)self, next);
}

bool q_inputdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QInputDialog_QBaseFocusNextPrevChild((QInputDialog*)self, next);
}

void q_inputdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QInputDialog_OnFocusNextPrevChild((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_timer_event(void* self, void* event) {
    QInputDialog_TimerEvent((QInputDialog*)self, (QTimerEvent*)event);
}

void q_inputdialog_qbase_timer_event(void* self, void* event) {
    QInputDialog_QBaseTimerEvent((QInputDialog*)self, (QTimerEvent*)event);
}

void q_inputdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnTimerEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_child_event(void* self, void* event) {
    QInputDialog_ChildEvent((QInputDialog*)self, (QChildEvent*)event);
}

void q_inputdialog_qbase_child_event(void* self, void* event) {
    QInputDialog_QBaseChildEvent((QInputDialog*)self, (QChildEvent*)event);
}

void q_inputdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnChildEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_custom_event(void* self, void* event) {
    QInputDialog_CustomEvent((QInputDialog*)self, (QEvent*)event);
}

void q_inputdialog_qbase_custom_event(void* self, void* event) {
    QInputDialog_QBaseCustomEvent((QInputDialog*)self, (QEvent*)event);
}

void q_inputdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnCustomEvent((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_connect_notify(void* self, void* signal) {
    QInputDialog_ConnectNotify((QInputDialog*)self, (QMetaMethod*)signal);
}

void q_inputdialog_qbase_connect_notify(void* self, void* signal) {
    QInputDialog_QBaseConnectNotify((QInputDialog*)self, (QMetaMethod*)signal);
}

void q_inputdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnConnectNotify((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_disconnect_notify(void* self, void* signal) {
    QInputDialog_DisconnectNotify((QInputDialog*)self, (QMetaMethod*)signal);
}

void q_inputdialog_qbase_disconnect_notify(void* self, void* signal) {
    QInputDialog_QBaseDisconnectNotify((QInputDialog*)self, (QMetaMethod*)signal);
}

void q_inputdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnDisconnectNotify((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_adjust_position(void* self, void* param1) {
    QInputDialog_AdjustPosition((QInputDialog*)self, (QWidget*)param1);
}

void q_inputdialog_qbase_adjust_position(void* self, void* param1) {
    QInputDialog_QBaseAdjustPosition((QInputDialog*)self, (QWidget*)param1);
}

void q_inputdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    QInputDialog_OnAdjustPosition((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_update_micro_focus(void* self) {
    QInputDialog_UpdateMicroFocus((QInputDialog*)self);
}

void q_inputdialog_qbase_update_micro_focus(void* self) {
    QInputDialog_QBaseUpdateMicroFocus((QInputDialog*)self);
}

void q_inputdialog_on_update_micro_focus(void* self, void (*callback)()) {
    QInputDialog_OnUpdateMicroFocus((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_create(void* self) {
    QInputDialog_Create((QInputDialog*)self);
}

void q_inputdialog_qbase_create(void* self) {
    QInputDialog_QBaseCreate((QInputDialog*)self);
}

void q_inputdialog_on_create(void* self, void (*callback)()) {
    QInputDialog_OnCreate((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_destroy(void* self) {
    QInputDialog_Destroy((QInputDialog*)self);
}

void q_inputdialog_qbase_destroy(void* self) {
    QInputDialog_QBaseDestroy((QInputDialog*)self);
}

void q_inputdialog_on_destroy(void* self, void (*callback)()) {
    QInputDialog_OnDestroy((QInputDialog*)self, (intptr_t)callback);
}

bool q_inputdialog_focus_next_child(void* self) {
    return QInputDialog_FocusNextChild((QInputDialog*)self);
}

bool q_inputdialog_qbase_focus_next_child(void* self) {
    return QInputDialog_QBaseFocusNextChild((QInputDialog*)self);
}

void q_inputdialog_on_focus_next_child(void* self, bool (*callback)()) {
    QInputDialog_OnFocusNextChild((QInputDialog*)self, (intptr_t)callback);
}

bool q_inputdialog_focus_previous_child(void* self) {
    return QInputDialog_FocusPreviousChild((QInputDialog*)self);
}

bool q_inputdialog_qbase_focus_previous_child(void* self) {
    return QInputDialog_QBaseFocusPreviousChild((QInputDialog*)self);
}

void q_inputdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    QInputDialog_OnFocusPreviousChild((QInputDialog*)self, (intptr_t)callback);
}

QObject* q_inputdialog_sender(void* self) {
    return QInputDialog_Sender((QInputDialog*)self);
}

QObject* q_inputdialog_qbase_sender(void* self) {
    return QInputDialog_QBaseSender((QInputDialog*)self);
}

void q_inputdialog_on_sender(void* self, QObject* (*callback)()) {
    QInputDialog_OnSender((QInputDialog*)self, (intptr_t)callback);
}

int32_t q_inputdialog_sender_signal_index(void* self) {
    return QInputDialog_SenderSignalIndex((QInputDialog*)self);
}

int32_t q_inputdialog_qbase_sender_signal_index(void* self) {
    return QInputDialog_QBaseSenderSignalIndex((QInputDialog*)self);
}

void q_inputdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QInputDialog_OnSenderSignalIndex((QInputDialog*)self, (intptr_t)callback);
}

int32_t q_inputdialog_receivers(void* self, const char* signal) {
    return QInputDialog_Receivers((QInputDialog*)self, signal);
}

int32_t q_inputdialog_qbase_receivers(void* self, const char* signal) {
    return QInputDialog_QBaseReceivers((QInputDialog*)self, signal);
}

void q_inputdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QInputDialog_OnReceivers((QInputDialog*)self, (intptr_t)callback);
}

bool q_inputdialog_is_signal_connected(void* self, void* signal) {
    return QInputDialog_IsSignalConnected((QInputDialog*)self, (QMetaMethod*)signal);
}

bool q_inputdialog_qbase_is_signal_connected(void* self, void* signal) {
    return QInputDialog_QBaseIsSignalConnected((QInputDialog*)self, (QMetaMethod*)signal);
}

void q_inputdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QInputDialog_OnIsSignalConnected((QInputDialog*)self, (intptr_t)callback);
}

double q_inputdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QInputDialog_GetDecodedMetricF((QInputDialog*)self, metricA, metricB);
}

double q_inputdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QInputDialog_QBaseGetDecodedMetricF((QInputDialog*)self, metricA, metricB);
}

void q_inputdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QInputDialog_OnGetDecodedMetricF((QInputDialog*)self, (intptr_t)callback);
}

void q_inputdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_inputdialog_delete(void* self) {
    QInputDialog_Delete((QInputDialog*)(self));
}
