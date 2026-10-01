#pragma once
#ifndef LIBQABSTRACTSPINBOX_H
#define LIBQABSTRACTSPINBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html)

/// q_abstractspinbox_new constructs a new QAbstractSpinBox object.
///
/// @param parent QWidget*
///
QAbstractSpinBox* q_abstractspinbox_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html)

/// q_abstractspinbox_new2 constructs a new QAbstractSpinBox object.
///
QAbstractSpinBox* q_abstractspinbox_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QAbstractSpinBox*
///
const QMetaObject* q_abstractspinbox_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractSpinBox*
/// @param callback const QMetaObject* func(const QAbstractSpinBox* self)
///
void q_abstractspinbox_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QAbstractSpinBox*
///
const QMetaObject* q_abstractspinbox_super_meta_object(const void* self);

/// @param self QAbstractSpinBox*
/// @param param1 const char*
///
void* q_abstractspinbox_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void* func(QAbstractSpinBox* self, const char* param1)
///
void q_abstractspinbox_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param param1 const char*
///
void* q_abstractspinbox_super_metacast(void* self, const char* param1);

/// @param self QAbstractSpinBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractspinbox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback int32_t func(QAbstractSpinBox* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_abstractspinbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractspinbox_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstractspinbox_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
///
/// @param self const QAbstractSpinBox*
///
/// @return enum QAbstractSpinBox__ButtonSymbols
///
int32_t q_abstractspinbox_button_symbols(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
///
/// @param self QAbstractSpinBox*
/// @param bs enum QAbstractSpinBox__ButtonSymbols
///
void q_abstractspinbox_set_button_symbols(void* self, int32_t bs);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
///
/// @param self QAbstractSpinBox*
/// @param cm enum QAbstractSpinBox__CorrectionMode
///
void q_abstractspinbox_set_correction_mode(void* self, int32_t cm);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
///
/// @param self const QAbstractSpinBox*
///
/// @return enum QAbstractSpinBox__CorrectionMode
///
int32_t q_abstractspinbox_correction_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_has_acceptable_input(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractSpinBox*
///
const char* q_abstractspinbox_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractSpinBox*
///
const char* q_abstractspinbox_special_value_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
///
/// @param self QAbstractSpinBox*
/// @param txt const char*
///
void q_abstractspinbox_set_special_value_text(void* self, const char* txt);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_wrapping(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
///
/// @param self QAbstractSpinBox*
/// @param w bool
///
void q_abstractspinbox_set_wrapping(void* self, bool w);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
///
/// @param self QAbstractSpinBox*
/// @param r bool
///
void q_abstractspinbox_set_read_only(void* self, bool r);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_read_only(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
///
/// @param self QAbstractSpinBox*
/// @param kt bool
///
void q_abstractspinbox_set_keyboard_tracking(void* self, bool kt);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_keyboard_tracking(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
///
/// @param self QAbstractSpinBox*
/// @param flag flag of enum Qt__AlignmentFlag
///
void q_abstractspinbox_set_alignment(void* self, int32_t flag);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
///
/// @param self const QAbstractSpinBox*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_abstractspinbox_alignment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
///
/// @param self QAbstractSpinBox*
/// @param frame bool
///
void q_abstractspinbox_set_frame(void* self, bool frame);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_has_frame(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
///
/// @param self QAbstractSpinBox*
/// @param on bool
///
void q_abstractspinbox_set_accelerated(void* self, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_accelerated(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
///
/// @param self QAbstractSpinBox*
/// @param shown bool
///
void q_abstractspinbox_set_group_separator_shown(void* self, bool shown);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_group_separator_shown(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// @param self const QAbstractSpinBox*
///
QSize* q_abstractspinbox_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractSpinBox*
/// @param callback QSize* func(const QAbstractSpinBox* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractspinbox_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QAbstractSpinBox*
///
QSize* q_abstractspinbox_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// @param self const QAbstractSpinBox*
///
QSize* q_abstractspinbox_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractSpinBox*
/// @param callback QSize* func(const QAbstractSpinBox* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractspinbox_on_minimum_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self const QAbstractSpinBox*
///
QSize* q_abstractspinbox_super_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_interpret_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
///
bool q_abstractspinbox_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback bool func(QAbstractSpinBox* self, QEvent* event)
///
void q_abstractspinbox_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
///
bool q_abstractspinbox_super_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// @param self const QAbstractSpinBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_abstractspinbox_input_method_query(const void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractSpinBox*
/// @param callback QVariant* func(const QAbstractSpinBox* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractspinbox_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Base class method implementation
///
/// @param self const QAbstractSpinBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_abstractspinbox_super_input_method_query(const void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#validate)
///
/// @param self const QAbstractSpinBox*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t q_abstractspinbox_validate(const void* self, const char* input, int* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractSpinBox*
/// @param callback int32_t func(const QAbstractSpinBox* self, const char* input, int* pos)
///
void q_abstractspinbox_on_validate(const void* self, int32_t (*callback)(const void*, const char*, int*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#validate)
///
/// Base class method implementation
///
/// @param self const QAbstractSpinBox*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t q_abstractspinbox_super_validate(const void* self, const char* input, int* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#fixup)
///
/// @param self const QAbstractSpinBox*
/// @param input const char*
///
void q_abstractspinbox_fixup(const void* self, const char* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#fixup)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractSpinBox*
/// @param callback void func(const QAbstractSpinBox* self, const char* input)
///
void q_abstractspinbox_on_fixup(const void* self, void (*callback)(const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#fixup)
///
/// Base class method implementation
///
/// @param self const QAbstractSpinBox*
/// @param input const char*
///
void q_abstractspinbox_super_fixup(const void* self, const char* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// @param self QAbstractSpinBox*
/// @param steps int
///
void q_abstractspinbox_step_by(void* self, int steps);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, int steps)
///
void q_abstractspinbox_on_step_by(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param steps int
///
void q_abstractspinbox_super_step_by(void* self, int steps);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_step_up(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_step_down(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_select_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self)
///
void q_abstractspinbox_on_clear(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_super_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QResizeEvent*
///
void q_abstractspinbox_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QResizeEvent* event)
///
void q_abstractspinbox_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QResizeEvent*
///
void q_abstractspinbox_super_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QKeyEvent*
///
void q_abstractspinbox_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QKeyEvent* event)
///
void q_abstractspinbox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QKeyEvent*
///
void q_abstractspinbox_super_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QKeyEvent*
///
void q_abstractspinbox_key_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QKeyEvent* event)
///
void q_abstractspinbox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QKeyEvent*
///
void q_abstractspinbox_super_key_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QWheelEvent*
///
void q_abstractspinbox_wheel_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QWheelEvent* event)
///
void q_abstractspinbox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QWheelEvent*
///
void q_abstractspinbox_super_wheel_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QFocusEvent*
///
void q_abstractspinbox_focus_in_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QFocusEvent* event)
///
void q_abstractspinbox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QFocusEvent*
///
void q_abstractspinbox_super_focus_in_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QFocusEvent*
///
void q_abstractspinbox_focus_out_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QFocusEvent* event)
///
void q_abstractspinbox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QFocusEvent*
///
void q_abstractspinbox_super_focus_out_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QContextMenuEvent*
///
void q_abstractspinbox_context_menu_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QContextMenuEvent* event)
///
void q_abstractspinbox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QContextMenuEvent*
///
void q_abstractspinbox_super_context_menu_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
///
void q_abstractspinbox_change_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QEvent* event)
///
void q_abstractspinbox_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
///
void q_abstractspinbox_super_change_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QCloseEvent*
///
void q_abstractspinbox_close_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QCloseEvent* event)
///
void q_abstractspinbox_on_close_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QCloseEvent*
///
void q_abstractspinbox_super_close_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QHideEvent*
///
void q_abstractspinbox_hide_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QHideEvent* event)
///
void q_abstractspinbox_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QHideEvent*
///
void q_abstractspinbox_super_hide_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
///
void q_abstractspinbox_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QMouseEvent* event)
///
void q_abstractspinbox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
///
void q_abstractspinbox_super_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
///
void q_abstractspinbox_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QMouseEvent* event)
///
void q_abstractspinbox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
///
void q_abstractspinbox_super_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
///
void q_abstractspinbox_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QMouseEvent* event)
///
void q_abstractspinbox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
///
void q_abstractspinbox_super_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QTimerEvent*
///
void q_abstractspinbox_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QTimerEvent* event)
///
void q_abstractspinbox_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QTimerEvent*
///
void q_abstractspinbox_super_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QPaintEvent*
///
void q_abstractspinbox_paint_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QPaintEvent* event)
///
void q_abstractspinbox_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QPaintEvent*
///
void q_abstractspinbox_super_paint_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QShowEvent*
///
void q_abstractspinbox_show_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QShowEvent* event)
///
void q_abstractspinbox_on_show_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QShowEvent*
///
void q_abstractspinbox_super_show_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// @param self const QAbstractSpinBox*
/// @param option QStyleOptionSpinBox*
///
void q_abstractspinbox_init_style_option(const void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractSpinBox*
/// @param callback void func(const QAbstractSpinBox* self, QStyleOptionSpinBox* option)
///
void q_abstractspinbox_on_init_style_option(const void* self, void (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self const QAbstractSpinBox*
/// @param option QStyleOptionSpinBox*
///
void q_abstractspinbox_super_init_style_option(const void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// @param self const QAbstractSpinBox*
///
QLineEdit* q_abstractspinbox_line_edit(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// @param self QAbstractSpinBox*
/// @param edit QLineEdit*
///
void q_abstractspinbox_set_line_edit(void* self, void* edit);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// @param self const QAbstractSpinBox*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t q_abstractspinbox_step_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Allows for overriding the related default method
///
/// @param self const QAbstractSpinBox*
/// @param callback int32_t func(const QAbstractSpinBox* self)
///
void q_abstractspinbox_on_step_enabled(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Base class method implementation
///
/// @param self const QAbstractSpinBox*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t q_abstractspinbox_super_step_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_editing_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self)
///
void q_abstractspinbox_on_editing_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstractspinbox_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstractspinbox_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self QAbstractSpinBox*
///
QPaintDevice* q_abstractspinbox_as_q_paint_device(void* self);

/// Inherited from QWidget
///
/// Downcasts to a QAbstractSpinBox object
///
/// @param _qpaintdevice QPaintDevice*
///
QAbstractSpinBox* q_abstractspinbox_from_q_paint_device(void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QAbstractSpinBox*
///
uintptr_t q_abstractspinbox_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const QAbstractSpinBox*
///
uintptr_t q_abstractspinbox_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QAbstractSpinBox*
///
uintptr_t q_abstractspinbox_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QAbstractSpinBox*
///
QStyle* q_abstractspinbox_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QAbstractSpinBox*
/// @param style QStyle*
///
void q_abstractspinbox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QAbstractSpinBox*
///
/// @return enum Qt__WindowModality
///
int32_t q_abstractspinbox_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QAbstractSpinBox*
/// @param windowModality enum Qt__WindowModality
///
void q_abstractspinbox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QAbstractSpinBox*
/// @param param1 QWidget*
///
bool q_abstractspinbox_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QAbstractSpinBox*
/// @param enabled bool
///
void q_abstractspinbox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QAbstractSpinBox*
/// @param disabled bool
///
void q_abstractspinbox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QAbstractSpinBox*
/// @param windowModified bool
///
void q_abstractspinbox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const QAbstractSpinBox*
///
QRect* q_abstractspinbox_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QAbstractSpinBox*
///
const QRect* q_abstractspinbox_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QAbstractSpinBox*
///
QRect* q_abstractspinbox_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QAbstractSpinBox*
///
QPoint* q_abstractspinbox_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QAbstractSpinBox*
///
QSize* q_abstractspinbox_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QAbstractSpinBox*
///
QSize* q_abstractspinbox_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QAbstractSpinBox*
///
QRect* q_abstractspinbox_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QAbstractSpinBox*
///
QRect* q_abstractspinbox_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QAbstractSpinBox*
///
QRegion* q_abstractspinbox_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QAbstractSpinBox*
///
QSize* q_abstractspinbox_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QAbstractSpinBox*
///
QSize* q_abstractspinbox_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QAbstractSpinBox*
/// @param minimumSize QSize*
///
void q_abstractspinbox_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QAbstractSpinBox*
/// @param minw int
/// @param minh int
///
void q_abstractspinbox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QAbstractSpinBox*
/// @param maximumSize QSize*
///
void q_abstractspinbox_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QAbstractSpinBox*
/// @param maxw int
/// @param maxh int
///
void q_abstractspinbox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QAbstractSpinBox*
/// @param minw int
///
void q_abstractspinbox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QAbstractSpinBox*
/// @param minh int
///
void q_abstractspinbox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QAbstractSpinBox*
/// @param maxw int
///
void q_abstractspinbox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QAbstractSpinBox*
/// @param maxh int
///
void q_abstractspinbox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const QAbstractSpinBox*
///
QSize* q_abstractspinbox_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QAbstractSpinBox*
/// @param sizeIncrement QSize*
///
void q_abstractspinbox_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QAbstractSpinBox*
/// @param w int
/// @param h int
///
void q_abstractspinbox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const QAbstractSpinBox*
///
QSize* q_abstractspinbox_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QAbstractSpinBox*
/// @param baseSize QSize*
///
void q_abstractspinbox_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QAbstractSpinBox*
/// @param basew int
/// @param baseh int
///
void q_abstractspinbox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QAbstractSpinBox*
/// @param fixedSize QSize*
///
void q_abstractspinbox_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QAbstractSpinBox*
/// @param w int
/// @param h int
///
void q_abstractspinbox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QAbstractSpinBox*
/// @param w int
///
void q_abstractspinbox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QAbstractSpinBox*
/// @param h int
///
void q_abstractspinbox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QAbstractSpinBox*
/// @param param1 QPointF*
///
QPointF* q_abstractspinbox_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QAbstractSpinBox*
/// @param param1 QPoint*
///
QPoint* q_abstractspinbox_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QAbstractSpinBox*
/// @param param1 QPointF*
///
QPointF* q_abstractspinbox_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QAbstractSpinBox*
/// @param param1 QPoint*
///
QPoint* q_abstractspinbox_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QAbstractSpinBox*
/// @param param1 QPointF*
///
QPointF* q_abstractspinbox_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QAbstractSpinBox*
/// @param param1 QPoint*
///
QPoint* q_abstractspinbox_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QAbstractSpinBox*
/// @param param1 QPointF*
///
QPointF* q_abstractspinbox_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QAbstractSpinBox*
/// @param param1 QPoint*
///
QPoint* q_abstractspinbox_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QAbstractSpinBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_abstractspinbox_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QAbstractSpinBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_abstractspinbox_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QAbstractSpinBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_abstractspinbox_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QAbstractSpinBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_abstractspinbox_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QAbstractSpinBox*
///
QWidget* q_abstractspinbox_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QAbstractSpinBox*
///
QWidget* q_abstractspinbox_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QAbstractSpinBox*
///
QWidget* q_abstractspinbox_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QAbstractSpinBox*
///
const QPalette* q_abstractspinbox_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QAbstractSpinBox*
/// @param palette QPalette*
///
void q_abstractspinbox_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QAbstractSpinBox*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_abstractspinbox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const QAbstractSpinBox*
///
/// @return enum QPalette__ColorRole
///
int32_t q_abstractspinbox_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QAbstractSpinBox*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_abstractspinbox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const QAbstractSpinBox*
///
/// @return enum QPalette__ColorRole
///
int32_t q_abstractspinbox_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QAbstractSpinBox*
///
const QFont* q_abstractspinbox_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QAbstractSpinBox*
/// @param font QFont*
///
void q_abstractspinbox_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QAbstractSpinBox*
///
QFontMetrics* q_abstractspinbox_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QAbstractSpinBox*
///
QFontInfo* q_abstractspinbox_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QAbstractSpinBox*
///
QCursor* q_abstractspinbox_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QAbstractSpinBox*
/// @param cursor QCursor*
///
void q_abstractspinbox_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QAbstractSpinBox*
/// @param enable bool
///
void q_abstractspinbox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QAbstractSpinBox*
/// @param enable bool
///
void q_abstractspinbox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QAbstractSpinBox*
/// @param mask QBitmap*
///
void q_abstractspinbox_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QAbstractSpinBox*
/// @param mask QRegion*
///
void q_abstractspinbox_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QAbstractSpinBox*
///
QRegion* q_abstractspinbox_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param target QPaintDevice*
///
void q_abstractspinbox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param painter QPainter*
///
void q_abstractspinbox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QAbstractSpinBox*
///
QPixmap* q_abstractspinbox_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const QAbstractSpinBox*
///
QGraphicsEffect* q_abstractspinbox_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QAbstractSpinBox*
/// @param effect QGraphicsEffect*
///
void q_abstractspinbox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QAbstractSpinBox*
/// @param type enum Qt__GestureType
///
void q_abstractspinbox_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QAbstractSpinBox*
/// @param type enum Qt__GestureType
///
void q_abstractspinbox_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QAbstractSpinBox*
/// @param windowTitle const char*
///
void q_abstractspinbox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QAbstractSpinBox*
/// @param styleSheet const char*
///
void q_abstractspinbox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractSpinBox*
///
const char* q_abstractspinbox_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractSpinBox*
///
const char* q_abstractspinbox_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QAbstractSpinBox*
/// @param icon QIcon*
///
void q_abstractspinbox_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QAbstractSpinBox*
///
QIcon* q_abstractspinbox_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QAbstractSpinBox*
/// @param windowIconText const char*
///
void q_abstractspinbox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractSpinBox*
///
const char* q_abstractspinbox_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QAbstractSpinBox*
/// @param windowRole const char*
///
void q_abstractspinbox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractSpinBox*
///
const char* q_abstractspinbox_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QAbstractSpinBox*
/// @param filePath const char*
///
void q_abstractspinbox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractSpinBox*
///
const char* q_abstractspinbox_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QAbstractSpinBox*
/// @param level double
///
void q_abstractspinbox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const QAbstractSpinBox*
///
double q_abstractspinbox_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QAbstractSpinBox*
/// @param toolTip const char*
///
void q_abstractspinbox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractSpinBox*
///
const char* q_abstractspinbox_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QAbstractSpinBox*
/// @param msec int
///
void q_abstractspinbox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QAbstractSpinBox*
/// @param statusTip const char*
///
void q_abstractspinbox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractSpinBox*
///
const char* q_abstractspinbox_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QAbstractSpinBox*
/// @param whatsThis const char*
///
void q_abstractspinbox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractSpinBox*
///
const char* q_abstractspinbox_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractSpinBox*
///
const char* q_abstractspinbox_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QAbstractSpinBox*
/// @param name const char*
///
void q_abstractspinbox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractSpinBox*
///
const char* q_abstractspinbox_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QAbstractSpinBox*
/// @param description const char*
///
void q_abstractspinbox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QAbstractSpinBox*
/// @param direction enum Qt__LayoutDirection
///
void q_abstractspinbox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const QAbstractSpinBox*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_abstractspinbox_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QAbstractSpinBox*
/// @param locale QLocale*
///
void q_abstractspinbox_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QAbstractSpinBox*
///
QLocale* q_abstractspinbox_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QAbstractSpinBox*
/// @param reason enum Qt__FocusReason
///
void q_abstractspinbox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const QAbstractSpinBox*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_abstractspinbox_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QAbstractSpinBox*
/// @param policy enum Qt__FocusPolicy
///
void q_abstractspinbox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_abstractspinbox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QAbstractSpinBox*
/// @param focusProxy QWidget*
///
void q_abstractspinbox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const QAbstractSpinBox*
///
QWidget* q_abstractspinbox_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QAbstractSpinBox*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_abstractspinbox_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QAbstractSpinBox*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_abstractspinbox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QAbstractSpinBox*
/// @param param1 QCursor*
///
void q_abstractspinbox_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QAbstractSpinBox*
/// @param key QKeySequence*
///
int32_t q_abstractspinbox_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QAbstractSpinBox*
/// @param id int
///
void q_abstractspinbox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QAbstractSpinBox*
/// @param id int
///
void q_abstractspinbox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QAbstractSpinBox*
/// @param id int
///
void q_abstractspinbox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_abstractspinbox_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_abstractspinbox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QAbstractSpinBox*
/// @param enable bool
///
void q_abstractspinbox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const QAbstractSpinBox*
///
QGraphicsProxyWidget* q_abstractspinbox_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_abstractspinbox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractSpinBox*
/// @param param1 QRect*
///
void q_abstractspinbox_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractSpinBox*
/// @param param1 QRegion*
///
void q_abstractspinbox_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_abstractspinbox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractSpinBox*
/// @param param1 QRect*
///
void q_abstractspinbox_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractSpinBox*
/// @param param1 QRegion*
///
void q_abstractspinbox_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QAbstractSpinBox*
/// @param hidden bool
///
void q_abstractspinbox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QAbstractSpinBox*
///
bool q_abstractspinbox_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QAbstractSpinBox*
/// @param param1 QWidget*
///
void q_abstractspinbox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QAbstractSpinBox*
/// @param x int
/// @param y int
///
void q_abstractspinbox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QAbstractSpinBox*
/// @param param1 QPoint*
///
void q_abstractspinbox_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QAbstractSpinBox*
/// @param w int
/// @param h int
///
void q_abstractspinbox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QAbstractSpinBox*
/// @param param1 QSize*
///
void q_abstractspinbox_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QAbstractSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_abstractspinbox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QAbstractSpinBox*
/// @param geometry QRect*
///
void q_abstractspinbox_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstractSpinBox*
///
char* q_abstractspinbox_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QAbstractSpinBox*
/// @param geometry char*
///
bool q_abstractspinbox_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QAbstractSpinBox*
/// @param param1 QWidget*
///
bool q_abstractspinbox_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QAbstractSpinBox*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_abstractspinbox_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QAbstractSpinBox*
/// @param state flag of enum Qt__WindowState
///
void q_abstractspinbox_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QAbstractSpinBox*
/// @param state flag of enum Qt__WindowState
///
void q_abstractspinbox_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const QAbstractSpinBox*
///
QSizePolicy* q_abstractspinbox_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QAbstractSpinBox*
/// @param sizePolicy QSizePolicy*
///
void q_abstractspinbox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QAbstractSpinBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_abstractspinbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const QAbstractSpinBox*
///
QRegion* q_abstractspinbox_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QAbstractSpinBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_abstractspinbox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QAbstractSpinBox*
/// @param margins QMargins*
///
void q_abstractspinbox_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QAbstractSpinBox*
///
QMargins* q_abstractspinbox_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QAbstractSpinBox*
///
QRect* q_abstractspinbox_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QAbstractSpinBox*
///
QLayout* q_abstractspinbox_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QAbstractSpinBox*
/// @param layout QLayout*
///
void q_abstractspinbox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QAbstractSpinBox*
/// @param parent QWidget*
///
void q_abstractspinbox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QAbstractSpinBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_abstractspinbox_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QAbstractSpinBox*
/// @param dx int
/// @param dy int
///
void q_abstractspinbox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QAbstractSpinBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_abstractspinbox_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QAbstractSpinBox*
///
QWidget* q_abstractspinbox_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QAbstractSpinBox*
///
QWidget* q_abstractspinbox_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QAbstractSpinBox*
///
QWidget* q_abstractspinbox_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QAbstractSpinBox*
/// @param on bool
///
void q_abstractspinbox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractSpinBox*
/// @param action QAction*
///
void q_abstractspinbox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QAbstractSpinBox*
/// @param actions libqt_list of QAction*
///
void q_abstractspinbox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QAbstractSpinBox*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_abstractspinbox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QAbstractSpinBox*
/// @param before QAction*
/// @param action QAction*
///
void q_abstractspinbox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QAbstractSpinBox*
/// @param action QAction*
///
void q_abstractspinbox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const QAbstractSpinBox*
///
/// @return libqt_list of QAction*
///
libqt_list q_abstractspinbox_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractSpinBox*
/// @param text const char*
///
QAction* q_abstractspinbox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractSpinBox*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_abstractspinbox_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractSpinBox*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_abstractspinbox_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractSpinBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_abstractspinbox_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QAbstractSpinBox*
///
QWidget* q_abstractspinbox_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QAbstractSpinBox*
/// @param type flag of enum Qt__WindowType
///
void q_abstractspinbox_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QAbstractSpinBox*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_abstractspinbox_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QAbstractSpinBox*
/// @param param1 enum Qt__WindowType
///
void q_abstractspinbox_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QAbstractSpinBox*
/// @param type flag of enum Qt__WindowType
///
void q_abstractspinbox_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QAbstractSpinBox*
///
/// @return enum Qt__WindowType
///
int32_t q_abstractspinbox_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* q_abstractspinbox_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QAbstractSpinBox*
/// @param x int
/// @param y int
///
QWidget* q_abstractspinbox_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QAbstractSpinBox*
/// @param p QPoint*
///
QWidget* q_abstractspinbox_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QAbstractSpinBox*
/// @param p QPointF*
///
QWidget* q_abstractspinbox_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QAbstractSpinBox*
/// @param param1 enum Qt__WidgetAttribute
///
void q_abstractspinbox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const QAbstractSpinBox*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_abstractspinbox_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QAbstractSpinBox*
///
void q_abstractspinbox_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QAbstractSpinBox*
/// @param child QWidget*
///
bool q_abstractspinbox_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QAbstractSpinBox*
/// @param enabled bool
///
void q_abstractspinbox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const QAbstractSpinBox*
///
QBackingStore* q_abstractspinbox_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QAbstractSpinBox*
///
QWindow* q_abstractspinbox_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QAbstractSpinBox*
///
QScreen* q_abstractspinbox_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QAbstractSpinBox*
/// @param screen QScreen*
///
void q_abstractspinbox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_abstractspinbox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QAbstractSpinBox*
/// @param title const char*
///
void q_abstractspinbox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, const char* title)
///
void q_abstractspinbox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QAbstractSpinBox*
/// @param icon QIcon*
///
void q_abstractspinbox_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QIcon* icon)
///
void q_abstractspinbox_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QAbstractSpinBox*
/// @param iconText const char*
///
void q_abstractspinbox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, const char* iconText)
///
void q_abstractspinbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QAbstractSpinBox*
/// @param pos QPoint*
///
void q_abstractspinbox_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QPoint* pos)
///
void q_abstractspinbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QAbstractSpinBox*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_abstractspinbox_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QAbstractSpinBox*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_abstractspinbox_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_abstractspinbox_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_abstractspinbox_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_abstractspinbox_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_abstractspinbox_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_abstractspinbox_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_abstractspinbox_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QAbstractSpinBox*
/// @param rectangle QRect*
///
QPixmap* q_abstractspinbox_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QAbstractSpinBox*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_abstractspinbox_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QAbstractSpinBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_abstractspinbox_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QAbstractSpinBox*
/// @param id int
/// @param enable bool
///
void q_abstractspinbox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QAbstractSpinBox*
/// @param id int
/// @param enable bool
///
void q_abstractspinbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QAbstractSpinBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_abstractspinbox_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QAbstractSpinBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_abstractspinbox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_abstractspinbox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_abstractspinbox_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractSpinBox*
///
const char* q_abstractspinbox_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractSpinBox*
/// @param name const char*
///
void q_abstractspinbox_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractSpinBox*
/// @param b bool
///
bool q_abstractspinbox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QAbstractSpinBox*
///
QThread* q_abstractspinbox_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractSpinBox*
/// @param thread QThread*
///
bool q_abstractspinbox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractSpinBox*
/// @param interval int
///
int32_t q_abstractspinbox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractSpinBox*
/// @param time int64_t of nanoseconds
///
int32_t q_abstractspinbox_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractSpinBox*
/// @param id int
///
void q_abstractspinbox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractSpinBox*
/// @param id enum Qt__TimerId
///
void q_abstractspinbox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QAbstractSpinBox*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstractspinbox_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractSpinBox*
/// @param filterObj QObject*
///
void q_abstractspinbox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractSpinBox*
/// @param obj QObject*
///
void q_abstractspinbox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstractspinbox_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstractspinbox_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractSpinBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstractspinbox_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractspinbox_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstractspinbox_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractSpinBox*
/// @param receiver QObject*
///
bool q_abstractspinbox_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstractspinbox_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAbstractSpinBox*
///
void q_abstractspinbox_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAbstractSpinBox*
///
void q_abstractspinbox_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractSpinBox*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstractspinbox_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAbstractSpinBox*
/// @param name const char*
///
QVariant* q_abstractspinbox_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstractSpinBox*
///
const char** q_abstractspinbox_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractSpinBox*
///
QBindingStorage* q_abstractspinbox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QAbstractSpinBox*
///
const QBindingStorage* q_abstractspinbox_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self)
///
void q_abstractspinbox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QAbstractSpinBox*
///
QObject* q_abstractspinbox_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAbstractSpinBox*
/// @param classname const char*
///
bool q_abstractspinbox_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractSpinBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractspinbox_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractSpinBox*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractspinbox_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_abstractspinbox_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstractspinbox_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractSpinBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractspinbox_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractSpinBox*
/// @param signal const char*
///
bool q_abstractspinbox_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractSpinBox*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstractspinbox_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractSpinBox*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractspinbox_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractSpinBox*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractspinbox_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSpinBox*
/// @param param1 QObject*
///
void q_abstractspinbox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QObject* param1)
///
void q_abstractspinbox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QAbstractSpinBox*
///
double q_abstractspinbox_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QAbstractSpinBox*
///
double q_abstractspinbox_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_abstractspinbox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_abstractspinbox_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param callback int32_t func(QAbstractSpinBox* self)
///
void q_abstractspinbox_on_dev_type(const void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param visible bool
///
void q_abstractspinbox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param visible bool
///
void q_abstractspinbox_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, bool visible)
///
void q_abstractspinbox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param param1 int
///
int32_t q_abstractspinbox_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param param1 int
///
int32_t q_abstractspinbox_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param callback int32_t func(QAbstractSpinBox* self, int param1)
///
void q_abstractspinbox_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
///
bool q_abstractspinbox_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param callback bool func(QAbstractSpinBox* self)
///
void q_abstractspinbox_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractSpinBox*
///
QPaintEngine* q_abstractspinbox_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
///
QPaintEngine* q_abstractspinbox_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param callback QPaintEngine* func(QAbstractSpinBox* self)
///
void q_abstractspinbox_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
///
void q_abstractspinbox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
///
void q_abstractspinbox_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QMouseEvent* event)
///
void q_abstractspinbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QEnterEvent*
///
void q_abstractspinbox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QEnterEvent*
///
void q_abstractspinbox_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QEnterEvent* event)
///
void q_abstractspinbox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
///
void q_abstractspinbox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
///
void q_abstractspinbox_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QEvent* event)
///
void q_abstractspinbox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QMoveEvent*
///
void q_abstractspinbox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QMoveEvent*
///
void q_abstractspinbox_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QMoveEvent* event)
///
void q_abstractspinbox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QTabletEvent*
///
void q_abstractspinbox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QTabletEvent*
///
void q_abstractspinbox_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QTabletEvent* event)
///
void q_abstractspinbox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QActionEvent*
///
void q_abstractspinbox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QActionEvent*
///
void q_abstractspinbox_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QActionEvent* event)
///
void q_abstractspinbox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDragEnterEvent*
///
void q_abstractspinbox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDragEnterEvent*
///
void q_abstractspinbox_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QDragEnterEvent* event)
///
void q_abstractspinbox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDragMoveEvent*
///
void q_abstractspinbox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDragMoveEvent*
///
void q_abstractspinbox_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QDragMoveEvent* event)
///
void q_abstractspinbox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDragLeaveEvent*
///
void q_abstractspinbox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDragLeaveEvent*
///
void q_abstractspinbox_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QDragLeaveEvent* event)
///
void q_abstractspinbox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDropEvent*
///
void q_abstractspinbox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDropEvent*
///
void q_abstractspinbox_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QDropEvent* event)
///
void q_abstractspinbox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_abstractspinbox_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_abstractspinbox_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback bool func(QAbstractSpinBox* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_abstractspinbox_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_abstractspinbox_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_abstractspinbox_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param callback int32_t func(QAbstractSpinBox* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_abstractspinbox_on_metric(const void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param painter QPainter*
///
void q_abstractspinbox_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param painter QPainter*
///
void q_abstractspinbox_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QPainter* painter)
///
void q_abstractspinbox_on_init_painter(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param offset QPoint*
///
QPaintDevice* q_abstractspinbox_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param offset QPoint*
///
QPaintDevice* q_abstractspinbox_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param callback QPaintDevice* func(QAbstractSpinBox* self, QPoint* offset)
///
void q_abstractspinbox_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractSpinBox*
///
QPainter* q_abstractspinbox_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
///
QPainter* q_abstractspinbox_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param callback QPainter* func(QAbstractSpinBox* self)
///
void q_abstractspinbox_on_shared_painter(const void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param param1 QInputMethodEvent*
///
void q_abstractspinbox_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param param1 QInputMethodEvent*
///
void q_abstractspinbox_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QInputMethodEvent* param1)
///
void q_abstractspinbox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param next bool
///
bool q_abstractspinbox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param next bool
///
bool q_abstractspinbox_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback bool func(QAbstractSpinBox* self, bool next)
///
void q_abstractspinbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractspinbox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractspinbox_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback bool func(QAbstractSpinBox* self, QObject* watched, QEvent* event)
///
void q_abstractspinbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QChildEvent*
///
void q_abstractspinbox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QChildEvent*
///
void q_abstractspinbox_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QChildEvent* event)
///
void q_abstractspinbox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
///
void q_abstractspinbox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
///
void q_abstractspinbox_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QEvent* event)
///
void q_abstractspinbox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param signal QMetaMethod*
///
void q_abstractspinbox_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param signal QMetaMethod*
///
void q_abstractspinbox_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QMetaMethod* signal)
///
void q_abstractspinbox_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param signal QMetaMethod*
///
void q_abstractspinbox_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param signal QMetaMethod*
///
void q_abstractspinbox_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, QMetaMethod* signal)
///
void q_abstractspinbox_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self)
///
void q_abstractspinbox_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self)
///
void q_abstractspinbox_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self)
///
void q_abstractspinbox_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
///
bool q_abstractspinbox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
///
bool q_abstractspinbox_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback bool func(QAbstractSpinBox* self)
///
void q_abstractspinbox_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
///
bool q_abstractspinbox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
///
bool q_abstractspinbox_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback bool func(QAbstractSpinBox* self)
///
void q_abstractspinbox_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractSpinBox*
///
QObject* q_abstractspinbox_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
///
QObject* q_abstractspinbox_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param callback QObject* func(QAbstractSpinBox* self)
///
void q_abstractspinbox_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
///
int32_t q_abstractspinbox_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param callback int32_t func(QAbstractSpinBox* self)
///
void q_abstractspinbox_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param signal const char*
///
int32_t q_abstractspinbox_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param signal const char*
///
int32_t q_abstractspinbox_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param callback int32_t func(QAbstractSpinBox* self, const char* signal)
///
void q_abstractspinbox_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param signal QMetaMethod*
///
bool q_abstractspinbox_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param signal QMetaMethod*
///
bool q_abstractspinbox_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param callback bool func(QAbstractSpinBox* self, QMetaMethod* signal)
///
void q_abstractspinbox_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_abstractspinbox_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_abstractspinbox_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAbstractSpinBox*
/// @param callback double func(QAbstractSpinBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_abstractspinbox_on_get_decoded_metric_f(const void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractSpinBox*
/// @param callback void func(QAbstractSpinBox* self, const char* objectName)
///
void q_abstractspinbox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#dtor.QAbstractSpinBox)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractSpinBox*
///
void q_abstractspinbox_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#public-types)

