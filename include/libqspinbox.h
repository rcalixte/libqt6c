#pragma once
#ifndef SRC_QT6C_LIBQSPINBOX_H
#define SRC_QT6C_LIBQSPINBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html)

/// q_spinbox_new constructs a new QSpinBox object.
///
/// @param parent QWidget*
///
QSpinBox* q_spinbox_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html)

/// q_spinbox_new2 constructs a new QSpinBox object.
///
QSpinBox* q_spinbox_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSpinBox*
///
const QMetaObject* q_spinbox_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QSpinBox*
/// @param callback const QMetaObject* func()
///
void q_spinbox_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QSpinBox*
///
const QMetaObject* q_spinbox_qbase_meta_object(void* self);

/// @param self QSpinBox*
/// @param param1 const char*
///
void* q_spinbox_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSpinBox*
/// @param callback void* func(QSpinBox* self, const char* param1)
///
void q_spinbox_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QSpinBox*
/// @param param1 const char*
///
void* q_spinbox_qbase_metacast(void* self, const char* param1);

/// @param self QSpinBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_spinbox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSpinBox*
/// @param callback int32_t func(QSpinBox* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_spinbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSpinBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_spinbox_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_spinbox_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#value)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_prefix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setPrefix)
///
/// @param self QSpinBox*
/// @param prefix const char*
///
void q_spinbox_set_prefix(void* self, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#suffix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_suffix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setSuffix)
///
/// @param self QSpinBox*
/// @param suffix const char*
///
void q_spinbox_set_suffix(void* self, const char* suffix);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#cleanText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_clean_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#singleStep)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_single_step(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setSingleStep)
///
/// @param self QSpinBox*
/// @param val int
///
void q_spinbox_set_single_step(void* self, int val);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#minimum)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_minimum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setMinimum)
///
/// @param self QSpinBox*
/// @param min int
///
void q_spinbox_set_minimum(void* self, int min);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#maximum)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_maximum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setMaximum)
///
/// @param self QSpinBox*
/// @param max int
///
void q_spinbox_set_maximum(void* self, int max);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setRange)
///
/// @param self QSpinBox*
/// @param min int
/// @param max int
///
void q_spinbox_set_range(void* self, int min, int max);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#stepType)
///
/// @param self QSpinBox*
///
/// @return enum QAbstractSpinBox__StepType
///
int32_t q_spinbox_step_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setStepType)
///
/// @param self QSpinBox*
/// @param stepType enum QAbstractSpinBox__StepType
///
void q_spinbox_set_step_type(void* self, int32_t stepType);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#displayIntegerBase)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_display_integer_base(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setDisplayIntegerBase)
///
/// @param self QSpinBox*
/// @param base int
///
void q_spinbox_set_display_integer_base(void* self, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#event)
///
/// @param self QSpinBox*
/// @param event QEvent*
///
bool q_spinbox_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QSpinBox*
/// @param callback bool func(QSpinBox* self, QEvent* event)
///
void q_spinbox_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#event)
///
/// Base class method implementation
///
/// @param self QSpinBox*
/// @param event QEvent*
///
bool q_spinbox_qbase_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#validate)
///
/// @param self QSpinBox*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t q_spinbox_validate(void* self, const char* input, int* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self QSpinBox*
/// @param callback int32_t func(QSpinBox* self, const char* input, int* pos)
///
void q_spinbox_on_validate(void* self, int32_t (*callback)(void*, const char*, int*));

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#validate)
///
/// Base class method implementation
///
/// @param self QSpinBox*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t q_spinbox_qbase_validate(void* self, const char* input, int* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
///
/// @param self QSpinBox*
/// @param text const char*
///
int32_t q_spinbox_value_from_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
///
/// Allows for overriding the related default method
///
/// @param self QSpinBox*
/// @param callback int32_t func(QSpinBox* self, const char* text)
///
void q_spinbox_on_value_from_text(void* self, int32_t (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
///
/// Base class method implementation
///
/// @param self QSpinBox*
/// @param text const char*
///
int32_t q_spinbox_qbase_value_from_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
/// @param val int
///
const char* q_spinbox_text_from_value(void* self, int val);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
///
/// Allows for overriding the related default method
///
/// @param self QSpinBox*
/// @param callback const char* func(QSpinBox* self, int val)
///
void q_spinbox_on_text_from_value(void* self, const char* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
///
/// Base class method implementation
///
/// @param self QSpinBox*
/// @param val int
///
const char* q_spinbox_qbase_text_from_value(void* self, int val);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
///
/// @param self QSpinBox*
/// @param str const char*
///
void q_spinbox_fixup(void* self, const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
///
/// Allows for overriding the related default method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, const char* str)
///
void q_spinbox_on_fixup(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
///
/// Base class method implementation
///
/// @param self QSpinBox*
/// @param str const char*
///
void q_spinbox_qbase_fixup(void* self, const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setValue)
///
/// @param self QSpinBox*
/// @param val int
///
void q_spinbox_set_value(void* self, int val);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueChanged)
///
/// @param self QSpinBox*
/// @param param1 int
///
void q_spinbox_value_changed(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueChanged)
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, int param1)
///
void q_spinbox_on_value_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textChanged)
///
/// @param self QSpinBox*
/// @param param1 const char*
///
void q_spinbox_text_changed(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textChanged)
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, const char* param1)
///
void q_spinbox_on_text_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_spinbox_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_spinbox_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
///
/// @param self QSpinBox*
///
/// @return enum QAbstractSpinBox__ButtonSymbols
///
int32_t q_spinbox_button_symbols(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
///
/// @param self QSpinBox*
/// @param bs enum QAbstractSpinBox__ButtonSymbols
///
void q_spinbox_set_button_symbols(void* self, int32_t bs);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
///
/// @param self QSpinBox*
/// @param cm enum QAbstractSpinBox__CorrectionMode
///
void q_spinbox_set_correction_mode(void* self, int32_t cm);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
///
/// @param self QSpinBox*
///
/// @return enum QAbstractSpinBox__CorrectionMode
///
int32_t q_spinbox_correction_mode(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// @param self QSpinBox*
///
bool q_spinbox_has_acceptable_input(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_special_value_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
///
/// @param self QSpinBox*
/// @param txt const char*
///
void q_spinbox_set_special_value_text(void* self, const char* txt);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
///
/// @param self QSpinBox*
///
bool q_spinbox_wrapping(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
///
/// @param self QSpinBox*
/// @param w bool
///
void q_spinbox_set_wrapping(void* self, bool w);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
///
/// @param self QSpinBox*
/// @param r bool
///
void q_spinbox_set_read_only(void* self, bool r);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_read_only(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
///
/// @param self QSpinBox*
/// @param kt bool
///
void q_spinbox_set_keyboard_tracking(void* self, bool kt);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
///
/// @param self QSpinBox*
///
bool q_spinbox_keyboard_tracking(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
///
/// @param self QSpinBox*
/// @param flag flag of enum Qt__AlignmentFlag
///
void q_spinbox_set_alignment(void* self, int32_t flag);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
///
/// @param self QSpinBox*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_spinbox_alignment(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
///
/// @param self QSpinBox*
/// @param frame bool
///
void q_spinbox_set_frame(void* self, bool frame);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
///
/// @param self QSpinBox*
///
bool q_spinbox_has_frame(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
///
/// @param self QSpinBox*
/// @param on bool
///
void q_spinbox_set_accelerated(void* self, bool on);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_accelerated(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
///
/// @param self QSpinBox*
/// @param shown bool
///
void q_spinbox_set_group_separator_shown(void* self, bool shown);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_group_separator_shown(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
///
/// @param self QSpinBox*
///
void q_spinbox_interpret_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
///
/// @param self QSpinBox*
///
void q_spinbox_step_up(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
///
/// @param self QSpinBox*
///
void q_spinbox_step_down(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
///
/// @param self QSpinBox*
///
void q_spinbox_select_all(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self QSpinBox*
///
void q_spinbox_editing_finished(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self)
///
void q_spinbox_on_editing_finished(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QSpinBox*
///
uintptr_t q_spinbox_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QSpinBox*
///
void q_spinbox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QSpinBox*
///
uintptr_t q_spinbox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QSpinBox*
///
uintptr_t q_spinbox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QSpinBox*
///
QStyle* q_spinbox_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QSpinBox*
/// @param style QStyle*
///
void q_spinbox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QSpinBox*
///
/// @return enum Qt__WindowModality
///
int32_t q_spinbox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QSpinBox*
/// @param windowModality enum Qt__WindowModality
///
void q_spinbox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QSpinBox*
/// @param param1 QWidget*
///
bool q_spinbox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QSpinBox*
/// @param enabled bool
///
void q_spinbox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QSpinBox*
/// @param disabled bool
///
void q_spinbox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QSpinBox*
/// @param windowModified bool
///
void q_spinbox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QSpinBox*
///
QRect* q_spinbox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QSpinBox*
///
const QRect* q_spinbox_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QSpinBox*
///
QRect* q_spinbox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QSpinBox*
///
QPoint* q_spinbox_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QSpinBox*
///
QSize* q_spinbox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QSpinBox*
///
QSize* q_spinbox_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QSpinBox*
///
QRect* q_spinbox_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QSpinBox*
///
QRect* q_spinbox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QSpinBox*
///
QRegion* q_spinbox_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QSpinBox*
///
QSize* q_spinbox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QSpinBox*
///
QSize* q_spinbox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QSpinBox*
/// @param minimumSize QSize*
///
void q_spinbox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QSpinBox*
/// @param minw int
/// @param minh int
///
void q_spinbox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QSpinBox*
/// @param maximumSize QSize*
///
void q_spinbox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QSpinBox*
/// @param maxw int
/// @param maxh int
///
void q_spinbox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QSpinBox*
/// @param minw int
///
void q_spinbox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QSpinBox*
/// @param minh int
///
void q_spinbox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QSpinBox*
/// @param maxw int
///
void q_spinbox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QSpinBox*
/// @param maxh int
///
void q_spinbox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QSpinBox*
///
QSize* q_spinbox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QSpinBox*
/// @param sizeIncrement QSize*
///
void q_spinbox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QSpinBox*
/// @param w int
/// @param h int
///
void q_spinbox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QSpinBox*
///
QSize* q_spinbox_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QSpinBox*
/// @param baseSize QSize*
///
void q_spinbox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QSpinBox*
/// @param basew int
/// @param baseh int
///
void q_spinbox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QSpinBox*
/// @param fixedSize QSize*
///
void q_spinbox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QSpinBox*
/// @param w int
/// @param h int
///
void q_spinbox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QSpinBox*
/// @param w int
///
void q_spinbox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QSpinBox*
/// @param h int
///
void q_spinbox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QSpinBox*
/// @param param1 QPointF*
///
QPointF* q_spinbox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QSpinBox*
/// @param param1 QPoint*
///
QPoint* q_spinbox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QSpinBox*
/// @param param1 QPointF*
///
QPointF* q_spinbox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QSpinBox*
/// @param param1 QPoint*
///
QPoint* q_spinbox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QSpinBox*
/// @param param1 QPointF*
///
QPointF* q_spinbox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QSpinBox*
/// @param param1 QPoint*
///
QPoint* q_spinbox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QSpinBox*
/// @param param1 QPointF*
///
QPointF* q_spinbox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QSpinBox*
/// @param param1 QPoint*
///
QPoint* q_spinbox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QSpinBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_spinbox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QSpinBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_spinbox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QSpinBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_spinbox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QSpinBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_spinbox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QSpinBox*
///
QWidget* q_spinbox_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QSpinBox*
///
QWidget* q_spinbox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QSpinBox*
///
QWidget* q_spinbox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QSpinBox*
///
const QPalette* q_spinbox_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QSpinBox*
/// @param palette QPalette*
///
void q_spinbox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QSpinBox*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_spinbox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QSpinBox*
///
/// @return enum QPalette__ColorRole
///
int32_t q_spinbox_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QSpinBox*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_spinbox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QSpinBox*
///
/// @return enum QPalette__ColorRole
///
int32_t q_spinbox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QSpinBox*
///
const QFont* q_spinbox_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QSpinBox*
/// @param font QFont*
///
void q_spinbox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QSpinBox*
///
QFontMetrics* q_spinbox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QSpinBox*
///
QFontInfo* q_spinbox_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QSpinBox*
///
QCursor* q_spinbox_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QSpinBox*
/// @param cursor QCursor*
///
void q_spinbox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QSpinBox*
///
void q_spinbox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QSpinBox*
/// @param enable bool
///
void q_spinbox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QSpinBox*
///
bool q_spinbox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QSpinBox*
///
bool q_spinbox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QSpinBox*
/// @param enable bool
///
void q_spinbox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QSpinBox*
///
bool q_spinbox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QSpinBox*
/// @param mask QBitmap*
///
void q_spinbox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QSpinBox*
/// @param mask QRegion*
///
void q_spinbox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QSpinBox*
///
QRegion* q_spinbox_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QSpinBox*
///
void q_spinbox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSpinBox*
/// @param target QPaintDevice*
///
void q_spinbox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSpinBox*
/// @param painter QPainter*
///
void q_spinbox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QSpinBox*
///
QPixmap* q_spinbox_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QSpinBox*
///
QGraphicsEffect* q_spinbox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QSpinBox*
/// @param effect QGraphicsEffect*
///
void q_spinbox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QSpinBox*
/// @param type enum Qt__GestureType
///
void q_spinbox_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QSpinBox*
/// @param type enum Qt__GestureType
///
void q_spinbox_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QSpinBox*
/// @param windowTitle const char*
///
void q_spinbox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QSpinBox*
/// @param styleSheet const char*
///
void q_spinbox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QSpinBox*
/// @param icon QIcon*
///
void q_spinbox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QSpinBox*
///
QIcon* q_spinbox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QSpinBox*
/// @param windowIconText const char*
///
void q_spinbox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QSpinBox*
/// @param windowRole const char*
///
void q_spinbox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QSpinBox*
/// @param filePath const char*
///
void q_spinbox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QSpinBox*
/// @param level double
///
void q_spinbox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QSpinBox*
///
double q_spinbox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QSpinBox*
/// @param toolTip const char*
///
void q_spinbox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QSpinBox*
/// @param msec int
///
void q_spinbox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QSpinBox*
/// @param statusTip const char*
///
void q_spinbox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QSpinBox*
/// @param whatsThis const char*
///
void q_spinbox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QSpinBox*
/// @param name const char*
///
void q_spinbox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QSpinBox*
/// @param description const char*
///
void q_spinbox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QSpinBox*
/// @param direction enum Qt__LayoutDirection
///
void q_spinbox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QSpinBox*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_spinbox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QSpinBox*
///
void q_spinbox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QSpinBox*
/// @param locale QLocale*
///
void q_spinbox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QSpinBox*
///
QLocale* q_spinbox_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QSpinBox*
///
void q_spinbox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QSpinBox*
///
void q_spinbox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QSpinBox*
///
void q_spinbox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QSpinBox*
///
void q_spinbox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QSpinBox*
/// @param reason enum Qt__FocusReason
///
void q_spinbox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QSpinBox*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_spinbox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QSpinBox*
/// @param policy enum Qt__FocusPolicy
///
void q_spinbox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QSpinBox*
///
bool q_spinbox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_spinbox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QSpinBox*
/// @param focusProxy QWidget*
///
void q_spinbox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QSpinBox*
///
QWidget* q_spinbox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QSpinBox*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_spinbox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QSpinBox*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_spinbox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QSpinBox*
///
void q_spinbox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QSpinBox*
/// @param param1 QCursor*
///
void q_spinbox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QSpinBox*
///
void q_spinbox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QSpinBox*
///
void q_spinbox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QSpinBox*
///
void q_spinbox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QSpinBox*
/// @param key QKeySequence*
///
int32_t q_spinbox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QSpinBox*
/// @param id int
///
void q_spinbox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QSpinBox*
/// @param id int
///
void q_spinbox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QSpinBox*
/// @param id int
///
void q_spinbox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_spinbox_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_spinbox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QSpinBox*
///
bool q_spinbox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QSpinBox*
/// @param enable bool
///
void q_spinbox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QSpinBox*
///
QGraphicsProxyWidget* q_spinbox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QSpinBox*
///
void q_spinbox_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QSpinBox*
///
void q_spinbox_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_spinbox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QSpinBox*
/// @param param1 QRect*
///
void q_spinbox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QSpinBox*
/// @param param1 QRegion*
///
void q_spinbox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_spinbox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QSpinBox*
/// @param param1 QRect*
///
void q_spinbox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QSpinBox*
/// @param param1 QRegion*
///
void q_spinbox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QSpinBox*
/// @param hidden bool
///
void q_spinbox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QSpinBox*
///
void q_spinbox_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QSpinBox*
///
void q_spinbox_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QSpinBox*
///
void q_spinbox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QSpinBox*
///
void q_spinbox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QSpinBox*
///
void q_spinbox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QSpinBox*
///
void q_spinbox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QSpinBox*
///
bool q_spinbox_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QSpinBox*
///
void q_spinbox_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QSpinBox*
///
void q_spinbox_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QSpinBox*
/// @param param1 QWidget*
///
void q_spinbox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QSpinBox*
/// @param x int
/// @param y int
///
void q_spinbox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QSpinBox*
/// @param param1 QPoint*
///
void q_spinbox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QSpinBox*
/// @param w int
/// @param h int
///
void q_spinbox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QSpinBox*
/// @param param1 QSize*
///
void q_spinbox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_spinbox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QSpinBox*
/// @param geometry QRect*
///
void q_spinbox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSpinBox*
///
char* q_spinbox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QSpinBox*
/// @param geometry const char*
///
bool q_spinbox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QSpinBox*
///
void q_spinbox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QSpinBox*
/// @param param1 QWidget*
///
bool q_spinbox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QSpinBox*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_spinbox_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QSpinBox*
/// @param state flag of enum Qt__WindowState
///
void q_spinbox_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QSpinBox*
/// @param state flag of enum Qt__WindowState
///
void q_spinbox_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QSpinBox*
///
QSizePolicy* q_spinbox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QSpinBox*
/// @param sizePolicy QSizePolicy*
///
void q_spinbox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QSpinBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_spinbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QSpinBox*
///
QRegion* q_spinbox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QSpinBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_spinbox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QSpinBox*
/// @param margins QMargins*
///
void q_spinbox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QSpinBox*
///
QMargins* q_spinbox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QSpinBox*
///
QRect* q_spinbox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QSpinBox*
///
QLayout* q_spinbox_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QSpinBox*
/// @param layout QLayout*
///
void q_spinbox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QSpinBox*
///
void q_spinbox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QSpinBox*
/// @param parent QWidget*
///
void q_spinbox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QSpinBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_spinbox_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QSpinBox*
/// @param dx int
/// @param dy int
///
void q_spinbox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QSpinBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_spinbox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QSpinBox*
///
QWidget* q_spinbox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QSpinBox*
///
QWidget* q_spinbox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QSpinBox*
///
QWidget* q_spinbox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QSpinBox*
///
bool q_spinbox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QSpinBox*
/// @param on bool
///
void q_spinbox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSpinBox*
/// @param action QAction*
///
void q_spinbox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QSpinBox*
/// @param actions libqt_list of QAction*
///
void q_spinbox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QSpinBox*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_spinbox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QSpinBox*
/// @param before QAction*
/// @param action QAction*
///
void q_spinbox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QSpinBox*
/// @param action QAction*
///
void q_spinbox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QSpinBox*
///
/// @return libqt_list of QAction*
///
libqt_list q_spinbox_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSpinBox*
/// @param text const char*
///
QAction* q_spinbox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSpinBox*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_spinbox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSpinBox*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_spinbox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QSpinBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_spinbox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QSpinBox*
///
QWidget* q_spinbox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QSpinBox*
/// @param type flag of enum Qt__WindowType
///
void q_spinbox_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QSpinBox*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_spinbox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QSpinBox*
/// @param param1 enum Qt__WindowType
///
void q_spinbox_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QSpinBox*
/// @param type flag of enum Qt__WindowType
///
void q_spinbox_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QSpinBox*
///
/// @return enum Qt__WindowType
///
int32_t q_spinbox_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_spinbox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QSpinBox*
/// @param x int
/// @param y int
///
QWidget* q_spinbox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QSpinBox*
/// @param p QPoint*
///
QWidget* q_spinbox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QSpinBox*
/// @param p QPointF*
///
QWidget* q_spinbox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QSpinBox*
/// @param param1 enum Qt__WidgetAttribute
///
void q_spinbox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QSpinBox*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_spinbox_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QSpinBox*
///
void q_spinbox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QSpinBox*
/// @param child QWidget*
///
bool q_spinbox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QSpinBox*
///
bool q_spinbox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QSpinBox*
/// @param enabled bool
///
void q_spinbox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QSpinBox*
///
QBackingStore* q_spinbox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QSpinBox*
///
QWindow* q_spinbox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QSpinBox*
///
QScreen* q_spinbox_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QSpinBox*
/// @param screen QScreen*
///
void q_spinbox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_spinbox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QSpinBox*
/// @param title const char*
///
void q_spinbox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, const char* title)
///
void q_spinbox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QSpinBox*
/// @param icon QIcon*
///
void q_spinbox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QIcon* icon)
///
void q_spinbox_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QSpinBox*
/// @param iconText const char*
///
void q_spinbox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, const char* iconText)
///
void q_spinbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QSpinBox*
/// @param pos QPoint*
///
void q_spinbox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QPoint* pos)
///
void q_spinbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QSpinBox*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_spinbox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QSpinBox*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_spinbox_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_spinbox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_spinbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_spinbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_spinbox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_spinbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_spinbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QSpinBox*
/// @param rectangle QRect*
///
QPixmap* q_spinbox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QSpinBox*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_spinbox_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QSpinBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_spinbox_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QSpinBox*
/// @param id int
/// @param enable bool
///
void q_spinbox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QSpinBox*
/// @param id int
/// @param enable bool
///
void q_spinbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QSpinBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_spinbox_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QSpinBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_spinbox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_spinbox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_spinbox_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSpinBox*
///
const char* q_spinbox_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSpinBox*
/// @param name char*
///
void q_spinbox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSpinBox*
///
bool q_spinbox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSpinBox*
///
bool q_spinbox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSpinBox*
/// @param b bool
///
bool q_spinbox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSpinBox*
///
QThread* q_spinbox_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSpinBox*
/// @param thread QThread*
///
bool q_spinbox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSpinBox*
/// @param interval int
///
int32_t q_spinbox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSpinBox*
/// @param time int64_t of nanoseconds
///
int32_t q_spinbox_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSpinBox*
/// @param id int
///
void q_spinbox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSpinBox*
/// @param id enum Qt__TimerId
///
void q_spinbox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSpinBox*
///
/// @return libqt_list of QObject*
///
libqt_list q_spinbox_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSpinBox*
/// @param filterObj QObject*
///
void q_spinbox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSpinBox*
/// @param obj QObject*
///
void q_spinbox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_spinbox_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_spinbox_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSpinBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_spinbox_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_spinbox_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_spinbox_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSpinBox*
///
bool q_spinbox_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSpinBox*
/// @param receiver QObject*
///
bool q_spinbox_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_spinbox_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSpinBox*
///
void q_spinbox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSpinBox*
///
void q_spinbox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSpinBox*
/// @param name const char*
/// @param value QVariant*
///
bool q_spinbox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSpinBox*
/// @param name const char*
///
QVariant* q_spinbox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSpinBox*
///
const char** q_spinbox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSpinBox*
///
QBindingStorage* q_spinbox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSpinBox*
///
const QBindingStorage* q_spinbox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSpinBox*
///
void q_spinbox_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self)
///
void q_spinbox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSpinBox*
///
QObject* q_spinbox_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSpinBox*
/// @param classname const char*
///
bool q_spinbox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSpinBox*
///
void q_spinbox_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSpinBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_spinbox_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSpinBox*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_spinbox_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_spinbox_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_spinbox_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSpinBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_spinbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSpinBox*
/// @param signal const char*
///
bool q_spinbox_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSpinBox*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_spinbox_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSpinBox*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_spinbox_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSpinBox*
/// @param receiver QObject*
/// @param member const char*
///
bool q_spinbox_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSpinBox*
/// @param param1 QObject*
///
void q_spinbox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QObject* param1)
///
void q_spinbox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QSpinBox*
///
bool q_spinbox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QSpinBox*
///
double q_spinbox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QSpinBox*
///
double q_spinbox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QSpinBox*
///
int32_t q_spinbox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_spinbox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_spinbox_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
QSize* q_spinbox_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
QSize* q_spinbox_qbase_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback QSize* func()
///
void q_spinbox_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
QSize* q_spinbox_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
QSize* q_spinbox_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback QSize* func()
///
void q_spinbox_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_spinbox_input_method_query(void* self, int32_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_spinbox_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback QVariant* func(QSpinBox* self, enum Qt__InputMethodQuery param1)
///
void q_spinbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param steps int
///
void q_spinbox_step_by(void* self, int steps);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param steps int
///
void q_spinbox_qbase_step_by(void* self, int steps);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, int steps)
///
void q_spinbox_on_step_by(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
void q_spinbox_clear(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
void q_spinbox_qbase_clear(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func()
///
void q_spinbox_on_clear(void* self, void (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QResizeEvent*
///
void q_spinbox_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QResizeEvent*
///
void q_spinbox_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QResizeEvent* event)
///
void q_spinbox_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QKeyEvent*
///
void q_spinbox_key_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QKeyEvent*
///
void q_spinbox_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QKeyEvent* event)
///
void q_spinbox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QKeyEvent*
///
void q_spinbox_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QKeyEvent*
///
void q_spinbox_qbase_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QKeyEvent* event)
///
void q_spinbox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QWheelEvent*
///
void q_spinbox_wheel_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QWheelEvent*
///
void q_spinbox_qbase_wheel_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QWheelEvent* event)
///
void q_spinbox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QFocusEvent*
///
void q_spinbox_focus_in_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QFocusEvent*
///
void q_spinbox_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QFocusEvent* event)
///
void q_spinbox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QFocusEvent*
///
void q_spinbox_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QFocusEvent*
///
void q_spinbox_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QFocusEvent* event)
///
void q_spinbox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QContextMenuEvent*
///
void q_spinbox_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QContextMenuEvent*
///
void q_spinbox_qbase_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QContextMenuEvent* event)
///
void q_spinbox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QEvent*
///
void q_spinbox_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QEvent*
///
void q_spinbox_qbase_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QEvent* event)
///
void q_spinbox_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QCloseEvent*
///
void q_spinbox_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QCloseEvent*
///
void q_spinbox_qbase_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QCloseEvent* event)
///
void q_spinbox_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QHideEvent*
///
void q_spinbox_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QHideEvent*
///
void q_spinbox_qbase_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QHideEvent* event)
///
void q_spinbox_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QMouseEvent*
///
void q_spinbox_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QMouseEvent*
///
void q_spinbox_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QMouseEvent* event)
///
void q_spinbox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QMouseEvent*
///
void q_spinbox_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QMouseEvent*
///
void q_spinbox_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QMouseEvent* event)
///
void q_spinbox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QMouseEvent*
///
void q_spinbox_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QMouseEvent*
///
void q_spinbox_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QMouseEvent* event)
///
void q_spinbox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QTimerEvent*
///
void q_spinbox_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QTimerEvent*
///
void q_spinbox_qbase_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QTimerEvent* event)
///
void q_spinbox_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QPaintEvent*
///
void q_spinbox_paint_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QPaintEvent*
///
void q_spinbox_qbase_paint_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QPaintEvent* event)
///
void q_spinbox_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QShowEvent*
///
void q_spinbox_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QShowEvent*
///
void q_spinbox_qbase_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QShowEvent* event)
///
void q_spinbox_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param option QStyleOptionSpinBox*
///
void q_spinbox_init_style_option(void* self, void* option);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param option QStyleOptionSpinBox*
///
void q_spinbox_qbase_init_style_option(void* self, void* option);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QStyleOptionSpinBox* option)
///
void q_spinbox_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t q_spinbox_step_enabled(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t q_spinbox_qbase_step_enabled(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback int32_t func()
///
void q_spinbox_on_step_enabled(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
int32_t q_spinbox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
int32_t q_spinbox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback int32_t func()
///
void q_spinbox_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param visible bool
///
void q_spinbox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param visible bool
///
void q_spinbox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, bool visible)
///
void q_spinbox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param param1 int
///
int32_t q_spinbox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param param1 int
///
int32_t q_spinbox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback int32_t func(QSpinBox* self, int param1)
///
void q_spinbox_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
bool q_spinbox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
bool q_spinbox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback bool func()
///
void q_spinbox_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
QPaintEngine* q_spinbox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
QPaintEngine* q_spinbox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback QPaintEngine* func()
///
void q_spinbox_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QMouseEvent*
///
void q_spinbox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QMouseEvent*
///
void q_spinbox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QMouseEvent* event)
///
void q_spinbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QEnterEvent*
///
void q_spinbox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QEnterEvent*
///
void q_spinbox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QEnterEvent* event)
///
void q_spinbox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QEvent*
///
void q_spinbox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QEvent*
///
void q_spinbox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QEvent* event)
///
void q_spinbox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QMoveEvent*
///
void q_spinbox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QMoveEvent*
///
void q_spinbox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QMoveEvent* event)
///
void q_spinbox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QTabletEvent*
///
void q_spinbox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QTabletEvent*
///
void q_spinbox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QTabletEvent* event)
///
void q_spinbox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QActionEvent*
///
void q_spinbox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QActionEvent*
///
void q_spinbox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QActionEvent* event)
///
void q_spinbox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QDragEnterEvent*
///
void q_spinbox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QDragEnterEvent*
///
void q_spinbox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QDragEnterEvent* event)
///
void q_spinbox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QDragMoveEvent*
///
void q_spinbox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QDragMoveEvent*
///
void q_spinbox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QDragMoveEvent* event)
///
void q_spinbox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QDragLeaveEvent*
///
void q_spinbox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QDragLeaveEvent*
///
void q_spinbox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QDragLeaveEvent* event)
///
void q_spinbox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QDropEvent*
///
void q_spinbox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QDropEvent*
///
void q_spinbox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QDropEvent* event)
///
void q_spinbox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_spinbox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_spinbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback bool func(QSpinBox* self, const char* eventType, void* message, intptr_t* result)
///
void q_spinbox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_spinbox_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_spinbox_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback int32_t func(QSpinBox* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_spinbox_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param painter QPainter*
///
void q_spinbox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param painter QPainter*
///
void q_spinbox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QPainter* painter)
///
void q_spinbox_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param offset QPoint*
///
QPaintDevice* q_spinbox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param offset QPoint*
///
QPaintDevice* q_spinbox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback QPaintDevice* func(QSpinBox* self, QPoint* offset)
///
void q_spinbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
QPainter* q_spinbox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
QPainter* q_spinbox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback QPainter* func()
///
void q_spinbox_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param param1 QInputMethodEvent*
///
void q_spinbox_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param param1 QInputMethodEvent*
///
void q_spinbox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QInputMethodEvent* param1)
///
void q_spinbox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param next bool
///
bool q_spinbox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param next bool
///
bool q_spinbox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback bool func(QSpinBox* self, bool next)
///
void q_spinbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_spinbox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_spinbox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback bool func(QSpinBox* self, QObject* watched, QEvent* event)
///
void q_spinbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QChildEvent*
///
void q_spinbox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QChildEvent*
///
void q_spinbox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QChildEvent* event)
///
void q_spinbox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param event QEvent*
///
void q_spinbox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param event QEvent*
///
void q_spinbox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QEvent* event)
///
void q_spinbox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param signal QMetaMethod*
///
void q_spinbox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param signal QMetaMethod*
///
void q_spinbox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QMetaMethod* signal)
///
void q_spinbox_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param signal QMetaMethod*
///
void q_spinbox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param signal QMetaMethod*
///
void q_spinbox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QMetaMethod* signal)
///
void q_spinbox_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
QLineEdit* q_spinbox_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
QLineEdit* q_spinbox_qbase_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback QLineEdit* func()
///
void q_spinbox_on_line_edit(void* self, QLineEdit* (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param edit QLineEdit*
///
void q_spinbox_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param edit QLineEdit*
///
void q_spinbox_qbase_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, QLineEdit* edit)
///
void q_spinbox_on_set_line_edit(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
void q_spinbox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
void q_spinbox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func()
///
void q_spinbox_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
void q_spinbox_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
void q_spinbox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func()
///
void q_spinbox_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
void q_spinbox_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
void q_spinbox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback void func()
///
void q_spinbox_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
bool q_spinbox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
bool q_spinbox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback bool func()
///
void q_spinbox_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
bool q_spinbox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
bool q_spinbox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback bool func()
///
void q_spinbox_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
QObject* q_spinbox_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
QObject* q_spinbox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback QObject* func()
///
void q_spinbox_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
///
int32_t q_spinbox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
///
int32_t q_spinbox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback int32_t func()
///
void q_spinbox_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param signal const char*
///
int32_t q_spinbox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param signal const char*
///
int32_t q_spinbox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback int32_t func(QSpinBox* self, const char* signal)
///
void q_spinbox_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param signal QMetaMethod*
///
bool q_spinbox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param signal QMetaMethod*
///
bool q_spinbox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback bool func(QSpinBox* self, QMetaMethod* signal)
///
void q_spinbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpinBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_spinbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpinBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_spinbox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpinBox*
/// @param callback double func(QSpinBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_spinbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSpinBox*
/// @param callback void func(QSpinBox* self, const char* objectName)
///
void q_spinbox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#dtor.QSpinBox)
///
/// Delete this object from C++ memory.
///
/// @param self QSpinBox*
///
void q_spinbox_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html)

/// q_doublespinbox_new constructs a new QDoubleSpinBox object.
///
/// @param parent QWidget*
///
QDoubleSpinBox* q_doublespinbox_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html)

