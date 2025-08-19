#pragma once
#ifndef SRCQT6C_LIBQABSTRACTSPINBOX_H
#define SRCQT6C_LIBQABSTRACTSPINBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractspinbox.html

/// q_abstractspinbox_new constructs a new QAbstractSpinBox object.
///
/// @param parent QWidget*
QAbstractSpinBox* q_abstractspinbox_new(void* parent);

/// q_abstractspinbox_new2 constructs a new QAbstractSpinBox object.
///
QAbstractSpinBox* q_abstractspinbox_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAbstractSpinBox*
const QMetaObject* q_abstractspinbox_meta_object(void* self);

/// @param self QAbstractSpinBox*
/// @param param1 const char*
void* q_abstractspinbox_metacast(void* self, const char* param1);

/// @param self QAbstractSpinBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_abstractspinbox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback int32_t fn(QAbstractSpinBox*, enum QMetaObject__Call, int, void*)
void q_abstractspinbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_abstractspinbox_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_abstractspinbox_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
///
/// @param self QAbstractSpinBox*
///
/// @return enum QAbstractSpinBox__ButtonSymbols
int32_t q_abstractspinbox_button_symbols(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
///
/// @param self QAbstractSpinBox*
/// @param bs enum QAbstractSpinBox__ButtonSymbols
void q_abstractspinbox_set_button_symbols(void* self, int32_t bs);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
///
/// @param self QAbstractSpinBox*
/// @param cm enum QAbstractSpinBox__CorrectionMode
void q_abstractspinbox_set_correction_mode(void* self, int32_t cm);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
///
/// @param self QAbstractSpinBox*
///
/// @return enum QAbstractSpinBox__CorrectionMode
int32_t q_abstractspinbox_correction_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_has_acceptable_input(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
const char* q_abstractspinbox_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
const char* q_abstractspinbox_special_value_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
///
/// @param self QAbstractSpinBox*
/// @param txt const char*
void q_abstractspinbox_set_special_value_text(void* self, const char* txt);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_wrapping(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
///
/// @param self QAbstractSpinBox*
/// @param w bool
void q_abstractspinbox_set_wrapping(void* self, bool w);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
///
/// @param self QAbstractSpinBox*
/// @param r bool
void q_abstractspinbox_set_read_only(void* self, bool r);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_read_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
///
/// @param self QAbstractSpinBox*
/// @param kt bool
void q_abstractspinbox_set_keyboard_tracking(void* self, bool kt);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_keyboard_tracking(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
///
/// @param self QAbstractSpinBox*
/// @param flag flag of enum Qt__AlignmentFlag
void q_abstractspinbox_set_alignment(void* self, int64_t flag);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
///
/// @param self QAbstractSpinBox*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_abstractspinbox_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
///
/// @param self QAbstractSpinBox*
/// @param frame bool
void q_abstractspinbox_set_frame(void* self, bool frame);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_has_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
///
/// @param self QAbstractSpinBox*
/// @param on bool
void q_abstractspinbox_set_accelerated(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_accelerated(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
///
/// @param self QAbstractSpinBox*
/// @param shown bool
void q_abstractspinbox_set_group_separator_shown(void* self, bool shown);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_group_separator_shown(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// @param self QAbstractSpinBox*
QSize* q_abstractspinbox_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback QSize* fn()
void q_abstractspinbox_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
QSize* q_abstractspinbox_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// @param self QAbstractSpinBox*
QSize* q_abstractspinbox_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback QSize* fn()
void q_abstractspinbox_on_minimum_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
QSize* q_abstractspinbox_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_interpret_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
bool q_abstractspinbox_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback bool fn(QAbstractSpinBox*, QEvent*)
void q_abstractspinbox_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
bool q_abstractspinbox_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// @param self QAbstractSpinBox*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_abstractspinbox_input_method_query(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback QVariant* fn(QAbstractSpinBox*, enum Qt__InputMethodQuery)
void q_abstractspinbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_abstractspinbox_qbase_input_method_query(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#validate)
///
/// @param self QAbstractSpinBox*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
int32_t q_abstractspinbox_validate(void* self, const char* input, int* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback int32_t fn(QAbstractSpinBox*, const char*, int*)
void q_abstractspinbox_on_validate(void* self, int32_t (*callback)(void*, const char*, int*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#validate)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
int32_t q_abstractspinbox_qbase_validate(void* self, const char* input, int* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#fixup)
///
/// @param self QAbstractSpinBox*
/// @param input const char*
void q_abstractspinbox_fixup(void* self, const char* input);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#fixup)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, const char*)
void q_abstractspinbox_on_fixup(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#fixup)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param input const char*
void q_abstractspinbox_qbase_fixup(void* self, const char* input);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// @param self QAbstractSpinBox*
/// @param steps int
void q_abstractspinbox_step_by(void* self, int steps);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, int)
void q_abstractspinbox_on_step_by(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param steps int
void q_abstractspinbox_qbase_step_by(void* self, int steps);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_step_up(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_step_down(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_select_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn()
void q_abstractspinbox_on_clear(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_qbase_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QResizeEvent*
void q_abstractspinbox_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QResizeEvent*)
void q_abstractspinbox_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QResizeEvent*
void q_abstractspinbox_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QKeyEvent*
void q_abstractspinbox_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QKeyEvent*)
void q_abstractspinbox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QKeyEvent*
void q_abstractspinbox_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QKeyEvent*
void q_abstractspinbox_key_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QKeyEvent*)
void q_abstractspinbox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QKeyEvent*
void q_abstractspinbox_qbase_key_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QWheelEvent*
void q_abstractspinbox_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QWheelEvent*)
void q_abstractspinbox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QWheelEvent*
void q_abstractspinbox_qbase_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QFocusEvent*
void q_abstractspinbox_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QFocusEvent*)
void q_abstractspinbox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QFocusEvent*
void q_abstractspinbox_qbase_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QFocusEvent*
void q_abstractspinbox_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QFocusEvent*)
void q_abstractspinbox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QFocusEvent*
void q_abstractspinbox_qbase_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QContextMenuEvent*
void q_abstractspinbox_context_menu_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QContextMenuEvent*)
void q_abstractspinbox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QContextMenuEvent*
void q_abstractspinbox_qbase_context_menu_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
void q_abstractspinbox_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QEvent*)
void q_abstractspinbox_on_change_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
void q_abstractspinbox_qbase_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QCloseEvent*
void q_abstractspinbox_close_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QCloseEvent*)
void q_abstractspinbox_on_close_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QCloseEvent*
void q_abstractspinbox_qbase_close_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QHideEvent*
void q_abstractspinbox_hide_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QHideEvent*)
void q_abstractspinbox_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QHideEvent*
void q_abstractspinbox_qbase_hide_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
void q_abstractspinbox_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QMouseEvent*)
void q_abstractspinbox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
void q_abstractspinbox_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
void q_abstractspinbox_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QMouseEvent*)
void q_abstractspinbox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
void q_abstractspinbox_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
void q_abstractspinbox_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QMouseEvent*)
void q_abstractspinbox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
void q_abstractspinbox_qbase_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QTimerEvent*
void q_abstractspinbox_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QTimerEvent*)
void q_abstractspinbox_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QTimerEvent*
void q_abstractspinbox_qbase_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QPaintEvent*
void q_abstractspinbox_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QPaintEvent*)
void q_abstractspinbox_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QPaintEvent*
void q_abstractspinbox_qbase_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// @param self QAbstractSpinBox*
/// @param event QShowEvent*
void q_abstractspinbox_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QShowEvent*)
void q_abstractspinbox_on_show_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param event QShowEvent*
void q_abstractspinbox_qbase_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// @param self QAbstractSpinBox*
/// @param option QStyleOptionSpinBox*
void q_abstractspinbox_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QStyleOptionSpinBox*)
void q_abstractspinbox_on_init_style_option(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param option QStyleOptionSpinBox*
void q_abstractspinbox_qbase_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// @param self QAbstractSpinBox*
QLineEdit* q_abstractspinbox_line_edit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback QLineEdit* fn()
void q_abstractspinbox_on_line_edit(void* self, QLineEdit* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
QLineEdit* q_abstractspinbox_qbase_line_edit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// @param self QAbstractSpinBox*
/// @param edit QLineEdit*
void q_abstractspinbox_set_line_edit(void* self, void* edit);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QLineEdit*)
void q_abstractspinbox_on_set_line_edit(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
/// @param edit QLineEdit*
void q_abstractspinbox_qbase_set_line_edit(void* self, void* edit);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// @param self QAbstractSpinBox*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
int64_t q_abstractspinbox_step_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractSpinBox*
/// @param callback int64_t fn()
void q_abstractspinbox_on_step_enabled(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Base class method implementation
///
/// @param self QAbstractSpinBox*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
int64_t q_abstractspinbox_qbase_step_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_editing_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*)
void q_abstractspinbox_on_editing_finished(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_abstractspinbox_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_abstractspinbox_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QAbstractSpinBox*
uintptr_t q_abstractspinbox_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QAbstractSpinBox*
uintptr_t q_abstractspinbox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QAbstractSpinBox*
uintptr_t q_abstractspinbox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QAbstractSpinBox*
QStyle* q_abstractspinbox_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QAbstractSpinBox*
/// @param style QStyle*
void q_abstractspinbox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QAbstractSpinBox*
///
/// @return enum Qt__WindowModality
int32_t q_abstractspinbox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QAbstractSpinBox*
/// @param windowModality enum Qt__WindowModality
void q_abstractspinbox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QAbstractSpinBox*
/// @param param1 QWidget*
bool q_abstractspinbox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QAbstractSpinBox*
/// @param enabled bool
void q_abstractspinbox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QAbstractSpinBox*
/// @param disabled bool
void q_abstractspinbox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QAbstractSpinBox*
/// @param windowModified bool
void q_abstractspinbox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QAbstractSpinBox*
QRect* q_abstractspinbox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QAbstractSpinBox*
const QRect* q_abstractspinbox_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QAbstractSpinBox*
QRect* q_abstractspinbox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QAbstractSpinBox*
QPoint* q_abstractspinbox_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QAbstractSpinBox*
QSize* q_abstractspinbox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QAbstractSpinBox*
QSize* q_abstractspinbox_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QAbstractSpinBox*
QRect* q_abstractspinbox_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QAbstractSpinBox*
QRect* q_abstractspinbox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QAbstractSpinBox*
QRegion* q_abstractspinbox_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QAbstractSpinBox*
QSize* q_abstractspinbox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QAbstractSpinBox*
QSize* q_abstractspinbox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QAbstractSpinBox*
/// @param minimumSize QSize*
void q_abstractspinbox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QAbstractSpinBox*
/// @param minw int
/// @param minh int
void q_abstractspinbox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QAbstractSpinBox*
/// @param maximumSize QSize*
void q_abstractspinbox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QAbstractSpinBox*
/// @param maxw int
/// @param maxh int
void q_abstractspinbox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QAbstractSpinBox*
/// @param minw int
void q_abstractspinbox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QAbstractSpinBox*
/// @param minh int
void q_abstractspinbox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QAbstractSpinBox*
/// @param maxw int
void q_abstractspinbox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QAbstractSpinBox*
/// @param maxh int
void q_abstractspinbox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QAbstractSpinBox*
QSize* q_abstractspinbox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QAbstractSpinBox*
/// @param sizeIncrement QSize*
void q_abstractspinbox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QAbstractSpinBox*
/// @param w int
/// @param h int
void q_abstractspinbox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QAbstractSpinBox*
QSize* q_abstractspinbox_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QAbstractSpinBox*
/// @param baseSize QSize*
void q_abstractspinbox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QAbstractSpinBox*
/// @param basew int
/// @param baseh int
void q_abstractspinbox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QAbstractSpinBox*
/// @param fixedSize QSize*
void q_abstractspinbox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QAbstractSpinBox*
/// @param w int
/// @param h int
void q_abstractspinbox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QAbstractSpinBox*
/// @param w int
void q_abstractspinbox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QAbstractSpinBox*
/// @param h int
void q_abstractspinbox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QAbstractSpinBox*
/// @param param1 QPointF*
QPointF* q_abstractspinbox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QAbstractSpinBox*
/// @param param1 QPoint*
QPoint* q_abstractspinbox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QAbstractSpinBox*
/// @param param1 QPointF*
QPointF* q_abstractspinbox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QAbstractSpinBox*
/// @param param1 QPoint*
QPoint* q_abstractspinbox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QAbstractSpinBox*
/// @param param1 QPointF*
QPointF* q_abstractspinbox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QAbstractSpinBox*
/// @param param1 QPoint*
QPoint* q_abstractspinbox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QAbstractSpinBox*
/// @param param1 QPointF*
QPointF* q_abstractspinbox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QAbstractSpinBox*
/// @param param1 QPoint*
QPoint* q_abstractspinbox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QAbstractSpinBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_abstractspinbox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QAbstractSpinBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_abstractspinbox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QAbstractSpinBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_abstractspinbox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QAbstractSpinBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_abstractspinbox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QAbstractSpinBox*
QWidget* q_abstractspinbox_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QAbstractSpinBox*
QWidget* q_abstractspinbox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QAbstractSpinBox*
QWidget* q_abstractspinbox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QAbstractSpinBox*
const QPalette* q_abstractspinbox_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QAbstractSpinBox*
/// @param palette QPalette*
void q_abstractspinbox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QAbstractSpinBox*
/// @param backgroundRole enum QPalette__ColorRole
void q_abstractspinbox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QAbstractSpinBox*
///
/// @return enum QPalette__ColorRole
int32_t q_abstractspinbox_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QAbstractSpinBox*
/// @param foregroundRole enum QPalette__ColorRole
void q_abstractspinbox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QAbstractSpinBox*
///
/// @return enum QPalette__ColorRole
int32_t q_abstractspinbox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QAbstractSpinBox*
const QFont* q_abstractspinbox_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QAbstractSpinBox*
/// @param font QFont*
void q_abstractspinbox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QAbstractSpinBox*
QFontMetrics* q_abstractspinbox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QAbstractSpinBox*
QFontInfo* q_abstractspinbox_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QAbstractSpinBox*
QCursor* q_abstractspinbox_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QAbstractSpinBox*
/// @param cursor QCursor*
void q_abstractspinbox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QAbstractSpinBox*
/// @param enable bool
void q_abstractspinbox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QAbstractSpinBox*
/// @param enable bool
void q_abstractspinbox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QAbstractSpinBox*
/// @param mask QBitmap*
void q_abstractspinbox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QAbstractSpinBox*
/// @param mask QRegion*
void q_abstractspinbox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QAbstractSpinBox*
QRegion* q_abstractspinbox_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param target QPaintDevice*
void q_abstractspinbox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param painter QPainter*
void q_abstractspinbox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QAbstractSpinBox*
QPixmap* q_abstractspinbox_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QAbstractSpinBox*
QGraphicsEffect* q_abstractspinbox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QAbstractSpinBox*
/// @param effect QGraphicsEffect*
void q_abstractspinbox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QAbstractSpinBox*
/// @param typeVal enum Qt__GestureType
void q_abstractspinbox_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QAbstractSpinBox*
/// @param typeVal enum Qt__GestureType
void q_abstractspinbox_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QAbstractSpinBox*
/// @param windowTitle const char*
void q_abstractspinbox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QAbstractSpinBox*
/// @param styleSheet const char*
void q_abstractspinbox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
const char* q_abstractspinbox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
const char* q_abstractspinbox_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QAbstractSpinBox*
/// @param icon QIcon*
void q_abstractspinbox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QAbstractSpinBox*
QIcon* q_abstractspinbox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QAbstractSpinBox*
/// @param windowIconText const char*
void q_abstractspinbox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
const char* q_abstractspinbox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QAbstractSpinBox*
/// @param windowRole const char*
void q_abstractspinbox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
const char* q_abstractspinbox_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QAbstractSpinBox*
/// @param filePath const char*
void q_abstractspinbox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
const char* q_abstractspinbox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QAbstractSpinBox*
/// @param level double
void q_abstractspinbox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QAbstractSpinBox*
double q_abstractspinbox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QAbstractSpinBox*
/// @param toolTip const char*
void q_abstractspinbox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
const char* q_abstractspinbox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QAbstractSpinBox*
/// @param msec int
void q_abstractspinbox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QAbstractSpinBox*
/// @param statusTip const char*
void q_abstractspinbox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
const char* q_abstractspinbox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QAbstractSpinBox*
/// @param whatsThis const char*
void q_abstractspinbox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
const char* q_abstractspinbox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
const char* q_abstractspinbox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QAbstractSpinBox*
/// @param name const char*
void q_abstractspinbox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
const char* q_abstractspinbox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QAbstractSpinBox*
/// @param description const char*
void q_abstractspinbox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QAbstractSpinBox*
/// @param direction enum Qt__LayoutDirection
void q_abstractspinbox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QAbstractSpinBox*
///
/// @return enum Qt__LayoutDirection
int32_t q_abstractspinbox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QAbstractSpinBox*
/// @param locale QLocale*
void q_abstractspinbox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QAbstractSpinBox*
QLocale* q_abstractspinbox_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QAbstractSpinBox*
/// @param reason enum Qt__FocusReason
void q_abstractspinbox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QAbstractSpinBox*
///
/// @return enum Qt__FocusPolicy
int32_t q_abstractspinbox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QAbstractSpinBox*
/// @param policy enum Qt__FocusPolicy
void q_abstractspinbox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_abstractspinbox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QAbstractSpinBox*
/// @param focusProxy QWidget*
void q_abstractspinbox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QAbstractSpinBox*
QWidget* q_abstractspinbox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QAbstractSpinBox*
///
/// @return enum Qt__ContextMenuPolicy
int32_t q_abstractspinbox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QAbstractSpinBox*
/// @param policy enum Qt__ContextMenuPolicy
void q_abstractspinbox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QAbstractSpinBox*
/// @param param1 QCursor*
void q_abstractspinbox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QAbstractSpinBox*
/// @param key QKeySequence*
int32_t q_abstractspinbox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QAbstractSpinBox*
/// @param id int
void q_abstractspinbox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QAbstractSpinBox*
/// @param id int
void q_abstractspinbox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QAbstractSpinBox*
/// @param id int
void q_abstractspinbox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_abstractspinbox_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_abstractspinbox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QAbstractSpinBox*
/// @param enable bool
void q_abstractspinbox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QAbstractSpinBox*
QGraphicsProxyWidget* q_abstractspinbox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_abstractspinbox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractSpinBox*
/// @param param1 QRect*
void q_abstractspinbox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractSpinBox*
/// @param param1 QRegion*
void q_abstractspinbox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_abstractspinbox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractSpinBox*
/// @param param1 QRect*
void q_abstractspinbox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractSpinBox*
/// @param param1 QRegion*
void q_abstractspinbox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QAbstractSpinBox*
/// @param hidden bool
void q_abstractspinbox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QAbstractSpinBox*
/// @param param1 QWidget*
void q_abstractspinbox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QAbstractSpinBox*
/// @param x int
/// @param y int
void q_abstractspinbox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QAbstractSpinBox*
/// @param param1 QPoint*
void q_abstractspinbox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QAbstractSpinBox*
/// @param w int
/// @param h int
void q_abstractspinbox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QAbstractSpinBox*
/// @param param1 QSize*
void q_abstractspinbox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QAbstractSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_abstractspinbox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QAbstractSpinBox*
/// @param geometry QRect*
void q_abstractspinbox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
char* q_abstractspinbox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QAbstractSpinBox*
/// @param geometry const char*
bool q_abstractspinbox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QAbstractSpinBox*
/// @param param1 QWidget*
bool q_abstractspinbox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QAbstractSpinBox*
///
/// @return flag of enum Qt__WindowState
int64_t q_abstractspinbox_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QAbstractSpinBox*
/// @param state flag of enum Qt__WindowState
void q_abstractspinbox_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QAbstractSpinBox*
/// @param state flag of enum Qt__WindowState
void q_abstractspinbox_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QAbstractSpinBox*
QSizePolicy* q_abstractspinbox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QAbstractSpinBox*
/// @param sizePolicy QSizePolicy*
void q_abstractspinbox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QAbstractSpinBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_abstractspinbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QAbstractSpinBox*
QRegion* q_abstractspinbox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QAbstractSpinBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_abstractspinbox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QAbstractSpinBox*
/// @param margins QMargins*
void q_abstractspinbox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QAbstractSpinBox*
QMargins* q_abstractspinbox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QAbstractSpinBox*
QRect* q_abstractspinbox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QAbstractSpinBox*
QLayout* q_abstractspinbox_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QAbstractSpinBox*
/// @param layout QLayout*
void q_abstractspinbox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QAbstractSpinBox*
/// @param parent QWidget*
void q_abstractspinbox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QAbstractSpinBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_abstractspinbox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QAbstractSpinBox*
/// @param dx int
/// @param dy int
void q_abstractspinbox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QAbstractSpinBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_abstractspinbox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QAbstractSpinBox*
QWidget* q_abstractspinbox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QAbstractSpinBox*
QWidget* q_abstractspinbox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QAbstractSpinBox*
QWidget* q_abstractspinbox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QAbstractSpinBox*
/// @param on bool
void q_abstractspinbox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractSpinBox*
/// @param action QAction*
void q_abstractspinbox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QAbstractSpinBox*
/// @param actions libqt_list /* of QAction* */
void q_abstractspinbox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QAbstractSpinBox*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_abstractspinbox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QAbstractSpinBox*
/// @param before QAction*
/// @param action QAction*
void q_abstractspinbox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QAbstractSpinBox*
/// @param action QAction*
void q_abstractspinbox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QAbstractSpinBox*
libqt_list /* of QAction* */ q_abstractspinbox_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractSpinBox*
/// @param text const char*
QAction* q_abstractspinbox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractSpinBox*
/// @param icon QIcon*
/// @param text const char*
QAction* q_abstractspinbox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractSpinBox*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_abstractspinbox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractSpinBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_abstractspinbox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QAbstractSpinBox*
QWidget* q_abstractspinbox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QAbstractSpinBox*
/// @param typeVal flag of enum Qt__WindowType
void q_abstractspinbox_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QAbstractSpinBox*
///
/// @return flag of enum Qt__WindowType
int64_t q_abstractspinbox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QAbstractSpinBox*
/// @param param1 enum Qt__WindowType
void q_abstractspinbox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QAbstractSpinBox*
/// @param typeVal flag of enum Qt__WindowType
void q_abstractspinbox_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QAbstractSpinBox*
///
/// @return enum Qt__WindowType
int64_t q_abstractspinbox_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_abstractspinbox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QAbstractSpinBox*
/// @param x int
/// @param y int
QWidget* q_abstractspinbox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QAbstractSpinBox*
/// @param p QPoint*
QWidget* q_abstractspinbox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QAbstractSpinBox*
/// @param p QPointF*
QWidget* q_abstractspinbox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QAbstractSpinBox*
/// @param param1 enum Qt__WidgetAttribute
void q_abstractspinbox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QAbstractSpinBox*
/// @param param1 enum Qt__WidgetAttribute
bool q_abstractspinbox_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QAbstractSpinBox*
/// @param child QWidget*
bool q_abstractspinbox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QAbstractSpinBox*
/// @param enabled bool
void q_abstractspinbox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QAbstractSpinBox*
QBackingStore* q_abstractspinbox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QAbstractSpinBox*
QWindow* q_abstractspinbox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QAbstractSpinBox*
QScreen* q_abstractspinbox_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QAbstractSpinBox*
/// @param screen QScreen*
void q_abstractspinbox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_abstractspinbox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QAbstractSpinBox*
/// @param title const char*
void q_abstractspinbox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, const char*)
void q_abstractspinbox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QAbstractSpinBox*
/// @param icon QIcon*
void q_abstractspinbox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QIcon*)
void q_abstractspinbox_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QAbstractSpinBox*
/// @param iconText const char*
void q_abstractspinbox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, const char*)
void q_abstractspinbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QAbstractSpinBox*
/// @param pos QPoint*
void q_abstractspinbox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QPoint*)
void q_abstractspinbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QAbstractSpinBox*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_abstractspinbox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QAbstractSpinBox*
/// @param hints flag of enum Qt__InputMethodHint
void q_abstractspinbox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_abstractspinbox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_abstractspinbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_abstractspinbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_abstractspinbox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_abstractspinbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_abstractspinbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QAbstractSpinBox*
/// @param rectangle QRect*
QPixmap* q_abstractspinbox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QAbstractSpinBox*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_abstractspinbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QAbstractSpinBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_abstractspinbox_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QAbstractSpinBox*
/// @param id int
/// @param enable bool
void q_abstractspinbox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QAbstractSpinBox*
/// @param id int
/// @param enable bool
void q_abstractspinbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QAbstractSpinBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_abstractspinbox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QAbstractSpinBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_abstractspinbox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_abstractspinbox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_abstractspinbox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
const char* q_abstractspinbox_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractSpinBox*
/// @param name char*
void q_abstractspinbox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractSpinBox*
/// @param b bool
bool q_abstractspinbox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAbstractSpinBox*
QThread* q_abstractspinbox_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractSpinBox*
/// @param thread QThread*
bool q_abstractspinbox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractSpinBox*
/// @param interval int
int32_t q_abstractspinbox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractSpinBox*
/// @param id int
void q_abstractspinbox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractSpinBox*
/// @param id enum Qt__TimerId
void q_abstractspinbox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAbstractSpinBox*
libqt_list /* of QObject* */ q_abstractspinbox_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractSpinBox*
/// @param filterObj QObject*
void q_abstractspinbox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractSpinBox*
/// @param obj QObject*
void q_abstractspinbox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_abstractspinbox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractSpinBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_abstractspinbox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_abstractspinbox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_abstractspinbox_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractSpinBox*
/// @param name const char*
/// @param value QVariant*
bool q_abstractspinbox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractSpinBox*
/// @param name const char*
QVariant* q_abstractspinbox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractSpinBox*
const char** q_abstractspinbox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractSpinBox*
QBindingStorage* q_abstractspinbox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractSpinBox*
const QBindingStorage* q_abstractspinbox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*)
void q_abstractspinbox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAbstractSpinBox*
QObject* q_abstractspinbox_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAbstractSpinBox*
/// @param classname const char*
bool q_abstractspinbox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractSpinBox*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_abstractspinbox_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractSpinBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_abstractspinbox_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_abstractspinbox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractSpinBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_abstractspinbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSpinBox*
/// @param param1 QObject*
void q_abstractspinbox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QObject*)
void q_abstractspinbox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QAbstractSpinBox*
double q_abstractspinbox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QAbstractSpinBox*
double q_abstractspinbox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_abstractspinbox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_abstractspinbox_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback int32_t fn()
void q_abstractspinbox_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param visible bool
void q_abstractspinbox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param visible bool
void q_abstractspinbox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, bool)
void q_abstractspinbox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param param1 int
int32_t q_abstractspinbox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param param1 int
int32_t q_abstractspinbox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback int32_t fn(QAbstractSpinBox*, int)
void q_abstractspinbox_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback bool fn()
void q_abstractspinbox_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
QPaintEngine* q_abstractspinbox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
QPaintEngine* q_abstractspinbox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback QPaintEngine* fn()
void q_abstractspinbox_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
void q_abstractspinbox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QMouseEvent*
void q_abstractspinbox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QMouseEvent*)
void q_abstractspinbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QEnterEvent*
void q_abstractspinbox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QEnterEvent*
void q_abstractspinbox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QEnterEvent*)
void q_abstractspinbox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
void q_abstractspinbox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
void q_abstractspinbox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QEvent*)
void q_abstractspinbox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QMoveEvent*
void q_abstractspinbox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QMoveEvent*
void q_abstractspinbox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QMoveEvent*)
void q_abstractspinbox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QTabletEvent*
void q_abstractspinbox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QTabletEvent*
void q_abstractspinbox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QTabletEvent*)
void q_abstractspinbox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QActionEvent*
void q_abstractspinbox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QActionEvent*
void q_abstractspinbox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QActionEvent*)
void q_abstractspinbox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDragEnterEvent*
void q_abstractspinbox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDragEnterEvent*
void q_abstractspinbox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QDragEnterEvent*)
void q_abstractspinbox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDragMoveEvent*
void q_abstractspinbox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDragMoveEvent*
void q_abstractspinbox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QDragMoveEvent*)
void q_abstractspinbox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDragLeaveEvent*
void q_abstractspinbox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDragLeaveEvent*
void q_abstractspinbox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QDragLeaveEvent*)
void q_abstractspinbox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDropEvent*
void q_abstractspinbox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QDropEvent*
void q_abstractspinbox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QDropEvent*)
void q_abstractspinbox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_abstractspinbox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_abstractspinbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback bool fn(QAbstractSpinBox*, const char*, void*, intptr_t*)
void q_abstractspinbox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_abstractspinbox_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_abstractspinbox_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback int32_t fn(QAbstractSpinBox*, enum QPaintDevice__PaintDeviceMetric)
void q_abstractspinbox_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param painter QPainter*
void q_abstractspinbox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param painter QPainter*
void q_abstractspinbox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QPainter*)
void q_abstractspinbox_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param offset QPoint*
QPaintDevice* q_abstractspinbox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param offset QPoint*
QPaintDevice* q_abstractspinbox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback QPaintDevice* fn(QAbstractSpinBox*, QPoint*)
void q_abstractspinbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
QPainter* q_abstractspinbox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
QPainter* q_abstractspinbox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback QPainter* fn()
void q_abstractspinbox_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param param1 QInputMethodEvent*
void q_abstractspinbox_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param param1 QInputMethodEvent*
void q_abstractspinbox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QInputMethodEvent*)
void q_abstractspinbox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param next bool
bool q_abstractspinbox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param next bool
bool q_abstractspinbox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback bool fn(QAbstractSpinBox*, bool)
void q_abstractspinbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param watched QObject*
/// @param event QEvent*
bool q_abstractspinbox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param watched QObject*
/// @param event QEvent*
bool q_abstractspinbox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback bool fn(QAbstractSpinBox*, QObject*, QEvent*)
void q_abstractspinbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QChildEvent*
void q_abstractspinbox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QChildEvent*
void q_abstractspinbox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QChildEvent*)
void q_abstractspinbox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
void q_abstractspinbox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param event QEvent*
void q_abstractspinbox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QEvent*)
void q_abstractspinbox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param signal QMetaMethod*
void q_abstractspinbox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param signal QMetaMethod*
void q_abstractspinbox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QMetaMethod*)
void q_abstractspinbox_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param signal QMetaMethod*
void q_abstractspinbox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param signal QMetaMethod*
void q_abstractspinbox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, QMetaMethod*)
void q_abstractspinbox_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn()
void q_abstractspinbox_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn()
void q_abstractspinbox_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback void fn()
void q_abstractspinbox_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback bool fn()
void q_abstractspinbox_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
bool q_abstractspinbox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback bool fn()
void q_abstractspinbox_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
QObject* q_abstractspinbox_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
QObject* q_abstractspinbox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback QObject* fn()
void q_abstractspinbox_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
int32_t q_abstractspinbox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback int32_t fn()
void q_abstractspinbox_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param signal const char*
int32_t q_abstractspinbox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param signal const char*
int32_t q_abstractspinbox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback int32_t fn(QAbstractSpinBox*, const char*)
void q_abstractspinbox_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param signal QMetaMethod*
bool q_abstractspinbox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param signal QMetaMethod*
bool q_abstractspinbox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback bool fn(QAbstractSpinBox*, QMetaMethod*)
void q_abstractspinbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_abstractspinbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_abstractspinbox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractSpinBox*
/// @param callback double fn(QAbstractSpinBox*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric)
void q_abstractspinbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractSpinBox*
/// @param callback void fn(QAbstractSpinBox*, const char*)
void q_abstractspinbox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#dtor.QAbstractSpinBox)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractSpinBox*
void q_abstractspinbox_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractspinbox.html#types

