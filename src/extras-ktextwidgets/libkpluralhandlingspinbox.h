#pragma once
#ifndef EXTRAS_KTEXTWIDGETS_LIBKPLURALHANDLINGSPINBOX_H
#define EXTRAS_KTEXTWIDGETS_LIBKPLURALHANDLINGSPINBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kpluralhandlingspinbox.html)

/// k_pluralhandlingspinbox_new constructs a new KPluralHandlingSpinBox object.
///
/// @param parent QWidget*
///
KPluralHandlingSpinBox* k_pluralhandlingspinbox_new(void* parent);

/// [Upstream resources](https://api.kde.org/kpluralhandlingspinbox.html)

/// k_pluralhandlingspinbox_new2 constructs a new KPluralHandlingSpinBox object.
///
KPluralHandlingSpinBox* k_pluralhandlingspinbox_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KPluralHandlingSpinBox*
///
const QMetaObject* k_pluralhandlingspinbox_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback const QMetaObject* func(const KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KPluralHandlingSpinBox*
///
const QMetaObject* k_pluralhandlingspinbox_super_meta_object(const void* self);

/// @param self KPluralHandlingSpinBox*
/// @param param1 const char*
///
void* k_pluralhandlingspinbox_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void* func(KPluralHandlingSpinBox* self, const char* param1)
///
void k_pluralhandlingspinbox_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 const char*
///
void* k_pluralhandlingspinbox_super_metacast(void* self, const char* param1);

/// @param self KPluralHandlingSpinBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_pluralhandlingspinbox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func(KPluralHandlingSpinBox* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_pluralhandlingspinbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_pluralhandlingspinbox_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_pluralhandlingspinbox_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kpluralhandlingspinbox.html#setSuffix)
///
/// @param self KPluralHandlingSpinBox*
/// @param suffix KLocalizedString*
///
void k_pluralhandlingspinbox_set_suffix(void* self, const void* suffix);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_pluralhandlingspinbox_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_pluralhandlingspinbox_tr3(const char* s, const char* c, int n);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#value)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_value(const void* self);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_prefix(const void* self);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setPrefix)
///
/// @param self KPluralHandlingSpinBox*
/// @param prefix const char*
///
void k_pluralhandlingspinbox_set_prefix(void* self, const char* prefix);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#suffix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_suffix(const void* self);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#cleanText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_clean_text(const void* self);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#singleStep)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_single_step(const void* self);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setSingleStep)
///
/// @param self KPluralHandlingSpinBox*
/// @param val int
///
void k_pluralhandlingspinbox_set_single_step(void* self, int val);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#minimum)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_minimum(const void* self);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setMinimum)
///
/// @param self KPluralHandlingSpinBox*
/// @param min int
///
void k_pluralhandlingspinbox_set_minimum(void* self, int min);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#maximum)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_maximum(const void* self);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setMaximum)
///
/// @param self KPluralHandlingSpinBox*
/// @param max int
///
void k_pluralhandlingspinbox_set_maximum(void* self, int max);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setRange)
///
/// @param self KPluralHandlingSpinBox*
/// @param min int
/// @param max int
///
void k_pluralhandlingspinbox_set_range(void* self, int min, int max);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#stepType)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return enum QAbstractSpinBox__StepType
///
int32_t k_pluralhandlingspinbox_step_type(const void* self);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setStepType)
///
/// @param self KPluralHandlingSpinBox*
/// @param stepType enum QAbstractSpinBox__StepType
///
void k_pluralhandlingspinbox_set_step_type(void* self, int32_t stepType);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#displayIntegerBase)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_display_integer_base(const void* self);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setDisplayIntegerBase)
///
/// @param self KPluralHandlingSpinBox*
/// @param base int
///
void k_pluralhandlingspinbox_set_display_integer_base(void* self, int base);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setValue)
///
/// @param self KPluralHandlingSpinBox*
/// @param val int
///
void k_pluralhandlingspinbox_set_value(void* self, int val);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueChanged)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 int
///
void k_pluralhandlingspinbox_value_changed(void* self, int param1);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueChanged)
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, int param1)
///
void k_pluralhandlingspinbox_on_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textChanged)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 const char*
///
void k_pluralhandlingspinbox_text_changed(void* self, const char* param1);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textChanged)
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, const char* param1)
///
void k_pluralhandlingspinbox_on_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return enum QAbstractSpinBox__ButtonSymbols
///
int32_t k_pluralhandlingspinbox_button_symbols(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
///
/// @param self KPluralHandlingSpinBox*
/// @param bs enum QAbstractSpinBox__ButtonSymbols
///
void k_pluralhandlingspinbox_set_button_symbols(void* self, int32_t bs);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
///
/// @param self KPluralHandlingSpinBox*
/// @param cm enum QAbstractSpinBox__CorrectionMode
///
void k_pluralhandlingspinbox_set_correction_mode(void* self, int32_t cm);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return enum QAbstractSpinBox__CorrectionMode
///
int32_t k_pluralhandlingspinbox_correction_mode(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_has_acceptable_input(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_text(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_special_value_text(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
///
/// @param self KPluralHandlingSpinBox*
/// @param txt const char*
///
void k_pluralhandlingspinbox_set_special_value_text(void* self, const char* txt);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_wrapping(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
///
/// @param self KPluralHandlingSpinBox*
/// @param w bool
///
void k_pluralhandlingspinbox_set_wrapping(void* self, bool w);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
///
/// @param self KPluralHandlingSpinBox*
/// @param r bool
///
void k_pluralhandlingspinbox_set_read_only(void* self, bool r);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_read_only(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
///
/// @param self KPluralHandlingSpinBox*
/// @param kt bool
///
void k_pluralhandlingspinbox_set_keyboard_tracking(void* self, bool kt);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_keyboard_tracking(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
///
/// @param self KPluralHandlingSpinBox*
/// @param flag flag of enum Qt__AlignmentFlag
///
void k_pluralhandlingspinbox_set_alignment(void* self, int32_t flag);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t k_pluralhandlingspinbox_alignment(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
///
/// @param self KPluralHandlingSpinBox*
/// @param frame bool
///
void k_pluralhandlingspinbox_set_frame(void* self, bool frame);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_has_frame(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
///
/// @param self KPluralHandlingSpinBox*
/// @param on bool
///
void k_pluralhandlingspinbox_set_accelerated(void* self, bool on);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_accelerated(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
///
/// @param self KPluralHandlingSpinBox*
/// @param shown bool
///
void k_pluralhandlingspinbox_set_group_separator_shown(void* self, bool shown);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_group_separator_shown(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_interpret_text(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_step_up(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_step_down(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_select_all(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_editing_finished(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_editing_finished(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const KPluralHandlingSpinBox*
///
QPaintDevice* k_pluralhandlingspinbox_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a KPluralHandlingSpinBox object
///
/// @param _qpaintdevice QPaintDevice*
///
KPluralHandlingSpinBox* k_pluralhandlingspinbox_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const KPluralHandlingSpinBox*
///
uintptr_t k_pluralhandlingspinbox_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const KPluralHandlingSpinBox*
///
uintptr_t k_pluralhandlingspinbox_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const KPluralHandlingSpinBox*
///
uintptr_t k_pluralhandlingspinbox_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const KPluralHandlingSpinBox*
///
QStyle* k_pluralhandlingspinbox_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KPluralHandlingSpinBox*
/// @param style QStyle*
///
void k_pluralhandlingspinbox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return enum Qt__WindowModality
///
int32_t k_pluralhandlingspinbox_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KPluralHandlingSpinBox*
/// @param windowModality enum Qt__WindowModality
///
void k_pluralhandlingspinbox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 QWidget*
///
bool k_pluralhandlingspinbox_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KPluralHandlingSpinBox*
/// @param enabled bool
///
void k_pluralhandlingspinbox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KPluralHandlingSpinBox*
/// @param disabled bool
///
void k_pluralhandlingspinbox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KPluralHandlingSpinBox*
/// @param windowModified bool
///
void k_pluralhandlingspinbox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const KPluralHandlingSpinBox*
///
QRect* k_pluralhandlingspinbox_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const KPluralHandlingSpinBox*
///
const QRect* k_pluralhandlingspinbox_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const KPluralHandlingSpinBox*
///
QRect* k_pluralhandlingspinbox_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const KPluralHandlingSpinBox*
///
QPoint* k_pluralhandlingspinbox_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const KPluralHandlingSpinBox*
///
QRect* k_pluralhandlingspinbox_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const KPluralHandlingSpinBox*
///
QRect* k_pluralhandlingspinbox_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const KPluralHandlingSpinBox*
///
QRegion* k_pluralhandlingspinbox_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KPluralHandlingSpinBox*
/// @param minimumSize QSize*
///
void k_pluralhandlingspinbox_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KPluralHandlingSpinBox*
/// @param minw int
/// @param minh int
///
void k_pluralhandlingspinbox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KPluralHandlingSpinBox*
/// @param maximumSize QSize*
///
void k_pluralhandlingspinbox_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KPluralHandlingSpinBox*
/// @param maxw int
/// @param maxh int
///
void k_pluralhandlingspinbox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KPluralHandlingSpinBox*
/// @param minw int
///
void k_pluralhandlingspinbox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KPluralHandlingSpinBox*
/// @param minh int
///
void k_pluralhandlingspinbox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KPluralHandlingSpinBox*
/// @param maxw int
///
void k_pluralhandlingspinbox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KPluralHandlingSpinBox*
/// @param maxh int
///
void k_pluralhandlingspinbox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KPluralHandlingSpinBox*
/// @param sizeIncrement QSize*
///
void k_pluralhandlingspinbox_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KPluralHandlingSpinBox*
/// @param w int
/// @param h int
///
void k_pluralhandlingspinbox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KPluralHandlingSpinBox*
/// @param baseSize QSize*
///
void k_pluralhandlingspinbox_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KPluralHandlingSpinBox*
/// @param basew int
/// @param baseh int
///
void k_pluralhandlingspinbox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KPluralHandlingSpinBox*
/// @param fixedSize QSize*
///
void k_pluralhandlingspinbox_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KPluralHandlingSpinBox*
/// @param w int
/// @param h int
///
void k_pluralhandlingspinbox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KPluralHandlingSpinBox*
/// @param w int
///
void k_pluralhandlingspinbox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KPluralHandlingSpinBox*
/// @param h int
///
void k_pluralhandlingspinbox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 QPointF*
///
QPointF* k_pluralhandlingspinbox_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 QPoint*
///
QPoint* k_pluralhandlingspinbox_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 QPointF*
///
QPointF* k_pluralhandlingspinbox_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 QPoint*
///
QPoint* k_pluralhandlingspinbox_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 QPointF*
///
QPointF* k_pluralhandlingspinbox_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 QPoint*
///
QPoint* k_pluralhandlingspinbox_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 QPointF*
///
QPointF* k_pluralhandlingspinbox_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 QPoint*
///
QPoint* k_pluralhandlingspinbox_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_pluralhandlingspinbox_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_pluralhandlingspinbox_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_pluralhandlingspinbox_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_pluralhandlingspinbox_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const KPluralHandlingSpinBox*
///
const QPalette* k_pluralhandlingspinbox_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KPluralHandlingSpinBox*
/// @param palette QPalette*
///
void k_pluralhandlingspinbox_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KPluralHandlingSpinBox*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_pluralhandlingspinbox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return enum QPalette__ColorRole
///
int32_t k_pluralhandlingspinbox_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KPluralHandlingSpinBox*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_pluralhandlingspinbox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return enum QPalette__ColorRole
///
int32_t k_pluralhandlingspinbox_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const KPluralHandlingSpinBox*
///
const QFont* k_pluralhandlingspinbox_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KPluralHandlingSpinBox*
/// @param font QFont*
///
void k_pluralhandlingspinbox_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const KPluralHandlingSpinBox*
///
QFontMetrics* k_pluralhandlingspinbox_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const KPluralHandlingSpinBox*
///
QFontInfo* k_pluralhandlingspinbox_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const KPluralHandlingSpinBox*
///
QCursor* k_pluralhandlingspinbox_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KPluralHandlingSpinBox*
/// @param cursor QCursor*
///
void k_pluralhandlingspinbox_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KPluralHandlingSpinBox*
/// @param enable bool
///
void k_pluralhandlingspinbox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KPluralHandlingSpinBox*
/// @param enable bool
///
void k_pluralhandlingspinbox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KPluralHandlingSpinBox*
/// @param mask QBitmap*
///
void k_pluralhandlingspinbox_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KPluralHandlingSpinBox*
/// @param mask QRegion*
///
void k_pluralhandlingspinbox_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const KPluralHandlingSpinBox*
///
QRegion* k_pluralhandlingspinbox_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPluralHandlingSpinBox*
/// @param target QPaintDevice*
///
void k_pluralhandlingspinbox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPluralHandlingSpinBox*
/// @param painter QPainter*
///
void k_pluralhandlingspinbox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KPluralHandlingSpinBox*
///
QPixmap* k_pluralhandlingspinbox_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const KPluralHandlingSpinBox*
///
QGraphicsEffect* k_pluralhandlingspinbox_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KPluralHandlingSpinBox*
/// @param effect QGraphicsEffect*
///
void k_pluralhandlingspinbox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KPluralHandlingSpinBox*
/// @param type enum Qt__GestureType
///
void k_pluralhandlingspinbox_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KPluralHandlingSpinBox*
/// @param type enum Qt__GestureType
///
void k_pluralhandlingspinbox_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KPluralHandlingSpinBox*
/// @param windowTitle const char*
///
void k_pluralhandlingspinbox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KPluralHandlingSpinBox*
/// @param styleSheet const char*
///
void k_pluralhandlingspinbox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KPluralHandlingSpinBox*
/// @param icon QIcon*
///
void k_pluralhandlingspinbox_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const KPluralHandlingSpinBox*
///
QIcon* k_pluralhandlingspinbox_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KPluralHandlingSpinBox*
/// @param windowIconText const char*
///
void k_pluralhandlingspinbox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KPluralHandlingSpinBox*
/// @param windowRole const char*
///
void k_pluralhandlingspinbox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KPluralHandlingSpinBox*
/// @param filePath const char*
///
void k_pluralhandlingspinbox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KPluralHandlingSpinBox*
/// @param level double
///
void k_pluralhandlingspinbox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const KPluralHandlingSpinBox*
///
double k_pluralhandlingspinbox_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KPluralHandlingSpinBox*
/// @param toolTip const char*
///
void k_pluralhandlingspinbox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KPluralHandlingSpinBox*
/// @param msec int
///
void k_pluralhandlingspinbox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KPluralHandlingSpinBox*
/// @param statusTip const char*
///
void k_pluralhandlingspinbox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KPluralHandlingSpinBox*
/// @param whatsThis const char*
///
void k_pluralhandlingspinbox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KPluralHandlingSpinBox*
/// @param name const char*
///
void k_pluralhandlingspinbox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KPluralHandlingSpinBox*
/// @param description const char*
///
void k_pluralhandlingspinbox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KPluralHandlingSpinBox*
/// @param direction enum Qt__LayoutDirection
///
void k_pluralhandlingspinbox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_pluralhandlingspinbox_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KPluralHandlingSpinBox*
/// @param locale QLocale*
///
void k_pluralhandlingspinbox_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const KPluralHandlingSpinBox*
///
QLocale* k_pluralhandlingspinbox_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KPluralHandlingSpinBox*
/// @param reason enum Qt__FocusReason
///
void k_pluralhandlingspinbox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_pluralhandlingspinbox_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KPluralHandlingSpinBox*
/// @param policy enum Qt__FocusPolicy
///
void k_pluralhandlingspinbox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_pluralhandlingspinbox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KPluralHandlingSpinBox*
/// @param focusProxy QWidget*
///
void k_pluralhandlingspinbox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_pluralhandlingspinbox_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KPluralHandlingSpinBox*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_pluralhandlingspinbox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QCursor*
///
void k_pluralhandlingspinbox_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KPluralHandlingSpinBox*
/// @param key QKeySequence*
///
int32_t k_pluralhandlingspinbox_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KPluralHandlingSpinBox*
/// @param id int
///
void k_pluralhandlingspinbox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KPluralHandlingSpinBox*
/// @param id int
///
void k_pluralhandlingspinbox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KPluralHandlingSpinBox*
/// @param id int
///
void k_pluralhandlingspinbox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_pluralhandlingspinbox_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_pluralhandlingspinbox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KPluralHandlingSpinBox*
/// @param enable bool
///
void k_pluralhandlingspinbox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const KPluralHandlingSpinBox*
///
QGraphicsProxyWidget* k_pluralhandlingspinbox_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPluralHandlingSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_pluralhandlingspinbox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QRect*
///
void k_pluralhandlingspinbox_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QRegion*
///
void k_pluralhandlingspinbox_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPluralHandlingSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_pluralhandlingspinbox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QRect*
///
void k_pluralhandlingspinbox_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QRegion*
///
void k_pluralhandlingspinbox_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KPluralHandlingSpinBox*
/// @param hidden bool
///
void k_pluralhandlingspinbox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QWidget*
///
void k_pluralhandlingspinbox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KPluralHandlingSpinBox*
/// @param x int
/// @param y int
///
void k_pluralhandlingspinbox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QPoint*
///
void k_pluralhandlingspinbox_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KPluralHandlingSpinBox*
/// @param w int
/// @param h int
///
void k_pluralhandlingspinbox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QSize*
///
void k_pluralhandlingspinbox_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KPluralHandlingSpinBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_pluralhandlingspinbox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KPluralHandlingSpinBox*
/// @param geometry QRect*
///
void k_pluralhandlingspinbox_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KPluralHandlingSpinBox*
/// @param geometry const char*
///
bool k_pluralhandlingspinbox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 QWidget*
///
bool k_pluralhandlingspinbox_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_pluralhandlingspinbox_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KPluralHandlingSpinBox*
/// @param state flag of enum Qt__WindowState
///
void k_pluralhandlingspinbox_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KPluralHandlingSpinBox*
/// @param state flag of enum Qt__WindowState
///
void k_pluralhandlingspinbox_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const KPluralHandlingSpinBox*
///
QSizePolicy* k_pluralhandlingspinbox_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KPluralHandlingSpinBox*
/// @param sizePolicy QSizePolicy*
///
void k_pluralhandlingspinbox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KPluralHandlingSpinBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_pluralhandlingspinbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const KPluralHandlingSpinBox*
///
QRegion* k_pluralhandlingspinbox_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KPluralHandlingSpinBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_pluralhandlingspinbox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KPluralHandlingSpinBox*
/// @param margins QMargins*
///
void k_pluralhandlingspinbox_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const KPluralHandlingSpinBox*
///
QMargins* k_pluralhandlingspinbox_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const KPluralHandlingSpinBox*
///
QRect* k_pluralhandlingspinbox_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const KPluralHandlingSpinBox*
///
QLayout* k_pluralhandlingspinbox_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KPluralHandlingSpinBox*
/// @param layout QLayout*
///
void k_pluralhandlingspinbox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KPluralHandlingSpinBox*
/// @param parent QWidget*
///
void k_pluralhandlingspinbox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KPluralHandlingSpinBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_pluralhandlingspinbox_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KPluralHandlingSpinBox*
/// @param dx int
/// @param dy int
///
void k_pluralhandlingspinbox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KPluralHandlingSpinBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_pluralhandlingspinbox_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KPluralHandlingSpinBox*
/// @param on bool
///
void k_pluralhandlingspinbox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPluralHandlingSpinBox*
/// @param action QAction*
///
void k_pluralhandlingspinbox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KPluralHandlingSpinBox*
/// @param actions libqt_list of QAction*
///
void k_pluralhandlingspinbox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KPluralHandlingSpinBox*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_pluralhandlingspinbox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KPluralHandlingSpinBox*
/// @param before QAction*
/// @param action QAction*
///
void k_pluralhandlingspinbox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KPluralHandlingSpinBox*
/// @param action QAction*
///
void k_pluralhandlingspinbox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return libqt_list of QAction*
///
libqt_list k_pluralhandlingspinbox_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPluralHandlingSpinBox*
/// @param text const char*
///
QAction* k_pluralhandlingspinbox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPluralHandlingSpinBox*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_pluralhandlingspinbox_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPluralHandlingSpinBox*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_pluralhandlingspinbox_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPluralHandlingSpinBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_pluralhandlingspinbox_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const KPluralHandlingSpinBox*
///
QWidget* k_pluralhandlingspinbox_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KPluralHandlingSpinBox*
/// @param type flag of enum Qt__WindowType
///
void k_pluralhandlingspinbox_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_pluralhandlingspinbox_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 enum Qt__WindowType
///
void k_pluralhandlingspinbox_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KPluralHandlingSpinBox*
/// @param type flag of enum Qt__WindowType
///
void k_pluralhandlingspinbox_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return enum Qt__WindowType
///
int32_t k_pluralhandlingspinbox_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_pluralhandlingspinbox_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KPluralHandlingSpinBox*
/// @param x int
/// @param y int
///
QWidget* k_pluralhandlingspinbox_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KPluralHandlingSpinBox*
/// @param p QPoint*
///
QWidget* k_pluralhandlingspinbox_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KPluralHandlingSpinBox*
/// @param p QPointF*
///
QWidget* k_pluralhandlingspinbox_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 enum Qt__WidgetAttribute
///
void k_pluralhandlingspinbox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_pluralhandlingspinbox_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const KPluralHandlingSpinBox*
/// @param child QWidget*
///
bool k_pluralhandlingspinbox_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KPluralHandlingSpinBox*
/// @param enabled bool
///
void k_pluralhandlingspinbox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const KPluralHandlingSpinBox*
///
QBackingStore* k_pluralhandlingspinbox_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const KPluralHandlingSpinBox*
///
QWindow* k_pluralhandlingspinbox_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const KPluralHandlingSpinBox*
///
QScreen* k_pluralhandlingspinbox_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KPluralHandlingSpinBox*
/// @param screen QScreen*
///
void k_pluralhandlingspinbox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_pluralhandlingspinbox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KPluralHandlingSpinBox*
/// @param title const char*
///
void k_pluralhandlingspinbox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, const char* title)
///
void k_pluralhandlingspinbox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KPluralHandlingSpinBox*
/// @param icon QIcon*
///
void k_pluralhandlingspinbox_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QIcon* icon)
///
void k_pluralhandlingspinbox_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KPluralHandlingSpinBox*
/// @param iconText const char*
///
void k_pluralhandlingspinbox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, const char* iconText)
///
void k_pluralhandlingspinbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KPluralHandlingSpinBox*
/// @param pos QPoint*
///
void k_pluralhandlingspinbox_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QPoint* pos)
///
void k_pluralhandlingspinbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_pluralhandlingspinbox_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KPluralHandlingSpinBox*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_pluralhandlingspinbox_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPluralHandlingSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_pluralhandlingspinbox_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPluralHandlingSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_pluralhandlingspinbox_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPluralHandlingSpinBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_pluralhandlingspinbox_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPluralHandlingSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_pluralhandlingspinbox_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPluralHandlingSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_pluralhandlingspinbox_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPluralHandlingSpinBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_pluralhandlingspinbox_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KPluralHandlingSpinBox*
/// @param rectangle QRect*
///
QPixmap* k_pluralhandlingspinbox_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KPluralHandlingSpinBox*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_pluralhandlingspinbox_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KPluralHandlingSpinBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_pluralhandlingspinbox_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KPluralHandlingSpinBox*
/// @param id int
/// @param enable bool
///
void k_pluralhandlingspinbox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KPluralHandlingSpinBox*
/// @param id int
/// @param enable bool
///
void k_pluralhandlingspinbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_pluralhandlingspinbox_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_pluralhandlingspinbox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_pluralhandlingspinbox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_pluralhandlingspinbox_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char* k_pluralhandlingspinbox_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KPluralHandlingSpinBox*
/// @param name const char*
///
void k_pluralhandlingspinbox_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KPluralHandlingSpinBox*
/// @param b bool
///
bool k_pluralhandlingspinbox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KPluralHandlingSpinBox*
///
QThread* k_pluralhandlingspinbox_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KPluralHandlingSpinBox*
/// @param thread QThread*
///
bool k_pluralhandlingspinbox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPluralHandlingSpinBox*
/// @param interval int
///
int32_t k_pluralhandlingspinbox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPluralHandlingSpinBox*
/// @param time int64_t of nanoseconds
///
int32_t k_pluralhandlingspinbox_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPluralHandlingSpinBox*
/// @param id int
///
void k_pluralhandlingspinbox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPluralHandlingSpinBox*
/// @param id enum Qt__TimerId
///
void k_pluralhandlingspinbox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return libqt_list of QObject*
///
libqt_list k_pluralhandlingspinbox_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KPluralHandlingSpinBox*
/// @param filterObj QObject*
///
void k_pluralhandlingspinbox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KPluralHandlingSpinBox*
/// @param obj QObject*
///
void k_pluralhandlingspinbox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_pluralhandlingspinbox_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_pluralhandlingspinbox_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KPluralHandlingSpinBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_pluralhandlingspinbox_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pluralhandlingspinbox_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_pluralhandlingspinbox_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KPluralHandlingSpinBox*
/// @param receiver QObject*
///
bool k_pluralhandlingspinbox_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_pluralhandlingspinbox_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KPluralHandlingSpinBox*
/// @param name const char*
/// @param value QVariant*
///
bool k_pluralhandlingspinbox_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KPluralHandlingSpinBox*
/// @param name const char*
///
QVariant* k_pluralhandlingspinbox_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KPluralHandlingSpinBox*
///
const char** k_pluralhandlingspinbox_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPluralHandlingSpinBox*
///
QBindingStorage* k_pluralhandlingspinbox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KPluralHandlingSpinBox*
///
const QBindingStorage* k_pluralhandlingspinbox_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KPluralHandlingSpinBox*
///
QObject* k_pluralhandlingspinbox_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KPluralHandlingSpinBox*
/// @param classname const char*
///
bool k_pluralhandlingspinbox_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPluralHandlingSpinBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_pluralhandlingspinbox_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPluralHandlingSpinBox*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_pluralhandlingspinbox_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_pluralhandlingspinbox_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_pluralhandlingspinbox_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KPluralHandlingSpinBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_pluralhandlingspinbox_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KPluralHandlingSpinBox*
/// @param signal const char*
///
bool k_pluralhandlingspinbox_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KPluralHandlingSpinBox*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_pluralhandlingspinbox_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KPluralHandlingSpinBox*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pluralhandlingspinbox_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KPluralHandlingSpinBox*
/// @param receiver QObject*
/// @param member const char*
///
bool k_pluralhandlingspinbox_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QObject*
///
void k_pluralhandlingspinbox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QObject* param1)
///
void k_pluralhandlingspinbox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const KPluralHandlingSpinBox*
///
double k_pluralhandlingspinbox_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const KPluralHandlingSpinBox*
///
double k_pluralhandlingspinbox_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_pluralhandlingspinbox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_pluralhandlingspinbox_encode_metric_f(int32_t metric, double value);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QEvent*
///
bool k_pluralhandlingspinbox_event(void* self, void* event);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QEvent*
///
bool k_pluralhandlingspinbox_super_event(void* self, void* event);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback bool func(KPluralHandlingSpinBox* self, QEvent* event)
///
void k_pluralhandlingspinbox_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#validate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t k_pluralhandlingspinbox_validate(const void* self, const char* input, int* pos);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#validate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t k_pluralhandlingspinbox_super_validate(const void* self, const char* input, int* pos);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#validate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func(KPluralHandlingSpinBox* self, const char* input, int* pos)
///
void k_pluralhandlingspinbox_on_validate(void* self, int32_t (*callback)(const void*, const char*, int*));

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param text const char*
///
int32_t k_pluralhandlingspinbox_value_from_text(const void* self, const char* text);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param text const char*
///
int32_t k_pluralhandlingspinbox_super_value_from_text(const void* self, const char* text);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func(KPluralHandlingSpinBox* self, const char* text)
///
void k_pluralhandlingspinbox_on_value_from_text(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param val int
///
const char* k_pluralhandlingspinbox_text_from_value(const void* self, int val);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param val int
///
const char* k_pluralhandlingspinbox_super_text_from_value(const void* self, int val);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback const char* func(KPluralHandlingSpinBox* self, int val)
///
void k_pluralhandlingspinbox_on_text_from_value(void* self, const char* (*callback)(const void*, int));

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param str const char*
///
void k_pluralhandlingspinbox_fixup(const void* self, const char* str);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param str const char*
///
void k_pluralhandlingspinbox_super_fixup(const void* self, const char* str);

/// Inherited from QSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, const char* str)
///
void k_pluralhandlingspinbox_on_fixup(void* self, void (*callback)(const void*, const char*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_size_hint(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_super_size_hint(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QSize* func(KPluralHandlingSpinBox* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_pluralhandlingspinbox_on_size_hint(void* self, QSize* (*callback)(const void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_minimum_size_hint(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
QSize* k_pluralhandlingspinbox_super_minimum_size_hint(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QSize* func(KPluralHandlingSpinBox* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_pluralhandlingspinbox_on_minimum_size_hint(void* self, QSize* (*callback)(const void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_pluralhandlingspinbox_input_method_query(const void* self, int32_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_pluralhandlingspinbox_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QVariant* func(KPluralHandlingSpinBox* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_pluralhandlingspinbox_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param steps int
///
void k_pluralhandlingspinbox_step_by(void* self, int steps);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param steps int
///
void k_pluralhandlingspinbox_super_step_by(void* self, int steps);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, int steps)
///
void k_pluralhandlingspinbox_on_step_by(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_clear(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_super_clear(void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_clear(void* self, void (*callback)(void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QResizeEvent*
///
void k_pluralhandlingspinbox_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QResizeEvent*
///
void k_pluralhandlingspinbox_super_resize_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QResizeEvent* event)
///
void k_pluralhandlingspinbox_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QKeyEvent*
///
void k_pluralhandlingspinbox_key_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QKeyEvent*
///
void k_pluralhandlingspinbox_super_key_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QKeyEvent* event)
///
void k_pluralhandlingspinbox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QKeyEvent*
///
void k_pluralhandlingspinbox_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QKeyEvent*
///
void k_pluralhandlingspinbox_super_key_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QKeyEvent* event)
///
void k_pluralhandlingspinbox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QWheelEvent*
///
void k_pluralhandlingspinbox_wheel_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QWheelEvent*
///
void k_pluralhandlingspinbox_super_wheel_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QWheelEvent* event)
///
void k_pluralhandlingspinbox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QFocusEvent*
///
void k_pluralhandlingspinbox_focus_in_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QFocusEvent*
///
void k_pluralhandlingspinbox_super_focus_in_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QFocusEvent* event)
///
void k_pluralhandlingspinbox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QFocusEvent*
///
void k_pluralhandlingspinbox_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QFocusEvent*
///
void k_pluralhandlingspinbox_super_focus_out_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QFocusEvent* event)
///
void k_pluralhandlingspinbox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QContextMenuEvent*
///
void k_pluralhandlingspinbox_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QContextMenuEvent*
///
void k_pluralhandlingspinbox_super_context_menu_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QContextMenuEvent* event)
///
void k_pluralhandlingspinbox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QEvent*
///
void k_pluralhandlingspinbox_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QEvent*
///
void k_pluralhandlingspinbox_super_change_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QEvent* event)
///
void k_pluralhandlingspinbox_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QCloseEvent*
///
void k_pluralhandlingspinbox_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QCloseEvent*
///
void k_pluralhandlingspinbox_super_close_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QCloseEvent* event)
///
void k_pluralhandlingspinbox_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QHideEvent*
///
void k_pluralhandlingspinbox_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QHideEvent*
///
void k_pluralhandlingspinbox_super_hide_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QHideEvent* event)
///
void k_pluralhandlingspinbox_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QMouseEvent*
///
void k_pluralhandlingspinbox_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QMouseEvent*
///
void k_pluralhandlingspinbox_super_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QMouseEvent* event)
///
void k_pluralhandlingspinbox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QMouseEvent*
///
void k_pluralhandlingspinbox_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QMouseEvent*
///
void k_pluralhandlingspinbox_super_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QMouseEvent* event)
///
void k_pluralhandlingspinbox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QMouseEvent*
///
void k_pluralhandlingspinbox_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QMouseEvent*
///
void k_pluralhandlingspinbox_super_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QMouseEvent* event)
///
void k_pluralhandlingspinbox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QTimerEvent*
///
void k_pluralhandlingspinbox_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QTimerEvent*
///
void k_pluralhandlingspinbox_super_timer_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QTimerEvent* event)
///
void k_pluralhandlingspinbox_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QPaintEvent*
///
void k_pluralhandlingspinbox_paint_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QPaintEvent*
///
void k_pluralhandlingspinbox_super_paint_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QPaintEvent* event)
///
void k_pluralhandlingspinbox_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QShowEvent*
///
void k_pluralhandlingspinbox_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QShowEvent*
///
void k_pluralhandlingspinbox_super_show_event(void* self, void* event);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QShowEvent* event)
///
void k_pluralhandlingspinbox_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param option QStyleOptionSpinBox*
///
void k_pluralhandlingspinbox_init_style_option(const void* self, void* option);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param option QStyleOptionSpinBox*
///
void k_pluralhandlingspinbox_super_init_style_option(const void* self, void* option);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QStyleOptionSpinBox* option)
///
void k_pluralhandlingspinbox_on_init_style_option(void* self, void (*callback)(const void*, void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t k_pluralhandlingspinbox_step_enabled(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
///
int32_t k_pluralhandlingspinbox_super_step_enabled(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_step_enabled(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param visible bool
///
void k_pluralhandlingspinbox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param visible bool
///
void k_pluralhandlingspinbox_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, bool visible)
///
void k_pluralhandlingspinbox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 int
///
int32_t k_pluralhandlingspinbox_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 int
///
int32_t k_pluralhandlingspinbox_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func(KPluralHandlingSpinBox* self, int param1)
///
void k_pluralhandlingspinbox_on_height_for_width(void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback bool func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_has_height_for_width(void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
QPaintEngine* k_pluralhandlingspinbox_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
QPaintEngine* k_pluralhandlingspinbox_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QPaintEngine* func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QMouseEvent*
///
void k_pluralhandlingspinbox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QMouseEvent*
///
void k_pluralhandlingspinbox_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QMouseEvent* event)
///
void k_pluralhandlingspinbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QEnterEvent*
///
void k_pluralhandlingspinbox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QEnterEvent*
///
void k_pluralhandlingspinbox_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QEnterEvent* event)
///
void k_pluralhandlingspinbox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QEvent*
///
void k_pluralhandlingspinbox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QEvent*
///
void k_pluralhandlingspinbox_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QEvent* event)
///
void k_pluralhandlingspinbox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QMoveEvent*
///
void k_pluralhandlingspinbox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QMoveEvent*
///
void k_pluralhandlingspinbox_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QMoveEvent* event)
///
void k_pluralhandlingspinbox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QTabletEvent*
///
void k_pluralhandlingspinbox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QTabletEvent*
///
void k_pluralhandlingspinbox_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QTabletEvent* event)
///
void k_pluralhandlingspinbox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QActionEvent*
///
void k_pluralhandlingspinbox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QActionEvent*
///
void k_pluralhandlingspinbox_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QActionEvent* event)
///
void k_pluralhandlingspinbox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QDragEnterEvent*
///
void k_pluralhandlingspinbox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QDragEnterEvent*
///
void k_pluralhandlingspinbox_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QDragEnterEvent* event)
///
void k_pluralhandlingspinbox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QDragMoveEvent*
///
void k_pluralhandlingspinbox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QDragMoveEvent*
///
void k_pluralhandlingspinbox_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QDragMoveEvent* event)
///
void k_pluralhandlingspinbox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QDragLeaveEvent*
///
void k_pluralhandlingspinbox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QDragLeaveEvent*
///
void k_pluralhandlingspinbox_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QDragLeaveEvent* event)
///
void k_pluralhandlingspinbox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QDropEvent*
///
void k_pluralhandlingspinbox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QDropEvent*
///
void k_pluralhandlingspinbox_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QDropEvent* event)
///
void k_pluralhandlingspinbox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_pluralhandlingspinbox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_pluralhandlingspinbox_super_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback bool func(KPluralHandlingSpinBox* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_pluralhandlingspinbox_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_pluralhandlingspinbox_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_pluralhandlingspinbox_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func(KPluralHandlingSpinBox* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_pluralhandlingspinbox_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param painter QPainter*
///
void k_pluralhandlingspinbox_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param painter QPainter*
///
void k_pluralhandlingspinbox_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QPainter* painter)
///
void k_pluralhandlingspinbox_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param offset QPoint*
///
QPaintDevice* k_pluralhandlingspinbox_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param offset QPoint*
///
QPaintDevice* k_pluralhandlingspinbox_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QPaintDevice* func(KPluralHandlingSpinBox* self, QPoint* offset)
///
void k_pluralhandlingspinbox_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
QPainter* k_pluralhandlingspinbox_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
QPainter* k_pluralhandlingspinbox_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QPainter* func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QInputMethodEvent*
///
void k_pluralhandlingspinbox_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param param1 QInputMethodEvent*
///
void k_pluralhandlingspinbox_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QInputMethodEvent* param1)
///
void k_pluralhandlingspinbox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param next bool
///
bool k_pluralhandlingspinbox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param next bool
///
bool k_pluralhandlingspinbox_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback bool func(KPluralHandlingSpinBox* self, bool next)
///
void k_pluralhandlingspinbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_pluralhandlingspinbox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_pluralhandlingspinbox_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback bool func(KPluralHandlingSpinBox* self, QObject* watched, QEvent* event)
///
void k_pluralhandlingspinbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QChildEvent*
///
void k_pluralhandlingspinbox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QChildEvent*
///
void k_pluralhandlingspinbox_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QChildEvent* event)
///
void k_pluralhandlingspinbox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QEvent*
///
void k_pluralhandlingspinbox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param event QEvent*
///
void k_pluralhandlingspinbox_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QEvent* event)
///
void k_pluralhandlingspinbox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param signal QMetaMethod*
///
void k_pluralhandlingspinbox_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param signal QMetaMethod*
///
void k_pluralhandlingspinbox_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QMetaMethod* signal)
///
void k_pluralhandlingspinbox_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param signal QMetaMethod*
///
void k_pluralhandlingspinbox_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param signal QMetaMethod*
///
void k_pluralhandlingspinbox_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QMetaMethod* signal)
///
void k_pluralhandlingspinbox_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
QLineEdit* k_pluralhandlingspinbox_line_edit(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
QLineEdit* k_pluralhandlingspinbox_super_line_edit(const void* self);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QLineEdit* func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_line_edit(void* self, QLineEdit* (*callback)(const void*));

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param edit QLineEdit*
///
void k_pluralhandlingspinbox_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param edit QLineEdit*
///
void k_pluralhandlingspinbox_super_set_line_edit(void* self, void* edit);

/// Inherited from QAbstractSpinBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, QLineEdit* edit)
///
void k_pluralhandlingspinbox_on_set_line_edit(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback bool func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
///
bool k_pluralhandlingspinbox_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback bool func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
QObject* k_pluralhandlingspinbox_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
QObject* k_pluralhandlingspinbox_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback QObject* func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
///
int32_t k_pluralhandlingspinbox_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func(KPluralHandlingSpinBox* self)
///
void k_pluralhandlingspinbox_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param signal const char*
///
int32_t k_pluralhandlingspinbox_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param signal const char*
///
int32_t k_pluralhandlingspinbox_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback int32_t func(KPluralHandlingSpinBox* self, const char* signal)
///
void k_pluralhandlingspinbox_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param signal QMetaMethod*
///
bool k_pluralhandlingspinbox_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param signal QMetaMethod*
///
bool k_pluralhandlingspinbox_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback bool func(KPluralHandlingSpinBox* self, QMetaMethod* signal)
///
void k_pluralhandlingspinbox_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_pluralhandlingspinbox_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KPluralHandlingSpinBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_pluralhandlingspinbox_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPluralHandlingSpinBox*
/// @param callback double func(KPluralHandlingSpinBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_pluralhandlingspinbox_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KPluralHandlingSpinBox*
/// @param callback void func(KPluralHandlingSpinBox* self, const char* objectName)
///
void k_pluralhandlingspinbox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kpluralhandlingspinbox.html#dtor.KPluralHandlingSpinBox)
///
/// Delete this object from C++ memory.
///
/// @param self KPluralHandlingSpinBox*
///
void k_pluralhandlingspinbox_delete(void* self);

#endif