/// q_doublespinbox_new2 constructs a new QDoubleSpinBox object.
///
QDoubleSpinBox* q_doublespinbox_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDoubleSpinBox*
///
const QMetaObject* q_doublespinbox_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QDoubleSpinBox*
/// @param callback const QMetaObject* func()
///
void q_doublespinbox_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QDoubleSpinBox*
///
const QMetaObject* q_doublespinbox_qbase_meta_object(void* self);

/// @param self QDoubleSpinBox*
/// @param param1 const char*
///
void* q_doublespinbox_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDoubleSpinBox*
/// @param callback void* func(QDoubleSpinBox* self, const char* param1)
///
void q_doublespinbox_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QDoubleSpinBox*
/// @param param1 const char*
///
void* q_doublespinbox_qbase_metacast(void* self, const char* param1);

/// @param self QDoubleSpinBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_doublespinbox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDoubleSpinBox*
/// @param callback int32_t func(QDoubleSpinBox* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_doublespinbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDoubleSpinBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_doublespinbox_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_doublespinbox_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#value)
///
/// @param self QDoubleSpinBox*
///
double q_doublespinbox_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_prefix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setPrefix)
///
/// @param self QDoubleSpinBox*
/// @param prefix const char*
///
void q_doublespinbox_set_prefix(void* self, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#suffix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_suffix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setSuffix)
///
/// @param self QDoubleSpinBox*
/// @param suffix const char*
///
void q_doublespinbox_set_suffix(void* self, const char* suffix);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#cleanText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_clean_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#singleStep)
///
/// @param self QDoubleSpinBox*
///
double q_doublespinbox_single_step(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setSingleStep)
///
/// @param self QDoubleSpinBox*
/// @param val double
///
void q_doublespinbox_set_single_step(void* self, double val);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#minimum)
///
/// @param self QDoubleSpinBox*
///
double q_doublespinbox_minimum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setMinimum)
///
/// @param self QDoubleSpinBox*
/// @param min double
///
void q_doublespinbox_set_minimum(void* self, double min);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#maximum)
///
/// @param self QDoubleSpinBox*
///
double q_doublespinbox_maximum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setMaximum)
///
/// @param self QDoubleSpinBox*
/// @param max double
///
void q_doublespinbox_set_maximum(void* self, double max);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setRange)
///
/// @param self QDoubleSpinBox*
/// @param min double
/// @param max double
///
void q_doublespinbox_set_range(void* self, double min, double max);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#stepType)
///
/// @param self QDoubleSpinBox*
///
/// @return enum QAbstractSpinBox__StepType
///
int32_t q_doublespinbox_step_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setStepType)
///
/// @param self QDoubleSpinBox*
/// @param stepType enum QAbstractSpinBox__StepType
///
void q_doublespinbox_set_step_type(void* self, int32_t stepType);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#decimals)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_decimals(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setDecimals)
///
/// @param self QDoubleSpinBox*
/// @param prec int
///
void q_doublespinbox_set_decimals(void* self, int prec);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#validate)
///
/// @param self QDoubleSpinBox*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t q_doublespinbox_validate(void* self, const char* input, int* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self QDoubleSpinBox*
/// @param callback int32_t func(QDoubleSpinBox* self, const char* input, int* pos)
///
void q_doublespinbox_on_validate(void* self, int32_t (*callback)(void*, const char*, int*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#validate)
///
/// Base class method implementation
///
/// @param self QDoubleSpinBox*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t q_doublespinbox_qbase_validate(void* self, const char* input, int* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#valueFromText)
///
/// @param self QDoubleSpinBox*
/// @param text const char*
///
double q_doublespinbox_value_from_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#valueFromText)
///
/// Allows for overriding the related default method
///
/// @param self QDoubleSpinBox*
/// @param callback double func(QDoubleSpinBox* self, const char* text)
///
void q_doublespinbox_on_value_from_text(void* self, double (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#valueFromText)
///
/// Base class method implementation
///
/// @param self QDoubleSpinBox*
/// @param text const char*
///
double q_doublespinbox_qbase_value_from_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#textFromValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
/// @param val double
///
const char* q_doublespinbox_text_from_value(void* self, double val);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#textFromValue)
///
/// Allows for overriding the related default method
///
/// @param self QDoubleSpinBox*
/// @param callback const char* func(QDoubleSpinBox* self, double val)
///
void q_doublespinbox_on_text_from_value(void* self, const char* (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#textFromValue)
///
/// Base class method implementation
///
/// @param self QDoubleSpinBox*
/// @param val double
///
const char* q_doublespinbox_qbase_text_from_value(void* self, double val);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#fixup)
///
/// @param self QDoubleSpinBox*
/// @param str const char*
///
void q_doublespinbox_fixup(void* self, const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#fixup)
///
/// Allows for overriding the related default method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, const char* str)
///
void q_doublespinbox_on_fixup(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#fixup)
///
/// Base class method implementation
///
/// @param self QDoubleSpinBox*
/// @param str const char*
///
void q_doublespinbox_qbase_fixup(void* self, const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setValue)
///
/// @param self QDoubleSpinBox*
/// @param val double
///
void q_doublespinbox_set_value(void* self, double val);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#valueChanged)
///
/// @param self QDoubleSpinBox*
/// @param param1 double
///
void q_doublespinbox_value_changed(void* self, double param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#valueChanged)
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, double param1)
///
void q_doublespinbox_on_value_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#textChanged)
///
/// @param self QDoubleSpinBox*
/// @param param1 const char*
///
void q_doublespinbox_text_changed(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#textChanged)
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, const char* param1)
///
void q_doublespinbox_on_text_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_doublespinbox_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_doublespinbox_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
///
/// @param self QDoubleSpinBox*
///
/// @return enum QAbstractSpinBox__ButtonSymbols
///
int32_t q_doublespinbox_button_symbols(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
///
/// @param self QDoubleSpinBox*
/// @param bs enum QAbstractSpinBox__ButtonSymbols
///
void q_doublespinbox_set_button_symbols(void* self, int32_t bs);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
///
/// @param self QDoubleSpinBox*
/// @param cm enum QAbstractSpinBox__CorrectionMode
///
void q_doublespinbox_set_correction_mode(void* self, int32_t cm);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
///
/// @param self QDoubleSpinBox*
///
/// @return enum QAbstractSpinBox__CorrectionMode
///
int32_t q_doublespinbox_correction_mode(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_has_acceptable_input(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_special_value_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
///
/// @param self QDoubleSpinBox*
/// @param txt const char*
///
void q_doublespinbox_set_special_value_text(void* self, const char* txt);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_wrapping(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
///
/// @param self QDoubleSpinBox*
/// @param w bool
///
void q_doublespinbox_set_wrapping(void* self, bool w);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
///
/// @param self QDoubleSpinBox*
/// @param r bool
///
void q_doublespinbox_set_read_only(void* self, bool r);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_read_only(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
///
/// @param self QDoubleSpinBox*
/// @param kt bool
///
void q_doublespinbox_set_keyboard_tracking(void* self, bool kt);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_keyboard_tracking(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
///
/// @param self QDoubleSpinBox*
/// @param flag flag of enum Qt__AlignmentFlag
///
void q_doublespinbox_set_alignment(void* self, int32_t flag);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
///
/// @param self QDoubleSpinBox*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_doublespinbox_alignment(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
///
/// @param self QDoubleSpinBox*
/// @param frame bool
///
void q_doublespinbox_set_frame(void* self, bool frame);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_has_frame(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
///
/// @param self QDoubleSpinBox*
/// @param on bool
///
void q_doublespinbox_set_accelerated(void* self, bool on);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_accelerated(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
///
/// @param self QDoubleSpinBox*
/// @param shown bool
///
void q_doublespinbox_set_group_separator_shown(void* self, bool shown);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_group_separator_shown(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_interpret_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_step_up(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_step_down(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_select_all(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_editing_finished(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self)
///
void q_doublespinbox_on_editing_finished(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QDoubleSpinBox*
///
uintptr_t q_doublespinbox_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QDoubleSpinBox*
///
uintptr_t q_doublespinbox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QDoubleSpinBox*
///
uintptr_t q_doublespinbox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QDoubleSpinBox*
///
QStyle* q_doublespinbox_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QDoubleSpinBox*
/// @param style QStyle*
///
void q_doublespinbox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QDoubleSpinBox*
///
/// @return enum Qt__WindowModality
///
int32_t q_doublespinbox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QDoubleSpinBox*
/// @param windowModality enum Qt__WindowModality
///
void q_doublespinbox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QDoubleSpinBox*
/// @param param1 QWidget*
///
bool q_doublespinbox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QDoubleSpinBox*
/// @param enabled bool
///
void q_doublespinbox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QDoubleSpinBox*
/// @param disabled bool
///
void q_doublespinbox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QDoubleSpinBox*
/// @param windowModified bool
///
void q_doublespinbox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QDoubleSpinBox*
///
QRect* q_doublespinbox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QDoubleSpinBox*
///
const QRect* q_doublespinbox_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QDoubleSpinBox*
///
QRect* q_doublespinbox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QDoubleSpinBox*
///
QPoint* q_doublespinbox_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QDoubleSpinBox*
///
QSize* q_doublespinbox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QDoubleSpinBox*
///
QSize* q_doublespinbox_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QDoubleSpinBox*
///
QRect* q_doublespinbox_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QDoubleSpinBox*
///
QRect* q_doublespinbox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QDoubleSpinBox*
///
QRegion* q_doublespinbox_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QDoubleSpinBox*
///
QSize* q_doublespinbox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QDoubleSpinBox*
///
QSize* q_doublespinbox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDoubleSpinBox*
/// @param minimumSize QSize*
///
void q_doublespinbox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDoubleSpinBox*
/// @param minw int
/// @param minh int
///
void q_doublespinbox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDoubleSpinBox*
/// @param maximumSize QSize*
///
void q_doublespinbox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDoubleSpinBox*
/// @param maxw int
/// @param maxh int
///
void q_doublespinbox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QDoubleSpinBox*
/// @param minw int
///
void q_doublespinbox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QDoubleSpinBox*
/// @param minh int
///
void q_doublespinbox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QDoubleSpinBox*
/// @param maxw int
///
void q_doublespinbox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QDoubleSpinBox*
/// @param maxh int
///
void q_doublespinbox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QDoubleSpinBox*
///
QSize* q_doublespinbox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDoubleSpinBox*
/// @param sizeIncrement QSize*
///
void q_doublespinbox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDoubleSpinBox*
/// @param w int
/// @param h int
///
void q_doublespinbox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QDoubleSpinBox*
///
QSize* q_doublespinbox_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDoubleSpinBox*
/// @param baseSize QSize*
///
void q_doublespinbox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDoubleSpinBox*
/// @param basew int
/// @param baseh int
///
void q_doublespinbox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDoubleSpinBox*
/// @param fixedSize QSize*
///
void q_doublespinbox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDoubleSpinBox*
/// @param w int
/// @param h int
///
void q_doublespinbox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QDoubleSpinBox*
/// @param w int
///
void q_doublespinbox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QDoubleSpinBox*
/// @param h int
///
void q_doublespinbox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDoubleSpinBox*
/// @param param1 QPointF*
///
QPointF* q_doublespinbox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDoubleSpinBox*
/// @param param1 QPoint*
///
QPoint* q_doublespinbox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDoubleSpinBox*
/// @param param1 QPointF*
///
QPointF* q_doublespinbox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDoubleSpinBox*
/// @param param1 QPoint*
///
QPoint* q_doublespinbox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDoubleSpinBox*
/// @param param1 QPointF*
///
QPointF* q_doublespinbox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDoubleSpinBox*
/// @param param1 QPoint*
///
QPoint* q_doublespinbox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDoubleSpinBox*
/// @param param1 QPointF*
///
QPointF* q_doublespinbox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDoubleSpinBox*
/// @param param1 QPoint*
///
QPoint* q_doublespinbox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDoubleSpinBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_doublespinbox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDoubleSpinBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_doublespinbox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDoubleSpinBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_doublespinbox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDoubleSpinBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_doublespinbox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QDoubleSpinBox*
///
QWidget* q_doublespinbox_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QDoubleSpinBox*
///
QWidget* q_doublespinbox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QDoubleSpinBox*
///
QWidget* q_doublespinbox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QDoubleSpinBox*
///
const QPalette* q_doublespinbox_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QDoubleSpinBox*
/// @param palette QPalette*
///
void q_doublespinbox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QDoubleSpinBox*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_doublespinbox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QDoubleSpinBox*
///
/// @return enum QPalette__ColorRole
///
int32_t q_doublespinbox_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QDoubleSpinBox*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_doublespinbox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QDoubleSpinBox*
///
/// @return enum QPalette__ColorRole
///
int32_t q_doublespinbox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QDoubleSpinBox*
///
const QFont* q_doublespinbox_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QDoubleSpinBox*
/// @param font QFont*
///
void q_doublespinbox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QDoubleSpinBox*
///
QFontMetrics* q_doublespinbox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QDoubleSpinBox*
///
QFontInfo* q_doublespinbox_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QDoubleSpinBox*
///
QCursor* q_doublespinbox_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QDoubleSpinBox*
/// @param cursor QCursor*
///
void q_doublespinbox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QDoubleSpinBox*
/// @param enable bool
///
void q_doublespinbox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QDoubleSpinBox*
/// @param enable bool
///
void q_doublespinbox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDoubleSpinBox*
/// @param mask QBitmap*
///
void q_doublespinbox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDoubleSpinBox*
/// @param mask QRegion*
///
void q_doublespinbox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QDoubleSpinBox*
///
QRegion* q_doublespinbox_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDoubleSpinBox*
/// @param target QPaintDevice*
///
void q_doublespinbox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDoubleSpinBox*
/// @param painter QPainter*
///
void q_doublespinbox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDoubleSpinBox*
///
QPixmap* q_doublespinbox_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QDoubleSpinBox*
///
QGraphicsEffect* q_doublespinbox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QDoubleSpinBox*
/// @param effect QGraphicsEffect*
///
void q_doublespinbox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDoubleSpinBox*
/// @param type enum Qt__GestureType
///
void q_doublespinbox_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QDoubleSpinBox*
/// @param type enum Qt__GestureType
///
void q_doublespinbox_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QDoubleSpinBox*
/// @param windowTitle const char*
///
void q_doublespinbox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QDoubleSpinBox*
/// @param styleSheet const char*
///
void q_doublespinbox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QDoubleSpinBox*
/// @param icon QIcon*
///
void q_doublespinbox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QDoubleSpinBox*
///
QIcon* q_doublespinbox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QDoubleSpinBox*
/// @param windowIconText const char*
///
void q_doublespinbox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QDoubleSpinBox*
/// @param windowRole const char*
///
void q_doublespinbox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QDoubleSpinBox*
/// @param filePath const char*
///
void q_doublespinbox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QDoubleSpinBox*
/// @param level double
///
void q_doublespinbox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QDoubleSpinBox*
///
double q_doublespinbox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QDoubleSpinBox*
/// @param toolTip const char*
///
void q_doublespinbox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QDoubleSpinBox*
/// @param msec int
///
void q_doublespinbox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QDoubleSpinBox*
/// @param statusTip const char*
///
void q_doublespinbox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QDoubleSpinBox*
/// @param whatsThis const char*
///
void q_doublespinbox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QDoubleSpinBox*
/// @param name const char*
///
void q_doublespinbox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QDoubleSpinBox*
/// @param description const char*
///
void q_doublespinbox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QDoubleSpinBox*
/// @param direction enum Qt__LayoutDirection
///
void q_doublespinbox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QDoubleSpinBox*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_doublespinbox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QDoubleSpinBox*
/// @param locale QLocale*
///
void q_doublespinbox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QDoubleSpinBox*
///
QLocale* q_doublespinbox_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDoubleSpinBox*
/// @param reason enum Qt__FocusReason
///
void q_doublespinbox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QDoubleSpinBox*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_doublespinbox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QDoubleSpinBox*
/// @param policy enum Qt__FocusPolicy
///
void q_doublespinbox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_doublespinbox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QDoubleSpinBox*
/// @param focusProxy QWidget*
///
void q_doublespinbox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QDoubleSpinBox*
///
QWidget* q_doublespinbox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QDoubleSpinBox*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_doublespinbox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QDoubleSpinBox*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_doublespinbox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDoubleSpinBox*
/// @param param1 QCursor*
///
void q_doublespinbox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDoubleSpinBox*
/// @param key QKeySequence*
///
int32_t q_doublespinbox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QDoubleSpinBox*
/// @param id int
///
void q_doublespinbox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDoubleSpinBox*
/// @param id int
///
void q_doublespinbox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDoubleSpinBox*
/// @param id int
///
void q_doublespinbox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_doublespinbox_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_doublespinbox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QDoubleSpinBox*
/// @param enable bool
///
void q_doublespinbox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QDoubleSpinBox*
///
QGraphicsProxyWidget* q_doublespinbox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDoubleSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_doublespinbox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDoubleSpinBox*
/// @param param1 QRect*
///
void q_doublespinbox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDoubleSpinBox*
/// @param param1 QRegion*
///
void q_doublespinbox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDoubleSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_doublespinbox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDoubleSpinBox*
/// @param param1 QRect*
///
void q_doublespinbox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDoubleSpinBox*
/// @param param1 QRegion*
///
void q_doublespinbox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QDoubleSpinBox*
/// @param hidden bool
///
void q_doublespinbox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QDoubleSpinBox*
/// @param param1 QWidget*
///
void q_doublespinbox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDoubleSpinBox*
/// @param x int
/// @param y int
///
void q_doublespinbox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDoubleSpinBox*
/// @param param1 QPoint*
///
void q_doublespinbox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDoubleSpinBox*
/// @param w int
/// @param h int
///
void q_doublespinbox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDoubleSpinBox*
/// @param param1 QSize*
///
void q_doublespinbox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDoubleSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_doublespinbox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDoubleSpinBox*
/// @param geometry QRect*
///
void q_doublespinbox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDoubleSpinBox*
///
char* q_doublespinbox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QDoubleSpinBox*
/// @param geometry const char*
///
bool q_doublespinbox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QDoubleSpinBox*
/// @param param1 QWidget*
///
bool q_doublespinbox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QDoubleSpinBox*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_doublespinbox_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QDoubleSpinBox*
/// @param state flag of enum Qt__WindowState
///
void q_doublespinbox_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QDoubleSpinBox*
/// @param state flag of enum Qt__WindowState
///
void q_doublespinbox_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QDoubleSpinBox*
///
QSizePolicy* q_doublespinbox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDoubleSpinBox*
/// @param sizePolicy QSizePolicy*
///
void q_doublespinbox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDoubleSpinBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_doublespinbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QDoubleSpinBox*
///
QRegion* q_doublespinbox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDoubleSpinBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_doublespinbox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDoubleSpinBox*
/// @param margins QMargins*
///
void q_doublespinbox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QDoubleSpinBox*
///
QMargins* q_doublespinbox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QDoubleSpinBox*
///
QRect* q_doublespinbox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QDoubleSpinBox*
///
QLayout* q_doublespinbox_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QDoubleSpinBox*
/// @param layout QLayout*
///
void q_doublespinbox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDoubleSpinBox*
/// @param parent QWidget*
///
void q_doublespinbox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDoubleSpinBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_doublespinbox_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDoubleSpinBox*
/// @param dx int
/// @param dy int
///
void q_doublespinbox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDoubleSpinBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_doublespinbox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QDoubleSpinBox*
///
QWidget* q_doublespinbox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QDoubleSpinBox*
///
QWidget* q_doublespinbox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QDoubleSpinBox*
///
QWidget* q_doublespinbox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QDoubleSpinBox*
/// @param on bool
///
void q_doublespinbox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDoubleSpinBox*
/// @param action QAction*
///
void q_doublespinbox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QDoubleSpinBox*
/// @param actions libqt_list of QAction*
///
void q_doublespinbox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QDoubleSpinBox*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_doublespinbox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QDoubleSpinBox*
/// @param before QAction*
/// @param action QAction*
///
void q_doublespinbox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QDoubleSpinBox*
/// @param action QAction*
///
void q_doublespinbox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QDoubleSpinBox*
///
/// @return libqt_list of QAction*
///
libqt_list q_doublespinbox_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDoubleSpinBox*
/// @param text const char*
///
QAction* q_doublespinbox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDoubleSpinBox*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_doublespinbox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDoubleSpinBox*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_doublespinbox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDoubleSpinBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_doublespinbox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QDoubleSpinBox*
///
QWidget* q_doublespinbox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QDoubleSpinBox*
/// @param type flag of enum Qt__WindowType
///
void q_doublespinbox_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QDoubleSpinBox*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_doublespinbox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDoubleSpinBox*
/// @param param1 enum Qt__WindowType
///
void q_doublespinbox_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QDoubleSpinBox*
/// @param type flag of enum Qt__WindowType
///
void q_doublespinbox_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QDoubleSpinBox*
///
/// @return enum Qt__WindowType
///
int32_t q_doublespinbox_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_doublespinbox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDoubleSpinBox*
/// @param x int
/// @param y int
///
QWidget* q_doublespinbox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDoubleSpinBox*
/// @param p QPoint*
///
QWidget* q_doublespinbox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDoubleSpinBox*
/// @param p QPointF*
///
QWidget* q_doublespinbox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDoubleSpinBox*
/// @param param1 enum Qt__WidgetAttribute
///
void q_doublespinbox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QDoubleSpinBox*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_doublespinbox_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QDoubleSpinBox*
/// @param child QWidget*
///
bool q_doublespinbox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QDoubleSpinBox*
/// @param enabled bool
///
void q_doublespinbox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QDoubleSpinBox*
///
QBackingStore* q_doublespinbox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QDoubleSpinBox*
///
QWindow* q_doublespinbox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QDoubleSpinBox*
///
QScreen* q_doublespinbox_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QDoubleSpinBox*
/// @param screen QScreen*
///
void q_doublespinbox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_doublespinbox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDoubleSpinBox*
/// @param title const char*
///
void q_doublespinbox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, const char* title)
///
void q_doublespinbox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDoubleSpinBox*
/// @param icon QIcon*
///
void q_doublespinbox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QIcon* icon)
///
void q_doublespinbox_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDoubleSpinBox*
/// @param iconText const char*
///
void q_doublespinbox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, const char* iconText)
///
void q_doublespinbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDoubleSpinBox*
/// @param pos QPoint*
///
void q_doublespinbox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QPoint* pos)
///
void q_doublespinbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QDoubleSpinBox*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_doublespinbox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QDoubleSpinBox*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_doublespinbox_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDoubleSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_doublespinbox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDoubleSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_doublespinbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDoubleSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_doublespinbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDoubleSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_doublespinbox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDoubleSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_doublespinbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDoubleSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_doublespinbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDoubleSpinBox*
/// @param rectangle QRect*
///
QPixmap* q_doublespinbox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDoubleSpinBox*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_doublespinbox_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDoubleSpinBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_doublespinbox_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDoubleSpinBox*
/// @param id int
/// @param enable bool
///
void q_doublespinbox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDoubleSpinBox*
/// @param id int
/// @param enable bool
///
void q_doublespinbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDoubleSpinBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_doublespinbox_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDoubleSpinBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_doublespinbox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_doublespinbox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_doublespinbox_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDoubleSpinBox*
///
const char* q_doublespinbox_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDoubleSpinBox*
/// @param name char*
///
void q_doublespinbox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDoubleSpinBox*
/// @param b bool
///
bool q_doublespinbox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDoubleSpinBox*
///
QThread* q_doublespinbox_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDoubleSpinBox*
/// @param thread QThread*
///
bool q_doublespinbox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDoubleSpinBox*
/// @param interval int
///
int32_t q_doublespinbox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDoubleSpinBox*
/// @param time int64_t of nanoseconds
///
int32_t q_doublespinbox_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDoubleSpinBox*
/// @param id int
///
void q_doublespinbox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDoubleSpinBox*
/// @param id enum Qt__TimerId
///
void q_doublespinbox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDoubleSpinBox*
///
/// @return libqt_list of QObject*
///
libqt_list q_doublespinbox_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDoubleSpinBox*
/// @param filterObj QObject*
///
void q_doublespinbox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDoubleSpinBox*
/// @param obj QObject*
///
void q_doublespinbox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_doublespinbox_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_doublespinbox_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDoubleSpinBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_doublespinbox_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_doublespinbox_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_doublespinbox_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDoubleSpinBox*
/// @param receiver QObject*
///
bool q_doublespinbox_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_doublespinbox_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDoubleSpinBox*
/// @param name const char*
/// @param value QVariant*
///
bool q_doublespinbox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDoubleSpinBox*
/// @param name const char*
///
QVariant* q_doublespinbox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDoubleSpinBox*
///
const char** q_doublespinbox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDoubleSpinBox*
///
QBindingStorage* q_doublespinbox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDoubleSpinBox*
///
const QBindingStorage* q_doublespinbox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self)
///
void q_doublespinbox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDoubleSpinBox*
///
QObject* q_doublespinbox_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDoubleSpinBox*
/// @param classname const char*
///
bool q_doublespinbox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDoubleSpinBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_doublespinbox_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDoubleSpinBox*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_doublespinbox_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_doublespinbox_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_doublespinbox_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDoubleSpinBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_doublespinbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDoubleSpinBox*
/// @param signal const char*
///
bool q_doublespinbox_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDoubleSpinBox*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_doublespinbox_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDoubleSpinBox*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_doublespinbox_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDoubleSpinBox*
/// @param receiver QObject*
/// @param member const char*
///
bool q_doublespinbox_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDoubleSpinBox*
/// @param param1 QObject*
///
void q_doublespinbox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QObject* param1)
///
void q_doublespinbox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QDoubleSpinBox*
///
double q_doublespinbox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QDoubleSpinBox*
///
double q_doublespinbox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_doublespinbox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_doublespinbox_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
QSize* q_doublespinbox_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
QSize* q_doublespinbox_qbase_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback QSize* func()
///
void q_doublespinbox_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
QSize* q_doublespinbox_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
QSize* q_doublespinbox_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback QSize* func()
///
void q_doublespinbox_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QEvent*
///
bool q_doublespinbox_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QEvent*
///
bool q_doublespinbox_qbase_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback bool func(QDoubleSpinBox* self, QEvent* event)
///
void q_doublespinbox_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_doublespinbox_input_method_query(void* self, int32_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_doublespinbox_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback QVariant* func(QDoubleSpinBox* self, enum Qt__InputMethodQuery param1)
///
void q_doublespinbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param steps int
///
void q_doublespinbox_step_by(void* self, int steps);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param steps int
///
void q_doublespinbox_qbase_step_by(void* self, int steps);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, int steps)
///
void q_doublespinbox_on_step_by(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_clear(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_qbase_clear(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func()
///
void q_doublespinbox_on_clear(void* self, void (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QResizeEvent*
///
void q_doublespinbox_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QResizeEvent*
///
void q_doublespinbox_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QResizeEvent* event)
///
void q_doublespinbox_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QKeyEvent*
///
void q_doublespinbox_key_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QKeyEvent*
///
void q_doublespinbox_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QKeyEvent* event)
///
void q_doublespinbox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QKeyEvent*
///
void q_doublespinbox_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QKeyEvent*
///
void q_doublespinbox_qbase_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QKeyEvent* event)
///
void q_doublespinbox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QWheelEvent*
///
void q_doublespinbox_wheel_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QWheelEvent*
///
void q_doublespinbox_qbase_wheel_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QWheelEvent* event)
///
void q_doublespinbox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QFocusEvent*
///
void q_doublespinbox_focus_in_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QFocusEvent*
///
void q_doublespinbox_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QFocusEvent* event)
///
void q_doublespinbox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QFocusEvent*
///
void q_doublespinbox_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QFocusEvent*
///
void q_doublespinbox_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QFocusEvent* event)
///
void q_doublespinbox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QContextMenuEvent*
///
void q_doublespinbox_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QContextMenuEvent*
///
void q_doublespinbox_qbase_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QContextMenuEvent* event)
///
void q_doublespinbox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QEvent*
///
void q_doublespinbox_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QEvent*
///
void q_doublespinbox_qbase_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QEvent* event)
///
void q_doublespinbox_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QCloseEvent*
///
void q_doublespinbox_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QCloseEvent*
///
void q_doublespinbox_qbase_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QCloseEvent* event)
///
void q_doublespinbox_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QHideEvent*
///
void q_doublespinbox_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QHideEvent*
///
void q_doublespinbox_qbase_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QHideEvent* event)
///
void q_doublespinbox_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QMouseEvent*
///
void q_doublespinbox_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QMouseEvent*
///
void q_doublespinbox_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QMouseEvent* event)
///
void q_doublespinbox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QMouseEvent*
///
void q_doublespinbox_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QMouseEvent*
///
void q_doublespinbox_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QMouseEvent* event)
///
void q_doublespinbox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QMouseEvent*
///
void q_doublespinbox_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QMouseEvent*
///
void q_doublespinbox_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QMouseEvent* event)
///
void q_doublespinbox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QTimerEvent*
///
void q_doublespinbox_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QTimerEvent*
///
void q_doublespinbox_qbase_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QTimerEvent* event)
///
void q_doublespinbox_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QPaintEvent*
///
void q_doublespinbox_paint_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QPaintEvent*
///
void q_doublespinbox_qbase_paint_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QPaintEvent* event)
///
void q_doublespinbox_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QShowEvent*
///
void q_doublespinbox_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QShowEvent*
///
void q_doublespinbox_qbase_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QShowEvent* event)
///
void q_doublespinbox_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param option QStyleOptionSpinBox*
///
void q_doublespinbox_init_style_option(void* self, void* option);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param option QStyleOptionSpinBox*
///
void q_doublespinbox_qbase_init_style_option(void* self, void* option);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QStyleOptionSpinBox* option)
///
void q_doublespinbox_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t q_doublespinbox_step_enabled(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t q_doublespinbox_qbase_step_enabled(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback int32_t func()
///
void q_doublespinbox_on_step_enabled(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback int32_t func()
///
void q_doublespinbox_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param visible bool
///
void q_doublespinbox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param visible bool
///
void q_doublespinbox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, bool visible)
///
void q_doublespinbox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param param1 int
///
int32_t q_doublespinbox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param param1 int
///
int32_t q_doublespinbox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback int32_t func(QDoubleSpinBox* self, int param1)
///
void q_doublespinbox_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback bool func()
///
void q_doublespinbox_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
QPaintEngine* q_doublespinbox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
QPaintEngine* q_doublespinbox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback QPaintEngine* func()
///
void q_doublespinbox_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QMouseEvent*
///
void q_doublespinbox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QMouseEvent*
///
void q_doublespinbox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QMouseEvent* event)
///
void q_doublespinbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QEnterEvent*
///
void q_doublespinbox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QEnterEvent*
///
void q_doublespinbox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QEnterEvent* event)
///
void q_doublespinbox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QEvent*
///
void q_doublespinbox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QEvent*
///
void q_doublespinbox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QEvent* event)
///
void q_doublespinbox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QMoveEvent*
///
void q_doublespinbox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QMoveEvent*
///
void q_doublespinbox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QMoveEvent* event)
///
void q_doublespinbox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QTabletEvent*
///
void q_doublespinbox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QTabletEvent*
///
void q_doublespinbox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QTabletEvent* event)
///
void q_doublespinbox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QActionEvent*
///
void q_doublespinbox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QActionEvent*
///
void q_doublespinbox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QActionEvent* event)
///
void q_doublespinbox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QDragEnterEvent*
///
void q_doublespinbox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QDragEnterEvent*
///
void q_doublespinbox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QDragEnterEvent* event)
///
void q_doublespinbox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QDragMoveEvent*
///
void q_doublespinbox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QDragMoveEvent*
///
void q_doublespinbox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QDragMoveEvent* event)
///
void q_doublespinbox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QDragLeaveEvent*
///
void q_doublespinbox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QDragLeaveEvent*
///
void q_doublespinbox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QDragLeaveEvent* event)
///
void q_doublespinbox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QDropEvent*
///
void q_doublespinbox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QDropEvent*
///
void q_doublespinbox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QDropEvent* event)
///
void q_doublespinbox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_doublespinbox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_doublespinbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback bool func(QDoubleSpinBox* self, const char* eventType, void* message, intptr_t* result)
///
void q_doublespinbox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_doublespinbox_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_doublespinbox_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback int32_t func(QDoubleSpinBox* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_doublespinbox_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param painter QPainter*
///
void q_doublespinbox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param painter QPainter*
///
void q_doublespinbox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QPainter* painter)
///
void q_doublespinbox_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param offset QPoint*
///
QPaintDevice* q_doublespinbox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param offset QPoint*
///
QPaintDevice* q_doublespinbox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback QPaintDevice* func(QDoubleSpinBox* self, QPoint* offset)
///
void q_doublespinbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
QPainter* q_doublespinbox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
QPainter* q_doublespinbox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback QPainter* func()
///
void q_doublespinbox_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param param1 QInputMethodEvent*
///
void q_doublespinbox_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param param1 QInputMethodEvent*
///
void q_doublespinbox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QInputMethodEvent* param1)
///
void q_doublespinbox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param next bool
///
bool q_doublespinbox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param next bool
///
bool q_doublespinbox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback bool func(QDoubleSpinBox* self, bool next)
///
void q_doublespinbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_doublespinbox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_doublespinbox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback bool func(QDoubleSpinBox* self, QObject* watched, QEvent* event)
///
void q_doublespinbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QChildEvent*
///
void q_doublespinbox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QChildEvent*
///
void q_doublespinbox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QChildEvent* event)
///
void q_doublespinbox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QEvent*
///
void q_doublespinbox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param event QEvent*
///
void q_doublespinbox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QEvent* event)
///
void q_doublespinbox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param signal QMetaMethod*
///
void q_doublespinbox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param signal QMetaMethod*
///
void q_doublespinbox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QMetaMethod* signal)
///
void q_doublespinbox_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param signal QMetaMethod*
///
void q_doublespinbox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param signal QMetaMethod*
///
void q_doublespinbox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QMetaMethod* signal)
///
void q_doublespinbox_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
QLineEdit* q_doublespinbox_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
QLineEdit* q_doublespinbox_qbase_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback QLineEdit* func()
///
void q_doublespinbox_on_line_edit(void* self, QLineEdit* (*callback)());

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param edit QLineEdit*
///
void q_doublespinbox_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param edit QLineEdit*
///
void q_doublespinbox_qbase_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, QLineEdit* edit)
///
void q_doublespinbox_on_set_line_edit(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func()
///
void q_doublespinbox_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func()
///
void q_doublespinbox_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback void func()
///
void q_doublespinbox_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback bool func()
///
void q_doublespinbox_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
bool q_doublespinbox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback bool func()
///
void q_doublespinbox_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
QObject* q_doublespinbox_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
QObject* q_doublespinbox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback QObject* func()
///
void q_doublespinbox_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
///
int32_t q_doublespinbox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback int32_t func()
///
void q_doublespinbox_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param signal const char*
///
int32_t q_doublespinbox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param signal const char*
///
int32_t q_doublespinbox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback int32_t func(QDoubleSpinBox* self, const char* signal)
///
void q_doublespinbox_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param signal QMetaMethod*
///
bool q_doublespinbox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param signal QMetaMethod*
///
bool q_doublespinbox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback bool func(QDoubleSpinBox* self, QMetaMethod* signal)
///
void q_doublespinbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_doublespinbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_doublespinbox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleSpinBox*
/// @param callback double func(QDoubleSpinBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_doublespinbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDoubleSpinBox*
/// @param callback void func(QDoubleSpinBox* self, const char* objectName)
///
void q_doublespinbox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#dtor.QDoubleSpinBox)
///
/// Delete this object from C++ memory.
///
/// @param self QDoubleSpinBox*
///
void q_doublespinbox_delete(void* self);

#endif
