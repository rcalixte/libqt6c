#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcursor.hpp"
#include "libqdialog.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqinputdialog.hpp"
#include "libqinputdialog.h"

/// https://doc.qt.io/qt-6/qinputdialog.html

/// q_inputdialog_new constructs a new QInputDialog object.
///
/// ``` QWidget* parent ```
QInputDialog* q_inputdialog_new(void* parent) {
    return QInputDialog_new((QWidget*)parent);
}

/// q_inputdialog_new2 constructs a new QInputDialog object.
///
///
QInputDialog* q_inputdialog_new2() {
    return QInputDialog_new2();
}

/// q_inputdialog_new3 constructs a new QInputDialog object.
///
/// ``` QWidget* parent, int flags ```
QInputDialog* q_inputdialog_new3(void* parent, int64_t flags) {
    return QInputDialog_new3((QWidget*)parent, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QInputDialog* self ```
QMetaObject* q_inputdialog_meta_object(void* self) {
    return QInputDialog_MetaObject((QInputDialog*)self);
}

/// ``` QInputDialog* self, const char* param1 ```
void* q_inputdialog_metacast(void* self, const char* param1) {
    return QInputDialog_Metacast((QInputDialog*)self, param1);
}

/// ``` QInputDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_inputdialog_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QInputDialog_Metacall((QInputDialog*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QInputDialog* self, int32_t (*slot)(QInputDialog*, enum QMetaObject__Call, int, void*) ```
void q_inputdialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QInputDialog_OnMetacall((QInputDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QInputDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_inputdialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QInputDialog_QBaseMetacall((QInputDialog*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_inputdialog_tr(const char* s) {
    libqt_string _str = QInputDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setInputMode)
///
/// ``` QInputDialog* self, enum QInputDialog__InputMode mode ```
void q_inputdialog_set_input_mode(void* self, int64_t mode) {
    QInputDialog_SetInputMode((QInputDialog*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#inputMode)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_input_mode(void* self) {
    return QInputDialog_InputMode((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setLabelText)
///
/// ``` QInputDialog* self, const char* text ```
void q_inputdialog_set_label_text(void* self, const char* text) {
    QInputDialog_SetLabelText((QInputDialog*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#labelText)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_label_text(void* self) {
    libqt_string _str = QInputDialog_LabelText((QInputDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setOption)
///
/// ``` QInputDialog* self, enum QInputDialog__InputDialogOption option ```
void q_inputdialog_set_option(void* self, int64_t option) {
    QInputDialog_SetOption((QInputDialog*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#testOption)
///
/// ``` QInputDialog* self, enum QInputDialog__InputDialogOption option ```
bool q_inputdialog_test_option(void* self, int64_t option) {
    return QInputDialog_TestOption((QInputDialog*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setOptions)
///
/// ``` QInputDialog* self, int options ```
void q_inputdialog_set_options(void* self, int64_t options) {
    QInputDialog_SetOptions((QInputDialog*)self, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#options)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_options(void* self) {
    return QInputDialog_Options((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setTextValue)
///
/// ``` QInputDialog* self, const char* text ```
void q_inputdialog_set_text_value(void* self, const char* text) {
    QInputDialog_SetTextValue((QInputDialog*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#textValue)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_text_value(void* self) {
    libqt_string _str = QInputDialog_TextValue((QInputDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setTextEchoMode)
///
/// ``` QInputDialog* self, enum QLineEdit__EchoMode mode ```
void q_inputdialog_set_text_echo_mode(void* self, int64_t mode) {
    QInputDialog_SetTextEchoMode((QInputDialog*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#textEchoMode)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_text_echo_mode(void* self) {
    return QInputDialog_TextEchoMode((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setComboBoxEditable)
///
/// ``` QInputDialog* self, bool editable ```
void q_inputdialog_set_combo_box_editable(void* self, bool editable) {
    QInputDialog_SetComboBoxEditable((QInputDialog*)self, editable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#isComboBoxEditable)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_combo_box_editable(void* self) {
    return QInputDialog_IsComboBoxEditable((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setComboBoxItems)
///
/// ``` QInputDialog* self, const char* items[] ```
void q_inputdialog_set_combo_box_items(void* self, const char* items[]) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = malloc(items_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < items_len; ++_i) {
        items_qstr[_i] = qstring(items[_i]);
    }
    libqt_list items_list = qstrlist(items_qstr, items_len);
    QInputDialog_SetComboBoxItems((QInputDialog*)self, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#comboBoxItems)
///
/// ``` QInputDialog* self ```
const char** q_inputdialog_combo_box_items(void* self) {
    libqt_list _arr = QInputDialog_ComboBoxItems((QInputDialog*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setIntValue)
///
/// ``` QInputDialog* self, int value ```
void q_inputdialog_set_int_value(void* self, int value) {
    QInputDialog_SetIntValue((QInputDialog*)self, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#intValue)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_int_value(void* self) {
    return QInputDialog_IntValue((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setIntMinimum)
///
/// ``` QInputDialog* self, int min ```
void q_inputdialog_set_int_minimum(void* self, int min) {
    QInputDialog_SetIntMinimum((QInputDialog*)self, min);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#intMinimum)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_int_minimum(void* self) {
    return QInputDialog_IntMinimum((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setIntMaximum)
///
/// ``` QInputDialog* self, int max ```
void q_inputdialog_set_int_maximum(void* self, int max) {
    QInputDialog_SetIntMaximum((QInputDialog*)self, max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#intMaximum)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_int_maximum(void* self) {
    return QInputDialog_IntMaximum((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setIntRange)
///
/// ``` QInputDialog* self, int min, int max ```
void q_inputdialog_set_int_range(void* self, int min, int max) {
    QInputDialog_SetIntRange((QInputDialog*)self, min, max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setIntStep)
///
/// ``` QInputDialog* self, int step ```
void q_inputdialog_set_int_step(void* self, int step) {
    QInputDialog_SetIntStep((QInputDialog*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#intStep)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_int_step(void* self) {
    return QInputDialog_IntStep((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleValue)
///
/// ``` QInputDialog* self, double value ```
void q_inputdialog_set_double_value(void* self, double value) {
    QInputDialog_SetDoubleValue((QInputDialog*)self, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleValue)
///
/// ``` QInputDialog* self ```
double q_inputdialog_double_value(void* self) {
    return QInputDialog_DoubleValue((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleMinimum)
///
/// ``` QInputDialog* self, double min ```
void q_inputdialog_set_double_minimum(void* self, double min) {
    QInputDialog_SetDoubleMinimum((QInputDialog*)self, min);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleMinimum)
///
/// ``` QInputDialog* self ```
double q_inputdialog_double_minimum(void* self) {
    return QInputDialog_DoubleMinimum((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleMaximum)
///
/// ``` QInputDialog* self, double max ```
void q_inputdialog_set_double_maximum(void* self, double max) {
    QInputDialog_SetDoubleMaximum((QInputDialog*)self, max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleMaximum)
///
/// ``` QInputDialog* self ```
double q_inputdialog_double_maximum(void* self) {
    return QInputDialog_DoubleMaximum((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleRange)
///
/// ``` QInputDialog* self, double min, double max ```
void q_inputdialog_set_double_range(void* self, double min, double max) {
    QInputDialog_SetDoubleRange((QInputDialog*)self, min, max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleDecimals)
///
/// ``` QInputDialog* self, int decimals ```
void q_inputdialog_set_double_decimals(void* self, int decimals) {
    QInputDialog_SetDoubleDecimals((QInputDialog*)self, decimals);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleDecimals)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_double_decimals(void* self) {
    return QInputDialog_DoubleDecimals((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setOkButtonText)
///
/// ``` QInputDialog* self, const char* text ```
void q_inputdialog_set_ok_button_text(void* self, const char* text) {
    QInputDialog_SetOkButtonText((QInputDialog*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#okButtonText)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_ok_button_text(void* self) {
    libqt_string _str = QInputDialog_OkButtonText((QInputDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setCancelButtonText)
///
/// ``` QInputDialog* self, const char* text ```
void q_inputdialog_set_cancel_button_text(void* self, const char* text) {
    QInputDialog_SetCancelButtonText((QInputDialog*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#cancelButtonText)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_cancel_button_text(void* self) {
    libqt_string _str = QInputDialog_CancelButtonText((QInputDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#minimumSizeHint)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_minimum_size_hint(void* self) {
    return QInputDialog_MinimumSizeHint((QInputDialog*)self);
}

/// Allows for overriding the related default method
///
/// ``` QInputDialog* self, QSize* (*slot)() ```
void q_inputdialog_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QInputDialog_OnMinimumSizeHint((QInputDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_qbase_minimum_size_hint(void* self) {
    return QInputDialog_QBaseMinimumSizeHint((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#sizeHint)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_size_hint(void* self) {
    return QInputDialog_SizeHint((QInputDialog*)self);
}

/// Allows for overriding the related default method
///
/// ``` QInputDialog* self, QSize* (*slot)() ```
void q_inputdialog_on_size_hint(void* self, QSize* (*slot)()) {
    QInputDialog_OnSizeHint((QInputDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_qbase_size_hint(void* self) {
    return QInputDialog_QBaseSizeHint((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setVisible)
///
/// ``` QInputDialog* self, bool visible ```
void q_inputdialog_set_visible(void* self, bool visible) {
    QInputDialog_SetVisible((QInputDialog*)self, visible);
}

/// Allows for overriding the related default method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, bool) ```
void q_inputdialog_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QInputDialog_OnSetVisible((QInputDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QInputDialog* self, bool visible ```
void q_inputdialog_qbase_set_visible(void* self, bool visible) {
    QInputDialog_QBaseSetVisible((QInputDialog*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// ``` QWidget* parent, const char* title, const char* label ```
const char* q_inputdialog_get_text(void* parent, const char* title, const char* label) {
    libqt_string _str = QInputDialog_GetText((QWidget*)parent, qstring(title), qstring(label));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// ``` QWidget* parent, const char* title, const char* label ```
const char* q_inputdialog_get_multi_line_text(void* parent, const char* title, const char* label) {
    libqt_string _str = QInputDialog_GetMultiLineText((QWidget*)parent, qstring(title), qstring(label));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* items[] ```
const char* q_inputdialog_get_item(void* parent, const char* title, const char* label, const char* items[]) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = malloc(items_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < items_len; ++_i) {
        items_qstr[_i] = qstring(items[_i]);
    }
    libqt_list items_list = qstrlist(items_qstr, items_len);
    libqt_string _str = QInputDialog_GetItem((QWidget*)parent, qstring(title), qstring(label), items_list);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// ``` QWidget* parent, const char* title, const char* label ```
int32_t q_inputdialog_get_int(void* parent, const char* title, const char* label) {
    return QInputDialog_GetInt((QWidget*)parent, qstring(title), qstring(label));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label ```
double q_inputdialog_get_double(void* parent, const char* title, const char* label) {
    return QInputDialog_GetDouble((QWidget*)parent, qstring(title), qstring(label));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleStep)
///
/// ``` QInputDialog* self, double step ```
void q_inputdialog_set_double_step(void* self, double step) {
    QInputDialog_SetDoubleStep((QInputDialog*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleStep)
///
/// ``` QInputDialog* self ```
double q_inputdialog_double_step(void* self) {
    return QInputDialog_DoubleStep((QInputDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#textValueChanged)
///
/// ``` QInputDialog* self, const char* text ```
void q_inputdialog_text_value_changed(void* self, const char* text) {
    QInputDialog_TextValueChanged((QInputDialog*)self, qstring(text));
}

/// ``` QInputDialog* self, void (*slot)(QInputDialog*, const char*) ```
void q_inputdialog_on_text_value_changed(void* self, void (*slot)(void*, const char*)) {
    QInputDialog_Connect_TextValueChanged((QInputDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#textValueSelected)
///
/// ``` QInputDialog* self, const char* text ```
void q_inputdialog_text_value_selected(void* self, const char* text) {
    QInputDialog_TextValueSelected((QInputDialog*)self, qstring(text));
}

/// ``` QInputDialog* self, void (*slot)(QInputDialog*, const char*) ```
void q_inputdialog_on_text_value_selected(void* self, void (*slot)(void*, const char*)) {
    QInputDialog_Connect_TextValueSelected((QInputDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#intValueChanged)
///
/// ``` QInputDialog* self, int value ```
void q_inputdialog_int_value_changed(void* self, int value) {
    QInputDialog_IntValueChanged((QInputDialog*)self, value);
}

/// ``` QInputDialog* self, void (*slot)(QInputDialog*, int) ```
void q_inputdialog_on_int_value_changed(void* self, void (*slot)(void*, int)) {
    QInputDialog_Connect_IntValueChanged((QInputDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#intValueSelected)
///
/// ``` QInputDialog* self, int value ```
void q_inputdialog_int_value_selected(void* self, int value) {
    QInputDialog_IntValueSelected((QInputDialog*)self, value);
}

/// ``` QInputDialog* self, void (*slot)(QInputDialog*, int) ```
void q_inputdialog_on_int_value_selected(void* self, void (*slot)(void*, int)) {
    QInputDialog_Connect_IntValueSelected((QInputDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleValueChanged)
///
/// ``` QInputDialog* self, double value ```
void q_inputdialog_double_value_changed(void* self, double value) {
    QInputDialog_DoubleValueChanged((QInputDialog*)self, value);
}

/// ``` QInputDialog* self, void (*slot)(QInputDialog*, double) ```
void q_inputdialog_on_double_value_changed(void* self, void (*slot)(void*, double)) {
    QInputDialog_Connect_DoubleValueChanged((QInputDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleValueSelected)
///
/// ``` QInputDialog* self, double value ```
void q_inputdialog_double_value_selected(void* self, double value) {
    QInputDialog_DoubleValueSelected((QInputDialog*)self, value);
}

/// ``` QInputDialog* self, void (*slot)(QInputDialog*, double) ```
void q_inputdialog_on_double_value_selected(void* self, void (*slot)(void*, double)) {
    QInputDialog_Connect_DoubleValueSelected((QInputDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#done)
///
/// ``` QInputDialog* self, int result ```
void q_inputdialog_done(void* self, int result) {
    QInputDialog_Done((QInputDialog*)self, result);
}

/// Allows for overriding the related default method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, int) ```
void q_inputdialog_on_done(void* self, void (*slot)(void*, int)) {
    QInputDialog_OnDone((QInputDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QInputDialog* self, int result ```
void q_inputdialog_qbase_done(void* self, int result) {
    QInputDialog_QBaseDone((QInputDialog*)self, result);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_inputdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QInputDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_inputdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QInputDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setOption)
///
/// ``` QInputDialog* self, enum QInputDialog__InputDialogOption option, bool on ```
void q_inputdialog_set_option2(void* self, int64_t option, bool on) {
    QInputDialog_SetOption2((QInputDialog*)self, option, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// ``` QWidget* parent, const char* title, const char* label, enum QLineEdit__EchoMode echo ```
const char* q_inputdialog_get_text4(void* parent, const char* title, const char* label, int64_t echo) {
    libqt_string _str = QInputDialog_GetText4((QWidget*)parent, qstring(title), qstring(label), echo);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// ``` QWidget* parent, const char* title, const char* label, enum QLineEdit__EchoMode echo, const char* text ```
const char* q_inputdialog_get_text5(void* parent, const char* title, const char* label, int64_t echo, const char* text) {
    libqt_string _str = QInputDialog_GetText5((QWidget*)parent, qstring(title), qstring(label), echo, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// ``` QWidget* parent, const char* title, const char* label, enum QLineEdit__EchoMode echo, const char* text, bool* ok ```
const char* q_inputdialog_get_text6(void* parent, const char* title, const char* label, int64_t echo, const char* text, bool* ok) {
    libqt_string _str = QInputDialog_GetText6((QWidget*)parent, qstring(title), qstring(label), echo, qstring(text), (bool*)ok);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// ``` QWidget* parent, const char* title, const char* label, enum QLineEdit__EchoMode echo, const char* text, bool* ok, int flags ```
const char* q_inputdialog_get_text7(void* parent, const char* title, const char* label, int64_t echo, const char* text, bool* ok, int64_t flags) {
    libqt_string _str = QInputDialog_GetText7((QWidget*)parent, qstring(title), qstring(label), echo, qstring(text), (bool*)ok, flags);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// ``` QWidget* parent, const char* title, const char* label, enum QLineEdit__EchoMode echo, const char* text, bool* ok, int flags, int inputMethodHints ```
const char* q_inputdialog_get_text8(void* parent, const char* title, const char* label, int64_t echo, const char* text, bool* ok, int64_t flags, int64_t inputMethodHints) {
    libqt_string _str = QInputDialog_GetText8((QWidget*)parent, qstring(title), qstring(label), echo, qstring(text), (bool*)ok, flags, inputMethodHints);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* text ```
const char* q_inputdialog_get_multi_line_text4(void* parent, const char* title, const char* label, const char* text) {
    libqt_string _str = QInputDialog_GetMultiLineText4((QWidget*)parent, qstring(title), qstring(label), qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* text, bool* ok ```
const char* q_inputdialog_get_multi_line_text5(void* parent, const char* title, const char* label, const char* text, bool* ok) {
    libqt_string _str = QInputDialog_GetMultiLineText5((QWidget*)parent, qstring(title), qstring(label), qstring(text), (bool*)ok);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* text, bool* ok, int flags ```
const char* q_inputdialog_get_multi_line_text6(void* parent, const char* title, const char* label, const char* text, bool* ok, int64_t flags) {
    libqt_string _str = QInputDialog_GetMultiLineText6((QWidget*)parent, qstring(title), qstring(label), qstring(text), (bool*)ok, flags);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* text, bool* ok, int flags, int inputMethodHints ```
const char* q_inputdialog_get_multi_line_text7(void* parent, const char* title, const char* label, const char* text, bool* ok, int64_t flags, int64_t inputMethodHints) {
    libqt_string _str = QInputDialog_GetMultiLineText7((QWidget*)parent, qstring(title), qstring(label), qstring(text), (bool*)ok, flags, inputMethodHints);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* items[], int current ```
const char* q_inputdialog_get_item5(void* parent, const char* title, const char* label, const char* items[], int current) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = malloc(items_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < items_len; ++_i) {
        items_qstr[_i] = qstring(items[_i]);
    }
    libqt_list items_list = qstrlist(items_qstr, items_len);
    libqt_string _str = QInputDialog_GetItem5((QWidget*)parent, qstring(title), qstring(label), items_list, current);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* items[], int current, bool editable ```
const char* q_inputdialog_get_item6(void* parent, const char* title, const char* label, const char* items[], int current, bool editable) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = malloc(items_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < items_len; ++_i) {
        items_qstr[_i] = qstring(items[_i]);
    }
    libqt_list items_list = qstrlist(items_qstr, items_len);
    libqt_string _str = QInputDialog_GetItem6((QWidget*)parent, qstring(title), qstring(label), items_list, current, editable);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* items[], int current, bool editable, bool* ok ```
const char* q_inputdialog_get_item7(void* parent, const char* title, const char* label, const char* items[], int current, bool editable, bool* ok) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = malloc(items_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < items_len; ++_i) {
        items_qstr[_i] = qstring(items[_i]);
    }
    libqt_list items_list = qstrlist(items_qstr, items_len);
    libqt_string _str = QInputDialog_GetItem7((QWidget*)parent, qstring(title), qstring(label), items_list, current, editable, (bool*)ok);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* items[], int current, bool editable, bool* ok, int flags ```
const char* q_inputdialog_get_item8(void* parent, const char* title, const char* label, const char* items[], int current, bool editable, bool* ok, int64_t flags) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = malloc(items_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < items_len; ++_i) {
        items_qstr[_i] = qstring(items[_i]);
    }
    libqt_list items_list = qstrlist(items_qstr, items_len);
    libqt_string _str = QInputDialog_GetItem8((QWidget*)parent, qstring(title), qstring(label), items_list, current, editable, (bool*)ok, flags);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* items[], int current, bool editable, bool* ok, int flags, int inputMethodHints ```
const char* q_inputdialog_get_item9(void* parent, const char* title, const char* label, const char* items[], int current, bool editable, bool* ok, int64_t flags, int64_t inputMethodHints) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = malloc(items_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < items_len; ++_i) {
        items_qstr[_i] = qstring(items[_i]);
    }
    libqt_list items_list = qstrlist(items_qstr, items_len);
    libqt_string _str = QInputDialog_GetItem9((QWidget*)parent, qstring(title), qstring(label), items_list, current, editable, (bool*)ok, flags, inputMethodHints);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// ``` QWidget* parent, const char* title, const char* label, int value ```
int32_t q_inputdialog_get_int4(void* parent, const char* title, const char* label, int value) {
    return QInputDialog_GetInt4((QWidget*)parent, qstring(title), qstring(label), value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// ``` QWidget* parent, const char* title, const char* label, int value, int minValue ```
int32_t q_inputdialog_get_int5(void* parent, const char* title, const char* label, int value, int minValue) {
    return QInputDialog_GetInt5((QWidget*)parent, qstring(title), qstring(label), value, minValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// ``` QWidget* parent, const char* title, const char* label, int value, int minValue, int maxValue ```
int32_t q_inputdialog_get_int6(void* parent, const char* title, const char* label, int value, int minValue, int maxValue) {
    return QInputDialog_GetInt6((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// ``` QWidget* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step ```
int32_t q_inputdialog_get_int7(void* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step) {
    return QInputDialog_GetInt7((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// ``` QWidget* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step, bool* ok ```
int32_t q_inputdialog_get_int8(void* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step, bool* ok) {
    return QInputDialog_GetInt8((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue, step, (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// ``` QWidget* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step, bool* ok, int flags ```
int32_t q_inputdialog_get_int9(void* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step, bool* ok, int64_t flags) {
    return QInputDialog_GetInt9((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue, step, (bool*)ok, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label, double value ```
double q_inputdialog_get_double4(void* parent, const char* title, const char* label, double value) {
    return QInputDialog_GetDouble4((QWidget*)parent, qstring(title), qstring(label), value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label, double value, double minValue ```
double q_inputdialog_get_double5(void* parent, const char* title, const char* label, double value, double minValue) {
    return QInputDialog_GetDouble5((QWidget*)parent, qstring(title), qstring(label), value, minValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label, double value, double minValue, double maxValue ```
double q_inputdialog_get_double6(void* parent, const char* title, const char* label, double value, double minValue, double maxValue) {
    return QInputDialog_GetDouble6((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals ```
double q_inputdialog_get_double7(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals) {
    return QInputDialog_GetDouble7((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue, decimals);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok ```
double q_inputdialog_get_double8(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok) {
    return QInputDialog_GetDouble8((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue, decimals, (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags ```
double q_inputdialog_get_double9(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok, int64_t flags) {
    return QInputDialog_GetDouble9((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue, decimals, (bool*)ok, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags, double step ```
double q_inputdialog_get_double10(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok, int64_t flags, double step) {
    return QInputDialog_GetDouble10((QWidget*)parent, qstring(title), qstring(label), value, minValue, maxValue, decimals, (bool*)ok, flags, step);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QInputDialog* self, bool sizeGripEnabled ```
void q_inputdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QInputDialog* self, bool modal ```
void q_inputdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QInputDialog* self, int r ```
void q_inputdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QInputDialog* self, int result ```
void q_inputdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

/// Inherited from QDialog
///
/// ``` QInputDialog* self, void (*slot)(QDialog*, int) ```
void q_inputdialog_on_finished(void* self, void (*slot)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QInputDialog* self ```
void q_inputdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QInputDialog* self, void (*slot)(QDialog*) ```
void q_inputdialog_on_accepted(void* self, void (*slot)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QInputDialog* self ```
void q_inputdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QInputDialog* self, void (*slot)(QDialog*) ```
void q_inputdialog_on_rejected(void* self, void (*slot)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QInputDialog* self ```
uintptr_t q_inputdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QInputDialog* self ```
void q_inputdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QInputDialog* self ```
uintptr_t q_inputdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QInputDialog* self ```
uintptr_t q_inputdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QInputDialog* self ```
QStyle* q_inputdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QInputDialog* self, QStyle* style ```
void q_inputdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QInputDialog* self, enum Qt__WindowModality windowModality ```
void q_inputdialog_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QInputDialog* self, QWidget* param1 ```
bool q_inputdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QInputDialog* self, bool enabled ```
void q_inputdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QInputDialog* self, bool disabled ```
void q_inputdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QInputDialog* self, bool windowModified ```
void q_inputdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QInputDialog* self ```
QRect* q_inputdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QInputDialog* self ```
QRect* q_inputdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QInputDialog* self ```
QRect* q_inputdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QInputDialog* self ```
QPoint* q_inputdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QInputDialog* self ```
QRect* q_inputdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QInputDialog* self ```
QRect* q_inputdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QInputDialog* self ```
QRegion* q_inputdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QInputDialog* self, QSize* minimumSize ```
void q_inputdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QInputDialog* self, int minw, int minh ```
void q_inputdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QInputDialog* self, QSize* maximumSize ```
void q_inputdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QInputDialog* self, int maxw, int maxh ```
void q_inputdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QInputDialog* self, int minw ```
void q_inputdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QInputDialog* self, int minh ```
void q_inputdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QInputDialog* self, int maxw ```
void q_inputdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QInputDialog* self, int maxh ```
void q_inputdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QInputDialog* self, QSize* sizeIncrement ```
void q_inputdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QInputDialog* self, int w, int h ```
void q_inputdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QInputDialog* self, QSize* baseSize ```
void q_inputdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QInputDialog* self, int basew, int baseh ```
void q_inputdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QInputDialog* self, QSize* fixedSize ```
void q_inputdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QInputDialog* self, int w, int h ```
void q_inputdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QInputDialog* self, int w ```
void q_inputdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QInputDialog* self, int h ```
void q_inputdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QInputDialog* self, QPointF* param1 ```
QPointF* q_inputdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QInputDialog* self, QPoint* param1 ```
QPoint* q_inputdialog_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QInputDialog* self, QPointF* param1 ```
QPointF* q_inputdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QInputDialog* self, QPoint* param1 ```
QPoint* q_inputdialog_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QInputDialog* self, QPointF* param1 ```
QPointF* q_inputdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QInputDialog* self, QPoint* param1 ```
QPoint* q_inputdialog_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QInputDialog* self, QPointF* param1 ```
QPointF* q_inputdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QInputDialog* self, QPoint* param1 ```
QPoint* q_inputdialog_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QInputDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_inputdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QInputDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_inputdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QInputDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_inputdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QInputDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_inputdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QInputDialog* self ```
QPalette* q_inputdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QInputDialog* self, QPalette* palette ```
void q_inputdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QInputDialog* self, enum QPalette__ColorRole backgroundRole ```
void q_inputdialog_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QInputDialog* self, enum QPalette__ColorRole foregroundRole ```
void q_inputdialog_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QInputDialog* self ```
QFont* q_inputdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QInputDialog* self, QFont* font ```
void q_inputdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QInputDialog* self ```
QFontMetrics* q_inputdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QInputDialog* self ```
QFontInfo* q_inputdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QInputDialog* self ```
QCursor* q_inputdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QInputDialog* self, QCursor* cursor ```
void q_inputdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QInputDialog* self ```
void q_inputdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QInputDialog* self, bool enable ```
void q_inputdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QInputDialog* self, bool enable ```
void q_inputdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QInputDialog* self, QBitmap* mask ```
void q_inputdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QInputDialog* self, QRegion* mask ```
void q_inputdialog_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QInputDialog* self ```
QRegion* q_inputdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QInputDialog* self ```
void q_inputdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPaintDevice* target ```
void q_inputdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPainter* painter ```
void q_inputdialog_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QInputDialog* self ```
QPixmap* q_inputdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QInputDialog* self ```
QGraphicsEffect* q_inputdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QInputDialog* self, QGraphicsEffect* effect ```
void q_inputdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QInputDialog* self, enum Qt__GestureType typeVal ```
void q_inputdialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QInputDialog* self, enum Qt__GestureType typeVal ```
void q_inputdialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QInputDialog* self, const char* windowTitle ```
void q_inputdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QInputDialog* self, const char* styleSheet ```
void q_inputdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QInputDialog* self, QIcon* icon ```
void q_inputdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QInputDialog* self ```
QIcon* q_inputdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QInputDialog* self, const char* windowIconText ```
void q_inputdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QInputDialog* self, const char* windowRole ```
void q_inputdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QInputDialog* self, const char* filePath ```
void q_inputdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QInputDialog* self, double level ```
void q_inputdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QInputDialog* self ```
double q_inputdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QInputDialog* self, const char* toolTip ```
void q_inputdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QInputDialog* self, int msec ```
void q_inputdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QInputDialog* self, const char* statusTip ```
void q_inputdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QInputDialog* self, const char* whatsThis ```
void q_inputdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QInputDialog* self, const char* name ```
void q_inputdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QInputDialog* self, const char* description ```
void q_inputdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QInputDialog* self, enum Qt__LayoutDirection direction ```
void q_inputdialog_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QInputDialog* self ```
void q_inputdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QInputDialog* self, QLocale* locale ```
void q_inputdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QInputDialog* self ```
QLocale* q_inputdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QInputDialog* self ```
void q_inputdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QInputDialog* self ```
void q_inputdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QInputDialog* self ```
void q_inputdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QInputDialog* self ```
void q_inputdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QInputDialog* self, enum Qt__FocusReason reason ```
void q_inputdialog_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QInputDialog* self, enum Qt__FocusPolicy policy ```
void q_inputdialog_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_inputdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QInputDialog* self, QWidget* focusProxy ```
void q_inputdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QInputDialog* self, enum Qt__ContextMenuPolicy policy ```
void q_inputdialog_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QInputDialog* self ```
void q_inputdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QInputDialog* self, QCursor* param1 ```
void q_inputdialog_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QInputDialog* self ```
void q_inputdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QInputDialog* self ```
void q_inputdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QInputDialog* self ```
void q_inputdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QInputDialog* self, QKeySequence* key ```
int32_t q_inputdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QInputDialog* self, int id ```
void q_inputdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QInputDialog* self, int id ```
void q_inputdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QInputDialog* self, int id ```
void q_inputdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_inputdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_inputdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QInputDialog* self, bool enable ```
void q_inputdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QInputDialog* self ```
QGraphicsProxyWidget* q_inputdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QInputDialog* self ```
void q_inputdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QInputDialog* self ```
void q_inputdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QInputDialog* self, int x, int y, int w, int h ```
void q_inputdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QInputDialog* self, QRect* param1 ```
void q_inputdialog_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QInputDialog* self, QRegion* param1 ```
void q_inputdialog_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QInputDialog* self, int x, int y, int w, int h ```
void q_inputdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QInputDialog* self, QRect* param1 ```
void q_inputdialog_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QInputDialog* self, QRegion* param1 ```
void q_inputdialog_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QInputDialog* self, bool hidden ```
void q_inputdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QInputDialog* self ```
void q_inputdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QInputDialog* self ```
void q_inputdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QInputDialog* self ```
void q_inputdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QInputDialog* self ```
void q_inputdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QInputDialog* self ```
void q_inputdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QInputDialog* self ```
void q_inputdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QInputDialog* self ```
void q_inputdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QInputDialog* self ```
void q_inputdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QInputDialog* self, QWidget* param1 ```
void q_inputdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QInputDialog* self, int x, int y ```
void q_inputdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QInputDialog* self, QPoint* param1 ```
void q_inputdialog_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QInputDialog* self, int w, int h ```
void q_inputdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QInputDialog* self, QSize* param1 ```
void q_inputdialog_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QInputDialog* self, int x, int y, int w, int h ```
void q_inputdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QInputDialog* self, QRect* geometry ```
void q_inputdialog_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QInputDialog* self ```
char* q_inputdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QInputDialog* self, const char* geometry ```
bool q_inputdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QInputDialog* self ```
void q_inputdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QInputDialog* self, QWidget* param1 ```
bool q_inputdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QInputDialog* self, int state ```
void q_inputdialog_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QInputDialog* self, int state ```
void q_inputdialog_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QInputDialog* self ```
QSizePolicy* q_inputdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QInputDialog* self, QSizePolicy* sizePolicy ```
void q_inputdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QInputDialog* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_inputdialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QInputDialog* self ```
QRegion* q_inputdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QInputDialog* self, int left, int top, int right, int bottom ```
void q_inputdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QInputDialog* self, QMargins* margins ```
void q_inputdialog_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QInputDialog* self ```
QMargins* q_inputdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QInputDialog* self ```
QRect* q_inputdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QInputDialog* self ```
QLayout* q_inputdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QInputDialog* self, QLayout* layout ```
void q_inputdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QInputDialog* self ```
void q_inputdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QInputDialog* self, QWidget* parent ```
void q_inputdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QInputDialog* self, QWidget* parent, int f ```
void q_inputdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QInputDialog* self, int dx, int dy ```
void q_inputdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QInputDialog* self, int dx, int dy, QRect* param3 ```
void q_inputdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QInputDialog* self, bool on ```
void q_inputdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QInputDialog* self, QAction* action ```
void q_inputdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QInputDialog* self, QAction* actions[] ```
void q_inputdialog_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QInputDialog* self, QAction* before, QAction* actions[] ```
void q_inputdialog_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QInputDialog* self, QAction* before, QAction* action ```
void q_inputdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QInputDialog* self, QAction* action ```
void q_inputdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QInputDialog* self ```
libqt_list /* of QAction* */ q_inputdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QInputDialog* self, const char* text ```
QAction* q_inputdialog_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QInputDialog* self, QIcon* icon, const char* text ```
QAction* q_inputdialog_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QInputDialog* self, const char* text, QKeySequence* shortcut ```
QAction* q_inputdialog_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QInputDialog* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_inputdialog_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QInputDialog* self, int typeVal ```
void q_inputdialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QInputDialog* self, enum Qt__WindowType param1 ```
void q_inputdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QInputDialog* self, int typeVal ```
void q_inputdialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_inputdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QInputDialog* self, int x, int y ```
QWidget* q_inputdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QInputDialog* self, QPoint* p ```
QWidget* q_inputdialog_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QInputDialog* self, enum Qt__WidgetAttribute param1 ```
void q_inputdialog_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QInputDialog* self, enum Qt__WidgetAttribute param1 ```
bool q_inputdialog_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QInputDialog* self ```
void q_inputdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QInputDialog* self, QWidget* child ```
bool q_inputdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QInputDialog* self, bool enabled ```
void q_inputdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QInputDialog* self ```
QBackingStore* q_inputdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QInputDialog* self ```
QWindow* q_inputdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QInputDialog* self ```
QScreen* q_inputdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QInputDialog* self, QScreen* screen ```
void q_inputdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_inputdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QInputDialog* self, const char* title ```
void q_inputdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QInputDialog* self, void (*slot)(QWidget*, const char*) ```
void q_inputdialog_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QInputDialog* self, QIcon* icon ```
void q_inputdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QInputDialog* self, void (*slot)(QWidget*, QIcon*) ```
void q_inputdialog_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QInputDialog* self, const char* iconText ```
void q_inputdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QInputDialog* self, void (*slot)(QWidget*, const char*) ```
void q_inputdialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QInputDialog* self, QPoint* pos ```
void q_inputdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QInputDialog* self, void (*slot)(QWidget*, QPoint*) ```
void q_inputdialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QInputDialog* self, int hints ```
void q_inputdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPaintDevice* target, QPoint* targetOffset ```
void q_inputdialog_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_inputdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_inputdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPainter* painter, QPoint* targetOffset ```
void q_inputdialog_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_inputdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_inputdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QInputDialog* self, QRect* rectangle ```
QPixmap* q_inputdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QInputDialog* self, enum Qt__GestureType typeVal, int flags ```
void q_inputdialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QInputDialog* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_inputdialog_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QInputDialog* self, int id, bool enable ```
void q_inputdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QInputDialog* self, int id, bool enable ```
void q_inputdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QInputDialog* self, enum Qt__WindowType param1, bool on ```
void q_inputdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QInputDialog* self, enum Qt__WidgetAttribute param1, bool on ```
void q_inputdialog_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_inputdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_inputdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QInputDialog* self, const char* name ```
void q_inputdialog_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QInputDialog* self, bool b ```
bool q_inputdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QInputDialog* self ```
QThread* q_inputdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QInputDialog* self, QThread* thread ```
void q_inputdialog_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QInputDialog* self, int interval ```
int32_t q_inputdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QInputDialog* self, int id ```
void q_inputdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QInputDialog* self ```
libqt_list /* of QObject* */ q_inputdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QInputDialog* self, QObject* filterObj ```
void q_inputdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QInputDialog* self, QObject* obj ```
void q_inputdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_inputdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QInputDialog* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_inputdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_inputdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_inputdialog_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QInputDialog* self ```
void q_inputdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QInputDialog* self ```
void q_inputdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QInputDialog* self, const char* name, QVariant* value ```
bool q_inputdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QInputDialog* self, const char* name ```
QVariant* q_inputdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QInputDialog* self ```
const char** q_inputdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QInputDialog* self ```
QBindingStorage* q_inputdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QInputDialog* self ```
QBindingStorage* q_inputdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputDialog* self ```
void q_inputdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QInputDialog* self, void (*slot)(QObject*) ```
void q_inputdialog_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QInputDialog* self ```
QObject* q_inputdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QInputDialog* self, const char* classname ```
bool q_inputdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QInputDialog* self ```
void q_inputdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QInputDialog* self, int interval, enum Qt__TimerType timerType ```
int32_t q_inputdialog_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_inputdialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QInputDialog* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_inputdialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputDialog* self, QObject* param1 ```
void q_inputdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QInputDialog* self, void (*slot)(QObject*, QObject*) ```
void q_inputdialog_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QInputDialog* self ```
double q_inputdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QInputDialog* self ```
double q_inputdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_inputdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_open(void* self) {
    QInputDialog_Open((QInputDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_qbase_open(void* self) {
    QInputDialog_QBaseOpen((QInputDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)() ```
void q_inputdialog_on_open(void* self, void (*slot)()) {
    QInputDialog_OnOpen((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_exec(void* self) {
    return QInputDialog_Exec((QInputDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_qbase_exec(void* self) {
    return QInputDialog_QBaseExec((QInputDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, int32_t (*slot)() ```
void q_inputdialog_on_exec(void* self, int32_t (*slot)()) {
    QInputDialog_OnExec((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_accept(void* self) {
    QInputDialog_Accept((QInputDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_qbase_accept(void* self) {
    QInputDialog_QBaseAccept((QInputDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)() ```
void q_inputdialog_on_accept(void* self, void (*slot)()) {
    QInputDialog_OnAccept((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_reject(void* self) {
    QInputDialog_Reject((QInputDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_qbase_reject(void* self) {
    QInputDialog_QBaseReject((QInputDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)() ```
void q_inputdialog_on_reject(void* self, void (*slot)()) {
    QInputDialog_OnReject((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QKeyEvent* param1 ```
void q_inputdialog_key_press_event(void* self, void* param1) {
    QInputDialog_KeyPressEvent((QInputDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QKeyEvent* param1 ```
void q_inputdialog_qbase_key_press_event(void* self, void* param1) {
    QInputDialog_QBaseKeyPressEvent((QInputDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QKeyEvent*) ```
void q_inputdialog_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnKeyPressEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QCloseEvent* param1 ```
void q_inputdialog_close_event(void* self, void* param1) {
    QInputDialog_CloseEvent((QInputDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QCloseEvent* param1 ```
void q_inputdialog_qbase_close_event(void* self, void* param1) {
    QInputDialog_QBaseCloseEvent((QInputDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QCloseEvent*) ```
void q_inputdialog_on_close_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnCloseEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QShowEvent* param1 ```
void q_inputdialog_show_event(void* self, void* param1) {
    QInputDialog_ShowEvent((QInputDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QShowEvent* param1 ```
void q_inputdialog_qbase_show_event(void* self, void* param1) {
    QInputDialog_QBaseShowEvent((QInputDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QShowEvent*) ```
void q_inputdialog_on_show_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnShowEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QResizeEvent* param1 ```
void q_inputdialog_resize_event(void* self, void* param1) {
    QInputDialog_ResizeEvent((QInputDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QResizeEvent* param1 ```
void q_inputdialog_qbase_resize_event(void* self, void* param1) {
    QInputDialog_QBaseResizeEvent((QInputDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QResizeEvent*) ```
void q_inputdialog_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnResizeEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QContextMenuEvent* param1 ```
void q_inputdialog_context_menu_event(void* self, void* param1) {
    QInputDialog_ContextMenuEvent((QInputDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QContextMenuEvent* param1 ```
void q_inputdialog_qbase_context_menu_event(void* self, void* param1) {
    QInputDialog_QBaseContextMenuEvent((QInputDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QContextMenuEvent*) ```
void q_inputdialog_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnContextMenuEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QObject* param1, QEvent* param2 ```
bool q_inputdialog_event_filter(void* self, void* param1, void* param2) {
    return QInputDialog_EventFilter((QInputDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QObject* param1, QEvent* param2 ```
bool q_inputdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QInputDialog_QBaseEventFilter((QInputDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)(QInputDialog*, QObject*, QEvent*) ```
void q_inputdialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QInputDialog_OnEventFilter((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_dev_type(void* self) {
    return QInputDialog_DevType((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_qbase_dev_type(void* self) {
    return QInputDialog_QBaseDevType((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, int32_t (*slot)() ```
void q_inputdialog_on_dev_type(void* self, int32_t (*slot)()) {
    QInputDialog_OnDevType((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, int param1 ```
int32_t q_inputdialog_height_for_width(void* self, int param1) {
    return QInputDialog_HeightForWidth((QInputDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, int param1 ```
int32_t q_inputdialog_qbase_height_for_width(void* self, int param1) {
    return QInputDialog_QBaseHeightForWidth((QInputDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, int32_t (*slot)(QInputDialog*, int) ```
void q_inputdialog_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QInputDialog_OnHeightForWidth((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
bool q_inputdialog_has_height_for_width(void* self) {
    return QInputDialog_HasHeightForWidth((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
bool q_inputdialog_qbase_has_height_for_width(void* self) {
    return QInputDialog_QBaseHasHeightForWidth((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)() ```
void q_inputdialog_on_has_height_for_width(void* self, bool (*slot)()) {
    QInputDialog_OnHasHeightForWidth((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
QPaintEngine* q_inputdialog_paint_engine(void* self) {
    return QInputDialog_PaintEngine((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
QPaintEngine* q_inputdialog_qbase_paint_engine(void* self) {
    return QInputDialog_QBasePaintEngine((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, QPaintEngine* (*slot)() ```
void q_inputdialog_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QInputDialog_OnPaintEngine((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QEvent* event ```
bool q_inputdialog_event(void* self, void* event) {
    return QInputDialog_Event((QInputDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QEvent* event ```
bool q_inputdialog_qbase_event(void* self, void* event) {
    return QInputDialog_QBaseEvent((QInputDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)(QInputDialog*, QEvent*) ```
void q_inputdialog_on_event(void* self, bool (*slot)(void*, void*)) {
    QInputDialog_OnEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_mouse_press_event(void* self, void* event) {
    QInputDialog_MousePressEvent((QInputDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_qbase_mouse_press_event(void* self, void* event) {
    QInputDialog_QBaseMousePressEvent((QInputDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QMouseEvent*) ```
void q_inputdialog_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnMousePressEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_mouse_release_event(void* self, void* event) {
    QInputDialog_MouseReleaseEvent((QInputDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_qbase_mouse_release_event(void* self, void* event) {
    QInputDialog_QBaseMouseReleaseEvent((QInputDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QMouseEvent*) ```
void q_inputdialog_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnMouseReleaseEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_mouse_double_click_event(void* self, void* event) {
    QInputDialog_MouseDoubleClickEvent((QInputDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_qbase_mouse_double_click_event(void* self, void* event) {
    QInputDialog_QBaseMouseDoubleClickEvent((QInputDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QMouseEvent*) ```
void q_inputdialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnMouseDoubleClickEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_mouse_move_event(void* self, void* event) {
    QInputDialog_MouseMoveEvent((QInputDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_qbase_mouse_move_event(void* self, void* event) {
    QInputDialog_QBaseMouseMoveEvent((QInputDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QMouseEvent*) ```
void q_inputdialog_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnMouseMoveEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QWheelEvent* event ```
void q_inputdialog_wheel_event(void* self, void* event) {
    QInputDialog_WheelEvent((QInputDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QWheelEvent* event ```
void q_inputdialog_qbase_wheel_event(void* self, void* event) {
    QInputDialog_QBaseWheelEvent((QInputDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QWheelEvent*) ```
void q_inputdialog_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnWheelEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QKeyEvent* event ```
void q_inputdialog_key_release_event(void* self, void* event) {
    QInputDialog_KeyReleaseEvent((QInputDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QKeyEvent* event ```
void q_inputdialog_qbase_key_release_event(void* self, void* event) {
    QInputDialog_QBaseKeyReleaseEvent((QInputDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QKeyEvent*) ```
void q_inputdialog_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnKeyReleaseEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QFocusEvent* event ```
void q_inputdialog_focus_in_event(void* self, void* event) {
    QInputDialog_FocusInEvent((QInputDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QFocusEvent* event ```
void q_inputdialog_qbase_focus_in_event(void* self, void* event) {
    QInputDialog_QBaseFocusInEvent((QInputDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QFocusEvent*) ```
void q_inputdialog_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnFocusInEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QFocusEvent* event ```
void q_inputdialog_focus_out_event(void* self, void* event) {
    QInputDialog_FocusOutEvent((QInputDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QFocusEvent* event ```
void q_inputdialog_qbase_focus_out_event(void* self, void* event) {
    QInputDialog_QBaseFocusOutEvent((QInputDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QFocusEvent*) ```
void q_inputdialog_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnFocusOutEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QEnterEvent* event ```
void q_inputdialog_enter_event(void* self, void* event) {
    QInputDialog_EnterEvent((QInputDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QEnterEvent* event ```
void q_inputdialog_qbase_enter_event(void* self, void* event) {
    QInputDialog_QBaseEnterEvent((QInputDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QEnterEvent*) ```
void q_inputdialog_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnEnterEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QEvent* event ```
void q_inputdialog_leave_event(void* self, void* event) {
    QInputDialog_LeaveEvent((QInputDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QEvent* event ```
void q_inputdialog_qbase_leave_event(void* self, void* event) {
    QInputDialog_QBaseLeaveEvent((QInputDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QEvent*) ```
void q_inputdialog_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnLeaveEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QPaintEvent* event ```
void q_inputdialog_paint_event(void* self, void* event) {
    QInputDialog_PaintEvent((QInputDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QPaintEvent* event ```
void q_inputdialog_qbase_paint_event(void* self, void* event) {
    QInputDialog_QBasePaintEvent((QInputDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QPaintEvent*) ```
void q_inputdialog_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnPaintEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMoveEvent* event ```
void q_inputdialog_move_event(void* self, void* event) {
    QInputDialog_MoveEvent((QInputDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMoveEvent* event ```
void q_inputdialog_qbase_move_event(void* self, void* event) {
    QInputDialog_QBaseMoveEvent((QInputDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QMoveEvent*) ```
void q_inputdialog_on_move_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnMoveEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QTabletEvent* event ```
void q_inputdialog_tablet_event(void* self, void* event) {
    QInputDialog_TabletEvent((QInputDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QTabletEvent* event ```
void q_inputdialog_qbase_tablet_event(void* self, void* event) {
    QInputDialog_QBaseTabletEvent((QInputDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QTabletEvent*) ```
void q_inputdialog_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnTabletEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QActionEvent* event ```
void q_inputdialog_action_event(void* self, void* event) {
    QInputDialog_ActionEvent((QInputDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QActionEvent* event ```
void q_inputdialog_qbase_action_event(void* self, void* event) {
    QInputDialog_QBaseActionEvent((QInputDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QActionEvent*) ```
void q_inputdialog_on_action_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnActionEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QDragEnterEvent* event ```
void q_inputdialog_drag_enter_event(void* self, void* event) {
    QInputDialog_DragEnterEvent((QInputDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QDragEnterEvent* event ```
void q_inputdialog_qbase_drag_enter_event(void* self, void* event) {
    QInputDialog_QBaseDragEnterEvent((QInputDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QDragEnterEvent*) ```
void q_inputdialog_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnDragEnterEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QDragMoveEvent* event ```
void q_inputdialog_drag_move_event(void* self, void* event) {
    QInputDialog_DragMoveEvent((QInputDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QDragMoveEvent* event ```
void q_inputdialog_qbase_drag_move_event(void* self, void* event) {
    QInputDialog_QBaseDragMoveEvent((QInputDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QDragMoveEvent*) ```
void q_inputdialog_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnDragMoveEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QDragLeaveEvent* event ```
void q_inputdialog_drag_leave_event(void* self, void* event) {
    QInputDialog_DragLeaveEvent((QInputDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QDragLeaveEvent* event ```
void q_inputdialog_qbase_drag_leave_event(void* self, void* event) {
    QInputDialog_QBaseDragLeaveEvent((QInputDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QDragLeaveEvent*) ```
void q_inputdialog_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnDragLeaveEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QDropEvent* event ```
void q_inputdialog_drop_event(void* self, void* event) {
    QInputDialog_DropEvent((QInputDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QDropEvent* event ```
void q_inputdialog_qbase_drop_event(void* self, void* event) {
    QInputDialog_QBaseDropEvent((QInputDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QDropEvent*) ```
void q_inputdialog_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnDropEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QHideEvent* event ```
void q_inputdialog_hide_event(void* self, void* event) {
    QInputDialog_HideEvent((QInputDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QHideEvent* event ```
void q_inputdialog_qbase_hide_event(void* self, void* event) {
    QInputDialog_QBaseHideEvent((QInputDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QHideEvent*) ```
void q_inputdialog_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnHideEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_inputdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QInputDialog_NativeEvent((QInputDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_inputdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QInputDialog_QBaseNativeEvent((QInputDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)(QInputDialog*, const char*, void*, intptr_t*) ```
void q_inputdialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QInputDialog_OnNativeEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QEvent* param1 ```
void q_inputdialog_change_event(void* self, void* param1) {
    QInputDialog_ChangeEvent((QInputDialog*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QEvent* param1 ```
void q_inputdialog_qbase_change_event(void* self, void* param1) {
    QInputDialog_QBaseChangeEvent((QInputDialog*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QEvent*) ```
void q_inputdialog_on_change_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnChangeEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_inputdialog_metric(void* self, int64_t param1) {
    return QInputDialog_Metric((QInputDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_inputdialog_qbase_metric(void* self, int64_t param1) {
    return QInputDialog_QBaseMetric((QInputDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, int32_t (*slot)(QInputDialog*, enum QPaintDevice__PaintDeviceMetric) ```
void q_inputdialog_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QInputDialog_OnMetric((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QPainter* painter ```
void q_inputdialog_init_painter(void* self, void* painter) {
    QInputDialog_InitPainter((QInputDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QPainter* painter ```
void q_inputdialog_qbase_init_painter(void* self, void* painter) {
    QInputDialog_QBaseInitPainter((QInputDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QPainter*) ```
void q_inputdialog_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnInitPainter((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QPoint* offset ```
QPaintDevice* q_inputdialog_redirected(void* self, void* offset) {
    return QInputDialog_Redirected((QInputDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QPoint* offset ```
QPaintDevice* q_inputdialog_qbase_redirected(void* self, void* offset) {
    return QInputDialog_QBaseRedirected((QInputDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, QPaintDevice* (*slot)(QInputDialog*, QPoint*) ```
void q_inputdialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QInputDialog_OnRedirected((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
QPainter* q_inputdialog_shared_painter(void* self) {
    return QInputDialog_SharedPainter((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
QPainter* q_inputdialog_qbase_shared_painter(void* self) {
    return QInputDialog_QBaseSharedPainter((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, QPainter* (*slot)() ```
void q_inputdialog_on_shared_painter(void* self, QPainter* (*slot)()) {
    QInputDialog_OnSharedPainter((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QInputMethodEvent* param1 ```
void q_inputdialog_input_method_event(void* self, void* param1) {
    QInputDialog_InputMethodEvent((QInputDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QInputMethodEvent* param1 ```
void q_inputdialog_qbase_input_method_event(void* self, void* param1) {
    QInputDialog_QBaseInputMethodEvent((QInputDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QInputMethodEvent*) ```
void q_inputdialog_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnInputMethodEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_inputdialog_input_method_query(void* self, int64_t param1) {
    return QInputDialog_InputMethodQuery((QInputDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_inputdialog_qbase_input_method_query(void* self, int64_t param1) {
    return QInputDialog_QBaseInputMethodQuery((QInputDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, QVariant* (*slot)(QInputDialog*, enum Qt__InputMethodQuery) ```
void q_inputdialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QInputDialog_OnInputMethodQuery((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, bool next ```
bool q_inputdialog_focus_next_prev_child(void* self, bool next) {
    return QInputDialog_FocusNextPrevChild((QInputDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, bool next ```
bool q_inputdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QInputDialog_QBaseFocusNextPrevChild((QInputDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)(QInputDialog*, bool) ```
void q_inputdialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QInputDialog_OnFocusNextPrevChild((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QTimerEvent* event ```
void q_inputdialog_timer_event(void* self, void* event) {
    QInputDialog_TimerEvent((QInputDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QTimerEvent* event ```
void q_inputdialog_qbase_timer_event(void* self, void* event) {
    QInputDialog_QBaseTimerEvent((QInputDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QTimerEvent*) ```
void q_inputdialog_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnTimerEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QChildEvent* event ```
void q_inputdialog_child_event(void* self, void* event) {
    QInputDialog_ChildEvent((QInputDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QChildEvent* event ```
void q_inputdialog_qbase_child_event(void* self, void* event) {
    QInputDialog_QBaseChildEvent((QInputDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QChildEvent*) ```
void q_inputdialog_on_child_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnChildEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QEvent* event ```
void q_inputdialog_custom_event(void* self, void* event) {
    QInputDialog_CustomEvent((QInputDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QEvent* event ```
void q_inputdialog_qbase_custom_event(void* self, void* event) {
    QInputDialog_QBaseCustomEvent((QInputDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QEvent*) ```
void q_inputdialog_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnCustomEvent((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMetaMethod* signal ```
void q_inputdialog_connect_notify(void* self, void* signal) {
    QInputDialog_ConnectNotify((QInputDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMetaMethod* signal ```
void q_inputdialog_qbase_connect_notify(void* self, void* signal) {
    QInputDialog_QBaseConnectNotify((QInputDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QMetaMethod*) ```
void q_inputdialog_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnConnectNotify((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMetaMethod* signal ```
void q_inputdialog_disconnect_notify(void* self, void* signal) {
    QInputDialog_DisconnectNotify((QInputDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMetaMethod* signal ```
void q_inputdialog_qbase_disconnect_notify(void* self, void* signal) {
    QInputDialog_QBaseDisconnectNotify((QInputDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QMetaMethod*) ```
void q_inputdialog_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnDisconnectNotify((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QWidget* param1 ```
void q_inputdialog_adjust_position(void* self, void* param1) {
    QInputDialog_AdjustPosition((QInputDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QWidget* param1 ```
void q_inputdialog_qbase_adjust_position(void* self, void* param1) {
    QInputDialog_QBaseAdjustPosition((QInputDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QWidget*) ```
void q_inputdialog_on_adjust_position(void* self, void (*slot)(void*, void*)) {
    QInputDialog_OnAdjustPosition((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_update_micro_focus(void* self) {
    QInputDialog_UpdateMicroFocus((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_qbase_update_micro_focus(void* self) {
    QInputDialog_QBaseUpdateMicroFocus((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)() ```
void q_inputdialog_on_update_micro_focus(void* self, void (*slot)()) {
    QInputDialog_OnUpdateMicroFocus((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_create(void* self) {
    QInputDialog_Create((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_qbase_create(void* self) {
    QInputDialog_QBaseCreate((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)() ```
void q_inputdialog_on_create(void* self, void (*slot)()) {
    QInputDialog_OnCreate((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_destroy(void* self) {
    QInputDialog_Destroy((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_qbase_destroy(void* self) {
    QInputDialog_QBaseDestroy((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)() ```
void q_inputdialog_on_destroy(void* self, void (*slot)()) {
    QInputDialog_OnDestroy((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
bool q_inputdialog_focus_next_child(void* self) {
    return QInputDialog_FocusNextChild((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
bool q_inputdialog_qbase_focus_next_child(void* self) {
    return QInputDialog_QBaseFocusNextChild((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)() ```
void q_inputdialog_on_focus_next_child(void* self, bool (*slot)()) {
    QInputDialog_OnFocusNextChild((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
bool q_inputdialog_focus_previous_child(void* self) {
    return QInputDialog_FocusPreviousChild((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
bool q_inputdialog_qbase_focus_previous_child(void* self) {
    return QInputDialog_QBaseFocusPreviousChild((QInputDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)() ```
void q_inputdialog_on_focus_previous_child(void* self, bool (*slot)()) {
    QInputDialog_OnFocusPreviousChild((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
QObject* q_inputdialog_sender(void* self) {
    return QInputDialog_Sender((QInputDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
QObject* q_inputdialog_qbase_sender(void* self) {
    return QInputDialog_QBaseSender((QInputDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, QObject* (*slot)() ```
void q_inputdialog_on_sender(void* self, QObject* (*slot)()) {
    QInputDialog_OnSender((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_sender_signal_index(void* self) {
    return QInputDialog_SenderSignalIndex((QInputDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_qbase_sender_signal_index(void* self) {
    return QInputDialog_QBaseSenderSignalIndex((QInputDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, int32_t (*slot)() ```
void q_inputdialog_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QInputDialog_OnSenderSignalIndex((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, const char* signal ```
int32_t q_inputdialog_receivers(void* self, const char* signal) {
    return QInputDialog_Receivers((QInputDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, const char* signal ```
int32_t q_inputdialog_qbase_receivers(void* self, const char* signal) {
    return QInputDialog_QBaseReceivers((QInputDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, int32_t (*slot)(QInputDialog*, const char*) ```
void q_inputdialog_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QInputDialog_OnReceivers((QInputDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMetaMethod* signal ```
bool q_inputdialog_is_signal_connected(void* self, void* signal) {
    return QInputDialog_IsSignalConnected((QInputDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMetaMethod* signal ```
bool q_inputdialog_qbase_is_signal_connected(void* self, void* signal) {
    return QInputDialog_QBaseIsSignalConnected((QInputDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)(QInputDialog*, QMetaMethod*) ```
void q_inputdialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QInputDialog_OnIsSignalConnected((QInputDialog*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QInputDialog* self ```
void q_inputdialog_delete(void* self) {
    QInputDialog_Delete((QInputDialog*)(self));
}