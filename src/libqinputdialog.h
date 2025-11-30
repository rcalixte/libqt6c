#pragma once
#ifndef SRC_QT6C_LIBQINPUTDIALOG_H
#define SRC_QT6C_LIBQINPUTDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qinputdialog.html

/// q_inputdialog_new constructs a new QInputDialog object.
///
/// @param parent QWidget*
QInputDialog* q_inputdialog_new(void* parent);

/// q_inputdialog_new2 constructs a new QInputDialog object.
///
QInputDialog* q_inputdialog_new2();

/// q_inputdialog_new3 constructs a new QInputDialog object.
///
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QInputDialog* q_inputdialog_new3(void* parent, int64_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QInputDialog*
const QMetaObject* q_inputdialog_meta_object(void* self);

/// @param self QInputDialog*
/// @param param1 const char*
void* q_inputdialog_metacast(void* self, const char* param1);

/// @param self QInputDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_inputdialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QInputDialog*
/// @param callback int32_t func(QInputDialog* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_inputdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QInputDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_inputdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_inputdialog_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setInputMode)
///
/// @param self QInputDialog*
/// @param mode enum QInputDialog__InputMode
void q_inputdialog_set_input_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#inputMode)
///
/// @param self QInputDialog*
///
/// @return enum QInputDialog__InputMode
int32_t q_inputdialog_input_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setLabelText)
///
/// @param self QInputDialog*
/// @param text const char*
void q_inputdialog_set_label_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#labelText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_label_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setOption)
///
/// @param self QInputDialog*
/// @param option enum QInputDialog__InputDialogOption
void q_inputdialog_set_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#testOption)
///
/// @param self QInputDialog*
/// @param option enum QInputDialog__InputDialogOption
bool q_inputdialog_test_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setOptions)
///
/// @param self QInputDialog*
/// @param options flag of enum QInputDialog__InputDialogOption
void q_inputdialog_set_options(void* self, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#options)
///
/// @param self QInputDialog*
///
/// @return flag of enum QInputDialog__InputDialogOption
int32_t q_inputdialog_options(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setTextValue)
///
/// @param self QInputDialog*
/// @param text const char*
void q_inputdialog_set_text_value(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#textValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_text_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setTextEchoMode)
///
/// @param self QInputDialog*
/// @param mode enum QLineEdit__EchoMode
void q_inputdialog_set_text_echo_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#textEchoMode)
///
/// @param self QInputDialog*
///
/// @return enum QLineEdit__EchoMode
int32_t q_inputdialog_text_echo_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setComboBoxEditable)
///
/// @param self QInputDialog*
/// @param editable bool
void q_inputdialog_set_combo_box_editable(void* self, bool editable);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#isComboBoxEditable)
///
/// @param self QInputDialog*
bool q_inputdialog_is_combo_box_editable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setComboBoxItems)
///
/// @param self QInputDialog*
/// @param items const char**
void q_inputdialog_set_combo_box_items(void* self, const char* items[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#comboBoxItems)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char** q_inputdialog_combo_box_items(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setIntValue)
///
/// @param self QInputDialog*
/// @param value int
void q_inputdialog_set_int_value(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#intValue)
///
/// @param self QInputDialog*
int32_t q_inputdialog_int_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setIntMinimum)
///
/// @param self QInputDialog*
/// @param min int
void q_inputdialog_set_int_minimum(void* self, int min);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#intMinimum)
///
/// @param self QInputDialog*
int32_t q_inputdialog_int_minimum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setIntMaximum)
///
/// @param self QInputDialog*
/// @param max int
void q_inputdialog_set_int_maximum(void* self, int max);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#intMaximum)
///
/// @param self QInputDialog*
int32_t q_inputdialog_int_maximum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setIntRange)
///
/// @param self QInputDialog*
/// @param min int
/// @param max int
void q_inputdialog_set_int_range(void* self, int min, int max);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setIntStep)
///
/// @param self QInputDialog*
/// @param step int
void q_inputdialog_set_int_step(void* self, int step);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#intStep)
///
/// @param self QInputDialog*
int32_t q_inputdialog_int_step(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleValue)
///
/// @param self QInputDialog*
/// @param value double
void q_inputdialog_set_double_value(void* self, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#doubleValue)
///
/// @param self QInputDialog*
double q_inputdialog_double_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleMinimum)
///
/// @param self QInputDialog*
/// @param min double
void q_inputdialog_set_double_minimum(void* self, double min);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#doubleMinimum)
///
/// @param self QInputDialog*
double q_inputdialog_double_minimum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleMaximum)
///
/// @param self QInputDialog*
/// @param max double
void q_inputdialog_set_double_maximum(void* self, double max);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#doubleMaximum)
///
/// @param self QInputDialog*
double q_inputdialog_double_maximum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleRange)
///
/// @param self QInputDialog*
/// @param min double
/// @param max double
void q_inputdialog_set_double_range(void* self, double min, double max);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleDecimals)
///
/// @param self QInputDialog*
/// @param decimals int
void q_inputdialog_set_double_decimals(void* self, int decimals);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#doubleDecimals)
///
/// @param self QInputDialog*
int32_t q_inputdialog_double_decimals(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setOkButtonText)
///
/// @param self QInputDialog*
/// @param text const char*
void q_inputdialog_set_ok_button_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#okButtonText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_ok_button_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setCancelButtonText)
///
/// @param self QInputDialog*
/// @param text const char*
void q_inputdialog_set_cancel_button_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#cancelButtonText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_cancel_button_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#minimumSizeHint)
///
/// @param self QInputDialog*
QSize* q_inputdialog_minimum_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QInputDialog*
/// @param callback QSize* func()
void q_inputdialog_on_minimum_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self QInputDialog*
QSize* q_inputdialog_qbase_minimum_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#sizeHint)
///
/// @param self QInputDialog*
QSize* q_inputdialog_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QInputDialog*
/// @param callback QSize* func()
void q_inputdialog_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QInputDialog*
QSize* q_inputdialog_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setVisible)
///
/// @param self QInputDialog*
/// @param visible bool
void q_inputdialog_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setVisible)
///
/// Allows for overriding the related default method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, bool visible)
void q_inputdialog_on_set_visible(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setVisible)
///
/// Base class method implementation
///
/// @param self QInputDialog*
/// @param visible bool
void q_inputdialog_qbase_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
const char* q_inputdialog_get_text(void* parent, const char* title, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
const char* q_inputdialog_get_multi_line_text(void* parent, const char* title, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param items const char**
const char* q_inputdialog_get_item(void* parent, const char* title, const char* label, const char* items[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
int32_t q_inputdialog_get_int(void* parent, const char* title, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
double q_inputdialog_get_double(void* parent, const char* title, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setDoubleStep)
///
/// @param self QInputDialog*
/// @param step double
void q_inputdialog_set_double_step(void* self, double step);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#doubleStep)
///
/// @param self QInputDialog*
double q_inputdialog_double_step(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#textValueChanged)
///
/// @param self QInputDialog*
/// @param text const char*
void q_inputdialog_text_value_changed(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#textValueChanged)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, const char* text)
void q_inputdialog_on_text_value_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#textValueSelected)
///
/// @param self QInputDialog*
/// @param text const char*
void q_inputdialog_text_value_selected(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#textValueSelected)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, const char* text)
void q_inputdialog_on_text_value_selected(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#intValueChanged)
///
/// @param self QInputDialog*
/// @param value int
void q_inputdialog_int_value_changed(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#intValueChanged)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, int value)
void q_inputdialog_on_int_value_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#intValueSelected)
///
/// @param self QInputDialog*
/// @param value int
void q_inputdialog_int_value_selected(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#intValueSelected)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, int value)
void q_inputdialog_on_int_value_selected(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#doubleValueChanged)
///
/// @param self QInputDialog*
/// @param value double
void q_inputdialog_double_value_changed(void* self, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#doubleValueChanged)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, double value)
void q_inputdialog_on_double_value_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#doubleValueSelected)
///
/// @param self QInputDialog*
/// @param value double
void q_inputdialog_double_value_selected(void* self, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#doubleValueSelected)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, double value)
void q_inputdialog_on_double_value_selected(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#done)
///
/// @param self QInputDialog*
/// @param result int
void q_inputdialog_done(void* self, int result);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#done)
///
/// Allows for overriding the related default method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, int result)
void q_inputdialog_on_done(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#done)
///
/// Base class method implementation
///
/// @param self QInputDialog*
/// @param result int
void q_inputdialog_qbase_done(void* self, int result);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_inputdialog_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_inputdialog_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#setOption)
///
/// @param self QInputDialog*
/// @param option enum QInputDialog__InputDialogOption
/// @param on bool
void q_inputdialog_set_option2(void* self, int32_t option, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param echo enum QLineEdit__EchoMode
const char* q_inputdialog_get_text4(void* parent, const char* title, const char* label, int32_t echo);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param echo enum QLineEdit__EchoMode
/// @param text const char*
const char* q_inputdialog_get_text5(void* parent, const char* title, const char* label, int32_t echo, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param echo enum QLineEdit__EchoMode
/// @param text const char*
/// @param ok bool*
const char* q_inputdialog_get_text6(void* parent, const char* title, const char* label, int32_t echo, const char* text, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param echo enum QLineEdit__EchoMode
/// @param text const char*
/// @param ok bool*
/// @param flags flag of enum Qt__WindowType
const char* q_inputdialog_get_text7(void* parent, const char* title, const char* label, int32_t echo, const char* text, bool* ok, int64_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param echo enum QLineEdit__EchoMode
/// @param text const char*
/// @param ok bool*
/// @param flags flag of enum Qt__WindowType
/// @param inputMethodHints flag of enum Qt__InputMethodHint
const char* q_inputdialog_get_text8(void* parent, const char* title, const char* label, int32_t echo, const char* text, bool* ok, int64_t flags, int64_t inputMethodHints);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param text const char*
const char* q_inputdialog_get_multi_line_text4(void* parent, const char* title, const char* label, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param text const char*
/// @param ok bool*
const char* q_inputdialog_get_multi_line_text5(void* parent, const char* title, const char* label, const char* text, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param text const char*
/// @param ok bool*
/// @param flags flag of enum Qt__WindowType
const char* q_inputdialog_get_multi_line_text6(void* parent, const char* title, const char* label, const char* text, bool* ok, int64_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getMultiLineText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param text const char*
/// @param ok bool*
/// @param flags flag of enum Qt__WindowType
/// @param inputMethodHints flag of enum Qt__InputMethodHint
const char* q_inputdialog_get_multi_line_text7(void* parent, const char* title, const char* label, const char* text, bool* ok, int64_t flags, int64_t inputMethodHints);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param items const char**
/// @param current int
const char* q_inputdialog_get_item5(void* parent, const char* title, const char* label, const char* items[static 1], int current);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param items const char**
/// @param current int
/// @param editable bool
const char* q_inputdialog_get_item6(void* parent, const char* title, const char* label, const char* items[static 1], int current, bool editable);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param items const char**
/// @param current int
/// @param editable bool
/// @param ok bool*
const char* q_inputdialog_get_item7(void* parent, const char* title, const char* label, const char* items[static 1], int current, bool editable, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param items const char**
/// @param current int
/// @param editable bool
/// @param ok bool*
/// @param flags flag of enum Qt__WindowType
const char* q_inputdialog_get_item8(void* parent, const char* title, const char* label, const char* items[static 1], int current, bool editable, bool* ok, int64_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getItem)
///
/// Caller is responsible for freeing the returned memory
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param items const char**
/// @param current int
/// @param editable bool
/// @param ok bool*
/// @param flags flag of enum Qt__WindowType
/// @param inputMethodHints flag of enum Qt__InputMethodHint
const char* q_inputdialog_get_item9(void* parent, const char* title, const char* label, const char* items[static 1], int current, bool editable, bool* ok, int64_t flags, int64_t inputMethodHints);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param value int
int32_t q_inputdialog_get_int4(void* parent, const char* title, const char* label, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param value int
/// @param minValue int
int32_t q_inputdialog_get_int5(void* parent, const char* title, const char* label, int value, int minValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param value int
/// @param minValue int
/// @param maxValue int
int32_t q_inputdialog_get_int6(void* parent, const char* title, const char* label, int value, int minValue, int maxValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param value int
/// @param minValue int
/// @param maxValue int
/// @param step int
int32_t q_inputdialog_get_int7(void* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param value int
/// @param minValue int
/// @param maxValue int
/// @param step int
/// @param ok bool*
int32_t q_inputdialog_get_int8(void* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getInt)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param value int
/// @param minValue int
/// @param maxValue int
/// @param step int
/// @param ok bool*
/// @param flags flag of enum Qt__WindowType
int32_t q_inputdialog_get_int9(void* parent, const char* title, const char* label, int value, int minValue, int maxValue, int step, bool* ok, int64_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param value double
double q_inputdialog_get_double4(void* parent, const char* title, const char* label, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param value double
/// @param minValue double
double q_inputdialog_get_double5(void* parent, const char* title, const char* label, double value, double minValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param value double
/// @param minValue double
/// @param maxValue double
double q_inputdialog_get_double6(void* parent, const char* title, const char* label, double value, double minValue, double maxValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param value double
/// @param minValue double
/// @param maxValue double
/// @param decimals int
double q_inputdialog_get_double7(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param value double
/// @param minValue double
/// @param maxValue double
/// @param decimals int
/// @param ok bool*
double q_inputdialog_get_double8(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param value double
/// @param minValue double
/// @param maxValue double
/// @param decimals int
/// @param ok bool*
/// @param flags flag of enum Qt__WindowType
double q_inputdialog_get_double9(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok, int64_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#getDouble)
///
/// @param parent QWidget*
/// @param title const char*
/// @param label const char*
/// @param value double
/// @param minValue double
/// @param maxValue double
/// @param decimals int
/// @param ok bool*
/// @param flags flag of enum Qt__WindowType
/// @param step double
double q_inputdialog_get_double10(void* parent, const char* title, const char* label, double value, double minValue, double maxValue, int decimals, bool* ok, int64_t flags, double step);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self QInputDialog*
int32_t q_inputdialog_result(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self QInputDialog*
/// @param sizeGripEnabled bool
void q_inputdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self QInputDialog*
bool q_inputdialog_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self QInputDialog*
/// @param modal bool
void q_inputdialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self QInputDialog*
/// @param r int
void q_inputdialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self QInputDialog*
/// @param result int
void q_inputdialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, int result)
void q_inputdialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self QInputDialog*
void q_inputdialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self)
void q_inputdialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self QInputDialog*
void q_inputdialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self)
void q_inputdialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QInputDialog*
uintptr_t q_inputdialog_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QInputDialog*
void q_inputdialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QInputDialog*
uintptr_t q_inputdialog_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QInputDialog*
uintptr_t q_inputdialog_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QInputDialog*
QStyle* q_inputdialog_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QInputDialog*
/// @param style QStyle*
void q_inputdialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QInputDialog*
bool q_inputdialog_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QInputDialog*
bool q_inputdialog_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QInputDialog*
bool q_inputdialog_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QInputDialog*
///
/// @return enum Qt__WindowModality
int32_t q_inputdialog_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QInputDialog*
/// @param windowModality enum Qt__WindowModality
void q_inputdialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QInputDialog*
bool q_inputdialog_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QInputDialog*
/// @param param1 QWidget*
bool q_inputdialog_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QInputDialog*
/// @param enabled bool
void q_inputdialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QInputDialog*
/// @param disabled bool
void q_inputdialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QInputDialog*
/// @param windowModified bool
void q_inputdialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QInputDialog*
QRect* q_inputdialog_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QInputDialog*
const QRect* q_inputdialog_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QInputDialog*
QRect* q_inputdialog_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QInputDialog*
int32_t q_inputdialog_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QInputDialog*
int32_t q_inputdialog_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QInputDialog*
QPoint* q_inputdialog_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QInputDialog*
QSize* q_inputdialog_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QInputDialog*
QSize* q_inputdialog_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QInputDialog*
int32_t q_inputdialog_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QInputDialog*
int32_t q_inputdialog_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QInputDialog*
QRect* q_inputdialog_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QInputDialog*
QRect* q_inputdialog_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QInputDialog*
QRegion* q_inputdialog_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QInputDialog*
QSize* q_inputdialog_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QInputDialog*
QSize* q_inputdialog_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QInputDialog*
int32_t q_inputdialog_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QInputDialog*
int32_t q_inputdialog_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QInputDialog*
int32_t q_inputdialog_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QInputDialog*
int32_t q_inputdialog_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QInputDialog*
/// @param minimumSize QSize*
void q_inputdialog_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QInputDialog*
/// @param minw int
/// @param minh int
void q_inputdialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QInputDialog*
/// @param maximumSize QSize*
void q_inputdialog_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QInputDialog*
/// @param maxw int
/// @param maxh int
void q_inputdialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QInputDialog*
/// @param minw int
void q_inputdialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QInputDialog*
/// @param minh int
void q_inputdialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QInputDialog*
/// @param maxw int
void q_inputdialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QInputDialog*
/// @param maxh int
void q_inputdialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QInputDialog*
QSize* q_inputdialog_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QInputDialog*
/// @param sizeIncrement QSize*
void q_inputdialog_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QInputDialog*
/// @param w int
/// @param h int
void q_inputdialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QInputDialog*
QSize* q_inputdialog_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QInputDialog*
/// @param baseSize QSize*
void q_inputdialog_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QInputDialog*
/// @param basew int
/// @param baseh int
void q_inputdialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QInputDialog*
/// @param fixedSize QSize*
void q_inputdialog_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QInputDialog*
/// @param w int
/// @param h int
void q_inputdialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QInputDialog*
/// @param w int
void q_inputdialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QInputDialog*
/// @param h int
void q_inputdialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QInputDialog*
/// @param param1 QPointF*
QPointF* q_inputdialog_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QInputDialog*
/// @param param1 QPoint*
QPoint* q_inputdialog_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QInputDialog*
/// @param param1 QPointF*
QPointF* q_inputdialog_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QInputDialog*
/// @param param1 QPoint*
QPoint* q_inputdialog_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QInputDialog*
/// @param param1 QPointF*
QPointF* q_inputdialog_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QInputDialog*
/// @param param1 QPoint*
QPoint* q_inputdialog_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QInputDialog*
/// @param param1 QPointF*
QPointF* q_inputdialog_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QInputDialog*
/// @param param1 QPoint*
QPoint* q_inputdialog_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QInputDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_inputdialog_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QInputDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_inputdialog_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QInputDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_inputdialog_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QInputDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_inputdialog_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QInputDialog*
QWidget* q_inputdialog_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QInputDialog*
QWidget* q_inputdialog_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QInputDialog*
QWidget* q_inputdialog_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QInputDialog*
const QPalette* q_inputdialog_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QInputDialog*
/// @param palette QPalette*
void q_inputdialog_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QInputDialog*
/// @param backgroundRole enum QPalette__ColorRole
void q_inputdialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QInputDialog*
///
/// @return enum QPalette__ColorRole
int32_t q_inputdialog_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QInputDialog*
/// @param foregroundRole enum QPalette__ColorRole
void q_inputdialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QInputDialog*
///
/// @return enum QPalette__ColorRole
int32_t q_inputdialog_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QInputDialog*
const QFont* q_inputdialog_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QInputDialog*
/// @param font QFont*
void q_inputdialog_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QInputDialog*
QFontMetrics* q_inputdialog_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QInputDialog*
QFontInfo* q_inputdialog_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QInputDialog*
QCursor* q_inputdialog_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QInputDialog*
/// @param cursor QCursor*
void q_inputdialog_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QInputDialog*
void q_inputdialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QInputDialog*
/// @param enable bool
void q_inputdialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QInputDialog*
bool q_inputdialog_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QInputDialog*
bool q_inputdialog_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QInputDialog*
/// @param enable bool
void q_inputdialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QInputDialog*
bool q_inputdialog_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QInputDialog*
/// @param mask QBitmap*
void q_inputdialog_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QInputDialog*
/// @param mask QRegion*
void q_inputdialog_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QInputDialog*
QRegion* q_inputdialog_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QInputDialog*
void q_inputdialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QInputDialog*
/// @param target QPaintDevice*
void q_inputdialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QInputDialog*
/// @param painter QPainter*
void q_inputdialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QInputDialog*
QPixmap* q_inputdialog_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QInputDialog*
QGraphicsEffect* q_inputdialog_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QInputDialog*
/// @param effect QGraphicsEffect*
void q_inputdialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QInputDialog*
/// @param type enum Qt__GestureType
void q_inputdialog_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QInputDialog*
/// @param type enum Qt__GestureType
void q_inputdialog_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QInputDialog*
/// @param windowTitle const char*
void q_inputdialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QInputDialog*
/// @param styleSheet const char*
void q_inputdialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QInputDialog*
/// @param icon QIcon*
void q_inputdialog_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QInputDialog*
QIcon* q_inputdialog_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QInputDialog*
/// @param windowIconText const char*
void q_inputdialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QInputDialog*
/// @param windowRole const char*
void q_inputdialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QInputDialog*
/// @param filePath const char*
void q_inputdialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QInputDialog*
/// @param level double
void q_inputdialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QInputDialog*
double q_inputdialog_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QInputDialog*
bool q_inputdialog_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QInputDialog*
/// @param toolTip const char*
void q_inputdialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QInputDialog*
/// @param msec int
void q_inputdialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QInputDialog*
int32_t q_inputdialog_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QInputDialog*
/// @param statusTip const char*
void q_inputdialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QInputDialog*
/// @param whatsThis const char*
void q_inputdialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QInputDialog*
/// @param name const char*
void q_inputdialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QInputDialog*
/// @param description const char*
void q_inputdialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QInputDialog*
/// @param direction enum Qt__LayoutDirection
void q_inputdialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QInputDialog*
///
/// @return enum Qt__LayoutDirection
int32_t q_inputdialog_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QInputDialog*
void q_inputdialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QInputDialog*
/// @param locale QLocale*
void q_inputdialog_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QInputDialog*
QLocale* q_inputdialog_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QInputDialog*
void q_inputdialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QInputDialog*
bool q_inputdialog_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QInputDialog*
bool q_inputdialog_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QInputDialog*
void q_inputdialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QInputDialog*
bool q_inputdialog_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QInputDialog*
void q_inputdialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QInputDialog*
void q_inputdialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QInputDialog*
/// @param reason enum Qt__FocusReason
void q_inputdialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QInputDialog*
///
/// @return enum Qt__FocusPolicy
int32_t q_inputdialog_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QInputDialog*
/// @param policy enum Qt__FocusPolicy
void q_inputdialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QInputDialog*
bool q_inputdialog_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_inputdialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QInputDialog*
/// @param focusProxy QWidget*
void q_inputdialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QInputDialog*
QWidget* q_inputdialog_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QInputDialog*
///
/// @return enum Qt__ContextMenuPolicy
int32_t q_inputdialog_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QInputDialog*
/// @param policy enum Qt__ContextMenuPolicy
void q_inputdialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QInputDialog*
void q_inputdialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QInputDialog*
/// @param param1 QCursor*
void q_inputdialog_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QInputDialog*
void q_inputdialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QInputDialog*
void q_inputdialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QInputDialog*
void q_inputdialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QInputDialog*
/// @param key QKeySequence*
int32_t q_inputdialog_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QInputDialog*
/// @param id int
void q_inputdialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QInputDialog*
/// @param id int
void q_inputdialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QInputDialog*
/// @param id int
void q_inputdialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_inputdialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_inputdialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QInputDialog*
bool q_inputdialog_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QInputDialog*
/// @param enable bool
void q_inputdialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QInputDialog*
QGraphicsProxyWidget* q_inputdialog_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QInputDialog*
void q_inputdialog_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QInputDialog*
void q_inputdialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QInputDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_inputdialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QInputDialog*
/// @param param1 QRect*
void q_inputdialog_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QInputDialog*
/// @param param1 QRegion*
void q_inputdialog_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QInputDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_inputdialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QInputDialog*
/// @param param1 QRect*
void q_inputdialog_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QInputDialog*
/// @param param1 QRegion*
void q_inputdialog_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QInputDialog*
/// @param hidden bool
void q_inputdialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QInputDialog*
void q_inputdialog_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QInputDialog*
void q_inputdialog_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QInputDialog*
void q_inputdialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QInputDialog*
void q_inputdialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QInputDialog*
void q_inputdialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QInputDialog*
void q_inputdialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QInputDialog*
bool q_inputdialog_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QInputDialog*
void q_inputdialog_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QInputDialog*
void q_inputdialog_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QInputDialog*
/// @param param1 QWidget*
void q_inputdialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QInputDialog*
/// @param x int
/// @param y int
void q_inputdialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QInputDialog*
/// @param param1 QPoint*
void q_inputdialog_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QInputDialog*
/// @param w int
/// @param h int
void q_inputdialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QInputDialog*
/// @param param1 QSize*
void q_inputdialog_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QInputDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_inputdialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QInputDialog*
/// @param geometry QRect*
void q_inputdialog_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
char* q_inputdialog_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QInputDialog*
/// @param geometry const char*
bool q_inputdialog_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QInputDialog*
void q_inputdialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QInputDialog*
bool q_inputdialog_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QInputDialog*
/// @param param1 QWidget*
bool q_inputdialog_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QInputDialog*
bool q_inputdialog_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QInputDialog*
bool q_inputdialog_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QInputDialog*
bool q_inputdialog_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QInputDialog*
bool q_inputdialog_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QInputDialog*
///
/// @return flag of enum Qt__WindowState
int32_t q_inputdialog_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QInputDialog*
/// @param state flag of enum Qt__WindowState
void q_inputdialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QInputDialog*
/// @param state flag of enum Qt__WindowState
void q_inputdialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QInputDialog*
QSizePolicy* q_inputdialog_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QInputDialog*
/// @param sizePolicy QSizePolicy*
void q_inputdialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QInputDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_inputdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QInputDialog*
QRegion* q_inputdialog_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QInputDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_inputdialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QInputDialog*
/// @param margins QMargins*
void q_inputdialog_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QInputDialog*
QMargins* q_inputdialog_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QInputDialog*
QRect* q_inputdialog_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QInputDialog*
QLayout* q_inputdialog_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QInputDialog*
/// @param layout QLayout*
void q_inputdialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QInputDialog*
void q_inputdialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QInputDialog*
/// @param parent QWidget*
void q_inputdialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QInputDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_inputdialog_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QInputDialog*
/// @param dx int
/// @param dy int
void q_inputdialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QInputDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_inputdialog_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QInputDialog*
QWidget* q_inputdialog_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QInputDialog*
QWidget* q_inputdialog_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QInputDialog*
QWidget* q_inputdialog_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QInputDialog*
bool q_inputdialog_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QInputDialog*
/// @param on bool
void q_inputdialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QInputDialog*
/// @param action QAction*
void q_inputdialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QInputDialog*
/// @param actions libqt_list /* of QAction* */
void q_inputdialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QInputDialog*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_inputdialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QInputDialog*
/// @param before QAction*
/// @param action QAction*
void q_inputdialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QInputDialog*
/// @param action QAction*
void q_inputdialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QInputDialog*
libqt_list /* of QAction* */ q_inputdialog_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QInputDialog*
/// @param text const char*
QAction* q_inputdialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QInputDialog*
/// @param icon QIcon*
/// @param text const char*
QAction* q_inputdialog_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QInputDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_inputdialog_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QInputDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_inputdialog_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QInputDialog*
QWidget* q_inputdialog_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QInputDialog*
/// @param type flag of enum Qt__WindowType
void q_inputdialog_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QInputDialog*
///
/// @return flag of enum Qt__WindowType
int64_t q_inputdialog_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QInputDialog*
/// @param param1 enum Qt__WindowType
void q_inputdialog_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QInputDialog*
/// @param type flag of enum Qt__WindowType
void q_inputdialog_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QInputDialog*
///
/// @return enum Qt__WindowType
int64_t q_inputdialog_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_inputdialog_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QInputDialog*
/// @param x int
/// @param y int
QWidget* q_inputdialog_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QInputDialog*
/// @param p QPoint*
QWidget* q_inputdialog_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QInputDialog*
/// @param p QPointF*
QWidget* q_inputdialog_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QInputDialog*
/// @param param1 enum Qt__WidgetAttribute
void q_inputdialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QInputDialog*
/// @param param1 enum Qt__WidgetAttribute
bool q_inputdialog_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QInputDialog*
void q_inputdialog_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QInputDialog*
/// @param child QWidget*
bool q_inputdialog_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QInputDialog*
bool q_inputdialog_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QInputDialog*
/// @param enabled bool
void q_inputdialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QInputDialog*
QBackingStore* q_inputdialog_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QInputDialog*
QWindow* q_inputdialog_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QInputDialog*
QScreen* q_inputdialog_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QInputDialog*
/// @param screen QScreen*
void q_inputdialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_inputdialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QInputDialog*
/// @param title const char*
void q_inputdialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, const char* title)
void q_inputdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QInputDialog*
/// @param icon QIcon*
void q_inputdialog_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QIcon* icon)
void q_inputdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QInputDialog*
/// @param iconText const char*
void q_inputdialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, const char* iconText)
void q_inputdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QInputDialog*
/// @param pos QPoint*
void q_inputdialog_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QPoint* pos)
void q_inputdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QInputDialog*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_inputdialog_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QInputDialog*
/// @param hints flag of enum Qt__InputMethodHint
void q_inputdialog_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QInputDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_inputdialog_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QInputDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_inputdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QInputDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_inputdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QInputDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_inputdialog_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QInputDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_inputdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QInputDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_inputdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QInputDialog*
/// @param rectangle QRect*
QPixmap* q_inputdialog_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QInputDialog*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_inputdialog_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QInputDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_inputdialog_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QInputDialog*
/// @param id int
/// @param enable bool
void q_inputdialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QInputDialog*
/// @param id int
/// @param enable bool
void q_inputdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QInputDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_inputdialog_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QInputDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_inputdialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_inputdialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_inputdialog_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char* q_inputdialog_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QInputDialog*
/// @param name char*
void q_inputdialog_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QInputDialog*
bool q_inputdialog_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QInputDialog*
bool q_inputdialog_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QInputDialog*
bool q_inputdialog_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QInputDialog*
bool q_inputdialog_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QInputDialog*
/// @param b bool
bool q_inputdialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QInputDialog*
QThread* q_inputdialog_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QInputDialog*
/// @param thread QThread*
bool q_inputdialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QInputDialog*
/// @param interval int
int32_t q_inputdialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QInputDialog*
/// @param id int
void q_inputdialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QInputDialog*
/// @param id enum Qt__TimerId
void q_inputdialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QInputDialog*
libqt_list /* of QObject* */ q_inputdialog_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QInputDialog*
/// @param filterObj QObject*
void q_inputdialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QInputDialog*
/// @param obj QObject*
void q_inputdialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_inputdialog_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QInputDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_inputdialog_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_inputdialog_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_inputdialog_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QInputDialog*
void q_inputdialog_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QInputDialog*
void q_inputdialog_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QInputDialog*
/// @param name const char*
/// @param value QVariant*
bool q_inputdialog_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QInputDialog*
/// @param name const char*
QVariant* q_inputdialog_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QInputDialog*
const char** q_inputdialog_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QInputDialog*
QBindingStorage* q_inputdialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QInputDialog*
const QBindingStorage* q_inputdialog_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QInputDialog*
void q_inputdialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self)
void q_inputdialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QInputDialog*
QObject* q_inputdialog_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QInputDialog*
/// @param classname const char*
bool q_inputdialog_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QInputDialog*
void q_inputdialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QInputDialog*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_inputdialog_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QInputDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_inputdialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_inputdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QInputDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_inputdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QInputDialog*
/// @param param1 QObject*
void q_inputdialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QObject* param1)
void q_inputdialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QInputDialog*
bool q_inputdialog_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QInputDialog*
int32_t q_inputdialog_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QInputDialog*
int32_t q_inputdialog_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QInputDialog*
int32_t q_inputdialog_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QInputDialog*
int32_t q_inputdialog_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QInputDialog*
int32_t q_inputdialog_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QInputDialog*
int32_t q_inputdialog_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QInputDialog*
double q_inputdialog_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QInputDialog*
double q_inputdialog_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QInputDialog*
int32_t q_inputdialog_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QInputDialog*
int32_t q_inputdialog_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_inputdialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_inputdialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
void q_inputdialog_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
void q_inputdialog_qbase_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func()
void q_inputdialog_on_open(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
int32_t q_inputdialog_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
int32_t q_inputdialog_qbase_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback int32_t func()
void q_inputdialog_on_exec(void* self, int32_t (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
void q_inputdialog_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
void q_inputdialog_qbase_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func()
void q_inputdialog_on_accept(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
void q_inputdialog_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
void q_inputdialog_qbase_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func()
void q_inputdialog_on_reject(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QKeyEvent*
void q_inputdialog_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QKeyEvent*
void q_inputdialog_qbase_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QKeyEvent* param1)
void q_inputdialog_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QCloseEvent*
void q_inputdialog_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QCloseEvent*
void q_inputdialog_qbase_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QCloseEvent* param1)
void q_inputdialog_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QShowEvent*
void q_inputdialog_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QShowEvent*
void q_inputdialog_qbase_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QShowEvent* param1)
void q_inputdialog_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QResizeEvent*
void q_inputdialog_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QResizeEvent*
void q_inputdialog_qbase_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QResizeEvent* param1)
void q_inputdialog_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QContextMenuEvent*
void q_inputdialog_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QContextMenuEvent*
void q_inputdialog_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QContextMenuEvent* param1)
void q_inputdialog_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
bool q_inputdialog_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
bool q_inputdialog_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback bool func(QInputDialog* self, QObject* param1, QEvent* param2)
void q_inputdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
int32_t q_inputdialog_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
int32_t q_inputdialog_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback int32_t func()
void q_inputdialog_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 int
int32_t q_inputdialog_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 int
int32_t q_inputdialog_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback int32_t func(QInputDialog* self, int param1)
void q_inputdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
bool q_inputdialog_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
bool q_inputdialog_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback bool func()
void q_inputdialog_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
QPaintEngine* q_inputdialog_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
QPaintEngine* q_inputdialog_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback QPaintEngine* func()
void q_inputdialog_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QEvent*
bool q_inputdialog_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QEvent*
bool q_inputdialog_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback bool func(QInputDialog* self, QEvent* event)
void q_inputdialog_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QMouseEvent*
void q_inputdialog_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QMouseEvent*
void q_inputdialog_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QMouseEvent* event)
void q_inputdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QMouseEvent*
void q_inputdialog_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QMouseEvent*
void q_inputdialog_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QMouseEvent* event)
void q_inputdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QMouseEvent*
void q_inputdialog_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QMouseEvent*
void q_inputdialog_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QMouseEvent* event)
void q_inputdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QMouseEvent*
void q_inputdialog_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QMouseEvent*
void q_inputdialog_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QMouseEvent* event)
void q_inputdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QWheelEvent*
void q_inputdialog_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QWheelEvent*
void q_inputdialog_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QWheelEvent* event)
void q_inputdialog_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QKeyEvent*
void q_inputdialog_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QKeyEvent*
void q_inputdialog_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QKeyEvent* event)
void q_inputdialog_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QFocusEvent*
void q_inputdialog_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QFocusEvent*
void q_inputdialog_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QFocusEvent* event)
void q_inputdialog_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QFocusEvent*
void q_inputdialog_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QFocusEvent*
void q_inputdialog_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QFocusEvent* event)
void q_inputdialog_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QEnterEvent*
void q_inputdialog_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QEnterEvent*
void q_inputdialog_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QEnterEvent* event)
void q_inputdialog_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QEvent*
void q_inputdialog_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QEvent*
void q_inputdialog_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QEvent* event)
void q_inputdialog_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QPaintEvent*
void q_inputdialog_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QPaintEvent*
void q_inputdialog_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QPaintEvent* event)
void q_inputdialog_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QMoveEvent*
void q_inputdialog_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QMoveEvent*
void q_inputdialog_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QMoveEvent* event)
void q_inputdialog_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QTabletEvent*
void q_inputdialog_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QTabletEvent*
void q_inputdialog_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QTabletEvent* event)
void q_inputdialog_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QActionEvent*
void q_inputdialog_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QActionEvent*
void q_inputdialog_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QActionEvent* event)
void q_inputdialog_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QDragEnterEvent*
void q_inputdialog_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QDragEnterEvent*
void q_inputdialog_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QDragEnterEvent* event)
void q_inputdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QDragMoveEvent*
void q_inputdialog_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QDragMoveEvent*
void q_inputdialog_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QDragMoveEvent* event)
void q_inputdialog_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QDragLeaveEvent*
void q_inputdialog_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QDragLeaveEvent*
void q_inputdialog_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QDragLeaveEvent* event)
void q_inputdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QDropEvent*
void q_inputdialog_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QDropEvent*
void q_inputdialog_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QDropEvent* event)
void q_inputdialog_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QHideEvent*
void q_inputdialog_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QHideEvent*
void q_inputdialog_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QHideEvent* event)
void q_inputdialog_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_inputdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_inputdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback bool func(QInputDialog* self, const char* eventType, void* message, intptr_t* result)
void q_inputdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QEvent*
void q_inputdialog_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QEvent*
void q_inputdialog_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QEvent* param1)
void q_inputdialog_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_inputdialog_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_inputdialog_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback int32_t func(QInputDialog* self, enum QPaintDevice__PaintDeviceMetric param1)
void q_inputdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param painter QPainter*
void q_inputdialog_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param painter QPainter*
void q_inputdialog_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QPainter* painter)
void q_inputdialog_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param offset QPoint*
QPaintDevice* q_inputdialog_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param offset QPoint*
QPaintDevice* q_inputdialog_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback QPaintDevice* func(QInputDialog* self, QPoint* offset)
void q_inputdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
QPainter* q_inputdialog_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
QPainter* q_inputdialog_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback QPainter* func()
void q_inputdialog_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QInputMethodEvent*
void q_inputdialog_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QInputMethodEvent*
void q_inputdialog_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QInputMethodEvent* param1)
void q_inputdialog_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_inputdialog_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_inputdialog_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback QVariant* func(QInputDialog* self, enum Qt__InputMethodQuery param1)
void q_inputdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param next bool
bool q_inputdialog_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param next bool
bool q_inputdialog_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback bool func(QInputDialog* self, bool next)
void q_inputdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QTimerEvent*
void q_inputdialog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QTimerEvent*
void q_inputdialog_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QTimerEvent* event)
void q_inputdialog_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QChildEvent*
void q_inputdialog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QChildEvent*
void q_inputdialog_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QChildEvent* event)
void q_inputdialog_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param event QEvent*
void q_inputdialog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param event QEvent*
void q_inputdialog_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QEvent* event)
void q_inputdialog_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param signal QMetaMethod*
void q_inputdialog_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param signal QMetaMethod*
void q_inputdialog_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QMetaMethod* signal)
void q_inputdialog_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param signal QMetaMethod*
void q_inputdialog_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param signal QMetaMethod*
void q_inputdialog_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QMetaMethod* signal)
void q_inputdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QWidget*
void q_inputdialog_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param param1 QWidget*
void q_inputdialog_qbase_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, QWidget* param1)
void q_inputdialog_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
void q_inputdialog_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
void q_inputdialog_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func()
void q_inputdialog_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
void q_inputdialog_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
void q_inputdialog_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func()
void q_inputdialog_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
void q_inputdialog_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
void q_inputdialog_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback void func()
void q_inputdialog_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
bool q_inputdialog_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
bool q_inputdialog_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback bool func()
void q_inputdialog_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
bool q_inputdialog_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
bool q_inputdialog_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback bool func()
void q_inputdialog_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
QObject* q_inputdialog_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
QObject* q_inputdialog_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback QObject* func()
void q_inputdialog_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
int32_t q_inputdialog_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
int32_t q_inputdialog_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback int32_t func()
void q_inputdialog_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param signal const char*
int32_t q_inputdialog_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param signal const char*
int32_t q_inputdialog_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback int32_t func(QInputDialog* self, const char* signal)
void q_inputdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param signal QMetaMethod*
bool q_inputdialog_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param signal QMetaMethod*
bool q_inputdialog_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback bool func(QInputDialog* self, QMetaMethod* signal)
void q_inputdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QInputDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_inputdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QInputDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_inputdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QInputDialog*
/// @param callback double func(QInputDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_inputdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QInputDialog*
/// @param callback void func(QInputDialog* self, const char* objectName)
void q_inputdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qinputdialog.html#dtor.QInputDialog)
///
/// Delete this object from C++ memory.
///
/// @param self QInputDialog*
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