typedef enum {
    QABSTRACTSPINBOX_STEPENABLEDFLAG_STEPNONE = 0,
    QABSTRACTSPINBOX_STEPENABLEDFLAG_STEPUPENABLED = 1,
    QABSTRACTSPINBOX_STEPENABLEDFLAG_STEPDOWNENABLED = 2
} QAbstractSpinBox__StepEnabledFlag;

typedef enum {
    QABSTRACTSPINBOX_BUTTONSYMBOLS_UPDOWNARROWS = 0,
    QABSTRACTSPINBOX_BUTTONSYMBOLS_PLUSMINUS = 1,
    QABSTRACTSPINBOX_BUTTONSYMBOLS_NOBUTTONS = 2
} QAbstractSpinBox__ButtonSymbols;

typedef enum {
    QABSTRACTSPINBOX_CORRECTIONMODE_CORRECTTOPREVIOUSVALUE = 0,
    QABSTRACTSPINBOX_CORRECTIONMODE_CORRECTTONEARESTVALUE = 1
} QAbstractSpinBox__CorrectionMode;

typedef enum {
    QABSTRACTSPINBOX_STEPTYPE_DEFAULTSTEPTYPE = 0,
    QABSTRACTSPINBOX_STEPTYPE_ADAPTIVEDECIMALSTEPTYPE = 1
} QAbstractSpinBox__StepType;

#endif
