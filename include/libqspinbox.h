#pragma once
#ifndef SRCQT6C_LIBQSPINBOX_H
#define SRCQT6C_LIBQSPINBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qspinbox.html

/// q_spinbox_new constructs a new QSpinBox object.
///
/// ``` QWidget* parent ```
QSpinBox* q_spinbox_new(void* parent);

/// q_spinbox_new2 constructs a new QSpinBox object.
///
///
QSpinBox* q_spinbox_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSpinBox* self ```
const QMetaObject* q_spinbox_meta_object(void* self);

/// ``` QSpinBox* self, const char* param1 ```
void* q_spinbox_metacast(void* self, const char* param1);

/// ``` QSpinBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_spinbox_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSpinBox* self, int32_t (*slot)(QSpinBox*, enum QMetaObject__Call, int, void*) ```
void q_spinbox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSpinBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_spinbox_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_spinbox_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#value)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#prefix)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_prefix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#setPrefix)
///
/// ``` QSpinBox* self, const char* prefix ```
void q_spinbox_set_prefix(void* self, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#suffix)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_suffix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#setSuffix)
///
/// ``` QSpinBox* self, const char* suffix ```
void q_spinbox_set_suffix(void* self, const char* suffix);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#cleanText)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_clean_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#singleStep)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_single_step(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#setSingleStep)
///
/// ``` QSpinBox* self, int val ```
void q_spinbox_set_single_step(void* self, int val);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#minimum)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_minimum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#setMinimum)
///
/// ``` QSpinBox* self, int min ```
void q_spinbox_set_minimum(void* self, int min);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#maximum)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_maximum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#setMaximum)
///
/// ``` QSpinBox* self, int max ```
void q_spinbox_set_maximum(void* self, int max);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#setRange)
///
/// ``` QSpinBox* self, int min, int max ```
void q_spinbox_set_range(void* self, int min, int max);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#stepType)
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_step_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#setStepType)
///
/// ``` QSpinBox* self, enum QAbstractSpinBox__StepType stepType ```
void q_spinbox_set_step_type(void* self, int64_t stepType);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#displayIntegerBase)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_display_integer_base(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#setDisplayIntegerBase)
///
/// ``` QSpinBox* self, int base ```
void q_spinbox_set_display_integer_base(void* self, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#event)
///
/// ``` QSpinBox* self, QEvent* event ```
bool q_spinbox_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QSpinBox* self, bool (*slot)(QSpinBox*, QEvent*) ```
void q_spinbox_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#event)
///
/// Base class method implementation
///
/// ``` QSpinBox* self, QEvent* event ```
bool q_spinbox_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#validate)
///
/// ``` QSpinBox* self, const char* input, int* pos ```
int64_t q_spinbox_validate(void* self, const char* input, int* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#validate)
///
/// Allows for overriding the related default method
///
/// ``` QSpinBox* self, int64_t (*slot)(QSpinBox*, const char*, int*) ```
void q_spinbox_on_validate(void* self, int64_t (*slot)(void*, const char*, int*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#validate)
///
/// Base class method implementation
///
/// ``` QSpinBox* self, const char* input, int* pos ```
int64_t q_spinbox_qbase_validate(void* self, const char* input, int* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
///
/// ``` QSpinBox* self, const char* text ```
int32_t q_spinbox_value_from_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
///
/// Allows for overriding the related default method
///
/// ``` QSpinBox* self, int32_t (*slot)(QSpinBox*, const char*) ```
void q_spinbox_on_value_from_text(void* self, int32_t (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
///
/// Base class method implementation
///
/// ``` QSpinBox* self, const char* text ```
int32_t q_spinbox_qbase_value_from_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
///
/// ``` QSpinBox* self, int val ```
const char* q_spinbox_text_from_value(void* self, int val);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
///
/// Allows for overriding the related default method
///
/// ``` QSpinBox* self, const char* (*slot)(QSpinBox*, int) ```
void q_spinbox_on_text_from_value(void* self, const char* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
///
/// Base class method implementation
///
/// ``` QSpinBox* self, int val ```
const char* q_spinbox_qbase_text_from_value(void* self, int val);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#fixup)
///
/// ``` QSpinBox* self, const char* str ```
void q_spinbox_fixup(void* self, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#fixup)
///
/// Allows for overriding the related default method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, const char*) ```
void q_spinbox_on_fixup(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#fixup)
///
/// Base class method implementation
///
/// ``` QSpinBox* self, const char* str ```
void q_spinbox_qbase_fixup(void* self, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#setValue)
///
/// ``` QSpinBox* self, int val ```
void q_spinbox_set_value(void* self, int val);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#valueChanged)
///
/// ``` QSpinBox* self, int param1 ```
void q_spinbox_value_changed(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#valueChanged)
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, int) ```
void q_spinbox_on_value_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#textChanged)
///
/// ``` QSpinBox* self, const char* param1 ```
void q_spinbox_text_changed(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#textChanged)
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, const char*) ```
void q_spinbox_on_text_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_spinbox_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_spinbox_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_button_symbols(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
///
/// ``` QSpinBox* self, enum QAbstractSpinBox__ButtonSymbols bs ```
void q_spinbox_set_button_symbols(void* self, int64_t bs);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
///
/// ``` QSpinBox* self, enum QAbstractSpinBox__CorrectionMode cm ```
void q_spinbox_set_correction_mode(void* self, int64_t cm);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_correction_mode(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// ``` QSpinBox* self ```
bool q_spinbox_has_acceptable_input(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_special_value_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
///
/// ``` QSpinBox* self, const char* txt ```
void q_spinbox_set_special_value_text(void* self, const char* txt);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
///
/// ``` QSpinBox* self ```
bool q_spinbox_wrapping(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
///
/// ``` QSpinBox* self, bool w ```
void q_spinbox_set_wrapping(void* self, bool w);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
///
/// ``` QSpinBox* self, bool r ```
void q_spinbox_set_read_only(void* self, bool r);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_read_only(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
///
/// ``` QSpinBox* self, bool kt ```
void q_spinbox_set_keyboard_tracking(void* self, bool kt);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
///
/// ``` QSpinBox* self ```
bool q_spinbox_keyboard_tracking(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
///
/// ``` QSpinBox* self, int flag ```
void q_spinbox_set_alignment(void* self, int64_t flag);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_alignment(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
///
/// ``` QSpinBox* self, bool frame ```
void q_spinbox_set_frame(void* self, bool frame);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
///
/// ``` QSpinBox* self ```
bool q_spinbox_has_frame(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
///
/// ``` QSpinBox* self, bool on ```
void q_spinbox_set_accelerated(void* self, bool on);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_accelerated(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
///
/// ``` QSpinBox* self, bool shown ```
void q_spinbox_set_group_separator_shown(void* self, bool shown);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_group_separator_shown(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
///
/// ``` QSpinBox* self ```
void q_spinbox_interpret_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
///
/// ``` QSpinBox* self ```
void q_spinbox_step_up(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
///
/// ``` QSpinBox* self ```
void q_spinbox_step_down(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
///
/// ``` QSpinBox* self ```
void q_spinbox_select_all(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// ``` QSpinBox* self ```
void q_spinbox_editing_finished(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// ``` QSpinBox* self, void (*slot)(QAbstractSpinBox*) ```
void q_spinbox_on_editing_finished(void* self, void (*slot)(void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QSpinBox* self ```
uintptr_t q_spinbox_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QSpinBox* self ```
void q_spinbox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QSpinBox* self ```
uintptr_t q_spinbox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QSpinBox* self ```
uintptr_t q_spinbox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QSpinBox* self ```
QStyle* q_spinbox_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QSpinBox* self, QStyle* style ```
void q_spinbox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QSpinBox* self, enum Qt__WindowModality windowModality ```
void q_spinbox_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QSpinBox* self, QWidget* param1 ```
bool q_spinbox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QSpinBox* self, bool enabled ```
void q_spinbox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QSpinBox* self, bool disabled ```
void q_spinbox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QSpinBox* self, bool windowModified ```
void q_spinbox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QSpinBox* self ```
QRect* q_spinbox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QSpinBox* self ```
const QRect* q_spinbox_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QSpinBox* self ```
QRect* q_spinbox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QSpinBox* self ```
QPoint* q_spinbox_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QSpinBox* self ```
QSize* q_spinbox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QSpinBox* self ```
QSize* q_spinbox_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QSpinBox* self ```
QRect* q_spinbox_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QSpinBox* self ```
QRect* q_spinbox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QSpinBox* self ```
QRegion* q_spinbox_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QSpinBox* self ```
QSize* q_spinbox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QSpinBox* self ```
QSize* q_spinbox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QSpinBox* self, QSize* minimumSize ```
void q_spinbox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QSpinBox* self, int minw, int minh ```
void q_spinbox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QSpinBox* self, QSize* maximumSize ```
void q_spinbox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QSpinBox* self, int maxw, int maxh ```
void q_spinbox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QSpinBox* self, int minw ```
void q_spinbox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QSpinBox* self, int minh ```
void q_spinbox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QSpinBox* self, int maxw ```
void q_spinbox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QSpinBox* self, int maxh ```
void q_spinbox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QSpinBox* self ```
QSize* q_spinbox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QSpinBox* self, QSize* sizeIncrement ```
void q_spinbox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QSpinBox* self, int w, int h ```
void q_spinbox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QSpinBox* self ```
QSize* q_spinbox_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QSpinBox* self, QSize* baseSize ```
void q_spinbox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QSpinBox* self, int basew, int baseh ```
void q_spinbox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QSpinBox* self, QSize* fixedSize ```
void q_spinbox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QSpinBox* self, int w, int h ```
void q_spinbox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QSpinBox* self, int w ```
void q_spinbox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QSpinBox* self, int h ```
void q_spinbox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QSpinBox* self, QPointF* param1 ```
QPointF* q_spinbox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QSpinBox* self, QPoint* param1 ```
QPoint* q_spinbox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QSpinBox* self, QPointF* param1 ```
QPointF* q_spinbox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QSpinBox* self, QPoint* param1 ```
QPoint* q_spinbox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QSpinBox* self, QPointF* param1 ```
QPointF* q_spinbox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QSpinBox* self, QPoint* param1 ```
QPoint* q_spinbox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QSpinBox* self, QPointF* param1 ```
QPointF* q_spinbox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QSpinBox* self, QPoint* param1 ```
QPoint* q_spinbox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QSpinBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_spinbox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QSpinBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_spinbox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QSpinBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_spinbox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QSpinBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_spinbox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QSpinBox* self ```
QWidget* q_spinbox_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QSpinBox* self ```
QWidget* q_spinbox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QSpinBox* self ```
QWidget* q_spinbox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QSpinBox* self ```
const QPalette* q_spinbox_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QSpinBox* self, QPalette* palette ```
void q_spinbox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QSpinBox* self, enum QPalette__ColorRole backgroundRole ```
void q_spinbox_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QSpinBox* self, enum QPalette__ColorRole foregroundRole ```
void q_spinbox_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QSpinBox* self ```
const QFont* q_spinbox_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QSpinBox* self, QFont* font ```
void q_spinbox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QSpinBox* self ```
QFontMetrics* q_spinbox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QSpinBox* self ```
QFontInfo* q_spinbox_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QSpinBox* self ```
QCursor* q_spinbox_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QSpinBox* self, QCursor* cursor ```
void q_spinbox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QSpinBox* self ```
void q_spinbox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QSpinBox* self, bool enable ```
void q_spinbox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QSpinBox* self ```
bool q_spinbox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QSpinBox* self ```
bool q_spinbox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QSpinBox* self, bool enable ```
void q_spinbox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QSpinBox* self ```
bool q_spinbox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QSpinBox* self, QBitmap* mask ```
void q_spinbox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QSpinBox* self, QRegion* mask ```
void q_spinbox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QSpinBox* self ```
QRegion* q_spinbox_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QSpinBox* self ```
void q_spinbox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSpinBox* self, QPaintDevice* target ```
void q_spinbox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSpinBox* self, QPainter* painter ```
void q_spinbox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QSpinBox* self ```
QPixmap* q_spinbox_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QSpinBox* self ```
QGraphicsEffect* q_spinbox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QSpinBox* self, QGraphicsEffect* effect ```
void q_spinbox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QSpinBox* self, enum Qt__GestureType typeVal ```
void q_spinbox_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QSpinBox* self, enum Qt__GestureType typeVal ```
void q_spinbox_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QSpinBox* self, const char* windowTitle ```
void q_spinbox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QSpinBox* self, const char* styleSheet ```
void q_spinbox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QSpinBox* self, QIcon* icon ```
void q_spinbox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QSpinBox* self ```
QIcon* q_spinbox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QSpinBox* self, const char* windowIconText ```
void q_spinbox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QSpinBox* self, const char* windowRole ```
void q_spinbox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QSpinBox* self, const char* filePath ```
void q_spinbox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QSpinBox* self, double level ```
void q_spinbox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QSpinBox* self ```
double q_spinbox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QSpinBox* self, const char* toolTip ```
void q_spinbox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QSpinBox* self, int msec ```
void q_spinbox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QSpinBox* self, const char* statusTip ```
void q_spinbox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QSpinBox* self, const char* whatsThis ```
void q_spinbox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QSpinBox* self, const char* name ```
void q_spinbox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QSpinBox* self, const char* description ```
void q_spinbox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QSpinBox* self, enum Qt__LayoutDirection direction ```
void q_spinbox_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QSpinBox* self ```
void q_spinbox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QSpinBox* self, QLocale* locale ```
void q_spinbox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QSpinBox* self ```
QLocale* q_spinbox_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QSpinBox* self ```
void q_spinbox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QSpinBox* self ```
void q_spinbox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QSpinBox* self ```
void q_spinbox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QSpinBox* self ```
void q_spinbox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QSpinBox* self, enum Qt__FocusReason reason ```
void q_spinbox_set_focus2(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QSpinBox* self, enum Qt__FocusPolicy policy ```
void q_spinbox_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QSpinBox* self ```
bool q_spinbox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_spinbox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QSpinBox* self, QWidget* focusProxy ```
void q_spinbox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QSpinBox* self ```
QWidget* q_spinbox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QSpinBox* self, enum Qt__ContextMenuPolicy policy ```
void q_spinbox_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QSpinBox* self ```
void q_spinbox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QSpinBox* self, QCursor* param1 ```
void q_spinbox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QSpinBox* self ```
void q_spinbox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QSpinBox* self ```
void q_spinbox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QSpinBox* self ```
void q_spinbox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QSpinBox* self, QKeySequence* key ```
int32_t q_spinbox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QSpinBox* self, int id ```
void q_spinbox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QSpinBox* self, int id ```
void q_spinbox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QSpinBox* self, int id ```
void q_spinbox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_spinbox_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_spinbox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QSpinBox* self ```
bool q_spinbox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QSpinBox* self, bool enable ```
void q_spinbox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QSpinBox* self ```
QGraphicsProxyWidget* q_spinbox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSpinBox* self ```
void q_spinbox_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSpinBox* self ```
void q_spinbox_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSpinBox* self, int x, int y, int w, int h ```
void q_spinbox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSpinBox* self, QRect* param1 ```
void q_spinbox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSpinBox* self, QRegion* param1 ```
void q_spinbox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSpinBox* self, int x, int y, int w, int h ```
void q_spinbox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSpinBox* self, QRect* param1 ```
void q_spinbox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSpinBox* self, QRegion* param1 ```
void q_spinbox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QSpinBox* self, bool hidden ```
void q_spinbox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QSpinBox* self ```
void q_spinbox_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QSpinBox* self ```
void q_spinbox_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QSpinBox* self ```
void q_spinbox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QSpinBox* self ```
void q_spinbox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QSpinBox* self ```
void q_spinbox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QSpinBox* self ```
void q_spinbox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QSpinBox* self ```
bool q_spinbox_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QSpinBox* self ```
void q_spinbox_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QSpinBox* self ```
void q_spinbox_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QSpinBox* self, QWidget* param1 ```
void q_spinbox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QSpinBox* self, int x, int y ```
void q_spinbox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QSpinBox* self, QPoint* param1 ```
void q_spinbox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QSpinBox* self, int w, int h ```
void q_spinbox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QSpinBox* self, QSize* param1 ```
void q_spinbox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QSpinBox* self, int x, int y, int w, int h ```
void q_spinbox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QSpinBox* self, QRect* geometry ```
void q_spinbox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QSpinBox* self ```
char* q_spinbox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QSpinBox* self, const char* geometry ```
bool q_spinbox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QSpinBox* self ```
void q_spinbox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QSpinBox* self, QWidget* param1 ```
bool q_spinbox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QSpinBox* self, int state ```
void q_spinbox_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QSpinBox* self, int state ```
void q_spinbox_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QSpinBox* self ```
QSizePolicy* q_spinbox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QSpinBox* self, QSizePolicy* sizePolicy ```
void q_spinbox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QSpinBox* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_spinbox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QSpinBox* self ```
QRegion* q_spinbox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QSpinBox* self, int left, int top, int right, int bottom ```
void q_spinbox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QSpinBox* self, QMargins* margins ```
void q_spinbox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QSpinBox* self ```
QMargins* q_spinbox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QSpinBox* self ```
QRect* q_spinbox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QSpinBox* self ```
QLayout* q_spinbox_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QSpinBox* self, QLayout* layout ```
void q_spinbox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QSpinBox* self ```
void q_spinbox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QSpinBox* self, QWidget* parent ```
void q_spinbox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QSpinBox* self, QWidget* parent, int f ```
void q_spinbox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QSpinBox* self, int dx, int dy ```
void q_spinbox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QSpinBox* self, int dx, int dy, QRect* param3 ```
void q_spinbox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QSpinBox* self ```
QWidget* q_spinbox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QSpinBox* self ```
QWidget* q_spinbox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QSpinBox* self ```
QWidget* q_spinbox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QSpinBox* self ```
bool q_spinbox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QSpinBox* self, bool on ```
void q_spinbox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSpinBox* self, QAction* action ```
void q_spinbox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QSpinBox* self, libqt_list /* of QAction* */ actions ```
void q_spinbox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QSpinBox* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_spinbox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QSpinBox* self, QAction* before, QAction* action ```
void q_spinbox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QSpinBox* self, QAction* action ```
void q_spinbox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QSpinBox* self ```
libqt_list /* of QAction* */ q_spinbox_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSpinBox* self, const char* text ```
QAction* q_spinbox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSpinBox* self, QIcon* icon, const char* text ```
QAction* q_spinbox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSpinBox* self, const char* text, QKeySequence* shortcut ```
QAction* q_spinbox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSpinBox* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_spinbox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QSpinBox* self ```
QWidget* q_spinbox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QSpinBox* self, int typeVal ```
void q_spinbox_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QSpinBox* self, enum Qt__WindowType param1 ```
void q_spinbox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QSpinBox* self, int typeVal ```
void q_spinbox_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_spinbox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QSpinBox* self, int x, int y ```
QWidget* q_spinbox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QSpinBox* self, QPoint* p ```
QWidget* q_spinbox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QSpinBox* self, QPointF* p ```
QWidget* q_spinbox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QSpinBox* self, enum Qt__WidgetAttribute param1 ```
void q_spinbox_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QSpinBox* self, enum Qt__WidgetAttribute param1 ```
bool q_spinbox_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QSpinBox* self ```
void q_spinbox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QSpinBox* self, QWidget* child ```
bool q_spinbox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QSpinBox* self ```
bool q_spinbox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QSpinBox* self, bool enabled ```
void q_spinbox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QSpinBox* self ```
QBackingStore* q_spinbox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QSpinBox* self ```
QWindow* q_spinbox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QSpinBox* self ```
QScreen* q_spinbox_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QSpinBox* self, QScreen* screen ```
void q_spinbox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_spinbox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QSpinBox* self, const char* title ```
void q_spinbox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QSpinBox* self, void (*slot)(QWidget*, const char*) ```
void q_spinbox_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QSpinBox* self, QIcon* icon ```
void q_spinbox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QSpinBox* self, void (*slot)(QWidget*, QIcon*) ```
void q_spinbox_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QSpinBox* self, const char* iconText ```
void q_spinbox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QSpinBox* self, void (*slot)(QWidget*, const char*) ```
void q_spinbox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QSpinBox* self, QPoint* pos ```
void q_spinbox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QSpinBox* self, void (*slot)(QWidget*, QPoint*) ```
void q_spinbox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QSpinBox* self, int hints ```
void q_spinbox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSpinBox* self, QPaintDevice* target, QPoint* targetOffset ```
void q_spinbox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSpinBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_spinbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSpinBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_spinbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSpinBox* self, QPainter* painter, QPoint* targetOffset ```
void q_spinbox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSpinBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_spinbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSpinBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_spinbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QSpinBox* self, QRect* rectangle ```
QPixmap* q_spinbox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QSpinBox* self, enum Qt__GestureType typeVal, int flags ```
void q_spinbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QSpinBox* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_spinbox_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QSpinBox* self, int id, bool enable ```
void q_spinbox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QSpinBox* self, int id, bool enable ```
void q_spinbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QSpinBox* self, enum Qt__WindowType param1, bool on ```
void q_spinbox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QSpinBox* self, enum Qt__WidgetAttribute param1, bool on ```
void q_spinbox_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_spinbox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_spinbox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSpinBox* self ```
const char* q_spinbox_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSpinBox* self, char* name ```
void q_spinbox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSpinBox* self ```
bool q_spinbox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSpinBox* self ```
bool q_spinbox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSpinBox* self, bool b ```
bool q_spinbox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSpinBox* self ```
QThread* q_spinbox_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSpinBox* self, QThread* thread ```
bool q_spinbox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSpinBox* self, int interval ```
int32_t q_spinbox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSpinBox* self, int id ```
void q_spinbox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSpinBox* self, enum Qt__TimerId id ```
void q_spinbox_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSpinBox* self ```
libqt_list /* of QObject* */ q_spinbox_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSpinBox* self, QObject* filterObj ```
void q_spinbox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSpinBox* self, QObject* obj ```
void q_spinbox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_spinbox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSpinBox* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_spinbox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_spinbox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_spinbox_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSpinBox* self ```
void q_spinbox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSpinBox* self ```
void q_spinbox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSpinBox* self, const char* name, QVariant* value ```
bool q_spinbox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSpinBox* self, const char* name ```
QVariant* q_spinbox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSpinBox* self ```
const char** q_spinbox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSpinBox* self ```
QBindingStorage* q_spinbox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSpinBox* self ```
const QBindingStorage* q_spinbox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSpinBox* self ```
void q_spinbox_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSpinBox* self, void (*slot)(QObject*) ```
void q_spinbox_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSpinBox* self ```
QObject* q_spinbox_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSpinBox* self, const char* classname ```
bool q_spinbox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSpinBox* self ```
void q_spinbox_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSpinBox* self, QThread* thread, Disambiguated_t* param2 ```
bool q_spinbox_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSpinBox* self, int interval, enum Qt__TimerType timerType ```
int32_t q_spinbox_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_spinbox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSpinBox* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_spinbox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSpinBox* self, QObject* param1 ```
void q_spinbox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSpinBox* self, void (*slot)(QObject*, QObject*) ```
void q_spinbox_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QSpinBox* self ```
bool q_spinbox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QSpinBox* self ```
double q_spinbox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QSpinBox* self ```
double q_spinbox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_spinbox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_spinbox_encode_metric_f(int64_t metric, double value);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
QSize* q_spinbox_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
QSize* q_spinbox_qbase_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, QSize* (*slot)() ```
void q_spinbox_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
QSize* q_spinbox_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
QSize* q_spinbox_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, QSize* (*slot)() ```
void q_spinbox_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_spinbox_input_method_query(void* self, int64_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_spinbox_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, QVariant* (*slot)(QSpinBox*, enum Qt__InputMethodQuery) ```
void q_spinbox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, int steps ```
void q_spinbox_step_by(void* self, int steps);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, int steps ```
void q_spinbox_qbase_step_by(void* self, int steps);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, int) ```
void q_spinbox_on_step_by(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
void q_spinbox_clear(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
void q_spinbox_qbase_clear(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)() ```
void q_spinbox_on_clear(void* self, void (*slot)());

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QResizeEvent* event ```
void q_spinbox_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QResizeEvent* event ```
void q_spinbox_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QResizeEvent*) ```
void q_spinbox_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QKeyEvent* event ```
void q_spinbox_key_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QKeyEvent* event ```
void q_spinbox_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QKeyEvent*) ```
void q_spinbox_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QKeyEvent* event ```
void q_spinbox_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QKeyEvent* event ```
void q_spinbox_qbase_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QKeyEvent*) ```
void q_spinbox_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QWheelEvent* event ```
void q_spinbox_wheel_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QWheelEvent* event ```
void q_spinbox_qbase_wheel_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QWheelEvent*) ```
void q_spinbox_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QFocusEvent* event ```
void q_spinbox_focus_in_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QFocusEvent* event ```
void q_spinbox_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QFocusEvent*) ```
void q_spinbox_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QFocusEvent* event ```
void q_spinbox_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QFocusEvent* event ```
void q_spinbox_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QFocusEvent*) ```
void q_spinbox_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QContextMenuEvent* event ```
void q_spinbox_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QContextMenuEvent* event ```
void q_spinbox_qbase_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QContextMenuEvent*) ```
void q_spinbox_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QEvent* event ```
void q_spinbox_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QEvent* event ```
void q_spinbox_qbase_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QEvent*) ```
void q_spinbox_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QCloseEvent* event ```
void q_spinbox_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QCloseEvent* event ```
void q_spinbox_qbase_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QCloseEvent*) ```
void q_spinbox_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QHideEvent* event ```
void q_spinbox_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QHideEvent* event ```
void q_spinbox_qbase_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QHideEvent*) ```
void q_spinbox_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QMouseEvent* event ```
void q_spinbox_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QMouseEvent* event ```
void q_spinbox_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QMouseEvent*) ```
void q_spinbox_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QMouseEvent* event ```
void q_spinbox_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QMouseEvent* event ```
void q_spinbox_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QMouseEvent*) ```
void q_spinbox_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QMouseEvent* event ```
void q_spinbox_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QMouseEvent* event ```
void q_spinbox_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QMouseEvent*) ```
void q_spinbox_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QTimerEvent* event ```
void q_spinbox_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QTimerEvent* event ```
void q_spinbox_qbase_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QTimerEvent*) ```
void q_spinbox_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QPaintEvent* event ```
void q_spinbox_paint_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QPaintEvent* event ```
void q_spinbox_qbase_paint_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QPaintEvent*) ```
void q_spinbox_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QShowEvent* event ```
void q_spinbox_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QShowEvent* event ```
void q_spinbox_qbase_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QShowEvent*) ```
void q_spinbox_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QStyleOptionSpinBox* option ```
void q_spinbox_init_style_option(void* self, void* option);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QStyleOptionSpinBox* option ```
void q_spinbox_qbase_init_style_option(void* self, void* option);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QStyleOptionSpinBox*) ```
void q_spinbox_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_step_enabled(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
int64_t q_spinbox_qbase_step_enabled(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, int64_t (*slot)() ```
void q_spinbox_on_step_enabled(void* self, int64_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, int32_t (*slot)() ```
void q_spinbox_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, bool visible ```
void q_spinbox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, bool visible ```
void q_spinbox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, bool) ```
void q_spinbox_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, int param1 ```
int32_t q_spinbox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, int param1 ```
int32_t q_spinbox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, int32_t (*slot)(QSpinBox*, int) ```
void q_spinbox_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
bool q_spinbox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
bool q_spinbox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, bool (*slot)() ```
void q_spinbox_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
QPaintEngine* q_spinbox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
QPaintEngine* q_spinbox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, QPaintEngine* (*slot)() ```
void q_spinbox_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QMouseEvent* event ```
void q_spinbox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QMouseEvent* event ```
void q_spinbox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QMouseEvent*) ```
void q_spinbox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QEnterEvent* event ```
void q_spinbox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QEnterEvent* event ```
void q_spinbox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QEnterEvent*) ```
void q_spinbox_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QEvent* event ```
void q_spinbox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QEvent* event ```
void q_spinbox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QEvent*) ```
void q_spinbox_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QMoveEvent* event ```
void q_spinbox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QMoveEvent* event ```
void q_spinbox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QMoveEvent*) ```
void q_spinbox_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QTabletEvent* event ```
void q_spinbox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QTabletEvent* event ```
void q_spinbox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QTabletEvent*) ```
void q_spinbox_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QActionEvent* event ```
void q_spinbox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QActionEvent* event ```
void q_spinbox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QActionEvent*) ```
void q_spinbox_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QDragEnterEvent* event ```
void q_spinbox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QDragEnterEvent* event ```
void q_spinbox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QDragEnterEvent*) ```
void q_spinbox_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QDragMoveEvent* event ```
void q_spinbox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QDragMoveEvent* event ```
void q_spinbox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QDragMoveEvent*) ```
void q_spinbox_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QDragLeaveEvent* event ```
void q_spinbox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QDragLeaveEvent* event ```
void q_spinbox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QDragLeaveEvent*) ```
void q_spinbox_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QDropEvent* event ```
void q_spinbox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QDropEvent* event ```
void q_spinbox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QDropEvent*) ```
void q_spinbox_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_spinbox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_spinbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, bool (*slot)(QSpinBox*, const char*, void*, intptr_t*) ```
void q_spinbox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_spinbox_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_spinbox_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, int32_t (*slot)(QSpinBox*, enum QPaintDevice__PaintDeviceMetric) ```
void q_spinbox_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QPainter* painter ```
void q_spinbox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QPainter* painter ```
void q_spinbox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QPainter*) ```
void q_spinbox_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QPoint* offset ```
QPaintDevice* q_spinbox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QPoint* offset ```
QPaintDevice* q_spinbox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, QPaintDevice* (*slot)(QSpinBox*, QPoint*) ```
void q_spinbox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
QPainter* q_spinbox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
QPainter* q_spinbox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, QPainter* (*slot)() ```
void q_spinbox_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QInputMethodEvent* param1 ```
void q_spinbox_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QInputMethodEvent* param1 ```
void q_spinbox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QInputMethodEvent*) ```
void q_spinbox_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, bool next ```
bool q_spinbox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, bool next ```
bool q_spinbox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, bool (*slot)(QSpinBox*, bool) ```
void q_spinbox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QObject* watched, QEvent* event ```
bool q_spinbox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QObject* watched, QEvent* event ```
bool q_spinbox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, bool (*slot)(QSpinBox*, QObject*, QEvent*) ```
void q_spinbox_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QChildEvent* event ```
void q_spinbox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QChildEvent* event ```
void q_spinbox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QChildEvent*) ```
void q_spinbox_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QEvent* event ```
void q_spinbox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QEvent* event ```
void q_spinbox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QEvent*) ```
void q_spinbox_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QMetaMethod* signal ```
void q_spinbox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QMetaMethod* signal ```
void q_spinbox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QMetaMethod*) ```
void q_spinbox_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QMetaMethod* signal ```
void q_spinbox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QMetaMethod* signal ```
void q_spinbox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QMetaMethod*) ```
void q_spinbox_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
QLineEdit* q_spinbox_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
QLineEdit* q_spinbox_qbase_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, QLineEdit* (*slot)() ```
void q_spinbox_on_line_edit(void* self, QLineEdit* (*slot)());

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QLineEdit* edit ```
void q_spinbox_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QLineEdit* edit ```
void q_spinbox_qbase_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)(QSpinBox*, QLineEdit*) ```
void q_spinbox_on_set_line_edit(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
void q_spinbox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
void q_spinbox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)() ```
void q_spinbox_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
void q_spinbox_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
void q_spinbox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)() ```
void q_spinbox_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
void q_spinbox_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
void q_spinbox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, void (*slot)() ```
void q_spinbox_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
bool q_spinbox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
bool q_spinbox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, bool (*slot)() ```
void q_spinbox_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
bool q_spinbox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
bool q_spinbox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, bool (*slot)() ```
void q_spinbox_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
QObject* q_spinbox_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
QObject* q_spinbox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, QObject* (*slot)() ```
void q_spinbox_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self ```
int32_t q_spinbox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, int32_t (*slot)() ```
void q_spinbox_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, const char* signal ```
int32_t q_spinbox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, const char* signal ```
int32_t q_spinbox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, int32_t (*slot)(QSpinBox*, const char*) ```
void q_spinbox_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, QMetaMethod* signal ```
bool q_spinbox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, QMetaMethod* signal ```
bool q_spinbox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, bool (*slot)(QSpinBox*, QMetaMethod*) ```
void q_spinbox_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpinBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_spinbox_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpinBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_spinbox_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpinBox* self, double (*slot)(QSpinBox*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_spinbox_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QSpinBox* self, void (*slot)(QObject*, const char*) ```
void q_spinbox_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspinbox.html#dtor.QSpinBox)
///
/// Delete this object from C++ memory.
///
/// ``` QSpinBox* self ```
void q_spinbox_delete(void* self);

/// https://doc.qt.io/qt-6/qdoublespinbox.html

/// q_doublespinbox_new constructs a new QDoubleSpinBox object.
///
/// ``` QWidget* parent ```
QDoubleSpinBox* q_doublespinbox_new(void* parent);

/// q_doublespinbox_new2 constructs a new QDoubleSpinBox object.
///
///
QDoubleSpinBox* q_doublespinbox_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDoubleSpinBox* self ```
const QMetaObject* q_doublespinbox_meta_object(void* self);

/// ``` QDoubleSpinBox* self, const char* param1 ```
void* q_doublespinbox_metacast(void* self, const char* param1);

/// ``` QDoubleSpinBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_doublespinbox_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QDoubleSpinBox* self, int32_t (*slot)(QDoubleSpinBox*, enum QMetaObject__Call, int, void*) ```
void q_doublespinbox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QDoubleSpinBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_doublespinbox_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_doublespinbox_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#value)
///
/// ``` QDoubleSpinBox* self ```
double q_doublespinbox_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#prefix)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_prefix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#setPrefix)
///
/// ``` QDoubleSpinBox* self, const char* prefix ```
void q_doublespinbox_set_prefix(void* self, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#suffix)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_suffix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#setSuffix)
///
/// ``` QDoubleSpinBox* self, const char* suffix ```
void q_doublespinbox_set_suffix(void* self, const char* suffix);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#cleanText)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_clean_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#singleStep)
///
/// ``` QDoubleSpinBox* self ```
double q_doublespinbox_single_step(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#setSingleStep)
///
/// ``` QDoubleSpinBox* self, double val ```
void q_doublespinbox_set_single_step(void* self, double val);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#minimum)
///
/// ``` QDoubleSpinBox* self ```
double q_doublespinbox_minimum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#setMinimum)
///
/// ``` QDoubleSpinBox* self, double min ```
void q_doublespinbox_set_minimum(void* self, double min);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#maximum)
///
/// ``` QDoubleSpinBox* self ```
double q_doublespinbox_maximum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#setMaximum)
///
/// ``` QDoubleSpinBox* self, double max ```
void q_doublespinbox_set_maximum(void* self, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#setRange)
///
/// ``` QDoubleSpinBox* self, double min, double max ```
void q_doublespinbox_set_range(void* self, double min, double max);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#stepType)
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_step_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#setStepType)
///
/// ``` QDoubleSpinBox* self, enum QAbstractSpinBox__StepType stepType ```
void q_doublespinbox_set_step_type(void* self, int64_t stepType);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#decimals)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_decimals(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#setDecimals)
///
/// ``` QDoubleSpinBox* self, int prec ```
void q_doublespinbox_set_decimals(void* self, int prec);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#validate)
///
/// ``` QDoubleSpinBox* self, const char* input, int* pos ```
int64_t q_doublespinbox_validate(void* self, const char* input, int* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#validate)
///
/// Allows for overriding the related default method
///
/// ``` QDoubleSpinBox* self, int64_t (*slot)(QDoubleSpinBox*, const char*, int*) ```
void q_doublespinbox_on_validate(void* self, int64_t (*slot)(void*, const char*, int*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#validate)
///
/// Base class method implementation
///
/// ``` QDoubleSpinBox* self, const char* input, int* pos ```
int64_t q_doublespinbox_qbase_validate(void* self, const char* input, int* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#valueFromText)
///
/// ``` QDoubleSpinBox* self, const char* text ```
double q_doublespinbox_value_from_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#valueFromText)
///
/// Allows for overriding the related default method
///
/// ``` QDoubleSpinBox* self, double (*slot)(QDoubleSpinBox*, const char*) ```
void q_doublespinbox_on_value_from_text(void* self, double (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#valueFromText)
///
/// Base class method implementation
///
/// ``` QDoubleSpinBox* self, const char* text ```
double q_doublespinbox_qbase_value_from_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#textFromValue)
///
/// ``` QDoubleSpinBox* self, double val ```
const char* q_doublespinbox_text_from_value(void* self, double val);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#textFromValue)
///
/// Allows for overriding the related default method
///
/// ``` QDoubleSpinBox* self, const char* (*slot)(QDoubleSpinBox*, double) ```
void q_doublespinbox_on_text_from_value(void* self, const char* (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#textFromValue)
///
/// Base class method implementation
///
/// ``` QDoubleSpinBox* self, double val ```
const char* q_doublespinbox_qbase_text_from_value(void* self, double val);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#fixup)
///
/// ``` QDoubleSpinBox* self, const char* str ```
void q_doublespinbox_fixup(void* self, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#fixup)
///
/// Allows for overriding the related default method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, const char*) ```
void q_doublespinbox_on_fixup(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#fixup)
///
/// Base class method implementation
///
/// ``` QDoubleSpinBox* self, const char* str ```
void q_doublespinbox_qbase_fixup(void* self, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#setValue)
///
/// ``` QDoubleSpinBox* self, double val ```
void q_doublespinbox_set_value(void* self, double val);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#valueChanged)
///
/// ``` QDoubleSpinBox* self, double param1 ```
void q_doublespinbox_value_changed(void* self, double param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#valueChanged)
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, double) ```
void q_doublespinbox_on_value_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#textChanged)
///
/// ``` QDoubleSpinBox* self, const char* param1 ```
void q_doublespinbox_text_changed(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#textChanged)
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, const char*) ```
void q_doublespinbox_on_text_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_doublespinbox_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_doublespinbox_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_button_symbols(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
///
/// ``` QDoubleSpinBox* self, enum QAbstractSpinBox__ButtonSymbols bs ```
void q_doublespinbox_set_button_symbols(void* self, int64_t bs);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
///
/// ``` QDoubleSpinBox* self, enum QAbstractSpinBox__CorrectionMode cm ```
void q_doublespinbox_set_correction_mode(void* self, int64_t cm);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_correction_mode(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_has_acceptable_input(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_special_value_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
///
/// ``` QDoubleSpinBox* self, const char* txt ```
void q_doublespinbox_set_special_value_text(void* self, const char* txt);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_wrapping(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
///
/// ``` QDoubleSpinBox* self, bool w ```
void q_doublespinbox_set_wrapping(void* self, bool w);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
///
/// ``` QDoubleSpinBox* self, bool r ```
void q_doublespinbox_set_read_only(void* self, bool r);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_read_only(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
///
/// ``` QDoubleSpinBox* self, bool kt ```
void q_doublespinbox_set_keyboard_tracking(void* self, bool kt);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_keyboard_tracking(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
///
/// ``` QDoubleSpinBox* self, int flag ```
void q_doublespinbox_set_alignment(void* self, int64_t flag);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_alignment(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
///
/// ``` QDoubleSpinBox* self, bool frame ```
void q_doublespinbox_set_frame(void* self, bool frame);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_has_frame(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
///
/// ``` QDoubleSpinBox* self, bool on ```
void q_doublespinbox_set_accelerated(void* self, bool on);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_accelerated(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
///
/// ``` QDoubleSpinBox* self, bool shown ```
void q_doublespinbox_set_group_separator_shown(void* self, bool shown);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_group_separator_shown(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_interpret_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_step_up(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_step_down(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_select_all(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_editing_finished(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// ``` QDoubleSpinBox* self, void (*slot)(QAbstractSpinBox*) ```
void q_doublespinbox_on_editing_finished(void* self, void (*slot)(void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QDoubleSpinBox* self ```
uintptr_t q_doublespinbox_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QDoubleSpinBox* self ```
uintptr_t q_doublespinbox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QDoubleSpinBox* self ```
uintptr_t q_doublespinbox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QDoubleSpinBox* self ```
QStyle* q_doublespinbox_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QDoubleSpinBox* self, QStyle* style ```
void q_doublespinbox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QDoubleSpinBox* self, enum Qt__WindowModality windowModality ```
void q_doublespinbox_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QDoubleSpinBox* self, QWidget* param1 ```
bool q_doublespinbox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QDoubleSpinBox* self, bool enabled ```
void q_doublespinbox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QDoubleSpinBox* self, bool disabled ```
void q_doublespinbox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QDoubleSpinBox* self, bool windowModified ```
void q_doublespinbox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QDoubleSpinBox* self ```
QRect* q_doublespinbox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QDoubleSpinBox* self ```
const QRect* q_doublespinbox_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QDoubleSpinBox* self ```
QRect* q_doublespinbox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QDoubleSpinBox* self ```
QPoint* q_doublespinbox_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QDoubleSpinBox* self ```
QSize* q_doublespinbox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QDoubleSpinBox* self ```
QSize* q_doublespinbox_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QDoubleSpinBox* self ```
QRect* q_doublespinbox_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QDoubleSpinBox* self ```
QRect* q_doublespinbox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QDoubleSpinBox* self ```
QRegion* q_doublespinbox_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QDoubleSpinBox* self ```
QSize* q_doublespinbox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QDoubleSpinBox* self ```
QSize* q_doublespinbox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QDoubleSpinBox* self, QSize* minimumSize ```
void q_doublespinbox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QDoubleSpinBox* self, int minw, int minh ```
void q_doublespinbox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QDoubleSpinBox* self, QSize* maximumSize ```
void q_doublespinbox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QDoubleSpinBox* self, int maxw, int maxh ```
void q_doublespinbox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QDoubleSpinBox* self, int minw ```
void q_doublespinbox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QDoubleSpinBox* self, int minh ```
void q_doublespinbox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QDoubleSpinBox* self, int maxw ```
void q_doublespinbox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QDoubleSpinBox* self, int maxh ```
void q_doublespinbox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QDoubleSpinBox* self ```
QSize* q_doublespinbox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QDoubleSpinBox* self, QSize* sizeIncrement ```
void q_doublespinbox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QDoubleSpinBox* self, int w, int h ```
void q_doublespinbox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QDoubleSpinBox* self ```
QSize* q_doublespinbox_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QDoubleSpinBox* self, QSize* baseSize ```
void q_doublespinbox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QDoubleSpinBox* self, int basew, int baseh ```
void q_doublespinbox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QDoubleSpinBox* self, QSize* fixedSize ```
void q_doublespinbox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QDoubleSpinBox* self, int w, int h ```
void q_doublespinbox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QDoubleSpinBox* self, int w ```
void q_doublespinbox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QDoubleSpinBox* self, int h ```
void q_doublespinbox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QDoubleSpinBox* self, QPointF* param1 ```
QPointF* q_doublespinbox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QDoubleSpinBox* self, QPoint* param1 ```
QPoint* q_doublespinbox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QDoubleSpinBox* self, QPointF* param1 ```
QPointF* q_doublespinbox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QDoubleSpinBox* self, QPoint* param1 ```
QPoint* q_doublespinbox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QDoubleSpinBox* self, QPointF* param1 ```
QPointF* q_doublespinbox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QDoubleSpinBox* self, QPoint* param1 ```
QPoint* q_doublespinbox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QDoubleSpinBox* self, QPointF* param1 ```
QPointF* q_doublespinbox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QDoubleSpinBox* self, QPoint* param1 ```
QPoint* q_doublespinbox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QDoubleSpinBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_doublespinbox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QDoubleSpinBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_doublespinbox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QDoubleSpinBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_doublespinbox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QDoubleSpinBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_doublespinbox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QDoubleSpinBox* self ```
QWidget* q_doublespinbox_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QDoubleSpinBox* self ```
QWidget* q_doublespinbox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QDoubleSpinBox* self ```
QWidget* q_doublespinbox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QDoubleSpinBox* self ```
const QPalette* q_doublespinbox_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QDoubleSpinBox* self, QPalette* palette ```
void q_doublespinbox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QDoubleSpinBox* self, enum QPalette__ColorRole backgroundRole ```
void q_doublespinbox_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QDoubleSpinBox* self, enum QPalette__ColorRole foregroundRole ```
void q_doublespinbox_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QDoubleSpinBox* self ```
const QFont* q_doublespinbox_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QDoubleSpinBox* self, QFont* font ```
void q_doublespinbox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QDoubleSpinBox* self ```
QFontMetrics* q_doublespinbox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QDoubleSpinBox* self ```
QFontInfo* q_doublespinbox_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QDoubleSpinBox* self ```
QCursor* q_doublespinbox_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QDoubleSpinBox* self, QCursor* cursor ```
void q_doublespinbox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QDoubleSpinBox* self, bool enable ```
void q_doublespinbox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QDoubleSpinBox* self, bool enable ```
void q_doublespinbox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QDoubleSpinBox* self, QBitmap* mask ```
void q_doublespinbox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QDoubleSpinBox* self, QRegion* mask ```
void q_doublespinbox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QDoubleSpinBox* self ```
QRegion* q_doublespinbox_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDoubleSpinBox* self, QPaintDevice* target ```
void q_doublespinbox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDoubleSpinBox* self, QPainter* painter ```
void q_doublespinbox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QDoubleSpinBox* self ```
QPixmap* q_doublespinbox_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QDoubleSpinBox* self ```
QGraphicsEffect* q_doublespinbox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QDoubleSpinBox* self, QGraphicsEffect* effect ```
void q_doublespinbox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QDoubleSpinBox* self, enum Qt__GestureType typeVal ```
void q_doublespinbox_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QDoubleSpinBox* self, enum Qt__GestureType typeVal ```
void q_doublespinbox_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QDoubleSpinBox* self, const char* windowTitle ```
void q_doublespinbox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QDoubleSpinBox* self, const char* styleSheet ```
void q_doublespinbox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QDoubleSpinBox* self, QIcon* icon ```
void q_doublespinbox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QDoubleSpinBox* self ```
QIcon* q_doublespinbox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QDoubleSpinBox* self, const char* windowIconText ```
void q_doublespinbox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QDoubleSpinBox* self, const char* windowRole ```
void q_doublespinbox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QDoubleSpinBox* self, const char* filePath ```
void q_doublespinbox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QDoubleSpinBox* self, double level ```
void q_doublespinbox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QDoubleSpinBox* self ```
double q_doublespinbox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QDoubleSpinBox* self, const char* toolTip ```
void q_doublespinbox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QDoubleSpinBox* self, int msec ```
void q_doublespinbox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QDoubleSpinBox* self, const char* statusTip ```
void q_doublespinbox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QDoubleSpinBox* self, const char* whatsThis ```
void q_doublespinbox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QDoubleSpinBox* self, const char* name ```
void q_doublespinbox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QDoubleSpinBox* self, const char* description ```
void q_doublespinbox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QDoubleSpinBox* self, enum Qt__LayoutDirection direction ```
void q_doublespinbox_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QDoubleSpinBox* self, QLocale* locale ```
void q_doublespinbox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QDoubleSpinBox* self ```
QLocale* q_doublespinbox_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QDoubleSpinBox* self, enum Qt__FocusReason reason ```
void q_doublespinbox_set_focus2(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QDoubleSpinBox* self, enum Qt__FocusPolicy policy ```
void q_doublespinbox_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_doublespinbox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QDoubleSpinBox* self, QWidget* focusProxy ```
void q_doublespinbox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QDoubleSpinBox* self ```
QWidget* q_doublespinbox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QDoubleSpinBox* self, enum Qt__ContextMenuPolicy policy ```
void q_doublespinbox_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QDoubleSpinBox* self, QCursor* param1 ```
void q_doublespinbox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QDoubleSpinBox* self, QKeySequence* key ```
int32_t q_doublespinbox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QDoubleSpinBox* self, int id ```
void q_doublespinbox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QDoubleSpinBox* self, int id ```
void q_doublespinbox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QDoubleSpinBox* self, int id ```
void q_doublespinbox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_doublespinbox_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_doublespinbox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QDoubleSpinBox* self, bool enable ```
void q_doublespinbox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QDoubleSpinBox* self ```
QGraphicsProxyWidget* q_doublespinbox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDoubleSpinBox* self, int x, int y, int w, int h ```
void q_doublespinbox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDoubleSpinBox* self, QRect* param1 ```
void q_doublespinbox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDoubleSpinBox* self, QRegion* param1 ```
void q_doublespinbox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDoubleSpinBox* self, int x, int y, int w, int h ```
void q_doublespinbox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDoubleSpinBox* self, QRect* param1 ```
void q_doublespinbox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDoubleSpinBox* self, QRegion* param1 ```
void q_doublespinbox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QDoubleSpinBox* self, bool hidden ```
void q_doublespinbox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QDoubleSpinBox* self, QWidget* param1 ```
void q_doublespinbox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QDoubleSpinBox* self, int x, int y ```
void q_doublespinbox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QDoubleSpinBox* self, QPoint* param1 ```
void q_doublespinbox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QDoubleSpinBox* self, int w, int h ```
void q_doublespinbox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QDoubleSpinBox* self, QSize* param1 ```
void q_doublespinbox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QDoubleSpinBox* self, int x, int y, int w, int h ```
void q_doublespinbox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QDoubleSpinBox* self, QRect* geometry ```
void q_doublespinbox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QDoubleSpinBox* self ```
char* q_doublespinbox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QDoubleSpinBox* self, const char* geometry ```
bool q_doublespinbox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QDoubleSpinBox* self, QWidget* param1 ```
bool q_doublespinbox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QDoubleSpinBox* self, int state ```
void q_doublespinbox_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QDoubleSpinBox* self, int state ```
void q_doublespinbox_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QDoubleSpinBox* self ```
QSizePolicy* q_doublespinbox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QDoubleSpinBox* self, QSizePolicy* sizePolicy ```
void q_doublespinbox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QDoubleSpinBox* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_doublespinbox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QDoubleSpinBox* self ```
QRegion* q_doublespinbox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QDoubleSpinBox* self, int left, int top, int right, int bottom ```
void q_doublespinbox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QDoubleSpinBox* self, QMargins* margins ```
void q_doublespinbox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QDoubleSpinBox* self ```
QMargins* q_doublespinbox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QDoubleSpinBox* self ```
QRect* q_doublespinbox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QDoubleSpinBox* self ```
QLayout* q_doublespinbox_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QDoubleSpinBox* self, QLayout* layout ```
void q_doublespinbox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QDoubleSpinBox* self, QWidget* parent ```
void q_doublespinbox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QDoubleSpinBox* self, QWidget* parent, int f ```
void q_doublespinbox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QDoubleSpinBox* self, int dx, int dy ```
void q_doublespinbox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QDoubleSpinBox* self, int dx, int dy, QRect* param3 ```
void q_doublespinbox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QDoubleSpinBox* self ```
QWidget* q_doublespinbox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QDoubleSpinBox* self ```
QWidget* q_doublespinbox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QDoubleSpinBox* self ```
QWidget* q_doublespinbox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QDoubleSpinBox* self, bool on ```
void q_doublespinbox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDoubleSpinBox* self, QAction* action ```
void q_doublespinbox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QDoubleSpinBox* self, libqt_list /* of QAction* */ actions ```
void q_doublespinbox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QDoubleSpinBox* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_doublespinbox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QDoubleSpinBox* self, QAction* before, QAction* action ```
void q_doublespinbox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QDoubleSpinBox* self, QAction* action ```
void q_doublespinbox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QDoubleSpinBox* self ```
libqt_list /* of QAction* */ q_doublespinbox_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDoubleSpinBox* self, const char* text ```
QAction* q_doublespinbox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDoubleSpinBox* self, QIcon* icon, const char* text ```
QAction* q_doublespinbox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDoubleSpinBox* self, const char* text, QKeySequence* shortcut ```
QAction* q_doublespinbox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDoubleSpinBox* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_doublespinbox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QDoubleSpinBox* self ```
QWidget* q_doublespinbox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QDoubleSpinBox* self, int typeVal ```
void q_doublespinbox_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QDoubleSpinBox* self, enum Qt__WindowType param1 ```
void q_doublespinbox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QDoubleSpinBox* self, int typeVal ```
void q_doublespinbox_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_doublespinbox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDoubleSpinBox* self, int x, int y ```
QWidget* q_doublespinbox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDoubleSpinBox* self, QPoint* p ```
QWidget* q_doublespinbox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDoubleSpinBox* self, QPointF* p ```
QWidget* q_doublespinbox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QDoubleSpinBox* self, enum Qt__WidgetAttribute param1 ```
void q_doublespinbox_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QDoubleSpinBox* self, enum Qt__WidgetAttribute param1 ```
bool q_doublespinbox_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QDoubleSpinBox* self, QWidget* child ```
bool q_doublespinbox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QDoubleSpinBox* self, bool enabled ```
void q_doublespinbox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QDoubleSpinBox* self ```
QBackingStore* q_doublespinbox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QDoubleSpinBox* self ```
QWindow* q_doublespinbox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QDoubleSpinBox* self ```
QScreen* q_doublespinbox_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QDoubleSpinBox* self, QScreen* screen ```
void q_doublespinbox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_doublespinbox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QDoubleSpinBox* self, const char* title ```
void q_doublespinbox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QDoubleSpinBox* self, void (*slot)(QWidget*, const char*) ```
void q_doublespinbox_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QDoubleSpinBox* self, QIcon* icon ```
void q_doublespinbox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QDoubleSpinBox* self, void (*slot)(QWidget*, QIcon*) ```
void q_doublespinbox_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QDoubleSpinBox* self, const char* iconText ```
void q_doublespinbox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QDoubleSpinBox* self, void (*slot)(QWidget*, const char*) ```
void q_doublespinbox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QDoubleSpinBox* self, QPoint* pos ```
void q_doublespinbox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QDoubleSpinBox* self, void (*slot)(QWidget*, QPoint*) ```
void q_doublespinbox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QDoubleSpinBox* self, int hints ```
void q_doublespinbox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDoubleSpinBox* self, QPaintDevice* target, QPoint* targetOffset ```
void q_doublespinbox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDoubleSpinBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_doublespinbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDoubleSpinBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_doublespinbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDoubleSpinBox* self, QPainter* painter, QPoint* targetOffset ```
void q_doublespinbox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDoubleSpinBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_doublespinbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDoubleSpinBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_doublespinbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QDoubleSpinBox* self, QRect* rectangle ```
QPixmap* q_doublespinbox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QDoubleSpinBox* self, enum Qt__GestureType typeVal, int flags ```
void q_doublespinbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QDoubleSpinBox* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_doublespinbox_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QDoubleSpinBox* self, int id, bool enable ```
void q_doublespinbox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QDoubleSpinBox* self, int id, bool enable ```
void q_doublespinbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QDoubleSpinBox* self, enum Qt__WindowType param1, bool on ```
void q_doublespinbox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QDoubleSpinBox* self, enum Qt__WidgetAttribute param1, bool on ```
void q_doublespinbox_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_doublespinbox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_doublespinbox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDoubleSpinBox* self ```
const char* q_doublespinbox_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDoubleSpinBox* self, char* name ```
void q_doublespinbox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDoubleSpinBox* self, bool b ```
bool q_doublespinbox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDoubleSpinBox* self ```
QThread* q_doublespinbox_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDoubleSpinBox* self, QThread* thread ```
bool q_doublespinbox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDoubleSpinBox* self, int interval ```
int32_t q_doublespinbox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDoubleSpinBox* self, int id ```
void q_doublespinbox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDoubleSpinBox* self, enum Qt__TimerId id ```
void q_doublespinbox_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDoubleSpinBox* self ```
libqt_list /* of QObject* */ q_doublespinbox_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDoubleSpinBox* self, QObject* filterObj ```
void q_doublespinbox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDoubleSpinBox* self, QObject* obj ```
void q_doublespinbox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_doublespinbox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDoubleSpinBox* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_doublespinbox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_doublespinbox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_doublespinbox_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDoubleSpinBox* self, const char* name, QVariant* value ```
bool q_doublespinbox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDoubleSpinBox* self, const char* name ```
QVariant* q_doublespinbox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDoubleSpinBox* self ```
const char** q_doublespinbox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDoubleSpinBox* self ```
QBindingStorage* q_doublespinbox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDoubleSpinBox* self ```
const QBindingStorage* q_doublespinbox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDoubleSpinBox* self, void (*slot)(QObject*) ```
void q_doublespinbox_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDoubleSpinBox* self ```
QObject* q_doublespinbox_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDoubleSpinBox* self, const char* classname ```
bool q_doublespinbox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDoubleSpinBox* self, QThread* thread, Disambiguated_t* param2 ```
bool q_doublespinbox_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDoubleSpinBox* self, int interval, enum Qt__TimerType timerType ```
int32_t q_doublespinbox_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_doublespinbox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDoubleSpinBox* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_doublespinbox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDoubleSpinBox* self, QObject* param1 ```
void q_doublespinbox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDoubleSpinBox* self, void (*slot)(QObject*, QObject*) ```
void q_doublespinbox_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QDoubleSpinBox* self ```
double q_doublespinbox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QDoubleSpinBox* self ```
double q_doublespinbox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_doublespinbox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_doublespinbox_encode_metric_f(int64_t metric, double value);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
QSize* q_doublespinbox_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
QSize* q_doublespinbox_qbase_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QSize* (*slot)() ```
void q_doublespinbox_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
QSize* q_doublespinbox_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
QSize* q_doublespinbox_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QSize* (*slot)() ```
void q_doublespinbox_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QEvent* event ```
bool q_doublespinbox_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QEvent* event ```
bool q_doublespinbox_qbase_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, bool (*slot)(QDoubleSpinBox*, QEvent*) ```
void q_doublespinbox_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_doublespinbox_input_method_query(void* self, int64_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_doublespinbox_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QVariant* (*slot)(QDoubleSpinBox*, enum Qt__InputMethodQuery) ```
void q_doublespinbox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, int steps ```
void q_doublespinbox_step_by(void* self, int steps);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, int steps ```
void q_doublespinbox_qbase_step_by(void* self, int steps);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, int) ```
void q_doublespinbox_on_step_by(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_clear(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_qbase_clear(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)() ```
void q_doublespinbox_on_clear(void* self, void (*slot)());

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QResizeEvent* event ```
void q_doublespinbox_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QResizeEvent* event ```
void q_doublespinbox_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QResizeEvent*) ```
void q_doublespinbox_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QKeyEvent* event ```
void q_doublespinbox_key_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QKeyEvent* event ```
void q_doublespinbox_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QKeyEvent*) ```
void q_doublespinbox_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QKeyEvent* event ```
void q_doublespinbox_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QKeyEvent* event ```
void q_doublespinbox_qbase_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QKeyEvent*) ```
void q_doublespinbox_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QWheelEvent* event ```
void q_doublespinbox_wheel_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QWheelEvent* event ```
void q_doublespinbox_qbase_wheel_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QWheelEvent*) ```
void q_doublespinbox_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QFocusEvent* event ```
void q_doublespinbox_focus_in_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QFocusEvent* event ```
void q_doublespinbox_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QFocusEvent*) ```
void q_doublespinbox_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QFocusEvent* event ```
void q_doublespinbox_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QFocusEvent* event ```
void q_doublespinbox_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QFocusEvent*) ```
void q_doublespinbox_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QContextMenuEvent* event ```
void q_doublespinbox_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QContextMenuEvent* event ```
void q_doublespinbox_qbase_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QContextMenuEvent*) ```
void q_doublespinbox_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QEvent* event ```
void q_doublespinbox_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QEvent* event ```
void q_doublespinbox_qbase_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QEvent*) ```
void q_doublespinbox_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QCloseEvent* event ```
void q_doublespinbox_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QCloseEvent* event ```
void q_doublespinbox_qbase_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QCloseEvent*) ```
void q_doublespinbox_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QHideEvent* event ```
void q_doublespinbox_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QHideEvent* event ```
void q_doublespinbox_qbase_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QHideEvent*) ```
void q_doublespinbox_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMouseEvent* event ```
void q_doublespinbox_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMouseEvent* event ```
void q_doublespinbox_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QMouseEvent*) ```
void q_doublespinbox_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMouseEvent* event ```
void q_doublespinbox_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMouseEvent* event ```
void q_doublespinbox_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QMouseEvent*) ```
void q_doublespinbox_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMouseEvent* event ```
void q_doublespinbox_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMouseEvent* event ```
void q_doublespinbox_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QMouseEvent*) ```
void q_doublespinbox_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QTimerEvent* event ```
void q_doublespinbox_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QTimerEvent* event ```
void q_doublespinbox_qbase_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QTimerEvent*) ```
void q_doublespinbox_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QPaintEvent* event ```
void q_doublespinbox_paint_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QPaintEvent* event ```
void q_doublespinbox_qbase_paint_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QPaintEvent*) ```
void q_doublespinbox_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QShowEvent* event ```
void q_doublespinbox_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QShowEvent* event ```
void q_doublespinbox_qbase_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QShowEvent*) ```
void q_doublespinbox_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QStyleOptionSpinBox* option ```
void q_doublespinbox_init_style_option(void* self, void* option);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QStyleOptionSpinBox* option ```
void q_doublespinbox_qbase_init_style_option(void* self, void* option);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QStyleOptionSpinBox*) ```
void q_doublespinbox_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_step_enabled(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
int64_t q_doublespinbox_qbase_step_enabled(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, int64_t (*slot)() ```
void q_doublespinbox_on_step_enabled(void* self, int64_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, int32_t (*slot)() ```
void q_doublespinbox_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, bool visible ```
void q_doublespinbox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, bool visible ```
void q_doublespinbox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, bool) ```
void q_doublespinbox_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, int param1 ```
int32_t q_doublespinbox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, int param1 ```
int32_t q_doublespinbox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, int32_t (*slot)(QDoubleSpinBox*, int) ```
void q_doublespinbox_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, bool (*slot)() ```
void q_doublespinbox_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
QPaintEngine* q_doublespinbox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
QPaintEngine* q_doublespinbox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QPaintEngine* (*slot)() ```
void q_doublespinbox_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMouseEvent* event ```
void q_doublespinbox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMouseEvent* event ```
void q_doublespinbox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QMouseEvent*) ```
void q_doublespinbox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QEnterEvent* event ```
void q_doublespinbox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QEnterEvent* event ```
void q_doublespinbox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QEnterEvent*) ```
void q_doublespinbox_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QEvent* event ```
void q_doublespinbox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QEvent* event ```
void q_doublespinbox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QEvent*) ```
void q_doublespinbox_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMoveEvent* event ```
void q_doublespinbox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMoveEvent* event ```
void q_doublespinbox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QMoveEvent*) ```
void q_doublespinbox_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QTabletEvent* event ```
void q_doublespinbox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QTabletEvent* event ```
void q_doublespinbox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QTabletEvent*) ```
void q_doublespinbox_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QActionEvent* event ```
void q_doublespinbox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QActionEvent* event ```
void q_doublespinbox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QActionEvent*) ```
void q_doublespinbox_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QDragEnterEvent* event ```
void q_doublespinbox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QDragEnterEvent* event ```
void q_doublespinbox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QDragEnterEvent*) ```
void q_doublespinbox_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QDragMoveEvent* event ```
void q_doublespinbox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QDragMoveEvent* event ```
void q_doublespinbox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QDragMoveEvent*) ```
void q_doublespinbox_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QDragLeaveEvent* event ```
void q_doublespinbox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QDragLeaveEvent* event ```
void q_doublespinbox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QDragLeaveEvent*) ```
void q_doublespinbox_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QDropEvent* event ```
void q_doublespinbox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QDropEvent* event ```
void q_doublespinbox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QDropEvent*) ```
void q_doublespinbox_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_doublespinbox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_doublespinbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, bool (*slot)(QDoubleSpinBox*, const char*, void*, intptr_t*) ```
void q_doublespinbox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_doublespinbox_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_doublespinbox_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, int32_t (*slot)(QDoubleSpinBox*, enum QPaintDevice__PaintDeviceMetric) ```
void q_doublespinbox_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QPainter* painter ```
void q_doublespinbox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QPainter* painter ```
void q_doublespinbox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QPainter*) ```
void q_doublespinbox_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QPoint* offset ```
QPaintDevice* q_doublespinbox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QPoint* offset ```
QPaintDevice* q_doublespinbox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QPaintDevice* (*slot)(QDoubleSpinBox*, QPoint*) ```
void q_doublespinbox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
QPainter* q_doublespinbox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
QPainter* q_doublespinbox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QPainter* (*slot)() ```
void q_doublespinbox_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QInputMethodEvent* param1 ```
void q_doublespinbox_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QInputMethodEvent* param1 ```
void q_doublespinbox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QInputMethodEvent*) ```
void q_doublespinbox_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, bool next ```
bool q_doublespinbox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, bool next ```
bool q_doublespinbox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, bool (*slot)(QDoubleSpinBox*, bool) ```
void q_doublespinbox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QObject* watched, QEvent* event ```
bool q_doublespinbox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QObject* watched, QEvent* event ```
bool q_doublespinbox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, bool (*slot)(QDoubleSpinBox*, QObject*, QEvent*) ```
void q_doublespinbox_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QChildEvent* event ```
void q_doublespinbox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QChildEvent* event ```
void q_doublespinbox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QChildEvent*) ```
void q_doublespinbox_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QEvent* event ```
void q_doublespinbox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QEvent* event ```
void q_doublespinbox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QEvent*) ```
void q_doublespinbox_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMetaMethod* signal ```
void q_doublespinbox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMetaMethod* signal ```
void q_doublespinbox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QMetaMethod*) ```
void q_doublespinbox_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMetaMethod* signal ```
void q_doublespinbox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMetaMethod* signal ```
void q_doublespinbox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QMetaMethod*) ```
void q_doublespinbox_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
QLineEdit* q_doublespinbox_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
QLineEdit* q_doublespinbox_qbase_line_edit(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QLineEdit* (*slot)() ```
void q_doublespinbox_on_line_edit(void* self, QLineEdit* (*slot)());

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QLineEdit* edit ```
void q_doublespinbox_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QLineEdit* edit ```
void q_doublespinbox_qbase_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)(QDoubleSpinBox*, QLineEdit*) ```
void q_doublespinbox_on_set_line_edit(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)() ```
void q_doublespinbox_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)() ```
void q_doublespinbox_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, void (*slot)() ```
void q_doublespinbox_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, bool (*slot)() ```
void q_doublespinbox_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
bool q_doublespinbox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, bool (*slot)() ```
void q_doublespinbox_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
QObject* q_doublespinbox_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
QObject* q_doublespinbox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QObject* (*slot)() ```
void q_doublespinbox_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self ```
int32_t q_doublespinbox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, int32_t (*slot)() ```
void q_doublespinbox_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, const char* signal ```
int32_t q_doublespinbox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, const char* signal ```
int32_t q_doublespinbox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, int32_t (*slot)(QDoubleSpinBox*, const char*) ```
void q_doublespinbox_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMetaMethod* signal ```
bool q_doublespinbox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, QMetaMethod* signal ```
bool q_doublespinbox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, bool (*slot)(QDoubleSpinBox*, QMetaMethod*) ```
void q_doublespinbox_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDoubleSpinBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_doublespinbox_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_doublespinbox_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDoubleSpinBox* self, double (*slot)(QDoubleSpinBox*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_doublespinbox_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QDoubleSpinBox* self, void (*slot)(QObject*, const char*) ```
void q_doublespinbox_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdoublespinbox.html#dtor.QDoubleSpinBox)
///
/// Delete this object from C++ memory.
///
/// ``` QDoubleSpinBox* self ```
void q_doublespinbox_delete(void* self);

#endif