typedef enum {
    QABSTRACTSPINBOX_STEPENABLEDFLAG_STEPNONE = 0,
    QABSTRACTSPINBOX_STEPENABLEDFLAG_STEPUPENABLED = 1,
    QABSTRACTSPINBOX_STEPENABLEDFLAG_STEPDOWNENABLED = 2
} QAbstractSpinBox__StepEnabledFlag;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#public-types)

typedef enum {
    QABSTRACTSPINBOX_BUTTONSYMBOLS_UPDOWNARROWS = 0,
    QABSTRACTSPINBOX_BUTTONSYMBOLS_PLUSMINUS = 1,
    QABSTRACTSPINBOX_BUTTONSYMBOLS_NOBUTTONS = 2
} QAbstractSpinBox__ButtonSymbols;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#public-types)

typedef enum {
    QABSTRACTSPINBOX_CORRECTIONMODE_CORRECTTOPREVIOUSVALUE = 0,
    QABSTRACTSPINBOX_CORRECTIONMODE_CORRECTTONEARESTVALUE = 1
} QAbstractSpinBox__CorrectionMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#public-types)

typedef enum {
    QABSTRACTSPINBOX_STEPTYPE_DEFAULTSTEPTYPE = 0,
    QABSTRACTSPINBOX_STEPTYPE_ADAPTIVEDECIMALSTEPTYPE = 1
} QAbstractSpinBox__StepType;

#endif
