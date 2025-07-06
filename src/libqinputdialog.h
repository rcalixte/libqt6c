#pragma once
#ifndef SRCQT6C_LIBQINPUTDIALOG_H
#define SRCQT6C_LIBQINPUTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qinputdialog.html

/// q_inputdialog_new constructs a new QInputDialog object.
///
/// ``` QWidget* parent ```
QInputDialog* q_inputdialog_new(void* parent);

/// q_inputdialog_new2 constructs a new QInputDialog object.
///
///
QInputDialog* q_inputdialog_new2();

/// q_inputdialog_new3 constructs a new QInputDialog object.
///
/// ``` QWidget* parent, int flags ```
QInputDialog* q_inputdialog_new3(void* parent, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QInputDialog* self ```
const QMetaObject* q_inputdialog_meta_object(void* self);

/// ``` QInputDialog* self, const char* param1 ```
void* q_inputdialog_metacast(void* self, const char* param1);

/// ``` QInputDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_inputdialog_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QInputDialog* self, int32_t (*slot)(QInputDialog*, enum QMetaObject__Call, int, void*) ```
void q_inputdialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QInputDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_inputdialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_inputdialog_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setInputMode)
///
/// ``` QInputDialog* self, enum QInputDialog__InputMode mode ```
void q_inputdialog_set_input_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#inputMode)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_input_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setLabelText)
///
/// ``` QInputDialog* self, const char* text ```
void q_inputdialog_set_label_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#labelText)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_label_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setOption)
///
/// ``` QInputDialog* self, enum QInputDialog__InputDialogOption option ```
void q_inputdialog_set_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#testOption)
///
/// ``` QInputDialog* self, enum QInputDialog__InputDialogOption option ```
bool q_inputdialog_test_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setOptions)
///
/// ``` QInputDialog* self, int options ```
void q_inputdialog_set_options(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#options)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setTextValue)
///
/// ``` QInputDialog* self, const char* text ```
void q_inputdialog_set_text_value(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#textValue)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_text_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setTextEchoMode)
///
/// ``` QInputDialog* self, enum QLineEdit__EchoMode mode ```
void q_inputdialog_set_text_echo_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#textEchoMode)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_text_echo_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setComboBoxEditable)
///
/// ``` QInputDialog* self, bool editable ```
void q_inputdialog_set_combo_box_editable(void* self, bool editable);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#isComboBoxEditable)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_combo_box_editable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setComboBoxItems)
///
/// ``` QInputDialog* self, const char* items[] ```
void q_inputdialog_set_combo_box_items(void* self, const char* items[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#comboBoxItems)
///
/// ``` QInputDialog* self ```
const char** q_inputdialog_combo_box_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setIntValue)
///
/// ``` QInputDialog* self, int value ```
void q_inputdialog_set_int_value(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#intValue)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_int_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setIntMinimum)
///
/// ``` QInputDialog* self, int min ```
void q_inputdialog_set_int_minimum(void* self, int min);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#intMinimum)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_int_minimum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setIntMaximum)
///
/// ``` QInputDialog* self, int max ```
void q_inputdialog_set_int_maximum(void* self, int max);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#intMaximum)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_int_maximum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setIntRange)
///
/// ``` QInputDialog* self, int min, int max ```
void q_inputdialog_set_int_range(void* self, int min, int max);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setIntStep)
///
/// ``` QInputDialog* self, int step ```
void q_inputdialog_set_int_step(void* self, int step);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#intStep)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_int_step(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleValue)
///
/// ``` QInputDialog* self, double value ```
void q_inputdialog_set_double_value(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleValue)
///
/// ``` QInputDialog* self ```
double q_inputdialog_double_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleMinimum)
///
/// ``` QInputDialog* self, double min ```
void q_inputdialog_set_double_minimum(void* self, double min);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleMinimum)
///
/// ``` QInputDialog* self ```
double q_inputdialog_double_minimum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleMaximum)
///
/// ``` QInputDialog* self, double max ```
void q_inputdialog_set_double_maximum(void* self, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleMaximum)
///
/// ``` QInputDialog* self ```
double q_inputdialog_double_maximum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleRange)
///
/// ``` QInputDialog* self, double min, double max ```
void q_inputdialog_set_double_range(void* self, double min, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleDecimals)
///
/// ``` QInputDialog* self, int decimals ```
void q_inputdialog_set_double_decimals(void* self, int decimals);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleDecimals)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_double_decimals(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setOkButtonText)
///
/// ``` QInputDialog* self, const char* text ```
void q_inputdialog_set_ok_button_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#okButtonText)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_ok_button_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setCancelButtonText)
///
/// ``` QInputDialog* self, const char* text ```
void q_inputdialog_set_cancel_button_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#cancelButtonText)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_cancel_button_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#minimumSizeHint)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QInputDialog* self, QSize* (*slot)() ```
void q_inputdialog_on_minimum_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#minimumSizeHint)
///
/// Base class method implementation
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#sizeHint)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QInputDialog* self, QSize* (*slot)() ```
void q_inputdialog_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setVisible)
///
/// ``` QInputDialog* self, bool visible ```
void q_inputdialog_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setVisible)
///
/// Allows for overriding the related default method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, bool) ```
void q_inputdialog_on_set_visible(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setVisible)
///
/// Base class method implementation
///
/// ``` QInputDialog* self, bool visible ```
void q_inputdialog_qbase_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// ``` QWidget* parent, const char* title, const char* label ```
const char* q_inputdialog_get_text(void* parent, const char* title, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// ``` QWidget* parent, const char* title, const char* label ```
const char* q_inputdialog_get_multi_line_text(void* parent, const char* title, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* items[] ```
const char* q_inputdialog_get_item(void* parent, const char* title, const char* label, const char* items[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// ``` QWidget* parent, const char* title, const char* label ```
int32_t q_inputdialog_get_int(void* parent, const char* title, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label ```
double q_inputdialog_get_double(void* parent, const char* title, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleStep)
///
/// ``` QInputDialog* self, double step ```
void q_inputdialog_set_double_step(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleStep)
///
/// ``` QInputDialog* self ```
double q_inputdialog_double_step(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#textValueChanged)
///
/// ``` QInputDialog* self, const char* text ```
void q_inputdialog_text_value_changed(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#textValueChanged)
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, const char*) ```
void q_inputdialog_on_text_value_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#textValueSelected)
///
/// ``` QInputDialog* self, const char* text ```
void q_inputdialog_text_value_selected(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#textValueSelected)
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, const char*) ```
void q_inputdialog_on_text_value_selected(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#intValueChanged)
///
/// ``` QInputDialog* self, int value ```
void q_inputdialog_int_value_changed(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#intValueChanged)
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, int) ```
void q_inputdialog_on_int_value_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#intValueSelected)
///
/// ``` QInputDialog* self, int value ```
void q_inputdialog_int_value_selected(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#intValueSelected)
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, int) ```
void q_inputdialog_on_int_value_selected(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleValueChanged)
///
/// ``` QInputDialog* self, double value ```
void q_inputdialog_double_value_changed(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleValueChanged)
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, double) ```
void q_inputdialog_on_double_value_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleValueSelected)
///
/// ``` QInputDialog* self, double value ```
void q_inputdialog_double_value_selected(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#doubleValueSelected)
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, double) ```
void q_inputdialog_on_double_value_selected(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#done)
///
/// ``` QInputDialog* self, int result ```
void q_inputdialog_done(void* self, int result);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#done)
///
/// Allows for overriding the related default method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, int) ```
void q_inputdialog_on_done(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#done)
///
/// Base class method implementation
///
/// ``` QInputDialog* self, int result ```
void q_inputdialog_qbase_done(void* self, int result);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_inputdialog_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_inputdialog_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#setOption)
///
/// ``` QInputDialog* self, enum QInputDialog__InputDialogOption option, bool on ```
void q_inputdialog_set_option2(void* self, int64_t option, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// ``` QWidget* parent, const char* title, const char* label, enum QLineEdit__EchoMode echo ```
const char* q_inputdialog_get_text4(void* parent, const char* title, const char* label, int64_t echo);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// ``` QWidget* parent, const char* title, const char* label, enum QLineEdit__EchoMode echo, const char* text ```
const char* q_inputdialog_get_text5(void* parent, const char* title, const char* label, int64_t echo, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// ``` QWidget* parent, const char* title, const char* label, enum QLineEdit__EchoMode echo, const char* text, bool* ok ```
const char* q_inputdialog_get_text6(void* parent, const char* title, const char* label, int64_t echo, const char* text, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// ``` QWidget* parent, const char* title, const char* label, enum QLineEdit__EchoMode echo, const char* text, bool* ok, int flags ```
const char* q_inputdialog_get_text7(void* parent, const char* title, const char* label, int64_t echo, const char* text, bool* ok, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// ``` QWidget* parent, const char* title, const char* label, enum QLineEdit__EchoMode echo, const char* text, bool* ok, int flags, int inputMethodHints ```
const char* q_inputdialog_get_text8(void* parent, const char* title, const char* label, int64_t echo, const char* text, bool* ok, int64_t flags, int64_t inputMethodHints);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* text ```
const char* q_inputdialog_get_multi_line_text4(void* parent, const char* title, const char* label, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* text, bool* ok ```
const char* q_inputdialog_get_multi_line_text5(void* parent, const char* title, const char* label, const char* text, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* text, bool* ok, int flags ```
const char* q_inputdialog_get_multi_line_text6(void* parent, const char* title, const char* label, const char* text, bool* ok, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* text, bool* ok, int flags, int inputMethodHints ```
const char* q_inputdialog_get_multi_line_text7(void* parent, const char* title, const char* label, const char* text, bool* ok, int64_t flags, int64_t inputMethodHints);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* items[], int current ```
const char* q_inputdialog_get_item5(void* parent, const char* title, const char* label, const char* items[], int current);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* items[], int current, bool editable ```
const char* q_inputdialog_get_item6(void* parent, const char* title, const char* label, const char* items[], int current, bool editable);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* items[], int current, bool editable, bool* ok ```
const char* q_inputdialog_get_item7(void* parent, const char* title, const char* label, const char* items[], int current, bool editable, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* items[], int current, bool editable, bool* ok, int flags ```
const char* q_inputdialog_get_item8(void* parent, const char* title, const char* label, const char* items[], int current, bool editable, bool* ok, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// ``` QWidget* parent, const char* title, const char* label, const char* items[], int current, bool editable, bool* ok, int flags, int inputMethodHints ```
const char* q_inputdialog_get_item9(void* parent, const char* title, const char* label, const char* items[], int current, bool editable, bool* ok, int64_t flags, int64_t inputMethodHints);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// ``` QWidget* parent, const char* title, const char* label, int value ```
int32_t q_inputdialog_get_int4(void* parent, const char* title, const char* label, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// ``` QWidget* parent, const char* title, const char* label, int value, int minValue ```
int32_t q_inputdialog_get_int5(void* parent, const char* title, const char* label, int value, int minValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// ``` QWidget* parent, const char* title, const char* label, int value, int minValue, int maxValue ```
int32_t q_inputdialog_get_int6(void* parent, const char* title, const char* label, int value, int minValue, int maxValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// ``` QWidget* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step ```
int32_t q_inputdialog_get_int7(void* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// ``` QWidget* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step, bool* ok ```
int32_t q_inputdialog_get_int8(void* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// ``` QWidget* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step, bool* ok, int flags ```
int32_t q_inputdialog_get_int9(void* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step, bool* ok, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label, double value ```
double q_inputdialog_get_double4(void* parent, const char* title, const char* label, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label, double value, double minValue ```
double q_inputdialog_get_double5(void* parent, const char* title, const char* label, double value, double minValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label, double value, double minValue, double maxValue ```
double q_inputdialog_get_double6(void* parent, const char* title, const char* label, double value, double minValue, double maxValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals ```
double q_inputdialog_get_double7(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok ```
double q_inputdialog_get_double8(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags ```
double q_inputdialog_get_double9(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// ``` QWidget* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags, double step ```
double q_inputdialog_get_double10(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok, int64_t flags, double step);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_result(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QInputDialog* self, bool sizeGripEnabled ```
void q_inputdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QInputDialog* self, bool modal ```
void q_inputdialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QInputDialog* self, int r ```
void q_inputdialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QInputDialog* self, int result ```
void q_inputdialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QInputDialog* self, void (*slot)(QDialog*, int) ```
void q_inputdialog_on_finished(void* self, void (*slot)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QInputDialog* self ```
void q_inputdialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QInputDialog* self, void (*slot)(QDialog*) ```
void q_inputdialog_on_accepted(void* self, void (*slot)(void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QInputDialog* self ```
void q_inputdialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QInputDialog* self, void (*slot)(QDialog*) ```
void q_inputdialog_on_rejected(void* self, void (*slot)(void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QInputDialog* self ```
uintptr_t q_inputdialog_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QInputDialog* self ```
void q_inputdialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QInputDialog* self ```
uintptr_t q_inputdialog_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QInputDialog* self ```
uintptr_t q_inputdialog_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QInputDialog* self ```
QStyle* q_inputdialog_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QInputDialog* self, QStyle* style ```
void q_inputdialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QInputDialog* self, enum Qt__WindowModality windowModality ```
void q_inputdialog_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QInputDialog* self, QWidget* param1 ```
bool q_inputdialog_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QInputDialog* self, bool enabled ```
void q_inputdialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QInputDialog* self, bool disabled ```
void q_inputdialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QInputDialog* self, bool windowModified ```
void q_inputdialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QInputDialog* self ```
QRect* q_inputdialog_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QInputDialog* self ```
const QRect* q_inputdialog_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QInputDialog* self ```
QRect* q_inputdialog_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QInputDialog* self ```
QPoint* q_inputdialog_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QInputDialog* self ```
QRect* q_inputdialog_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QInputDialog* self ```
QRect* q_inputdialog_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QInputDialog* self ```
QRegion* q_inputdialog_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QInputDialog* self, QSize* minimumSize ```
void q_inputdialog_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QInputDialog* self, int minw, int minh ```
void q_inputdialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QInputDialog* self, QSize* maximumSize ```
void q_inputdialog_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QInputDialog* self, int maxw, int maxh ```
void q_inputdialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QInputDialog* self, int minw ```
void q_inputdialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QInputDialog* self, int minh ```
void q_inputdialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QInputDialog* self, int maxw ```
void q_inputdialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QInputDialog* self, int maxh ```
void q_inputdialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QInputDialog* self, QSize* sizeIncrement ```
void q_inputdialog_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QInputDialog* self, int w, int h ```
void q_inputdialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QInputDialog* self ```
QSize* q_inputdialog_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QInputDialog* self, QSize* baseSize ```
void q_inputdialog_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QInputDialog* self, int basew, int baseh ```
void q_inputdialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QInputDialog* self, QSize* fixedSize ```
void q_inputdialog_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QInputDialog* self, int w, int h ```
void q_inputdialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QInputDialog* self, int w ```
void q_inputdialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QInputDialog* self, int h ```
void q_inputdialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QInputDialog* self, QPointF* param1 ```
QPointF* q_inputdialog_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QInputDialog* self, QPoint* param1 ```
QPoint* q_inputdialog_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QInputDialog* self, QPointF* param1 ```
QPointF* q_inputdialog_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QInputDialog* self, QPoint* param1 ```
QPoint* q_inputdialog_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QInputDialog* self, QPointF* param1 ```
QPointF* q_inputdialog_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QInputDialog* self, QPoint* param1 ```
QPoint* q_inputdialog_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QInputDialog* self, QPointF* param1 ```
QPointF* q_inputdialog_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QInputDialog* self, QPoint* param1 ```
QPoint* q_inputdialog_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QInputDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_inputdialog_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QInputDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_inputdialog_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QInputDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_inputdialog_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QInputDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_inputdialog_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QInputDialog* self ```
const QPalette* q_inputdialog_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QInputDialog* self, QPalette* palette ```
void q_inputdialog_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QInputDialog* self, enum QPalette__ColorRole backgroundRole ```
void q_inputdialog_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QInputDialog* self, enum QPalette__ColorRole foregroundRole ```
void q_inputdialog_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QInputDialog* self ```
const QFont* q_inputdialog_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QInputDialog* self, QFont* font ```
void q_inputdialog_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QInputDialog* self ```
QFontMetrics* q_inputdialog_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QInputDialog* self ```
QFontInfo* q_inputdialog_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QInputDialog* self ```
QCursor* q_inputdialog_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QInputDialog* self, QCursor* cursor ```
void q_inputdialog_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QInputDialog* self ```
void q_inputdialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QInputDialog* self, bool enable ```
void q_inputdialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QInputDialog* self, bool enable ```
void q_inputdialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QInputDialog* self, QBitmap* mask ```
void q_inputdialog_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QInputDialog* self, QRegion* mask ```
void q_inputdialog_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QInputDialog* self ```
QRegion* q_inputdialog_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QInputDialog* self ```
void q_inputdialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPaintDevice* target ```
void q_inputdialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPainter* painter ```
void q_inputdialog_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QInputDialog* self ```
QPixmap* q_inputdialog_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QInputDialog* self ```
QGraphicsEffect* q_inputdialog_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QInputDialog* self, QGraphicsEffect* effect ```
void q_inputdialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QInputDialog* self, enum Qt__GestureType typeVal ```
void q_inputdialog_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QInputDialog* self, enum Qt__GestureType typeVal ```
void q_inputdialog_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QInputDialog* self, const char* windowTitle ```
void q_inputdialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QInputDialog* self, const char* styleSheet ```
void q_inputdialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QInputDialog* self, QIcon* icon ```
void q_inputdialog_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QInputDialog* self ```
QIcon* q_inputdialog_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QInputDialog* self, const char* windowIconText ```
void q_inputdialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QInputDialog* self, const char* windowRole ```
void q_inputdialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QInputDialog* self, const char* filePath ```
void q_inputdialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QInputDialog* self, double level ```
void q_inputdialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QInputDialog* self ```
double q_inputdialog_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QInputDialog* self, const char* toolTip ```
void q_inputdialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QInputDialog* self, int msec ```
void q_inputdialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QInputDialog* self, const char* statusTip ```
void q_inputdialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QInputDialog* self, const char* whatsThis ```
void q_inputdialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QInputDialog* self, const char* name ```
void q_inputdialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QInputDialog* self, const char* description ```
void q_inputdialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QInputDialog* self, enum Qt__LayoutDirection direction ```
void q_inputdialog_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QInputDialog* self ```
void q_inputdialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QInputDialog* self, QLocale* locale ```
void q_inputdialog_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QInputDialog* self ```
QLocale* q_inputdialog_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QInputDialog* self ```
void q_inputdialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QInputDialog* self ```
void q_inputdialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QInputDialog* self ```
void q_inputdialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QInputDialog* self ```
void q_inputdialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QInputDialog* self, enum Qt__FocusReason reason ```
void q_inputdialog_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QInputDialog* self, enum Qt__FocusPolicy policy ```
void q_inputdialog_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_inputdialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QInputDialog* self, QWidget* focusProxy ```
void q_inputdialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QInputDialog* self, enum Qt__ContextMenuPolicy policy ```
void q_inputdialog_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QInputDialog* self ```
void q_inputdialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QInputDialog* self, QCursor* param1 ```
void q_inputdialog_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QInputDialog* self ```
void q_inputdialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QInputDialog* self ```
void q_inputdialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QInputDialog* self ```
void q_inputdialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QInputDialog* self, QKeySequence* key ```
int32_t q_inputdialog_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QInputDialog* self, int id ```
void q_inputdialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QInputDialog* self, int id ```
void q_inputdialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QInputDialog* self, int id ```
void q_inputdialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_inputdialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_inputdialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QInputDialog* self, bool enable ```
void q_inputdialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QInputDialog* self ```
QGraphicsProxyWidget* q_inputdialog_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QInputDialog* self ```
void q_inputdialog_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QInputDialog* self ```
void q_inputdialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QInputDialog* self, int x, int y, int w, int h ```
void q_inputdialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QInputDialog* self, QRect* param1 ```
void q_inputdialog_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QInputDialog* self, QRegion* param1 ```
void q_inputdialog_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QInputDialog* self, int x, int y, int w, int h ```
void q_inputdialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QInputDialog* self, QRect* param1 ```
void q_inputdialog_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QInputDialog* self, QRegion* param1 ```
void q_inputdialog_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QInputDialog* self, bool hidden ```
void q_inputdialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QInputDialog* self ```
void q_inputdialog_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QInputDialog* self ```
void q_inputdialog_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QInputDialog* self ```
void q_inputdialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QInputDialog* self ```
void q_inputdialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QInputDialog* self ```
void q_inputdialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QInputDialog* self ```
void q_inputdialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QInputDialog* self ```
void q_inputdialog_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QInputDialog* self ```
void q_inputdialog_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QInputDialog* self, QWidget* param1 ```
void q_inputdialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QInputDialog* self, int x, int y ```
void q_inputdialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QInputDialog* self, QPoint* param1 ```
void q_inputdialog_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QInputDialog* self, int w, int h ```
void q_inputdialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QInputDialog* self, QSize* param1 ```
void q_inputdialog_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QInputDialog* self, int x, int y, int w, int h ```
void q_inputdialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QInputDialog* self, QRect* geometry ```
void q_inputdialog_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QInputDialog* self ```
char* q_inputdialog_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QInputDialog* self, const char* geometry ```
bool q_inputdialog_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QInputDialog* self ```
void q_inputdialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QInputDialog* self, QWidget* param1 ```
bool q_inputdialog_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QInputDialog* self, int state ```
void q_inputdialog_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QInputDialog* self, int state ```
void q_inputdialog_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QInputDialog* self ```
QSizePolicy* q_inputdialog_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QInputDialog* self, QSizePolicy* sizePolicy ```
void q_inputdialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QInputDialog* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_inputdialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QInputDialog* self ```
QRegion* q_inputdialog_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QInputDialog* self, int left, int top, int right, int bottom ```
void q_inputdialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QInputDialog* self, QMargins* margins ```
void q_inputdialog_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QInputDialog* self ```
QMargins* q_inputdialog_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QInputDialog* self ```
QRect* q_inputdialog_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QInputDialog* self ```
QLayout* q_inputdialog_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QInputDialog* self, QLayout* layout ```
void q_inputdialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QInputDialog* self ```
void q_inputdialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QInputDialog* self, QWidget* parent ```
void q_inputdialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QInputDialog* self, QWidget* parent, int f ```
void q_inputdialog_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QInputDialog* self, int dx, int dy ```
void q_inputdialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QInputDialog* self, int dx, int dy, QRect* param3 ```
void q_inputdialog_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QInputDialog* self, bool on ```
void q_inputdialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QInputDialog* self, QAction* action ```
void q_inputdialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QInputDialog* self, libqt_list /* of QAction* */ actions ```
void q_inputdialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QInputDialog* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_inputdialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QInputDialog* self, QAction* before, QAction* action ```
void q_inputdialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QInputDialog* self, QAction* action ```
void q_inputdialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QInputDialog* self ```
libqt_list /* of QAction* */ q_inputdialog_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QInputDialog* self, const char* text ```
QAction* q_inputdialog_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QInputDialog* self, QIcon* icon, const char* text ```
QAction* q_inputdialog_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QInputDialog* self, const char* text, QKeySequence* shortcut ```
QAction* q_inputdialog_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QInputDialog* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_inputdialog_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QInputDialog* self ```
QWidget* q_inputdialog_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QInputDialog* self, int typeVal ```
void q_inputdialog_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QInputDialog* self, enum Qt__WindowType param1 ```
void q_inputdialog_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QInputDialog* self, int typeVal ```
void q_inputdialog_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_inputdialog_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QInputDialog* self, int x, int y ```
QWidget* q_inputdialog_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QInputDialog* self, QPoint* p ```
QWidget* q_inputdialog_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QInputDialog* self, QPointF* p ```
QWidget* q_inputdialog_child_at_with_q_point_f(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QInputDialog* self, enum Qt__WidgetAttribute param1 ```
void q_inputdialog_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QInputDialog* self, enum Qt__WidgetAttribute param1 ```
bool q_inputdialog_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QInputDialog* self ```
void q_inputdialog_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QInputDialog* self, QWidget* child ```
bool q_inputdialog_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QInputDialog* self, bool enabled ```
void q_inputdialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QInputDialog* self ```
QBackingStore* q_inputdialog_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QInputDialog* self ```
QWindow* q_inputdialog_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QInputDialog* self ```
QScreen* q_inputdialog_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QInputDialog* self, QScreen* screen ```
void q_inputdialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_inputdialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QInputDialog* self, const char* title ```
void q_inputdialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QInputDialog* self, void (*slot)(QWidget*, const char*) ```
void q_inputdialog_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QInputDialog* self, QIcon* icon ```
void q_inputdialog_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QInputDialog* self, void (*slot)(QWidget*, QIcon*) ```
void q_inputdialog_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QInputDialog* self, const char* iconText ```
void q_inputdialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QInputDialog* self, void (*slot)(QWidget*, const char*) ```
void q_inputdialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QInputDialog* self, QPoint* pos ```
void q_inputdialog_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QInputDialog* self, void (*slot)(QWidget*, QPoint*) ```
void q_inputdialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QInputDialog* self ```
int64_t q_inputdialog_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QInputDialog* self, int hints ```
void q_inputdialog_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPaintDevice* target, QPoint* targetOffset ```
void q_inputdialog_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_inputdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_inputdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPainter* painter, QPoint* targetOffset ```
void q_inputdialog_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_inputdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QInputDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_inputdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QInputDialog* self, QRect* rectangle ```
QPixmap* q_inputdialog_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QInputDialog* self, enum Qt__GestureType typeVal, int flags ```
void q_inputdialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QInputDialog* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_inputdialog_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QInputDialog* self, int id, bool enable ```
void q_inputdialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QInputDialog* self, int id, bool enable ```
void q_inputdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QInputDialog* self, enum Qt__WindowType param1, bool on ```
void q_inputdialog_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QInputDialog* self, enum Qt__WidgetAttribute param1, bool on ```
void q_inputdialog_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_inputdialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_inputdialog_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QInputDialog* self ```
const char* q_inputdialog_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QInputDialog* self, char* name ```
void q_inputdialog_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QInputDialog* self, bool b ```
bool q_inputdialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QInputDialog* self ```
QThread* q_inputdialog_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QInputDialog* self, QThread* thread ```
bool q_inputdialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QInputDialog* self, int interval ```
int32_t q_inputdialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QInputDialog* self, int id ```
void q_inputdialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QInputDialog* self, enum Qt__TimerId id ```
void q_inputdialog_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QInputDialog* self ```
libqt_list /* of QObject* */ q_inputdialog_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QInputDialog* self, QObject* filterObj ```
void q_inputdialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QInputDialog* self, QObject* obj ```
void q_inputdialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_inputdialog_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QInputDialog* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_inputdialog_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_inputdialog_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_inputdialog_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QInputDialog* self ```
void q_inputdialog_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QInputDialog* self ```
void q_inputdialog_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QInputDialog* self, const char* name, QVariant* value ```
bool q_inputdialog_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QInputDialog* self, const char* name ```
QVariant* q_inputdialog_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QInputDialog* self ```
const char** q_inputdialog_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QInputDialog* self ```
QBindingStorage* q_inputdialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QInputDialog* self ```
const QBindingStorage* q_inputdialog_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputDialog* self ```
void q_inputdialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputDialog* self, void (*slot)(QObject*) ```
void q_inputdialog_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QInputDialog* self ```
QObject* q_inputdialog_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QInputDialog* self, const char* classname ```
bool q_inputdialog_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QInputDialog* self ```
void q_inputdialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QInputDialog* self, QThread* thread, Disambiguated_t* param2 ```
bool q_inputdialog_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QInputDialog* self, int interval, enum Qt__TimerType timerType ```
int32_t q_inputdialog_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_inputdialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QInputDialog* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_inputdialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputDialog* self, QObject* param1 ```
void q_inputdialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputDialog* self, void (*slot)(QObject*, QObject*) ```
void q_inputdialog_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QInputDialog* self ```
bool q_inputdialog_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QInputDialog* self ```
double q_inputdialog_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QInputDialog* self ```
double q_inputdialog_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_inputdialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_inputdialog_encode_metric_f(int64_t metric, double value);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_qbase_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)() ```
void q_inputdialog_on_open(void* self, void (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_qbase_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, int32_t (*slot)() ```
void q_inputdialog_on_exec(void* self, int32_t (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_accept(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_qbase_accept(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)() ```
void q_inputdialog_on_accept(void* self, void (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_qbase_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)() ```
void q_inputdialog_on_reject(void* self, void (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QKeyEvent* param1 ```
void q_inputdialog_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QKeyEvent* param1 ```
void q_inputdialog_qbase_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QKeyEvent*) ```
void q_inputdialog_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QCloseEvent* param1 ```
void q_inputdialog_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QCloseEvent* param1 ```
void q_inputdialog_qbase_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QCloseEvent*) ```
void q_inputdialog_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QShowEvent* param1 ```
void q_inputdialog_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QShowEvent* param1 ```
void q_inputdialog_qbase_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QShowEvent*) ```
void q_inputdialog_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QResizeEvent* param1 ```
void q_inputdialog_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QResizeEvent* param1 ```
void q_inputdialog_qbase_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QResizeEvent*) ```
void q_inputdialog_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QContextMenuEvent* param1 ```
void q_inputdialog_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QContextMenuEvent* param1 ```
void q_inputdialog_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QContextMenuEvent*) ```
void q_inputdialog_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QObject* param1, QEvent* param2 ```
bool q_inputdialog_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QObject* param1, QEvent* param2 ```
bool q_inputdialog_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)(QInputDialog*, QObject*, QEvent*) ```
void q_inputdialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, int32_t (*slot)() ```
void q_inputdialog_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, int param1 ```
int32_t q_inputdialog_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, int param1 ```
int32_t q_inputdialog_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, int32_t (*slot)(QInputDialog*, int) ```
void q_inputdialog_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
bool q_inputdialog_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
bool q_inputdialog_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)() ```
void q_inputdialog_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
QPaintEngine* q_inputdialog_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
QPaintEngine* q_inputdialog_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, QPaintEngine* (*slot)() ```
void q_inputdialog_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QEvent* event ```
bool q_inputdialog_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QEvent* event ```
bool q_inputdialog_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)(QInputDialog*, QEvent*) ```
void q_inputdialog_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QMouseEvent*) ```
void q_inputdialog_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QMouseEvent*) ```
void q_inputdialog_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QMouseEvent*) ```
void q_inputdialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMouseEvent* event ```
void q_inputdialog_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QMouseEvent*) ```
void q_inputdialog_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QWheelEvent* event ```
void q_inputdialog_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QWheelEvent* event ```
void q_inputdialog_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QWheelEvent*) ```
void q_inputdialog_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QKeyEvent* event ```
void q_inputdialog_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QKeyEvent* event ```
void q_inputdialog_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QKeyEvent*) ```
void q_inputdialog_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QFocusEvent* event ```
void q_inputdialog_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QFocusEvent* event ```
void q_inputdialog_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QFocusEvent*) ```
void q_inputdialog_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QFocusEvent* event ```
void q_inputdialog_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QFocusEvent* event ```
void q_inputdialog_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QFocusEvent*) ```
void q_inputdialog_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QEnterEvent* event ```
void q_inputdialog_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QEnterEvent* event ```
void q_inputdialog_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QEnterEvent*) ```
void q_inputdialog_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QEvent* event ```
void q_inputdialog_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QEvent* event ```
void q_inputdialog_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QEvent*) ```
void q_inputdialog_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QPaintEvent* event ```
void q_inputdialog_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QPaintEvent* event ```
void q_inputdialog_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QPaintEvent*) ```
void q_inputdialog_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMoveEvent* event ```
void q_inputdialog_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMoveEvent* event ```
void q_inputdialog_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QMoveEvent*) ```
void q_inputdialog_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QTabletEvent* event ```
void q_inputdialog_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QTabletEvent* event ```
void q_inputdialog_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QTabletEvent*) ```
void q_inputdialog_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QActionEvent* event ```
void q_inputdialog_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QActionEvent* event ```
void q_inputdialog_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QActionEvent*) ```
void q_inputdialog_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QDragEnterEvent* event ```
void q_inputdialog_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QDragEnterEvent* event ```
void q_inputdialog_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QDragEnterEvent*) ```
void q_inputdialog_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QDragMoveEvent* event ```
void q_inputdialog_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QDragMoveEvent* event ```
void q_inputdialog_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QDragMoveEvent*) ```
void q_inputdialog_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QDragLeaveEvent* event ```
void q_inputdialog_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QDragLeaveEvent* event ```
void q_inputdialog_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QDragLeaveEvent*) ```
void q_inputdialog_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QDropEvent* event ```
void q_inputdialog_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QDropEvent* event ```
void q_inputdialog_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QDropEvent*) ```
void q_inputdialog_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QHideEvent* event ```
void q_inputdialog_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QHideEvent* event ```
void q_inputdialog_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QHideEvent*) ```
void q_inputdialog_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_inputdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_inputdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)(QInputDialog*, const char*, void*, intptr_t*) ```
void q_inputdialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QEvent* param1 ```
void q_inputdialog_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QEvent* param1 ```
void q_inputdialog_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QEvent*) ```
void q_inputdialog_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_inputdialog_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_inputdialog_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, int32_t (*slot)(QInputDialog*, enum QPaintDevice__PaintDeviceMetric) ```
void q_inputdialog_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QPainter* painter ```
void q_inputdialog_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QPainter* painter ```
void q_inputdialog_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QPainter*) ```
void q_inputdialog_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QPoint* offset ```
QPaintDevice* q_inputdialog_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QPoint* offset ```
QPaintDevice* q_inputdialog_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, QPaintDevice* (*slot)(QInputDialog*, QPoint*) ```
void q_inputdialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
QPainter* q_inputdialog_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
QPainter* q_inputdialog_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, QPainter* (*slot)() ```
void q_inputdialog_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QInputMethodEvent* param1 ```
void q_inputdialog_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QInputMethodEvent* param1 ```
void q_inputdialog_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QInputMethodEvent*) ```
void q_inputdialog_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_inputdialog_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_inputdialog_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, QVariant* (*slot)(QInputDialog*, enum Qt__InputMethodQuery) ```
void q_inputdialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, bool next ```
bool q_inputdialog_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, bool next ```
bool q_inputdialog_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)(QInputDialog*, bool) ```
void q_inputdialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QTimerEvent* event ```
void q_inputdialog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QTimerEvent* event ```
void q_inputdialog_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QTimerEvent*) ```
void q_inputdialog_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QChildEvent* event ```
void q_inputdialog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QChildEvent* event ```
void q_inputdialog_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QChildEvent*) ```
void q_inputdialog_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QEvent* event ```
void q_inputdialog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QEvent* event ```
void q_inputdialog_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QEvent*) ```
void q_inputdialog_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMetaMethod* signal ```
void q_inputdialog_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMetaMethod* signal ```
void q_inputdialog_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QMetaMethod*) ```
void q_inputdialog_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMetaMethod* signal ```
void q_inputdialog_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMetaMethod* signal ```
void q_inputdialog_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QMetaMethod*) ```
void q_inputdialog_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QWidget* param1 ```
void q_inputdialog_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QWidget* param1 ```
void q_inputdialog_qbase_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)(QInputDialog*, QWidget*) ```
void q_inputdialog_on_adjust_position(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)() ```
void q_inputdialog_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)() ```
void q_inputdialog_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
void q_inputdialog_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, void (*slot)() ```
void q_inputdialog_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
bool q_inputdialog_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
bool q_inputdialog_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)() ```
void q_inputdialog_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
bool q_inputdialog_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
bool q_inputdialog_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)() ```
void q_inputdialog_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
QObject* q_inputdialog_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
QObject* q_inputdialog_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, QObject* (*slot)() ```
void q_inputdialog_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self ```
int32_t q_inputdialog_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, int32_t (*slot)() ```
void q_inputdialog_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, const char* signal ```
int32_t q_inputdialog_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, const char* signal ```
int32_t q_inputdialog_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, int32_t (*slot)(QInputDialog*, const char*) ```
void q_inputdialog_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, QMetaMethod* signal ```
bool q_inputdialog_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, QMetaMethod* signal ```
bool q_inputdialog_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, bool (*slot)(QInputDialog*, QMetaMethod*) ```
void q_inputdialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_inputdialog_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_inputdialog_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDialog* self, double (*slot)(QInputDialog*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_inputdialog_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QInputDialog* self, void (*slot)(QObject*, const char*) ```
void q_inputdialog_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdialog.html#dtor.QInputDialog)
///
/// Delete this object from C++ memory.
///
/// ``` QInputDialog* self ```
void q_inputdialog_delete(void* self);

/// https://doc.qt.io/qt-6/qinputdialog.html#types

typedef enum {
    QINPUTDIALOG_INPUTDIALOGOPTION_NOBUTTONS = 1,
    QINPUTDIALOG_INPUTDIALOGOPTION_USELISTVIEWFORCOMBOBOXITEMS = 2,
    QINPUTDIALOG_INPUTDIALOGOPTION_USEPLAINTEXTEDITFORTEXTINPUT = 4
} QInputDialog__InputDialogOption;

typedef enum {
    QINPUTDIALOG_INPUTMODE_TEXTINPUT = 0,
    QINPUTDIALOG_INPUTMODE_INTINPUT = 1,
    QINPUTDIALOG_INPUTMODE_DOUBLEINPUT = 2
} QInputDialog__InputMode;

#endif
